// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddICalRecoDict

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
#include "include/CalReco.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *CalReco_Dictionary();
   static void CalReco_TClassManip(TClass*);
   static void *new_CalReco(void *p = 0);
   static void *newArray_CalReco(Long_t size, void *p);
   static void delete_CalReco(void *p);
   static void deleteArray_CalReco(void *p);
   static void destruct_CalReco(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CalReco*)
   {
      ::CalReco *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CalReco),0);
      static ::ROOT::TGenericClassInfo 
         instance("CalReco", "include/CalReco.h", 14,
                  typeid(::CalReco), DefineBehavior(ptr, ptr),
                  &CalReco_Dictionary, isa_proxy, 0,
                  sizeof(::CalReco) );
      instance.SetNew(&new_CalReco);
      instance.SetNewArray(&newArray_CalReco);
      instance.SetDelete(&delete_CalReco);
      instance.SetDeleteArray(&deleteArray_CalReco);
      instance.SetDestructor(&destruct_CalReco);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CalReco*)
   {
      return GenerateInitInstanceLocal((::CalReco*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CalReco*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CalReco_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CalReco*)0x0)->GetClass();
      CalReco_TClassManip(theClass);
   return theClass;
   }

   static void CalReco_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_CalReco(void *p) {
      return  p ? new(p) ::CalReco : new ::CalReco;
   }
   static void *newArray_CalReco(Long_t nElements, void *p) {
      return p ? new(p) ::CalReco[nElements] : new ::CalReco[nElements];
   }
   // Wrapper around operator delete
   static void delete_CalReco(void *p) {
      delete ((::CalReco*)p);
   }
   static void deleteArray_CalReco(void *p) {
      delete [] ((::CalReco*)p);
   }
   static void destruct_CalReco(void *p) {
      typedef ::CalReco current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CalReco

namespace {
  void TriggerDictionaryInitialization_CalRecoDict_Impl() {
    static const char* headers[] = {
"include/CalReco.h",
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
class __attribute__((annotate("$clingAutoload$include/CalReco.h")))  CalReco;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/CalReco.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CalReco", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CalRecoDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CalRecoDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CalRecoDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CalRecoDict() {
  TriggerDictionaryInitialization_CalRecoDict_Impl();
}
