#include "asus_jerry_chen_gr_MyString.h"

JNIEXPORT jstring JNICALL Java_asus_jerry_1chen_gr_MyString_getStringFromJni
  (JNIEnv *env, jobject obi)
  {
    return (*env)->NewStringUTF(env,"This just a test ---by jerry_chen!");
  }
