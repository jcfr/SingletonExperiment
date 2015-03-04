
Experiment illustrating how a singleton class defined in a static
library named `SingletonComponent` can be linked to two shared libraries
named `Component1` and `Component2` themselves linked into a `main` executable.

```
jcfr@karakoram:~$ cd SingletonExperiment/

jcfr@karakoram:SingletonExperiment $ mkdir build

jcfr@karakoram:SingletonExperiment $ cd build

jcfr@karakoram:build $ cmake ../
-- The C compiler identification is GNU 4.8.2
-- The CXX compiler identification is GNU 4.8.2
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Setting build type to 'Debug' as none was specified.
-- Performing Test COMPILER_HAS_HIDDEN_VISIBILITY
-- Performing Test COMPILER_HAS_HIDDEN_VISIBILITY - Success
-- Performing Test COMPILER_HAS_HIDDEN_INLINE_VISIBILITY
-- Performing Test COMPILER_HAS_HIDDEN_INLINE_VISIBILITY - Success
-- Performing Test COMPILER_HAS_DEPRECATED_ATTR
-- Performing Test COMPILER_HAS_DEPRECATED_ATTR - Success
-- Configuring done
-- Generating done
-- Build files have been written to: /home/jcfr/Projects/sandbox/SingletonExperiment/build

jcfr@karakoram:build $ make
Scanning dependencies of target SingletonComponent
[ 25%] Building CXX object CMakeFiles/SingletonComponent.dir/SingletonComponent.cpp.o
Linking CXX static library libSingletonComponent.a
[ 25%] Built target SingletonComponent
Scanning dependencies of target Component1
[ 50%] Building CXX object CMakeFiles/Component1.dir/Component1.cpp.o
Linking CXX shared library libComponent1.so
[ 50%] Built target Component1
Scanning dependencies of target Component2
[ 75%] Building CXX object CMakeFiles/Component2.dir/Component2.cpp.o
Linking CXX shared library libComponent2.so
[ 75%] Built target Component2
Scanning dependencies of target main
[100%] Building CXX object CMakeFiles/main.dir/main.cpp.o
Linking CXX executable main
[100%] Built target main

jcfr@karakoram:build $ ./main 
SingletonComponent: ctor
main: Hello
Component1: ctor
SingletonComponent[0x1271010] makeSomething (called from Component1-ctor)
Component2: ctor
SingletonComponent[0x1271010] makeSomething (called from Component2-ctor)
main: Bye
Component2: dtor
Component1: dtor
SingletonComponent: dtor
```

