# SAPLE PROJECT TO LEARN HOW TO USE JNI

In this project you will find a little sum and multiply calculator implemented in C language and runing it in Java.

# COMANDS TO COMPILE .SO LIBRARY

The project contains the .so file in the jniexample folder. If you don't change C code, compile is not mandatory.

To generate .o:

gcc -c -fPIC -I /Library/Java/JavaVirtualMachines/jdk1.8.0_201.jdk/Contents/Home/include/ -I /Library/Java/JavaVirtualMachines/jdk1.8.0_201.jdk/Contents/Home/include/darwin/ com_urbanojvr_jniexample_JavaCalculator.c -o com_urbanojvr_jniexample_JavaCalculator.o

To generate .so from .o:

 com_urbanojvr_jniexample_JavaCalculator.o -shared -o libcalculator.so
 
 # EXECUTE
 
To can succesfully run the example, you must fill two constants with valid information.

    - JavaCalculator.ABSOLUTE_LIB_DIR: absolute directory to folder that contains the .SO library compiled
    - Main.YOUR_NAME: to personalize the greeting
    
