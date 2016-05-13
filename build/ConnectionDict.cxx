// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddIConnectionDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "include/Connection.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Connection_Dictionary();
   static void Connection_TClassManip(TClass*);
   static void *new_Connection(void *p = 0);
   static void *newArray_Connection(Long_t size, void *p);
   static void delete_Connection(void *p);
   static void deleteArray_Connection(void *p);
   static void destruct_Connection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Connection*)
   {
      ::Connection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Connection),0);
      static ::ROOT::TGenericClassInfo 
         instance("Connection", "include/Connection.h", 39,
                  typeid(::Connection), DefineBehavior(ptr, ptr),
                  &Connection_Dictionary, isa_proxy, 0,
                  sizeof(::Connection) );
      instance.SetNew(&new_Connection);
      instance.SetNewArray(&newArray_Connection);
      instance.SetDelete(&delete_Connection);
      instance.SetDeleteArray(&deleteArray_Connection);
      instance.SetDestructor(&destruct_Connection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Connection*)
   {
      return GenerateInitInstanceLocal((::Connection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Connection*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Connection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Connection*)0x0)->GetClass();
      Connection_TClassManip(theClass);
   return theClass;
   }

   static void Connection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Connection(void *p) {
      return  p ? new(p) ::Connection : new ::Connection;
   }
   static void *newArray_Connection(Long_t nElements, void *p) {
      return p ? new(p) ::Connection[nElements] : new ::Connection[nElements];
   }
   // Wrapper around operator delete
   static void delete_Connection(void *p) {
      delete ((::Connection*)p);
   }
   static void deleteArray_Connection(void *p) {
      delete [] ((::Connection*)p);
   }
   static void destruct_Connection(void *p) {
      typedef ::Connection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Connection

namespace {
  void TriggerDictionaryInitialization_ConnectionDict_Impl() {
    static const char* headers[] = {
"include/Connection.h",
0
    };
    static const char* includePaths[] = {
"/usr/local/root/include",
"/Users/sambein/Desktop/Physics/TestBeam/Feb2016/T1041/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$include/Connection.h")))  Connection;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/Connection.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Connection", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ConnectionDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ConnectionDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ConnectionDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ConnectionDict() {
  TriggerDictionaryInitialization_ConnectionDict_Impl();
}
