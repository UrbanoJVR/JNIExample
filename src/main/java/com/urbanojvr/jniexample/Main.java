package com.urbanojvr.jniexample;

public class Main {

    public static final String YOUR_NAME = "yourNameHere";

    public static void main (String[] args){
        int num = 20;
        int num2 = 10;

        JavaCalculator javaCalc = new JavaCalculator();

        int sum = javaCalc.sum(num, num2);
        int mult = javaCalc.multiply(num, num2);
        String greeting = javaCalc.sayHello(YOUR_NAME);

        System.out.println(num + " + " + num2 + " = " + sum);
        System.out.println(num + " x " + num2 + " = " + mult);
        System.out.println(greeting);
    }

}
