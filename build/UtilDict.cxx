// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddIUtilDict

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
#include "include/Util.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Util_Dictionary();
   static void Util_TClassManip(TClass*);
   static void *new_Util(void *p = 0);
   static void *newArray_Util(Long_t size, void *p);
   static void delete_Util(void *p);
   static void deleteArray_Util(void *p);
   static void destruct_Util(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Util*)
   {
      ::Util *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Util),0);
      static ::ROOT::TGenericClassInfo 
         instance("Util", "include/Util.h", 37,
                  typeid(::Util), DefineBehavior(ptr, ptr),
                  &Util_Dictionary, isa_proxy, 0,
                  sizeof(::Util) );
      instance.SetNew(&new_Util);
      instance.SetNewArray(&newArray_Util);
      instance.SetDelete(&delete_Util);
      instance.SetDeleteArray(&deleteArray_Util);
      instance.SetDestructor(&destruct_Util);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Util*)
   {
      return GenerateInitInstanceLocal((::Util*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Util*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Util_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Util*)0x0)->GetClass();
      Util_TClassManip(theClass);
   return theClass;
   }

   static void Util_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Util(void *p) {
      return  p ? new(p) ::Util : new ::Util;
   }
   static void *newArray_Util(Long_t nElements, void *p) {
      return p ? new(p) ::Util[nElements] : new ::Util[nElements];
   }
   // Wrapper around operator delete
   static void delete_Util(void *p) {
      delete ((::Util*)p);
   }
   static void deleteArray_Util(void *p) {
      delete [] ((::Util*)p);
   }
   static void destruct_Util(void *p) {
      typedef ::Util current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Util

namespace {
  void TriggerDictionaryInitialization_UtilDict_Impl() {
    static const char* headers[] = {
"include/Util.h",
0
    };
    static const char* includePaths[] = {
"/usr/local/root/include",
"/Users/sambein/Desktop/Physics/TestBeam/TBOct/T1041/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
struct __attribute__((annotate("$clingAutoload$include/Util.h")))  Util;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/Util.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Util", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("UtilDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_UtilDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_UtilDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_UtilDict() {
  TriggerDictionaryInitialization_UtilDict_Impl();
}
