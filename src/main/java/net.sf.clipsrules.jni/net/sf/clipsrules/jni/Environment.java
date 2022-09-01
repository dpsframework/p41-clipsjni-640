/**
 * <h1>"C" Language Integrated Production System</h1>
 *
 * <h2>CLIPS   Version 6.40   2021-09-02</h2>
 * <h2>CLIPSJNI Version 640   2021-09-02</h2>
 * <p>
 * 
 * 
 * @since 2014
 * @since update at: 2021-09-02
 * @version 6.40 
 * @author Principal Programmer(s):    Gary D. Riley
 * @author Contributing Programmer(s): Francisco J. Aguayo (Leon University / IEEE Power & Energy Systems Society Member)
 * 
 * 
 * <pre>
 * Purpose:
 * 
 *   Compile:
 *   ------------------
 *   clipsjni-6.40-x86.jar         (Java JDK-1.8 all architectures-i586)
 *   clipsjni-6.40-x64.jar         (Java JDK-11 .. -18 all architectures-x64)
 *   
 *   Libraries: 
 *   ------------------ 
 *   clipsjni-6.40-x86.dll          (MsWindows 7-10/Intel-i586)
 *   clipsjni-6.40-x64.dll          (MsWindows 7-10/Intel-x64)
 *   libclipjni-6.40-x64.so         (GNU-x64 Linux Intel)
 *   libclipjni-6.40-osx64.jnilib   (OS X -Intel x64)
 *   libclipsjni-6.40-arm64.so      (GNU-x64 Linux ARM)
 *
 *
 * Objectives:
 * 
 * - Adapt CLIPSJNI.jar to JDK-11...19 Java compiler (2022-2029) 
 * - Adapt CLIPSJNI.dll to x86/x64  Native Tools for VS (2022)
 * - Incorporate Java Module System to the library CLIPSJNI.jar.
 * - Allow safe loading of the Library depending on the
 *         architecture and the underlying operating system.
 * - Extract main() method from the main class Environment().
 * - Incorporate a Shell Class with safe thread to CLIPS-Shell.
 * - Extract Examples from CLIPSJNI Environment and Core objects. 
 * 
 *

 *
 *
 *  This repository contains a fork of CLIPSJNI-6.40. 
 *  Its provides an OpenJDK-11..18 compatibility for 
 *  CLIPS, a Tools for Building Expert Systems.
 *  
 *  Copyright (C) <2022>  <FJ Aguayo>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 *  USA
 * </pre>
 * <p>
 */
package net.sf.clipsrules.jni;

import java.io.FileNotFoundException;
import java.io.InputStream;
import java.net.URISyntaxException;
import java.security.CodeSource;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.Callable;


public class Environment {
    
    

    public static final String FACTS         = "facts";
    public static final String RULES         = "rules";
    public static final String DEFFUNCTIONS  = "deffunctions";
    public static final String COMPILATIONS  = "compilations";
    public static final String INSTANCES     = "instances";
    public static final String SLOTS         = "slots";
    public static final String ACTIVATIONS   = "activations";
    public static final String STATISTICS    = "statistics";
    public static final String FOCUS         = "focus";
    public static final String GENERIC_FUNCTIONS = "generic-functions";
    public static final String METHODS       = "methods";
    public static final String GLOBALS       = "globals";
    public static final String MESSAGES      = "messages";
    public static final String MESSAGE_HANDLERS = "message-handlers";
    public static final String NONE          = "none";
    public static final String ALL           = "all";

    
    
    private HashMap<String, Router> routerMap = new HashMap<String, Router>();
    private List<CLIPSLineError> errorList = new ArrayList<CLIPSLineError>();
    private long   pointerToEnvironment;

    
    
    
    private static final String CLIPSJNI_NAME    = "clipsjni";  // Lock 
    private static final String CLIPSJNI_VERSION = "6.40";      // from 0.5
    private static final String CLIPS_VERSION    = "6.40";      // Lock 


    private static final int CLIPSJNI_LOAD_BY_JAR     = 0;
    private static final int CLIPSJNI_LOAD_BY_PATH    = 1;
    private static final int CLIPSJNI_JARFILE         = 2;
    private static final int CLIPSJNI_JARNAME         = 3;
    private static final int CLIPSJNI_JARDIR          = 4;
    
    
    
    /**
     * @see http://lopica.sourceforge.net/os.html for complete list of architectures
     *      / OS Names
     * @return Native Library name with CLIPS-Version and JVM-OS architecture.
     * @throws URISyntaxException
     */
    public static String getNativeClipsJNIname(int mode) {
        
        String arch = System.getProperties().getProperty("os.arch");
        String os = System.getProperties().getProperty("os.name");
        String[][] gridOsArch = new String[][] { 
            {"amd86", "Linux"  ,  "lib", ".so"     , "amd86" }, 
            {"amd64", "Linux"  ,  "lib", ".so"     , "amd64" }, 
            {"x86"  , "Windows",  ""   , ".dll"    , "x32"   }, 
            {"x64"  , "Windows",  ""   , ".dll"    , "x64"   }, 
            {"Mac"  , ""       ,  "lib", ".jnilib" , "osx64" }, 
            {"arm"  , "Linux"  ,  "lib", ".so"     , "arm64" }
        };
        
        
        
        
        // Defaults:
        String nativeSufj = "lib";
        String nativeArch = ".so";
        String nativeExt = "amd64";

        if  (arch.contains("amd86") && os.contains("Linux")) {
            nativeSufj = "lib";
            nativeExt = ".so";
            nativeArch = "amd86";
        } else if 
            (arch.contains("amd64") && os.contains("Linux")) {
            nativeSufj = "lib";
            nativeExt = ".so";
            nativeArch = "amd64";
        } else if 
            (arch.contains("x86") && os.contains("Windows")) {
            nativeSufj = "";
            nativeExt = ".dll";
            nativeArch = "x32";
        } else if 
            (arch.contains("64") && os.contains("Windows")) {
            nativeSufj = "";
            nativeExt = ".dll";
            nativeArch = "x64";
        } else if 
            (os.contains("Mac")) {
            nativeSufj = "lib";
            nativeExt = ".jnilib";
            nativeArch = "osx64";
        } else if 
            (arch.contains("arm") && os.contains("Linux")) {
            nativeSufj = "lib";
            nativeExt = ".so";
            nativeArch = "arm64";
        } else {         
            System.out.println("Error: "
                    + "Unknown architecture type: You needs to compile JAR/Native for this machine.");
            System.out.println(
                    "\nString nativeSufj     = " + nativeSufj
                  + "\nString nativeExt      = " + nativeExt
                  + "\nString nativeArch     = " + nativeArch
                  + "\nString arch           = " + arch
                  + "\nString os             = " + os
           );         
           System.exit(1);
        }
        
               
                
        /** 
         *  The CLIPSJNI--.JAR file: its path and real name.
         */
        String jarPathName = "";
        String jarName = "";
        String jarPath = "";
        
        
        try {
            jarPathName = net.sf.clipsrules.jni.Environment.class
                .getProtectionDomain()
                .getCodeSource()
                .getLocation()
                .toURI()
                .getPath();
        
            jarName = jarPathName.substring(jarPathName.lastIndexOf("/") + 1);
            jarPath = jarPathName.split(jarName)[0];
        } catch (URISyntaxException e) {
            System.out.println(
                    "[Critic]: there is a problem with clipsjni-JAR file name.");
            e.printStackTrace();
            System.out.println(
                    
                    "\nString jarPathName    = " + jarPathName
                  + "\nString jarName        = " + jarName
                  + "\nString jarPath        = " + jarPath 
                  + "\nString nativeSufj     = " + nativeSufj
                  + "\nString nativeExt      = " + nativeExt
                  + "\nString nativeArch     = " + nativeArch
                  + "\nString arch           = " + arch
                  + "\nString os             = " + os
            );
            System.exit(1);
        }

       
        
        /**
         *  JAR & Native-LIB: generated names.
         */   
        String jarGenName     = CLIPSJNI_NAME + "-" + CLIPS_VERSION + "-" + nativeArch;
        String jarGenNameExt  = jarGenName + ".jar";
        String libraryGenName = "clipsjni-" + CLIPS_VERSION + "-" + nativeArch;
        String libraryGenPath = jarPath + nativeSufj + libraryGenName + nativeExt;
                
        
        
        /**
         *  All of that was been to test 
         *  the JVM architecture from Native-Library architecture
         */   
        if (! jarGenNameExt.equalsIgnoreCase(jarName) ){         
            System.out.println("Critic: "
                    + "This Native-Lib: " +  libraryGenName 
                    + " is not correct for JVM architecture.");
            System.out.println(        
                    "\nString jarPathName    = " + jarPathName
                  + "\nString jarName        = " + jarName
                  + "\nString jarPath        = " + jarPath 
                  + "\nString jarGenName     = " + jarGenName
                  + "\nString jarGenNameExt  = " + jarGenNameExt
                  + "\nString libraryGenName = " + libraryGenName 
                  + "\nString libraryGenPath = " + libraryGenPath
                  + "\nString nativeSufj     = " + nativeSufj
                  + "\nString nativeExt      = " + nativeExt
                  + "\nString nativeArch     = " + nativeArch
                  + "\nString arch           = " + arch
                  + "\nString os             = " + os
            );         
            System.exit(1);
        }
       
        /**
           Table of matches:
           
           Java-JAR                    Native-Library
           =======================     ============================
           clipsjni-6.40-amd32.jar --> libclipsjni-6.40-amd32.so
           clipsjni-6.40-amd64.jar --> libclipsjni-6.40-amd64.so
           clipsjni-6.40-x86.jar   --> clipsjni-6.40-x86.dll
           clipsjni-6.40-x64.jar   --> clipsjni-6.40-x64.dll
           clipsjni-6.40-osx64.jar --> libclipsjni-6.40-osx64.jnilib
           clipsjni-6.40-arm64.jar --> libclipsjni-6.40-arm64.so
           etc.
         
        
        
         System.out.println(        
                 "\nString jarPathName    = " + jarPathName
               + "\nString jarName        = " + jarName
               + "\nString jarPath        = " + jarPath 
               + "\nString jarGenName     = " + jarGenName
               + "\nString jarGenNameExt  = " + jarGenNameExt
               + "\nString libraryGenName = " + libraryGenName 
               + "\nString libraryGenPath = " + libraryGenPath
               + "\nString nativeSufj     = " + nativeSufj
               + "\nString nativeExt      = " + nativeExt
               + "\nString nativeArch     = " + nativeArch
               + "\nString arch           = " + arch
               + "\nString os             = " + os
         );         
        
      
        
        */



        switch (mode) {
        case CLIPSJNI_LOAD_BY_JAR:          // mode = 0  returns full-path to Library 
            return (libraryGenPath);

        case CLIPSJNI_LOAD_BY_PATH:   // mode = 1  returns the name of Library
            return (libraryGenName);

        case CLIPSJNI_JARFILE:       // mode = 2  returns generated name of .JAR
            return (jarGenNameExt);

        case CLIPSJNI_JARNAME:       // mode = 3  returns real name of .JAR
            return (jarName);

        case CLIPSJNI_JARDIR:        // mode = 4  returns real path of .JAR
            return (jarPath);

        default:
            return (libraryGenPath);  // mode = 0

        }

    }
    
    
    

    static {
        /**
         * CASE 1:  OS-PATH load method (path-visibility)      
         *          CLIPS searches Native-Library in OS-Path
         * 
         *          export MODE_CLIPSJNI=1      
         *          java -jar clipsjni-6.40-x64.jar  
         *          
         *          By parameter: mode.clipsjni
         *          java -Dmode.clipsjni=1  -jar clipsjni-6.40-x64.jar      
         * 
         * 
         * CASE 0:  JAR-PATH load method (by default, jar-visibility)  
         *          CLIPS searches Native-Library in same location of .JAR
         *          
         *          java -jar clipsjni-6.40-x64.jar
         *          
         */
        String javMode = System.getProperty("mode.clipsjni", "0");
        javMode = (javMode.equalsIgnoreCase("0")) ? "0" : "1";
        
        String envMode = System.getenv("MODE_CLIPSJNI");
        if (envMode == null) { 
            envMode = "0";
        } else {
            envMode = (envMode.equalsIgnoreCase("1")) ? "1" : "0";
        }
        

        
        int modeLoad = CLIPSJNI_LOAD_BY_JAR;

        if (javMode.equals("1") || envMode.equals("1")) {
            modeLoad = CLIPSJNI_LOAD_BY_PATH;
        }

        if (modeLoad == CLIPSJNI_LOAD_BY_JAR) {
            System.load(getNativeClipsJNIname(CLIPSJNI_LOAD_BY_JAR));
        } else {
            System.loadLibrary(getNativeClipsJNIname(CLIPSJNI_LOAD_BY_PATH));
        }
    }
    

    
    
    
    
    
    
    
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    
    
    
    // CLIPS Native Library methods
    
    private native long     createEnvironment();              
    private native void     clear(long env);                  
    private native void     load(long env, String filename);  
    private native void     loadFromString(long env, String loadString);
    private native void     loadFromStringWithOutput(long env, String loadString);
    private native boolean  build(long env, String buildStr);
    private native void     reset(long env);
    private native long     run(long env, long runLimit);
    private native          FactAddressValue assertString(long env, String factStr);
    private native          InstanceAddressValue makeInstance(long env, String instanceStr);
    private native boolean  watch(long env, String watchItem);
    private native boolean  unwatch(long env, String watchItem);
    private native          PrimitiveValue eval(long env, String evalStr);
    private native boolean  validWatchItem(long env, String watchItem);
    private native boolean  getWatchItem(long env, String watchItem);    
    private native int      addUserFunction(long env, String functionName, String returnTypes, int minArgs, int maxArgs, String restrictions, UserFunction callback);    
    private native boolean  removeUserFunction(long env, String functionName);
    private native boolean  addRouter(long env, String routerName, int priority, Router theRouter);
    private native boolean  deleteRouter(long env, String routerName);
    private native boolean  activateRouter(long env, String routerName);
    private native boolean  deactivateRouter(long env, String routerName);
    private native void     printString(long env, String logName, String printString);
    private native boolean  printRouterExists(long env, String logName);
    private native void     commandLoop(long env);             // The devil !
    private native int      changeDirectory(long env, String directory);
    private native String   getParsingFileName(long env);
    private native void     setParsingFileName(long env, String theString);
    private native boolean loadFacts(long env, String filename);
    private native void     setHaltExecution(long env, boolean value);
    private native void     setHaltRules(long env, boolean value);
    private native          List<Module> getModuleList(long env);
    private native          FocusStack getFocusStack(long env);
    private native          HashMap<Long, BitSet> getFactScopes(long env);
    private native          HashMap<Long, BitSet> getInstanceScopes(long env);
    private native          List<FactInstance> getFactList(long env);
    private native          List<FactInstance> getInstanceList(long env);    
    private native          Agenda getAgenda(long env, String moduleName);
    private native String   getDeftemplateText(long env, long templatePtr);
    private native String   getDefclassText(long env, long classPtr);
    private native String   getDefruleText(long env, String ruleName);


    private native void     destroyEnvironment(long env);
    private native void     flushInputBuffer(long env);

    private native String   getInputBuffer(long env);
    private native void     setInputBuffer(long env, String theString);
    private native long     getInputBufferCount(long env);
    private native long     setInputBufferCount(long env, long theValue);
    private native void     expandInputBuffer(long env, int theChar);
    private native void     appendInputBuffer(long env, String theString);    
    private native void     appendDribble(long env, String theString);
    private native boolean  inputBufferContainsCommand(long env);
    private native void     commandLoopOnceThenBatch(long env);
    private native void     commandLoopBatchDriver(long env);
    private native boolean  openStringBatch(long env, String stringName, String data, boolean placeAtEnd);
    private native void     setPeriodicCallbackEnabled(long env, boolean value);
    private native void     addPeriodicCallback(long env, String name, int priority, PeriodicCallback thePC);
    private native boolean  removePeriodicCallback(long env, String name);
    private native void     printBanner(long env);
    private native void     printPrompt(long env);
    private native boolean  getAgendaChanged(long env);
    private native void     setAgendaChanged(long env, boolean value);
    private native boolean  getFocusChanged(long env);
    private native void     setFocusChanged(long env, boolean value);
    private native boolean  getFactListChanged(long env);
    private native void     setFactListChanged(long env, boolean value);
    private native boolean  getInstancesChanged(long env);
    private native void     setInstancesChanged(long env, boolean value);
    private native void     retainFact(Environment javaEnv, long env, long fact);
    private native void     releaseFact(Environment javaEnv, long env, long fact);
    private native void     retainInstance(Environment javaEnv, long env, long instance);    
    private native void     releaseInstance(Environment javaEnv, long env, long instance);
    
    private native InstanceAddressValue         findInstanceByName(long env, String instanceName);
    
    private native void     incrementAddressCount(Environment javaEnv, long env, long externalAddress);
    private native void     decrementAddressCount(Environment javaEnv, long env, long externalAddress);
    private native void     setErrorCallback(long env, boolean value);

    
    public  static native   String          getCLIPSVersion();
    
    // DENOTE: before this Patch, they were static!

    // private static native   long             factIndex(Environment javaEnv, long env, long fact);
    // private static native   PrimitiveValue   getFactSlot(Environment javaEnv, long env, long fact, String slotName);
    // private static native   String           getInstanceName(Environment javaEnv, long env, long instance);
    // private static native   PrimitiveValue   directGetSlot(Environment javaEnv, long env, long instance, String slotName);

    private native long             factIndex(Environment javaEnv, long env, long fact);
    private native PrimitiveValue   getFactSlot(Environment javaEnv, long env, long fact, String slotName);
    private native String           getInstanceName(Environment javaEnv, long env, long instance);
    private native PrimitiveValue   directGetSlot(Environment javaEnv, long env, long instance, String slotName);
    
   
    
    
    
    
    
    
    
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    
    
    
    
    
    
    
    
    /**
     * Creates an CLIPS environment object and data structure, and sets a (long)
     * pointer to it-self in pointerToEnvironment private long.
     */
    public Environment() {
        super();
        pointerToEnvironment = createEnvironment();
    }

    /**
     * @return
     */
    public CaptureRouter captureStart() {
        setErrorCallback(true);
        errorList.clear();
        return new CaptureRouter(this, new String[] { Router.STDERR });
    }

    /**
     * @param commandCapture
     * @throws CLIPSException
     */
    public void captureEnd(CaptureRouter commandCapture) throws CLIPSException {
        String error = commandCapture.getOutput();
        setErrorCallback(false);

        this.deleteRouter(commandCapture);

        if (!error.isEmpty()) {
            throw new CLIPSException(error);
        }
    }

    /**
     * @param commandCapture
     */
    public void captureEndWithoutCheck(CaptureRouter commandCapture) {
        String error = commandCapture.getOutput();

        setErrorCallback(false);

        if (!error.isEmpty()) {
            System.out.println();;
        }

        this.deleteRouter(commandCapture);

    }

    /**
     * @throws CLIPSException
     */
    public void clear() throws CLIPSException {
        voidCommandWrapper(new Callable<Void>() {
            public Void call() throws Exception {
                clear(pointerToEnvironment);
                return null;
            }
        });
    }

    /**
     * @param fileName
     * @throws CLIPSLoadException
     */
    public void load(String fileName) throws CLIPSLoadException {
        if (fileName == null) {
            throw new NullPointerException("fileName");
        }

        CaptureRouter loadCapture = captureStart();
        load(pointerToEnvironment, fileName);
        captureEndWithoutCheck(loadCapture);

        checkForErrors("Load");
    }

    /**
     * @param loadString
     * @throws CLIPSLoadException
     */
    public void loadFromString(String loadString) throws CLIPSLoadException {
        if (loadString == null) {
            throw new NullPointerException("loadString");
        }

        String oldName = getParsingFileName();
        setParsingFileName("<String>");
        CaptureRouter loadCapture = captureStart();
        loadFromString(pointerToEnvironment, loadString);
        captureEndWithoutCheck(loadCapture);
        setParsingFileName(oldName);
        checkForErrors("LoadFromString");
    }

    /**
     * @param loadString
     */
    public void loadFromStringWithOutput(String loadString) {
        String oldName = getParsingFileName();
        setParsingFileName("<String>");
        loadFromStringWithOutput(pointerToEnvironment, loadString);
        setParsingFileName(oldName);
    }

    /**
     * @param is
     * @return
     */
    private static String convertStreamToString(java.io.InputStream is) {
        java.util.Scanner s = new java.util.Scanner(is, "UTF-8").useDelimiter("\\A");
        return s.hasNext() ? s.next() : "";
    }

    /**
     * @param resourceFile
     * @throws CLIPSLoadException
     * @throws FileNotFoundException
     */
    public void loadFromResource(String resourceFile) throws CLIPSLoadException, FileNotFoundException {
        if (resourceFile == null) {
            throw new NullPointerException("resourceFile");
        }

        InputStream input = getClass().getResourceAsStream(resourceFile);
        if (input == null) {
            throw new FileNotFoundException(resourceFile + " (no such file)");
        }

        String oldName = getParsingFileName();
        setParsingFileName(resourceFile);
        CaptureRouter loadCapture = captureStart();
        loadFromString(pointerToEnvironment, convertStreamToString(input));
        captureEndWithoutCheck(loadCapture);
        setParsingFileName(oldName);
        checkForErrors("LoadFromResource");
    }

    /**
     * @param buildString
     * @throws CLIPSException
     */
    public void build(String buildString) throws CLIPSException {
        if (buildString == null) {
            throw new NullPointerException("buildString");
        }

        CaptureRouter buildCapture = captureStart();

        build(pointerToEnvironment, buildString);

        captureEnd(buildCapture);
    }

    /**
     * @throws CLIPSException
     */
    public void reset() throws CLIPSException {
        voidCommandWrapper(new Callable<Void>() {
            public Void call() throws Exception {
                reset(pointerToEnvironment);
                return null;
            }
        });
    }

    /**
     * @param runLimit
     * @return
     * @throws CLIPSException
     */
    public long run(final long runLimit) throws CLIPSException {
        return longCommandWrapper(new Callable<Long>() {
            public Long call() throws Exception {
                return run(pointerToEnvironment, runLimit);
            }
        });
    }

    /**
     * @return
     * @throws CLIPSException
     */
    public long run() throws CLIPSException {
        return run(-1);
    }

    /**
     * @param factString
     * @return
     * @throws CLIPSException
     */
    public FactAddressValue assertString(String factString) throws CLIPSException {
        if (factString == null) {
            throw new NullPointerException("factString");
        }

        CaptureRouter assertCapture = captureStart();

        FactAddressValue fav = assertString(pointerToEnvironment, factString);

        captureEnd(assertCapture);

        return fav;
    }

    /**
     * @param instanceString
     * @return
     * @throws CLIPSException
     */
    public InstanceAddressValue makeInstance(String instanceString) throws CLIPSException {
        if (instanceString == null) {
            throw new NullPointerException("instanceString");
        }

        CaptureRouter miCapture = captureStart();

        InstanceAddressValue iav = makeInstance(pointerToEnvironment, instanceString);

        captureEnd(miCapture);

        return iav;
    }

    /**
     * @param deftemplate
     * @return
     * @throws CLIPSException
     */
    public FactAddressValue findFact(String deftemplate) throws CLIPSException {
        return findFact("?f", deftemplate, "TRUE");
    }

    /**
     * @param variable
     * @param deftemplate
     * @param condition
     * @return
     * @throws CLIPSException
     */
    public FactAddressValue findFact(String variable, String deftemplate, String condition) throws CLIPSException {
        if (variable == null) {
            throw new NullPointerException("variable");
        }

        if (deftemplate == null) {
            throw new NullPointerException("deftemplate");
        }

        if (condition == null) {
            throw new NullPointerException("condition");
        }

        String query = "(find-fact " + "((" + variable + " " + deftemplate + ")) " + condition + ")";

        PrimitiveValue pv = eval(query);

        if (!pv.isMultifield()) {
            return null;
        }

        MultifieldValue mv = (MultifieldValue) pv;

        if (mv.size() == 0) {
            return null;
        }

        return (FactAddressValue) mv.get(0);
    }

    /**
     * @param deftemplate
     * @return
     * @throws CLIPSException
     */
    public List<FactAddressValue> findAllFacts(String deftemplate) throws CLIPSException {
        return findAllFacts("?f", deftemplate, "TRUE");
    }

    /**
     * @param variable
     * @param deftemplate
     * @param condition
     * @return
     * @throws CLIPSException
     */
    public List<FactAddressValue> findAllFacts(String variable, String deftemplate, String condition)
            throws CLIPSException {
        if (variable == null) {
            throw new NullPointerException("variable");
        }

        if (deftemplate == null) {
            throw new NullPointerException("deftemplate");
        }

        if (condition == null) {
            throw new NullPointerException("condition");
        }

        String query = "(find-all-facts " + "((" + variable + " " + deftemplate + ")) " + condition + ")";

        PrimitiveValue pv = eval(query);

        if (!pv.isMultifield()) {
            return null;
        }

        MultifieldValue mv = (MultifieldValue) pv;

        List<FactAddressValue> rv = new ArrayList<FactAddressValue>(mv.size());

        for (PrimitiveValue theValue : mv) {
            rv.add((FactAddressValue) theValue);
        }

        return rv;
    }

    /**
     * @param defclass
     * @return
     * @throws CLIPSException
     */
    public InstanceAddressValue findInstance(String defclass) throws CLIPSException {
        return findInstance("?i", defclass, "TRUE");
    }

    /**
     * @param variable
     * @param defclass
     * @param condition
     * @return
     * @throws CLIPSException
     */
    public InstanceAddressValue findInstance(String variable, String defclass, String condition) throws CLIPSException {
        if (variable == null) {
            throw new NullPointerException("variable");
        }

        if (defclass == null) {
            throw new NullPointerException("defclass");
        }

        if (condition == null) {
            throw new NullPointerException("condition");
        }

        String query = "(find-instance " + "((" + variable + " " + defclass + ")) " + condition + ")";

        PrimitiveValue pv = eval(query);

        if (!pv.isMultifield()) {
            return null;
        }

        MultifieldValue mv = (MultifieldValue) pv;

        if (mv.size() == 0) {
            return null;
        }

        return ((InstanceNameValue) mv.get(0)).getInstance(this);
    }

    /**
     * @param defclass
     * @return
     * @throws CLIPSException
     */
    public List<InstanceAddressValue> findAllInstances(String defclass) throws CLIPSException {
        return findAllInstances("?i", defclass, "TRUE");
    }

    /**
     * @param variable
     * @param defclass
     * @param condition
     * @return
     * @throws CLIPSException
     */
    public List<InstanceAddressValue> findAllInstances(String variable, String defclass, String condition)
            throws CLIPSException {
        if (variable == null) {
            throw new NullPointerException("variable");
        }

        if (defclass == null) {
            throw new NullPointerException("defclass");
        }

        if (condition == null) {
            throw new NullPointerException("condition");
        }

        String query = "(find-all-instances " + "((" + variable + " " + defclass + ")) " + condition + ")";

        PrimitiveValue pv = eval(query);

        if (!pv.isMultifield()) {
            return null;
        }

        MultifieldValue mv = (MultifieldValue) pv;

        List<InstanceAddressValue> rv = new ArrayList<InstanceAddressValue>(mv.size());

        for (PrimitiveValue theValue : mv) {
            rv.add(((InstanceNameValue) theValue).getInstance(this));
        }

        return rv;
    }

    /**
     * @param evalString
     * @return
     * @throws CLIPSException
     */
    public PrimitiveValue eval(String evalString) throws CLIPSException {
        if (evalString == null) {
            throw new NullPointerException("evalString");
        }

        CaptureRouter evalCapture = captureStart();

        PrimitiveValue pv = eval(pointerToEnvironment, evalString);

        captureEnd(evalCapture);

        return pv;
    }

    /**
     * @param watchItem
     */
    public void watch(String watchItem) {
        if (watchItem == null) {
            throw new NullPointerException("watchItem");
        }

        if (!validWatchItem(pointerToEnvironment, watchItem)) {
            throw new IllegalArgumentException("watchItem '" + watchItem + "' is invalid.");
        }

        watch(pointerToEnvironment, watchItem);
    }

    /**
     * @param watchItem
     */
    public void unwatch(String watchItem) {
        if (watchItem == null) {
            throw new NullPointerException("watchItem");
        }

        if (!validWatchItem(pointerToEnvironment, watchItem)) {
            throw new IllegalArgumentException("watchItem '" + watchItem + "' is invalid.");
        }

        unwatch(pointerToEnvironment, watchItem);
    }

    /**
     * @param watchItem
     * @return
     */
    public boolean getWatchItem(String watchItem) {
        if (watchItem == null) {
            throw new NullPointerException("watchItem");
        }

        if (!validWatchItem(pointerToEnvironment, watchItem)) {
            throw new IllegalArgumentException("watchItem '" + watchItem + "' is invalid.");
        }

        return getWatchItem(pointerToEnvironment, watchItem);
    }

    /**
     * @param watchItem
     * @param newValue
     */
    public void setWatchItem(String watchItem, boolean newValue) {
        if (watchItem == null) {
            throw new NullPointerException("watchItem");
        }

        if (!validWatchItem(pointerToEnvironment, watchItem)) {
            throw new IllegalArgumentException("watchItem '" + watchItem + "' is invalid.");
        }

        if (newValue) {
            watch(watchItem);
        } else {
            unwatch(watchItem);
        }
    }

    /**
     * @param functionName
     * @param callback
     */
    public void addUserFunction(String functionName, UserFunction callback) {
        addUserFunction(functionName, "*", 0, UserFunction.UNBOUNDED, null, callback);
    }

    /**
     * @param functionName
     * @param returnTypes
     * @param minArgs
     * @param maxArgs
     * @param restrictions
     * @param callback
     */
    public void addUserFunction(String functionName, String returnTypes, int minArgs, int maxArgs, String restrictions,
            UserFunction callback) {
        int rv;

        if (functionName == null) {
            throw new NullPointerException("functionName");
        }

        if (callback == null) {
            throw new NullPointerException("callback");
        }

        rv = addUserFunction(pointerToEnvironment, functionName, returnTypes, minArgs, maxArgs, restrictions, callback);

        switch (rv) {
        case 0:
            break;

        case 1:
            throw new IllegalArgumentException("Function '" + functionName + "' minArgs exceeds maxArgs.");

        case 2:
            throw new IllegalArgumentException("Function '" + functionName + "' already exists.");

        case 3:
            throw new IllegalArgumentException("Function '" + functionName + "' invalid argument type.");

        case 4:
            throw new IllegalArgumentException("Function '" + functionName + "' invalid return type.");
        }
    }

    /**
     * @param functionName
     */
    public void removeUserFunction(String functionName) {
        boolean rv;

        if (functionName == null) {
            throw new NullPointerException("functionName");
        }

        rv = removeUserFunction(pointerToEnvironment, functionName);

        if (!rv) {
            throw new IllegalArgumentException("Function '" + functionName + "' does not exist.");
        }
    }

    /**
     * @param theRouter
     */
    public boolean addRouter(Router theRouter) {
        if (theRouter == null) {
            throw new NullPointerException("theRouter");
        }

        if (routerMap.containsKey(theRouter.getName())) {
            throw new IllegalArgumentException("Router named '" + theRouter.getName() + "' already exists.");
        }

        boolean rv = addRouter(pointerToEnvironment, theRouter.getName(), theRouter.getPriority(), theRouter);

        if (rv) {
            routerMap.put(theRouter.getName(), theRouter);
            return rv;
        } else {
            throw new IllegalArgumentException("Router named '" + theRouter.getName() + "' already exists.");
        }
    }

    /**
     * @param theRouter
     */
    public void deleteRouter(Router theRouter) {
        if (theRouter == null) {
            throw new NullPointerException("theRouter");
        }

        if (deleteRouter(pointerToEnvironment, theRouter.getName())) {
            routerMap.remove(  theRouter.getName());
        } else {
            throw new IllegalArgumentException("Router named '" + theRouter.getName() + "' does not exist.");
        }
    }

    /**
     * @param theRouter
     */
    public void activateRouter(Router theRouter) {
        if (theRouter == null) {
            throw new NullPointerException("theRouter");
        }

        if (!activateRouter(pointerToEnvironment, theRouter.getName())) {
            throw new IllegalArgumentException("Router named '" + theRouter.getName() + "' does not exist.");
        }
    }

    /**
     * @param theRouter
     */
    public void deactivateRouter(Router theRouter) {
        if (theRouter == null) {
            throw new NullPointerException("theRouter");
        }

        if (!deactivateRouter(pointerToEnvironment, theRouter.getName())) {
            throw new IllegalArgumentException("Router named '" + theRouter.getName() + "' does not exist.");
        }
    }

    /**
     * @param logicalName
     * @param printString
     */
    public void print(String logicalName, String printString) {
        if (logicalName == null) {
            throw new NullPointerException("logicalName");
        }

        if (printString == null) {
            throw new NullPointerException("printString");
        }

        if (!printRouterExists(pointerToEnvironment, logicalName)) {
            throw new IllegalArgumentException("No print router for logicalName '" + logicalName + "' exists.");
        }

        printString(pointerToEnvironment, logicalName, printString);
    }

    /**
     * @param printString
     */
    public void print(String printString) {
        if (printString == null) {
            throw new NullPointerException("printString");
        }

        printString(pointerToEnvironment, Router.STDOUT, printString);
    }

    /**
     * @param logicalName
     * @param printString
     */
    public void println(String logicalName, String printString) {
        if (logicalName == null) {
            throw new NullPointerException("logicalName");
        }

        if (printString == null) {
            throw new NullPointerException("printString");
        }

        if (!printRouterExists(pointerToEnvironment, logicalName)) {
            throw new IllegalArgumentException("No print router for logicalName '" + logicalName + "' exists.");
        }

        printString(pointerToEnvironment, logicalName, printString + "\n");
    }

    /**
     * @param printString
     */
    public void println(String printString) {
        if (printString == null) {
            throw new NullPointerException("printString");
        }

        printString(pointerToEnvironment, Router.STDOUT, printString + "\n");
    }

    /**
     * 
     */
    public void commandLoop() {
        commandLoop(pointerToEnvironment);
    }

    /**
     * @param directory
     * @return
     */
    public int changeDirectory(String directory) {
        return changeDirectory(pointerToEnvironment, directory);
    }

    /**
     * @param function
     * @throws CLIPSLoadException
     */
    public void checkForErrors(String function) throws CLIPSLoadException {
        if (errorList.isEmpty()) {
            return;
        }

        String exceptionString;

        if (errorList.size() == 1) {
            exceptionString = "\n" + function + " encountered 1 error:\n";
        } else {
            exceptionString = "\n" + function + " encountered " + errorList.size() + " errors:\n";
        }

        for (CLIPSLineError theError : errorList) {
            exceptionString = exceptionString.concat("\n" + theError.getFileName() + " (Line "
                    + theError.getLineNumber() + ") : " + theError.getMessage());
        }

        CLIPSLoadException e = new CLIPSLoadException(exceptionString, errorList);
        errorList.clear();
        throw e;
    }

    /**
     * @return
     */
    public String getParsingFileName() {
        return getParsingFileName(pointerToEnvironment);
    }

    /**
     * @param theString
     */
    public void setParsingFileName(String theString) {
        setParsingFileName(pointerToEnvironment, theString);
    }

    /**
     * @param fileName
     * @param lineNumber
     * @param message
     */
    public void addError(String fileName, long lineNumber, String message) {
        errorList.add(new CLIPSLineError(fileName, lineNumber, message));
    }

    /**
     * @param filename
     * @return
     */
    public boolean loadFacts(String filename) {
        return loadFacts(pointerToEnvironment, filename);
    }

    /**
     * @param value
     */
    public void setHaltExecution(boolean value) {
        setHaltExecution(pointerToEnvironment, value);
    }

    /**
     * @param value
     */
    public void setHaltRules(boolean value) {
        setHaltRules(pointerToEnvironment, value);
    }

    /**
     * @return
     */
    public List<Module> getModuleList() {
        return getModuleList(pointerToEnvironment);
    }

    /**
     * @return
     */
    public FocusStack getFocusStack() {
        return getFocusStack(pointerToEnvironment);
    }

    /**
     * @return
     */
    public HashMap<Long, BitSet> getFactScopes() {
        return getFactScopes(pointerToEnvironment);
    }

    /**
     * @return
     */
    public HashMap<Long, BitSet> getInstanceScopes() {
        return getInstanceScopes(pointerToEnvironment);
    }

    /**
     * @return
     */
    public List<FactInstance> getFactList() {
        return getFactList(pointerToEnvironment);
    }

    /**
     * @return
     */
    public List<FactInstance> getInstanceList() {
        return getInstanceList(pointerToEnvironment);
    }

    /**
     * @param moduleName
     * @return
     */
    public Agenda getAgenda(String moduleName) {
        return getAgenda(pointerToEnvironment, moduleName);
    }

    /**
     * @param theFocus
     * @return
     */
    public Agenda getAgenda(Focus theFocus) {
        return getAgenda(pointerToEnvironment, theFocus.getModuleName());
    }

    /**
     * @param templatePtr
     * @return
     */
    public String getDeftemplateText(long templatePtr) {
        return getDeftemplateText(pointerToEnvironment, templatePtr);
    }

    /**
     * @param classPtr
     * @return
     */
    public String getDefclassText(long classPtr) {
        return getDefclassText(pointerToEnvironment, classPtr);
    }

    /**
     * @param ruleName
     * @return
     */
    public String getDefruleText(String ruleName) {
        return getDefruleText(pointerToEnvironment, ruleName);
    }

    /**
     * @param theFact
     * @return
     */
    public long factIndex(FactAddressValue theFact) {
        return factIndex(theFact.getEnvironment(), theFact.getEnvironment().getEnvironmentAddress(),
                theFact.getFactAddress());
    }

    /**
     * @param theFact
     * @param slotName
     * @return
     */
    public PrimitiveValue getFactSlot(FactAddressValue theFact, String slotName) {
        PrimitiveValue theValue;

        if (slotName == null) {
            throw new NullPointerException("slotName");
        }

        theValue = getFactSlot(theFact.getEnvironment(), theFact.getEnvironment().getEnvironmentAddress(),
                theFact.getFactAddress(), slotName);

        if (theValue == null) {
            throw new IllegalArgumentException("Slot name '" + slotName + "' is invalid.");
        }

        return theValue;
    }

    /**
     * @param theInstance
     * @return
     */
    public String getInstanceName(InstanceAddressValue theInstance) {
        return getInstanceName(theInstance.getEnvironment(), theInstance.getEnvironment().getEnvironmentAddress(),
                theInstance.getInstanceAddress());
    }

    /**
     * @param theInstance
     * @param slotName
     * @return
     */
    public PrimitiveValue directGetSlot(InstanceAddressValue theInstance, String slotName) {
        PrimitiveValue theValue = null;

        if (slotName == null) {
            throw new NullPointerException("slotName");
        }

        theValue = directGetSlot(theInstance.getEnvironment(), theInstance.getEnvironment().getEnvironmentAddress(),
                theInstance.getInstanceAddress(), slotName);

        if (theValue == null) {
            throw new IllegalArgumentException("Slot name '" + slotName + "' is invalid.");
        }

        return theValue;
    }

    /**
     * 
     */
    public void flushInputBuffer() {
        flushInputBuffer(pointerToEnvironment);
    }

    /**
     * @return
     */
    public String getInputBuffer() {
        return getInputBuffer(pointerToEnvironment);
    }

    /**
     * @param theString
     */
    public void setInputBuffer(String theString) {
        setInputBuffer(pointerToEnvironment, theString);
    }

    /**
     * @return
     */
    public long getInputBufferCount() {
        return getInputBufferCount(pointerToEnvironment);
    }

    /**
     * @param theValue
     * @return
     */
    public long setInputBufferCount(long theValue) {
        return setInputBufferCount(pointerToEnvironment, theValue);
    }

    /**
     * @param theChar
     */
    public void expandInputBuffer(int theChar) {
        expandInputBuffer(pointerToEnvironment, theChar);
    }

    /**
     * @param theString
     */
    public void appendInputBuffer(String theString) {
        appendInputBuffer(pointerToEnvironment, theString);
    }

    /**
     * @param theString
     */
    public void appendDribble(String theString) {
        appendDribble(pointerToEnvironment, theString);
    }

    /**
     * @return
     */
    public boolean inputBufferContainsCommand() {
        return inputBufferContainsCommand(pointerToEnvironment);
    }

    /**
     * 
     */
    public void commandLoopOnceThenBatch() {
        commandLoopOnceThenBatch(pointerToEnvironment);
    }

    /**
     * 
     */
    public void commandLoopBatchDriver() {
        commandLoopBatchDriver(pointerToEnvironment);
    }

    /**
     * @param stringName
     * @param data
     * @param placeAtEnd
     * @return
     */
    public boolean openStringBatch(String stringName, String data, boolean placeAtEnd) {
        return openStringBatch(pointerToEnvironment, stringName, data, placeAtEnd);
    }

    /**
     * @param value
     */
    public void setPeriodicCallbackEnabled(boolean value) {
        setPeriodicCallbackEnabled(pointerToEnvironment, value);
    }

    /**
     * @param name
     * @param priority
     * @param thePC
     */
    public void addPeriodicCallback(String name, int priority, PeriodicCallback thePC) {
        addPeriodicCallback(pointerToEnvironment, name, priority, thePC);
    }

    /**
     * @param name
     * @return
     */
    public boolean removePeriodicCallback(String name) {
        return removePeriodicCallback(pointerToEnvironment, name);
    }

    /**
     * 
     */
    public void printBanner() {
        printBanner(pointerToEnvironment);
    }

    /**
     * 
     */
    public void printPrompt() {
        printPrompt(pointerToEnvironment);
    }

    /**
     * @param theRouter
     * @param logName
     * @param printString
     */
    public void callNextPrintRouter(Router theRouter, String logName, String printString) {
        deactivateRouter(theRouter);
        print(logName, printString);
        activateRouter(theRouter);
    }

    /**
     * @return
     */
    public boolean getAgendaChanged() {
        return getAgendaChanged(pointerToEnvironment);
    }

    /**
     * @param value
     */
    public void setAgendaChanged(boolean value) {
        setAgendaChanged(pointerToEnvironment, value);
    }

    /**
     * @return
     */
    public boolean getFocusChanged() {
        return getFocusChanged(pointerToEnvironment);
    }

    /**
     * @param value
     */
    public void setFocusChanged(boolean value) {
        setFocusChanged(pointerToEnvironment, value);
    }

    /**
     * @return
     */
    public boolean getFactListChanged() {
        return getFactListChanged(pointerToEnvironment);
    }

    /**
     * @param value
     */
    public void setFactListChanged(boolean value) {
        setFactListChanged(pointerToEnvironment, value);
    }

    /**
     * @return
     */
    public boolean getInstancesChanged() {
        return getInstancesChanged(pointerToEnvironment);
    }

    /**
     * @param value
     */
    public void setInstancesChanged(boolean value) {
        setInstancesChanged(pointerToEnvironment, value);
    }

    /**
     * @param theFact
     */
    public void retainFact(FactAddressValue theFact) {
        retainFact(theFact.getEnvironment(), theFact.getEnvironment().getEnvironmentAddress(),
                theFact.getFactAddress());
    }

    /**
     * @param theFact
     */
    public void releaseFact(FactAddressValue theFact) {
        releaseFact(theFact.getEnvironment(), theFact.getEnvironment().getEnvironmentAddress(),
                theFact.getFactAddress());
    }

    /**
     * @param theInstance
     */
    public void retainInstance(InstanceAddressValue theInstance) {
        retainInstance(theInstance.getEnvironment(), theInstance.getEnvironment().getEnvironmentAddress(),
                theInstance.getInstanceAddress());
    }

    /**
     * @param theInstance
     */
    public void releaseInstance(InstanceAddressValue theInstance) {
        releaseInstance(theInstance.getEnvironment(), theInstance.getEnvironment().getEnvironmentAddress(),
                theInstance.getInstanceAddress());
    }

    public InstanceAddressValue findInstanceByName(String instanceName) {
        return findInstanceByName(pointerToEnvironment, instanceName);
    }

    /**
     * @param theAddress
     */
    public void incrementAddressCount(ExternalAddressValue theAddress) {
        incrementAddressCount(theAddress.getEnvironment(), theAddress.getEnvironment().getEnvironmentAddress(),
                theAddress.getExternalAddress());
    }

    /**
     * @param theAddress
     */
    public void decrementAddressCount(ExternalAddressValue theAddress) {
        decrementAddressCount(theAddress.getEnvironment(), theAddress.getEnvironment().getEnvironmentAddress(),
                theAddress.getExternalAddress());
    }

    /**
     * @param externalAddress
     * @return
     */
    public ExternalAddressValue createExternalAddressValue(Object externalAddress) {
        return new ExternalAddressValue(externalAddress, this);
    }

    /**
     * @param value
     */
    public void setErrorCallback(boolean value) {
        setErrorCallback(pointerToEnvironment, value);
    }

    /**
     * 
     */
    public void destroy() {
        for (String key : routerMap.keySet()) {
            deleteRouter(routerMap.get(key));
        }

        destroyEnvironment(pointerToEnvironment);
    }

    /**
     * @return
     */
    public static String getCLIPSJNIVersion() {
        return CLIPSJNI_VERSION;
    }

    /**
     * @return
     */
    public static String getVersion() {
        return "CLIPSJNI version " + getCLIPSJNIVersion() + " (CLIPS version " + getCLIPSVersion() + ")";
    }

    /**
     * @return
     */
    public long getEnvironmentAddress() {
        return pointerToEnvironment;
    }

    /**
     * @param callable
     * @throws CLIPSException
     */
    private void voidCommandWrapper(Callable<Void> callable) throws CLIPSException {
        CaptureRouter commandCapture = captureStart();

        try {
            callable.call();
        } catch (Exception e) {
            captureEndWithoutCheck(commandCapture);
            throw new CLIPSException(e.getMessage(), e.getCause());
        }

        captureEnd(commandCapture);
    }

    /**
     * @param callable
     * @return
     * @throws CLIPSException
     */
    private long longCommandWrapper(Callable<Long> callable) throws CLIPSException {
        CaptureRouter commandCapture = captureStart();
        Long rv;

        try {
            rv = callable.call();
        } catch (Exception e) {
            captureEndWithoutCheck(commandCapture);
            throw new CLIPSException(e.getMessage(), e.getCause());
        }

        captureEnd(commandCapture);

        return rv;
    }

    /**
     * @param args
     */
    public static void main(String args[]) {
        System.out.println();
        new Thread(new Runnable() {
            @Override
            public void run() {
                Environment innEng;
                innEng = new Environment();
                innEng.commandLoop();
            }
        }).start();

    }

}
