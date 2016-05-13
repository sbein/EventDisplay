// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddITrackRecoDict

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
#include "include/TrackReco.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *TrackReco_Dictionary();
   static void TrackReco_TClassManip(TClass*);
   static void *new_TrackReco(void *p = 0);
   static void *newArray_TrackReco(Long_t size, void *p);
   static void delete_TrackReco(void *p);
   static void deleteArray_TrackReco(void *p);
   static void destruct_TrackReco(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackReco*)
   {
      ::TrackReco *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TrackReco),0);
      static ::ROOT::TGenericClassInfo 
         instance("TrackReco", "include/TrackReco.h", 11,
                  typeid(::TrackReco), DefineBehavior(ptr, ptr),
                  &TrackReco_Dictionary, isa_proxy, 0,
                  sizeof(::TrackReco) );
      instance.SetNew(&new_TrackReco);
      instance.SetNewArray(&newArray_TrackReco);
      instance.SetDelete(&delete_TrackReco);
      instance.SetDeleteArray(&deleteArray_TrackReco);
      instance.SetDestructor(&destruct_TrackReco);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackReco*)
   {
      return GenerateInitInstanceLocal((::TrackReco*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TrackReco*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TrackReco_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TrackReco*)0x0)->GetClass();
      TrackReco_TClassManip(theClass);
   return theClass;
   }

   static void TrackReco_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackReco(void *p) {
      return  p ? new(p) ::TrackReco : new ::TrackReco;
   }
   static void *newArray_TrackReco(Long_t nElements, void *p) {
      return p ? new(p) ::TrackReco[nElements] : new ::TrackReco[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackReco(void *p) {
      delete ((::TrackReco*)p);
   }
   static void deleteArray_TrackReco(void *p) {
      delete [] ((::TrackReco*)p);
   }
   static void destruct_TrackReco(void *p) {
      typedef ::TrackReco current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackReco

namespace {
  void TriggerDictionaryInitialization_TrackRecoDict_Impl() {
    static const char* headers[] = {
"include/TrackReco.h",
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
class __attribute__((annotate("$clingAutoload$include/TrackReco.h")))  TrackReco;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/TrackReco.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TrackReco", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TrackRecoDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TrackRecoDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TrackRecoDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TrackRecoDict() {
  TriggerDictionaryInitialization_TrackRecoDict_Impl();
}
