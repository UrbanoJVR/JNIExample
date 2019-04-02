package com.urbanojvr.jniexample;

public class JavaCalculator {

    public static final String ABSOLUTE_LIB_DIR = "Library folder here";
    public static final String LIBRARY_NAME = "libcalculator.so";

    static {
        System.load(ABSOLUTE_LIB_DIR + LIBRARY_NAME);
    }

    public native int sum(int a, int b);

    public native int multiply(int a, int b);

    public native String sayHello(String name);

}
