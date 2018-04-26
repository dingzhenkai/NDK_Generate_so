#include <jni.h>
#include <string>
#include <android/log.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_test_bonjour_ndk_1generate_1so_MainActivity_logloadso(JNIEnv *env, jobject instance) {

    __android_log_print(ANDROID_LOG_INFO, "System.out", "TestAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
}


JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
{
    JNIEnv* env = NULL;
    jint result = -1;

    __android_log_print(ANDROID_LOG_INFO, "JNI_Onload", "TestLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL");
    /* success -- return valid version number */
    result = JNI_VERSION_1_4;

    return result;
}