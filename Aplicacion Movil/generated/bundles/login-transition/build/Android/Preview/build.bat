:: This file was generated based on C:/Users/JuanJose/AppData/Local/Fusetools/Packages/UnoCore/1.9.0/Targets/Android/build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

:: #if #(JDK.Directory:IsSet)
:: set JAVA_HOME=#(JDK.Directory:NativePath)
:: #endif

call gradlew assembleDebug %* || goto ERROR
copy /Y app\build\outputs\apk\app-debug.apk LoginTransition.apk || goto ERROR
popd && exit /b 0

:ERROR
popd && exit /b 1
