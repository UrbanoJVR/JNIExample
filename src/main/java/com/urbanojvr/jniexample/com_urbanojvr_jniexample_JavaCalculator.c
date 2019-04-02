#include "com_urbanojvr_jniexample_JavaCalculator.h"
#include <string.h>

JNIEXPORT jint JNICALL Java_com_urbanojvr_jniexample_JavaCalculator_sum
  (JNIEnv *env, jobject jobj, jint jinteger1, jint jinteger2){

    int x = jinteger1;
    int y = jinteger2;
    int sum = x + y;

    return sum;
  }

JNIEXPORT jint JNICALL Java_com_urbanojvr_jniexample_JavaCalculator_multiply
  (JNIEnv *env, jobject jobj, jint jinteger1, jint jinteger2){

    int x = jinteger1;
    int y = jinteger2;
    int mult = x * y;

    return mult;
  }

JNIEXPORT jstring JNICALL Java_com_urbanojvr_jniexample_JavaCalculator_sayHello
  (JNIEnv *env, jobject jobj, jstring stringFromJava){

    const char *name = (*env)->GetStringUTFChars(env, stringFromJava, 0);
    char message[50] = "Hello from C code, ";
    jstring stringToJava;

    strcat(message, name);

    (*env)->ReleaseStringUTFChars(env, stringFromJava, name);

    stringToJava = (*env)->NewStringUTF(env, message);

    return stringToJava;
  }
