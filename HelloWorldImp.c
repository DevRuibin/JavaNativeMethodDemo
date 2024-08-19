#include <jni.h>
#include "helloworld_HelloWorld.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_helloworld_HelloWorld_displayHelloWorld
  (JNIEnv * a, jobject b){
    printf("Hello World!\n");
    return;
  }