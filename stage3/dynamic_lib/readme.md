# compile
```shell
# macos
clang++ -arch arm64 -shared -fPIC -o lib<name>.dylib <name>.cpp
clang++ -arch arm64 <demo>.cpp -o <demo> -L. -lmymath (-Iinclude)
# -Iinclude tells the compiler to look in the "include" folder for header files. 
# -L. tells the linker to look in the current directory for library files.
```