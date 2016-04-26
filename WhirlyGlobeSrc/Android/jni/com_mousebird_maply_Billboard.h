/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_Billboard */

#ifndef _Included_com_mousebird_maply_Billboard
#define _Included_com_mousebird_maply_Billboard
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    setCenter
 * Signature: (Lcom/mousebird/maply/Point3d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Billboard_setCenter
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    getCenter
 * Signature: ()Lcom/mousebird/maply/Point3d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_Billboard_getCenter
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    setSize
 * Signature: (Lcom/mousebird/maply/Point2d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Billboard_setSize
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    getSize
 * Signature: ()Lcom/mousebird/maply/Point2d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_Billboard_getSize
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    setSelectable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Billboard_setSelectable
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    getSelectable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mousebird_maply_Billboard_getSelectable
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    addPoly
 * Signature: (Ljava/util/List;Ljava/util/List;[FLjava/util/List;J)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Billboard_addPoly
  (JNIEnv *, jobject, jobject, jobject, jfloatArray, jobject, jlong);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Billboard_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Billboard_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Billboard
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Billboard_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif