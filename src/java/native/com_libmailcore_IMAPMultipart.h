/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_IMAPMultipart */

#ifndef _Included_com_libmailcore_IMAPMultipart
#define _Included_com_libmailcore_IMAPMultipart
#ifdef __cplusplus
extern "C" {
#endif
#undef com_libmailcore_IMAPMultipart_serialVersionUID
#define com_libmailcore_IMAPMultipart_serialVersionUID 1LL
#undef com_libmailcore_IMAPMultipart_serialVersionUID
#define com_libmailcore_IMAPMultipart_serialVersionUID 1LL
/*
 * Class:     com_libmailcore_IMAPMultipart
 * Method:    setPartID
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMultipart_setPartID
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPMultipart
 * Method:    partID
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_IMAPMultipart_partID
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMultipart
 * Method:    setupNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMultipart_setupNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif