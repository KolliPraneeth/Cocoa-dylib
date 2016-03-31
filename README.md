# Cocoa-dylib
cocoa c++ dylib generation and usage 

steps to do this

-in dylib creation project 

Build setting -> installation Directory =  @rpath
add visibility in c++ code

-other project whitch uses dylib
Build Phases-> Copy files -> set destination to Frameworks Add dylib
Build Phases-> Link Binary with Libraries -> Add dylib
Build setting-> Runpath Search Paths = @executable_path/../Frameworks
Added c++ header in Header Search Paths

Run the project add test
#if any issue 
Read Symbols From dylib
$ nm -gU /libAdd.dylib 
0000000000001170 T __ZN3Add10HelloWorldEPKc
0000000000001220 T __ZN3Add6AddTwoEii

Check installation name of the dylib
$otool -L testing.1.dylib
@rpath/libAdd.dylib (compatibility version 1.0.0, current version 1.0.0)
/usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 120.1.0)
/usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1226.10.1)