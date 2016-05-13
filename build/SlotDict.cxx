// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddISlotDict

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
#include "include/Slot.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Slot(void *p = 0);
   static void *newArray_Slot(Long_t size, void *p);
   static void delete_Slot(void *p);
   static void deleteArray_Slot(void *p);
   static void destruct_Slot(void *p);
   static void streamer_Slot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Slot*)
   {
      ::Slot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Slot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Slot", ::Slot::Class_Version(), "include/Slot.h", 17,
                  typeid(::Slot), DefineBehavior(ptr, ptr),
                  &::Slot::Dictionary, isa_proxy, 16,
                  sizeof(::Slot) );
      instance.SetNew(&new_Slot);
      instance.SetNewArray(&newArray_Slot);
      instance.SetDelete(&delete_Slot);
      instance.SetDeleteArray(&deleteArray_Slot);
      instance.SetDestructor(&destruct_Slot);
      instance.SetStreamerFunc(&streamer_Slot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Slot*)
   {
      return GenerateInitInstanceLocal((::Slot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Slot*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Slot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Slot::Class_Name()
{
   return "Slot";
}

//______________________________________________________________________________
const char *Slot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Slot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Slot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Slot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Slot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Slot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Slot::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Slot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Slot::Streamer(TBuffer &R__b)
{
   // Stream an object of class Slot.

   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Slot(void *p) {
      return  p ? new(p) ::Slot : new ::Slot;
   }
   static void *newArray_Slot(Long_t nElements, void *p) {
      return p ? new(p) ::Slot[nElements] : new ::Slot[nElements];
   }
   // Wrapper around operator delete
   static void delete_Slot(void *p) {
      delete ((::Slot*)p);
   }
   static void deleteArray_Slot(void *p) {
      delete [] ((::Slot*)p);
   }
   static void destruct_Slot(void *p) {
      typedef ::Slot current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_Slot(TBuffer &buf, void *obj) {
      ((::Slot*)obj)->::Slot::Streamer(buf);
   }
} // end of namespace ROOT for class ::Slot

namespace {
  void TriggerDictionaryInitialization_SlotDict_Impl() {
    static const char* headers[] = {
"include/Slot.h",
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
class __attribute__((annotate("$clingAutoload$include/Slot.h")))  Slot;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/Slot.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Slot", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SlotDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SlotDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SlotDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SlotDict() {
  TriggerDictionaryInitialization_SlotDict_Impl();
}
