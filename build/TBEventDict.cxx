// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddITBEventDict

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
#include "include/TBEvent.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_PadeHeader(void *p = 0);
   static void *newArray_PadeHeader(Long_t size, void *p);
   static void delete_PadeHeader(void *p);
   static void deleteArray_PadeHeader(void *p);
   static void destruct_PadeHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PadeHeader*)
   {
      ::PadeHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PadeHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PadeHeader", ::PadeHeader::Class_Version(), "include/TBEvent.h", 11,
                  typeid(::PadeHeader), DefineBehavior(ptr, ptr),
                  &::PadeHeader::Dictionary, isa_proxy, 4,
                  sizeof(::PadeHeader) );
      instance.SetNew(&new_PadeHeader);
      instance.SetNewArray(&newArray_PadeHeader);
      instance.SetDelete(&delete_PadeHeader);
      instance.SetDeleteArray(&deleteArray_PadeHeader);
      instance.SetDestructor(&destruct_PadeHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PadeHeader*)
   {
      return GenerateInitInstanceLocal((::PadeHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::PadeHeader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCChannel(void *p = 0);
   static void *newArray_WCChannel(Long_t size, void *p);
   static void delete_WCChannel(void *p);
   static void deleteArray_WCChannel(void *p);
   static void destruct_WCChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCChannel*)
   {
      ::WCChannel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCChannel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCChannel", ::WCChannel::Class_Version(), "include/TBEvent.h", 56,
                  typeid(::WCChannel), DefineBehavior(ptr, ptr),
                  &::WCChannel::Dictionary, isa_proxy, 4,
                  sizeof(::WCChannel) );
      instance.SetNew(&new_WCChannel);
      instance.SetNewArray(&newArray_WCChannel);
      instance.SetDelete(&delete_WCChannel);
      instance.SetDeleteArray(&deleteArray_WCChannel);
      instance.SetDestructor(&destruct_WCChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCChannel*)
   {
      return GenerateInitInstanceLocal((::WCChannel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCChannel*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBEvent(void *p = 0);
   static void *newArray_TBEvent(Long_t size, void *p);
   static void delete_TBEvent(void *p);
   static void deleteArray_TBEvent(void *p);
   static void destruct_TBEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBEvent*)
   {
      ::TBEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBEvent", ::TBEvent::Class_Version(), "include/TBEvent.h", 143,
                  typeid(::TBEvent), DefineBehavior(ptr, ptr),
                  &::TBEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TBEvent) );
      instance.SetNew(&new_TBEvent);
      instance.SetNewArray(&newArray_TBEvent);
      instance.SetDelete(&delete_TBEvent);
      instance.SetDeleteArray(&deleteArray_TBEvent);
      instance.SetDestructor(&destruct_TBEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBEvent*)
   {
      return GenerateInitInstanceLocal((::TBEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TBEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBSpill(void *p = 0);
   static void *newArray_TBSpill(Long_t size, void *p);
   static void delete_TBSpill(void *p);
   static void deleteArray_TBSpill(void *p);
   static void destruct_TBSpill(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBSpill*)
   {
      ::TBSpill *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBSpill >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBSpill", ::TBSpill::Class_Version(), "include/TBEvent.h", 87,
                  typeid(::TBSpill), DefineBehavior(ptr, ptr),
                  &::TBSpill::Dictionary, isa_proxy, 4,
                  sizeof(::TBSpill) );
      instance.SetNew(&new_TBSpill);
      instance.SetNewArray(&newArray_TBSpill);
      instance.SetDelete(&delete_TBSpill);
      instance.SetDeleteArray(&deleteArray_TBSpill);
      instance.SetDestructor(&destruct_TBSpill);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBSpill*)
   {
      return GenerateInitInstanceLocal((::TBSpill*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TBSpill*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PadeHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PadeHeader::Class_Name()
{
   return "PadeHeader";
}

//______________________________________________________________________________
const char *PadeHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadeHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PadeHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadeHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PadeHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadeHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PadeHeader::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadeHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCChannel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCChannel::Class_Name()
{
   return "WCChannel";
}

//______________________________________________________________________________
const char *WCChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCChannel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCChannel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCChannel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCChannel::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCChannel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBEvent::Class_Name()
{
   return "TBEvent";
}

//______________________________________________________________________________
const char *TBEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBEvent::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBSpill::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBSpill::Class_Name()
{
   return "TBSpill";
}

//______________________________________________________________________________
const char *TBSpill::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBSpill*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBSpill::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBSpill*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBSpill::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBSpill*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBSpill::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBSpill*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PadeHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class PadeHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PadeHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(PadeHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PadeHeader(void *p) {
      return  p ? new(p) ::PadeHeader : new ::PadeHeader;
   }
   static void *newArray_PadeHeader(Long_t nElements, void *p) {
      return p ? new(p) ::PadeHeader[nElements] : new ::PadeHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_PadeHeader(void *p) {
      delete ((::PadeHeader*)p);
   }
   static void deleteArray_PadeHeader(void *p) {
      delete [] ((::PadeHeader*)p);
   }
   static void destruct_PadeHeader(void *p) {
      typedef ::PadeHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PadeHeader

//______________________________________________________________________________
void WCChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCChannel(void *p) {
      return  p ? new(p) ::WCChannel : new ::WCChannel;
   }
   static void *newArray_WCChannel(Long_t nElements, void *p) {
      return p ? new(p) ::WCChannel[nElements] : new ::WCChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCChannel(void *p) {
      delete ((::WCChannel*)p);
   }
   static void deleteArray_WCChannel(void *p) {
      delete [] ((::WCChannel*)p);
   }
   static void destruct_WCChannel(void *p) {
      typedef ::WCChannel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCChannel

//______________________________________________________________________________
void TBEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBEvent(void *p) {
      return  p ? new(p) ::TBEvent : new ::TBEvent;
   }
   static void *newArray_TBEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TBEvent[nElements] : new ::TBEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBEvent(void *p) {
      delete ((::TBEvent*)p);
   }
   static void deleteArray_TBEvent(void *p) {
      delete [] ((::TBEvent*)p);
   }
   static void destruct_TBEvent(void *p) {
      typedef ::TBEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TBEvent

//______________________________________________________________________________
void TBSpill::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBSpill.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBSpill::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBSpill::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBSpill(void *p) {
      return  p ? new(p) ::TBSpill : new ::TBSpill;
   }
   static void *newArray_TBSpill(Long_t nElements, void *p) {
      return p ? new(p) ::TBSpill[nElements] : new ::TBSpill[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBSpill(void *p) {
      delete ((::TBSpill*)p);
   }
   static void deleteArray_TBSpill(void *p) {
      delete [] ((::TBSpill*)p);
   }
   static void destruct_TBSpill(void *p) {
      typedef ::TBSpill current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TBSpill

namespace ROOT {
   static TClass *vectorlEWCChannelgR_Dictionary();
   static void vectorlEWCChannelgR_TClassManip(TClass*);
   static void *new_vectorlEWCChannelgR(void *p = 0);
   static void *newArray_vectorlEWCChannelgR(Long_t size, void *p);
   static void delete_vectorlEWCChannelgR(void *p);
   static void deleteArray_vectorlEWCChannelgR(void *p);
   static void destruct_vectorlEWCChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<WCChannel>*)
   {
      vector<WCChannel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<WCChannel>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<WCChannel>", -2, "vector", 481,
                  typeid(vector<WCChannel>), DefineBehavior(ptr, ptr),
                  &vectorlEWCChannelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<WCChannel>) );
      instance.SetNew(&new_vectorlEWCChannelgR);
      instance.SetNewArray(&newArray_vectorlEWCChannelgR);
      instance.SetDelete(&delete_vectorlEWCChannelgR);
      instance.SetDeleteArray(&deleteArray_vectorlEWCChannelgR);
      instance.SetDestructor(&destruct_vectorlEWCChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<WCChannel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<WCChannel>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEWCChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<WCChannel>*)0x0)->GetClass();
      vectorlEWCChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEWCChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEWCChannelgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<WCChannel> : new vector<WCChannel>;
   }
   static void *newArray_vectorlEWCChannelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<WCChannel>[nElements] : new vector<WCChannel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEWCChannelgR(void *p) {
      delete ((vector<WCChannel>*)p);
   }
   static void deleteArray_vectorlEWCChannelgR(void *p) {
      delete [] ((vector<WCChannel>*)p);
   }
   static void destruct_vectorlEWCChannelgR(void *p) {
      typedef vector<WCChannel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<WCChannel>

namespace ROOT {
   static TClass *vectorlEPadeHeadergR_Dictionary();
   static void vectorlEPadeHeadergR_TClassManip(TClass*);
   static void *new_vectorlEPadeHeadergR(void *p = 0);
   static void *newArray_vectorlEPadeHeadergR(Long_t size, void *p);
   static void delete_vectorlEPadeHeadergR(void *p);
   static void deleteArray_vectorlEPadeHeadergR(void *p);
   static void destruct_vectorlEPadeHeadergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PadeHeader>*)
   {
      vector<PadeHeader> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PadeHeader>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<PadeHeader>", -2, "vector", 481,
                  typeid(vector<PadeHeader>), DefineBehavior(ptr, ptr),
                  &vectorlEPadeHeadergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<PadeHeader>) );
      instance.SetNew(&new_vectorlEPadeHeadergR);
      instance.SetNewArray(&newArray_vectorlEPadeHeadergR);
      instance.SetDelete(&delete_vectorlEPadeHeadergR);
      instance.SetDeleteArray(&deleteArray_vectorlEPadeHeadergR);
      instance.SetDestructor(&destruct_vectorlEPadeHeadergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PadeHeader> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<PadeHeader>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPadeHeadergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PadeHeader>*)0x0)->GetClass();
      vectorlEPadeHeadergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPadeHeadergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPadeHeadergR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<PadeHeader> : new vector<PadeHeader>;
   }
   static void *newArray_vectorlEPadeHeadergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<PadeHeader>[nElements] : new vector<PadeHeader>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPadeHeadergR(void *p) {
      delete ((vector<PadeHeader>*)p);
   }
   static void deleteArray_vectorlEPadeHeadergR(void *p) {
      delete [] ((vector<PadeHeader>*)p);
   }
   static void destruct_vectorlEPadeHeadergR(void *p) {
      typedef vector<PadeHeader> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PadeHeader>

namespace ROOT {
   static TClass *vectorlEPadeChannelgR_Dictionary();
   static void vectorlEPadeChannelgR_TClassManip(TClass*);
   static void *new_vectorlEPadeChannelgR(void *p = 0);
   static void *newArray_vectorlEPadeChannelgR(Long_t size, void *p);
   static void delete_vectorlEPadeChannelgR(void *p);
   static void deleteArray_vectorlEPadeChannelgR(void *p);
   static void destruct_vectorlEPadeChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PadeChannel>*)
   {
      vector<PadeChannel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PadeChannel>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<PadeChannel>", -2, "vector", 481,
                  typeid(vector<PadeChannel>), DefineBehavior(ptr, ptr),
                  &vectorlEPadeChannelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<PadeChannel>) );
      instance.SetNew(&new_vectorlEPadeChannelgR);
      instance.SetNewArray(&newArray_vectorlEPadeChannelgR);
      instance.SetDelete(&delete_vectorlEPadeChannelgR);
      instance.SetDeleteArray(&deleteArray_vectorlEPadeChannelgR);
      instance.SetDestructor(&destruct_vectorlEPadeChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PadeChannel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<PadeChannel>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPadeChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PadeChannel>*)0x0)->GetClass();
      vectorlEPadeChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPadeChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPadeChannelgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<PadeChannel> : new vector<PadeChannel>;
   }
   static void *newArray_vectorlEPadeChannelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<PadeChannel>[nElements] : new vector<PadeChannel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPadeChannelgR(void *p) {
      delete ((vector<PadeChannel>*)p);
   }
   static void deleteArray_vectorlEPadeChannelgR(void *p) {
      delete [] ((vector<PadeChannel>*)p);
   }
   static void destruct_vectorlEPadeChannelgR(void *p) {
      typedef vector<PadeChannel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PadeChannel>

namespace {
  void TriggerDictionaryInitialization_TBEventDict_Impl() {
    static const char* headers[] = {
"include/TBEvent.h",
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
class __attribute__((annotate("$clingAutoload$include/TBEvent.h")))  PadeHeader;
class __attribute__((annotate("$clingAutoload$include/TBEvent.h")))  WCChannel;
class __attribute__((annotate(R"ATTRDUMP(Event structure)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Event structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$include/TBEvent.h")))  TBEvent;
class __attribute__((annotate(R"ATTRDUMP(Spill header info)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Spill header info)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$include/TBEvent.h")))  TBSpill;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/TBEvent.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"PadeHeader", payloadCode, "@",
"TBEvent", payloadCode, "@",
"TBSpill", payloadCode, "@",
"WCChannel", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TBEventDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TBEventDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TBEventDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TBEventDict() {
  TriggerDictionaryInitialization_TBEventDict_Impl();
}
