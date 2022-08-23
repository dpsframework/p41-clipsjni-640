/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_sf_clipsrules_jni_Environment */

#ifndef _Included_net_sf_clipsrules_jni_Environment
#define _Included_net_sf_clipsrules_jni_Environment
#ifdef __cplusplus
extern "C" {
#endif
#undef net_sf_clipsrules_jni_Environment_CLIPSJNI_LOAD_BY_JAR
#define net_sf_clipsrules_jni_Environment_CLIPSJNI_LOAD_BY_JAR 0L
#undef net_sf_clipsrules_jni_Environment_CLIPSJNI_LOAD_BY_PATH
#define net_sf_clipsrules_jni_Environment_CLIPSJNI_LOAD_BY_PATH 1L
#undef net_sf_clipsrules_jni_Environment_CLIPSJNI_JARFILE
#define net_sf_clipsrules_jni_Environment_CLIPSJNI_JARFILE 2L
#undef net_sf_clipsrules_jni_Environment_CLIPSJNI_JARNAME
#define net_sf_clipsrules_jni_Environment_CLIPSJNI_JARNAME 3L
#undef net_sf_clipsrules_jni_Environment_CLIPSJNI_JARDIR
#define net_sf_clipsrules_jni_Environment_CLIPSJNI_JARDIR 4L
/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    createEnvironment
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_sf_clipsrules_jni_Environment_createEnvironment
  (JNIEnv *, jobject);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_clear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    load
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_load
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    loadFromString
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_loadFromString
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    loadFromStringWithOutput
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_loadFromStringWithOutput
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    build
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_build
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_reset
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    run
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_net_sf_clipsrules_jni_Environment_run
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    assertString
 * Signature: (JLjava/lang/String;)Lnet/sf/clipsrules/jni/FactAddressValue;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_assertString
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    makeInstance
 * Signature: (JLjava/lang/String;)Lnet/sf/clipsrules/jni/InstanceAddressValue;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_makeInstance
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    watch
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_watch
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    unwatch
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_unwatch
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    eval
 * Signature: (JLjava/lang/String;)Lnet/sf/clipsrules/jni/PrimitiveValue;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_eval
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    validWatchItem
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_validWatchItem
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getWatchItem
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_getWatchItem
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    addUserFunction
 * Signature: (JLjava/lang/String;Ljava/lang/String;IILjava/lang/String;Lnet/sf/clipsrules/jni/UserFunction;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_clipsrules_jni_Environment_addUserFunction
  (JNIEnv *, jobject, jlong, jstring, jstring, jint, jint, jstring, jobject);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    removeUserFunction
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_removeUserFunction
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    addRouter
 * Signature: (JLjava/lang/String;ILnet/sf/clipsrules/jni/Router;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_addRouter
  (JNIEnv *, jobject, jlong, jstring, jint, jobject);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    deleteRouter
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_deleteRouter
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    activateRouter
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_activateRouter
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    deactivateRouter
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_deactivateRouter
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    printString
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_printString
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    printRouterExists
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_printRouterExists
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    commandLoop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_commandLoop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    changeDirectory
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_clipsrules_jni_Environment_changeDirectory
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getParsingFileName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_sf_clipsrules_jni_Environment_getParsingFileName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setParsingFileName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setParsingFileName
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    loadFacts
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_loadFacts
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setHaltExecution
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setHaltExecution
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setHaltRules
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setHaltRules
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getModuleList
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getModuleList
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getFocusStack
 * Signature: (J)Lnet/sf/clipsrules/jni/FocusStack;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getFocusStack
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getFactScopes
 * Signature: (J)Ljava/util/HashMap;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getFactScopes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getInstanceScopes
 * Signature: (J)Ljava/util/HashMap;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getInstanceScopes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getFactList
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getFactList
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getInstanceList
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getInstanceList
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getAgenda
 * Signature: (JLjava/lang/String;)Lnet/sf/clipsrules/jni/Agenda;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getAgenda
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getDeftemplateText
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_sf_clipsrules_jni_Environment_getDeftemplateText
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getDefclassText
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_sf_clipsrules_jni_Environment_getDefclassText
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getDefruleText
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_sf_clipsrules_jni_Environment_getDefruleText
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    destroyEnvironment
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_destroyEnvironment
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    flushInputBuffer
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_flushInputBuffer
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getInputBuffer
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_sf_clipsrules_jni_Environment_getInputBuffer
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setInputBuffer
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setInputBuffer
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getInputBufferCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_net_sf_clipsrules_jni_Environment_getInputBufferCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setInputBufferCount
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_net_sf_clipsrules_jni_Environment_setInputBufferCount
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    expandInputBuffer
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_expandInputBuffer
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    appendInputBuffer
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_appendInputBuffer
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    appendDribble
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_appendDribble
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    inputBufferContainsCommand
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_inputBufferContainsCommand
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    commandLoopOnceThenBatch
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_commandLoopOnceThenBatch
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    commandLoopBatchDriver
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_commandLoopBatchDriver
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    openStringBatch
 * Signature: (JLjava/lang/String;Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_openStringBatch
  (JNIEnv *, jobject, jlong, jstring, jstring, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setPeriodicCallbackEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setPeriodicCallbackEnabled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    addPeriodicCallback
 * Signature: (JLjava/lang/String;ILnet/sf/clipsrules/jni/PeriodicCallback;)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_addPeriodicCallback
  (JNIEnv *, jobject, jlong, jstring, jint, jobject);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    removePeriodicCallback
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_removePeriodicCallback
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    printBanner
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_printBanner
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    printPrompt
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_printPrompt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getAgendaChanged
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_getAgendaChanged
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setAgendaChanged
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setAgendaChanged
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getFocusChanged
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_getFocusChanged
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setFocusChanged
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setFocusChanged
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getFactListChanged
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_getFactListChanged
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setFactListChanged
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setFactListChanged
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getInstancesChanged
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_net_sf_clipsrules_jni_Environment_getInstancesChanged
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setInstancesChanged
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setInstancesChanged
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    retainFact
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_retainFact
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    releaseFact
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_releaseFact
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    retainInstance
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_retainInstance
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    releaseInstance
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_releaseInstance
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    findInstanceByName
 * Signature: (JLjava/lang/String;)Lnet/sf/clipsrules/jni/InstanceAddressValue;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_findInstanceByName
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    incrementAddressCount
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_incrementAddressCount
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    decrementAddressCount
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_decrementAddressCount
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    setErrorCallback
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_clipsrules_jni_Environment_setErrorCallback
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getCLIPSVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_sf_clipsrules_jni_Environment_getCLIPSVersion
  (JNIEnv *, jclass);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    factIndex
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)J
 */
JNIEXPORT jlong JNICALL Java_net_sf_clipsrules_jni_Environment_factIndex
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getFactSlot
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJLjava/lang/String;)Lnet/sf/clipsrules/jni/PrimitiveValue;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_getFactSlot
  (JNIEnv *, jobject, jobject, jlong, jlong, jstring);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    getInstanceName
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_sf_clipsrules_jni_Environment_getInstanceName
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     net_sf_clipsrules_jni_Environment
 * Method:    directGetSlot
 * Signature: (Lnet/sf/clipsrules/jni/Environment;JJLjava/lang/String;)Lnet/sf/clipsrules/jni/PrimitiveValue;
 */
JNIEXPORT jobject JNICALL Java_net_sf_clipsrules_jni_Environment_directGetSlot
  (JNIEnv *, jobject, jobject, jlong, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif
