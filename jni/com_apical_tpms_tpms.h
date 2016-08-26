/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_apical_tpms_tpms */

#ifndef _Included_com_apical_tpms_tpms
#define _Included_com_apical_tpms_tpms
#ifdef __cplusplus
extern "C" {
#endif

#undef com_apical_tpms_tpms_TPMS_TYPE_ALERT
#define com_apical_tpms_tpms_TPMS_TYPE_ALERT 98L
#undef com_apical_tpms_tpms_TPMS_TYPE_TIRES
#define com_apical_tpms_tpms_TPMS_TYPE_TIRES 99L
#undef com_apical_tpms_tpms_TPMS_TYPE_LEARN
#define com_apical_tpms_tpms_TPMS_TYPE_LEARN 102L
#undef com_apical_tpms_tpms_MAX_TIRES_NUM
#define com_apical_tpms_tpms_MAX_TIRES_NUM 5L
#undef com_apical_tpms_tpms_MAX_ALERT_NUM
#define com_apical_tpms_tpms_MAX_ALERT_NUM 6L

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeInitCallback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_apical_tpms_tpms_nativeInitCallback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeInit
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_apical_tpms_tpms_nativeInit
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_apical_tpms_tpms_nativeFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeHandShake
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeHandShake
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeConfigAlert
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeConfigAlert__JIII
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeConfigAlert
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeConfigAlert__J_3I
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeRequestAlert
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeRequestAlert
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeRequestTire
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeRequestTire
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeUnwatchTire
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeUnwatchTire
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeLearnTire
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeLearnTire
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_apical_tpms_tpms
 * Method:    nativeGetParams
 * Signature: (JI[I)I
 */
JNIEXPORT jint JNICALL Java_com_apical_tpms_tpms_nativeGetParams
  (JNIEnv *, jclass, jlong, jint, jintArray);

#ifdef __cplusplus
}
#endif
#endif