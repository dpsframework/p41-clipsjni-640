/**
 *
 * <h1>CLIPSJNI Version 6.40   2021-09-02</h1>
 * 
 * <h3>"C" Language Integrated Production System</h3>
 * <h3>CLIPS   Version 6.40   2021-09-02</h3>
 * <p>
 * 
 * @since 2014
 * @since update at: 2021-09-02
 * @version 6.40 
 * @provides clipsjni two modes of loading Native Library.
 * @author Principal Programmer(s):    Gary D. Riley.
 * 
 * @author Contributing Programmer(s): Francisco J. Aguayo (Leon University / IEEE Power & Energy Systems Society Member)
 * 
 * 
 * <pre>
 * Purpose:
 * 
 *   Compile:
 *   ------------------
 *   clipsjni-6.40-x86.jar         (Java JDK-1.8     all architectures-i586)
 *   clipsjni-6.40-x64.jar         (Java JDK-11...18 all architectures-x64)
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
 * 
 * </p>
 */
module net.sf.clipsrules.jni {
    exports net.sf.clipsrules.jni;
    uses net.sf.clipsrules.jni.PrimitiveValue;
    uses net.sf.clipsrules.jni.FactAddressValue;
	requires java.desktop;
    requires java.prefs;
}