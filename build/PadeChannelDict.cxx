// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddIPadeChannelDict

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
#include "include/PadeChannel.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_PadeChannel(void *p = 0);
   static void *newArray_PadeChannel(Long_t size, void *p);
   static void delete_PadeChannel(void *p);
   static void deleteArray_PadeChannel(void *p);
   static void destruct_PadeChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PadeChannel*)
   {
      ::PadeChannel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PadeChannel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PadeChannel", ::PadeChannel::Class_Version(), "include/PadeChannel.h", 14,
                  typeid(::PadeChannel), DefineBehavior(ptr, ptr),
                  &::PadeChannel::Dictionary, isa_proxy, 4,
                  sizeof(::PadeChannel) );
      instance.SetNew(&new_PadeChannel);
      instance.SetNewArray(&newArray_PadeChannel);
      instance.SetDelete(&delete_PadeChannel);
      instance.SetDeleteArray(&deleteArray_PadeChannel);
      instance.SetDestructor(&destruct_PadeChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PadeChannel*)
   {
      return GenerateInitInstanceLocal((::PadeChannel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::PadeChannel*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PadeChannel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PadeChannel::Class_Name()
{
   return "PadeChannel";
}

//______________________________________________________________________________
const char *PadeChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadeChannel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PadeChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadeChannel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PadeChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadeChannel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PadeChannel::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadeChannel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PadeChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class PadeChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PadeChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(PadeChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PadeChannel(void *p) {
      return  p ? new(p) ::PadeChannel : new ::PadeChannel;
   }
   static void *newArray_PadeChannel(Long_t nElements, void *p) {
      return p ? new(p) ::PadeChannel[nElements] : new ::PadeChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_PadeChannel(void *p) {
      delete ((::PadeChannel*)p);
   }
   static void deleteArray_PadeChannel(void *p) {
      delete [] ((::PadeChannel*)p);
   }
   static void destruct_PadeChannel(void *p) {
      typedef ::PadeChannel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PadeChannel

namespace {
  void TriggerDictionaryInitialization_PadeChannelDict_Impl() {
    static const char* headers[] = {
"include/PadeChannel.h",
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
class __attribute__((annotate("$clingAutoload$include/PadeChannel.h")))  PadeChannel;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/PadeChannel.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"PadeChannel", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PadeChannelDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PadeChannelDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PadeChannelDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PadeChannelDict() {
  TriggerDictionaryInitialization_PadeChannelDict_Impl();
}
