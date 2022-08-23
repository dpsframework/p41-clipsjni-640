@echo off
::  Module_Name x86 (Java SE1.8 only)
set moName=net.sf.clipsrules.jni
set libName=clipsjni
set libVer=6.40
set tgClass=target/classes
set srClass=src/main/java
set ptClass=net/sf/clipsrules/jni
set jarName=%libName%-%libVer%-x86



echo. -------------------------------------------------------------
echo. OpenJDK version "1.8.0_41"
echo. set JAVA_HOME=C:\Program Files (x86)\java\java-se-8u41-ri
echo.
echo. -------------------------------------------------------------
echo. Proposal reference name: p41-clipsjni-640 for i586 Architectures
echo. Compiling and Making the C++ Header File:
echo. 
echo.      src/main/c/net_sf_clipsrules_jni_Environment.h
echo. 
echo. -------------------------------------------------------------
echo. javac  %srClass%/%moName%/%ptClass%/*java -d %tgClass%  -verbose -deprecation  -h src/main/c
echo.
echo.
echo. -------------------------------------------------------------
echo. Make Jar file
echo. -------------------------------------------------------------
echo. jar  -cfe %jarName%.jar  %moName%.Shell %tgClass%/%ptClass%/Shell.class  -C %tgClass% net
echo.
echo.
echo.
echo. -------------------------------------------------------------
echo. Open new terminal with Native-Tools Visual Studio 2022 x64
echo. Visual Studio 2022 Developer Command Prompt v17.3.1
echo. [vcvarsall.bat] Environment initialized for: 'x86'
echo. -------------------------------------------------------------
echo. 
echo   cd src/main/c/ and type:
echo.  del *.obj
echo.  nmake -f makefile-640-x86.win CLIPSJNI.dll
echo.  copy clipsjni-6.40-x86.dll ..\..\..\.
echo.  cd ..\..\..\.
echo.
echo.
echo.
echo. -------------------------------------------------------------
echo. Launch with: 
echo. -------------------------------------------------------------
echo. java -p %jarName%.jar    -m %moName%/%moName%.Shell
echo. java -jar %jarName%.jar    net.sf.clipsrules.jni.Shell
echo. java  %moName%.Shell
echo. -------------------------------------------------------------
echo.
echo. Test with:
echo. ------------
echo. "CLIPS> (chdir C:\\Users\\YOUR-NAME-----\\p41-clipsjni-640\\src\\test\\clips_feature_tests_640)"
echo. 
echo.  "CLIPS> (batch testall.tst)"
echo.  "CLIPS> (exit)"
echo.

echo. -------------------------------------------------------------

