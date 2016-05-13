// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddIwaveInterfaceDict

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
#include "include/waveInterface.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_waveInterface(void *p = 0);
   static void *newArray_waveInterface(Long_t size, void *p);
   static void delete_waveInterface(void *p);
   static void deleteArray_waveInterface(void *p);
   static void destruct_waveInterface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::waveInterface*)
   {
      ::waveInterface *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::waveInterface >(0);
      static ::ROOT::TGenericClassInfo 
         instance("waveInterface", ::waveInterface::Class_Version(), "include/waveInterface.h", 38,
                  typeid(::waveInterface), DefineBehavior(ptr, ptr),
                  &::waveInterface::Dictionary, isa_proxy, 4,
                  sizeof(::waveInterface) );
      instance.SetNew(&new_waveInterface);
      instance.SetNewArray(&newArray_waveInterface);
      instance.SetDelete(&delete_waveInterface);
      instance.SetDeleteArray(&deleteArray_waveInterface);
      instance.SetDestructor(&destruct_waveInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::waveInterface*)
   {
      return GenerateInitInstanceLocal((::waveInterface*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::waveInterface*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr waveInterface::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *waveInterface::Class_Name()
{
   return "waveInterface";
}

//______________________________________________________________________________
const char *waveInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::waveInterface*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int waveInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::waveInterface*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *waveInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::waveInterface*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *waveInterface::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::waveInterface*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void waveInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class waveInterface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(waveInterface::Class(),this);
   } else {
      R__b.WriteClassBuffer(waveInterface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_waveInterface(void *p) {
      return  p ? new(p) ::waveInterface : new ::waveInterface;
   }
   static void *newArray_waveInterface(Long_t nElements, void *p) {
      return p ? new(p) ::waveInterface[nElements] : new ::waveInterface[nElements];
   }
   // Wrapper around operator delete
   static void delete_waveInterface(void *p) {
      delete ((::waveInterface*)p);
   }
   static void deleteArray_waveInterface(void *p) {
      delete [] ((::waveInterface*)p);
   }
   static void destruct_waveInterface(void *p) {
      typedef ::waveInterface current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::waveInterface

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = 0);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>),0);
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 398,
                  typeid(set<int>), DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const set<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<int>*)0x0)->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete ((set<int>*)p);
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] ((set<int>*)p);
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace {
  void TriggerDictionaryInitialization_waveInterfaceDict_Impl() {
    static const char* headers[] = {
"include/waveInterface.h",
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
class __attribute__((annotate("$clingAutoload$include/waveInterface.h")))  waveInterface;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/waveInterface.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"waveInterface", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("waveInterfaceDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_waveInterfaceDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_waveInterfaceDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_waveInterfaceDict() {
  TriggerDictionaryInitialization_waveInterfaceDict_Impl();
}
