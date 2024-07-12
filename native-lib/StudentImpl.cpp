#include "Student.h"

/*
 * Class:     Student
 * Method:    callNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_Student_callNative(JNIEnv * env, jobject obj)
{
 jclass cls = env->GetObjectClass(obj);
 jfieldID fieldID = env->GetFieldID(cls, "id", "I");
 jint id = env->GetIntField(obj, fieldID);
 printf("id = %d\n", id);
 env->SetIntField(obj, fieldID, ++id);

 fieldID = env->GetFieldID(cls, "name", "Ljava/lang/String;");
 jstring name = (jstring)env->GetObjectField(obj, fieldID);
 const char *nameChars = env->GetStringUTFChars(name, NULL);
 printf("name = %s\n", nameChars);

 env->ReleaseStringUTFChars(name, nameChars);

 jstring newName = env->NewStringUTF("krxk");
 env->SetObjectField(obj, fieldID, newName);
}
