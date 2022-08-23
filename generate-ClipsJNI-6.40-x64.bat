@echo off
::  Module_Name
set moName=net.sf.clipsrules.jni
set libName=clipsjni
set libVer=6.40
set tgClass=target/classes
set srClass=src/main/java
set ptClass=net/sf/clipsrules/jni
set jarName=%libName%-%libVer%-x64



echo. -------------------------------------------------------------
echo. OpenJDK version "11.0.14" 2022-01-18 LTS
echo. -------------------------------------------------------------
echo. Compiling and Making the C++ Header File:
echo.      src/main/c/net_sf_clipsrules_jni_Environment.h
echo. -------------------------------------------------------------
echo. javac -p %moName% %srClass%/%moName%/module-info.java %srClass%/%moName%/%ptClass%/*java -d %tgClass%/%moName%   -verbose -deprecation -h src/main/c
echo.
echo.
echo. -------------------------------------------------------------
echo. Make Jar file
echo. -------------------------------------------------------------
echo. jar  -cfe %jarName%.jar  %moName%.Shell %tgClass%/%moName%/%ptClass%/Shell.class %tgClass%/%moName%/module-info.class -C %tgClass%/%moName% net
echo.
echo. -------------------------------------------------------------
echo. Open new terminal with Native-Tools Visual Studio 2022 x64
echo. Visual Studio 2022 Developer Command Prompt v17.3.1
echo. [vcvarsall.bat] Environment initialized for: 'x64'
echo. -------------------------------------------------------------
echo   cd src/main/c/ and type:
echo.  del *.obj
echo.  nmake -f makefile-640-x64.win CLIPSJNI.dll
echo.  copy *.dll ..\..\..\.
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
echo. "CLIPS> (chdir C:\\Users\\---YOUR-NAME-----\\p41-clipsjni-640\\src\\test\\clips_feature_tests_640)"
echo. 
echo.  "CLIPS> (batch testall.tst)"
echo.  "CLIPS> (exit)"
echo.
echo. -------------------------------------------------------------

