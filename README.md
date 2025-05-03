## Follow this to setup simple CMakeLists.txt for Your vscode project
Download the microsoft visual studo 
###  Action 1

make a folder and open it the same directoy where you want to start the project in vscode

Create a file name CMakeLists.txt
Create a main.cpp with a simple cpp program

### Action 2 

copy the entire the code in the repo from the CMakeLists.txt. Make sure you don't change anything there...
in your project in vscode open command pallete 
#### windows -> ctrl + shift p
#### macos -> command + shift p
And type in the search field cmake select kit
chose the visual studio x64 amd {.....}

this will configure the cmakelist.txt 
### Action 3 

with the same command open the search field select cmake build to build the neccessary dependencies....

#### output 
_will looks like this..._

[main] Building folder: c:/Users/Diana/Documents/makefile/build ALL_BUILD
[build] Starting build
[proc] Executing command: "C:\Program Files\CMake\bin\cmake.EXE" --build c:/Users/Diana/Documents/makefile/build --config Debug --target ALL_BUILD -j 6 --
[build] MSBuild version 17.13.19+0d9f5a35a for .NET Framework
[build] 
[build]   fmt.vcxproj -> C:\Users\Diana\Documents\makefile\build\_deps\fmt-build\Debug\fmtd.lib
[build]   Scanning sources for module dependencies...
[build]   main.cpp
[build]   Compiling...
[build]   main.cpp
[build]   rooster.vcxproj -> C:\Users\Diana\Documents\makefile\build\Debug\rooster.exe
[driver] Build completed: 00:00:15.410
[build] Build finished with exit code 0
![OIP](https://github.com/user-attachments/assets/d799df39-7816-44bb-9ebb-3fab7e5a44ae)




