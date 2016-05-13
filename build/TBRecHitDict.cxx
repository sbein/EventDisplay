// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddITBRecHitDict

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
#include "include/TBRecHit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TBRecHit(void *p = 0);
   static void *newArray_TBRecHit(Long_t size, void *p);
   static void delete_TBRecHit(void *p);
   static void deleteArray_TBRecHit(void *p);
   static void destruct_TBRecHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBRecHit*)
   {
      ::TBRecHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBRecHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBRecHit", ::TBRecHit::Class_Version(), "include/TBRecHit.h", 22,
                  typeid(::TBRecHit), DefineBehavior(ptr, ptr),
                  &::TBRecHit::Dictionary, isa_proxy, 4,
                  sizeof(::TBRecHit) );
      instance.SetNew(&new_TBRecHit);
      instance.SetNewArray(&newArray_TBRecHit);
      instance.SetDelete(&delete_TBRecHit);
      instance.SetDeleteArray(&deleteArray_TBRecHit);
      instance.SetDestructor(&destruct_TBRecHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBRecHit*)
   {
      return GenerateInitInstanceLocal((::TBRecHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TBRecHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TBRecHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBRecHit::Class_Name()
{
   return "TBRecHit";
}

//______________________________________________________________________________
const char *TBRecHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBRecHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBRecHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBRecHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBRecHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBRecHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBRecHit::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBRecHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TBRecHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBRecHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBRecHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBRecHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBRecHit(void *p) {
      return  p ? new(p) ::TBRecHit : new ::TBRecHit;
   }
   static void *newArray_TBRecHit(Long_t nElements, void *p) {
      return p ? new(p) ::TBRecHit[nElements] : new ::TBRecHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBRecHit(void *p) {
      delete ((::TBRecHit*)p);
   }
   static void deleteArray_TBRecHit(void *p) {
      delete [] ((::TBRecHit*)p);
   }
   static void destruct_TBRecHit(void *p) {
      typedef ::TBRecHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TBRecHit

namespace ROOT {
   static TClass *vectorlETBRecHitgR_Dictionary();
   static void vectorlETBRecHitgR_TClassManip(TClass*);
   static void *new_vectorlETBRecHitgR(void *p = 0);
   static void *newArray_vectorlETBRecHitgR(Long_t size, void *p);
   static void delete_vectorlETBRecHitgR(void *p);
   static void deleteArray_vectorlETBRecHitgR(void *p);
   static void destruct_vectorlETBRecHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TBRecHit>*)
   {
      vector<TBRecHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TBRecHit>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TBRecHit>", -2, "vector", 481,
                  typeid(vector<TBRecHit>), DefineBehavior(ptr, ptr),
                  &vectorlETBRecHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TBRecHit>) );
      instance.SetNew(&new_vectorlETBRecHitgR);
      instance.SetNewArray(&newArray_vectorlETBRecHitgR);
      instance.SetDelete(&delete_vectorlETBRecHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlETBRecHitgR);
      instance.SetDestructor(&destruct_vectorlETBRecHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TBRecHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TBRecHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETBRecHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TBRecHit>*)0x0)->GetClass();
      vectorlETBRecHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETBRecHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETBRecHitgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TBRecHit> : new vector<TBRecHit>;
   }
   static void *newArray_vectorlETBRecHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TBRecHit>[nElements] : new vector<TBRecHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETBRecHitgR(void *p) {
      delete ((vector<TBRecHit>*)p);
   }
   static void deleteArray_vectorlETBRecHitgR(void *p) {
      delete [] ((vector<TBRecHit>*)p);
   }
   static void destruct_vectorlETBRecHitgR(void *p) {
      typedef vector<TBRecHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TBRecHit>

namespace {
  void TriggerDictionaryInitialization_TBRecHitDict_Impl() {
    static const char* headers[] = {
"include/TBRecHit.h",
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
class __attribute__((annotate("$clingAutoload$include/TBRecHit.h")))  TBRecHit;
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/TBRecHit.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TBRecHit", payloadCode, "@",
"vector<TBRecHit>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TBRecHitDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TBRecHitDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TBRecHitDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TBRecHitDict() {
  TriggerDictionaryInitialization_TBRecHitDict_Impl();
}
