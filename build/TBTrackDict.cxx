// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddITBTrackDict

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
#include "include/TBTrack.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TBTrack(void *p = 0);
   static void *newArray_TBTrack(Long_t size, void *p);
   static void delete_TBTrack(void *p);
   static void deleteArray_TBTrack(void *p);
   static void destruct_TBTrack(void *p);
   static void streamer_TBTrack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBTrack*)
   {
      ::TBTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBTrack", ::TBTrack::Class_Version(), "include/TBTrack.h", 11,
                  typeid(::TBTrack), DefineBehavior(ptr, ptr),
                  &::TBTrack::Dictionary, isa_proxy, 16,
                  sizeof(::TBTrack) );
      instance.SetNew(&new_TBTrack);
      instance.SetNewArray(&newArray_TBTrack);
      instance.SetDelete(&delete_TBTrack);
      instance.SetDeleteArray(&deleteArray_TBTrack);
      instance.SetDestructor(&destruct_TBTrack);
      instance.SetStreamerFunc(&streamer_TBTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBTrack*)
   {
      return GenerateInitInstanceLocal((::TBTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TBTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TBTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBTrack::Class_Name()
{
   return "TBTrack";
}

//______________________________________________________________________________
const char *TBTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBTrack::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TBTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBTrack.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      _x1.Streamer(R__b);
      _y1.Streamer(R__b);
      _x2.Streamer(R__b);
      _y2.Streamer(R__b);
      R__b >> _mx;
      R__b >> _my;
      R__b >> _m2d;
      R__b >> _dt1;
      R__b >> _dt2;
      R__b >> status;
      R__b.CheckByteCount(R__s, R__c, TBTrack::IsA());
   } else {
      R__c = R__b.WriteVersion(TBTrack::IsA(), kTRUE);
      TObject::Streamer(R__b);
      _x1.Streamer(R__b);
      _y1.Streamer(R__b);
      _x2.Streamer(R__b);
      _y2.Streamer(R__b);
      R__b << _mx;
      R__b << _my;
      R__b << _m2d;
      R__b << _dt1;
      R__b << _dt2;
      R__b << status;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBTrack(void *p) {
      return  p ? new(p) ::TBTrack : new ::TBTrack;
   }
   static void *newArray_TBTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TBTrack[nElements] : new ::TBTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBTrack(void *p) {
      delete ((::TBTrack*)p);
   }
   static void deleteArray_TBTrack(void *p) {
      delete [] ((::TBTrack*)p);
   }
   static void destruct_TBTrack(void *p) {
      typedef ::TBTrack current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBTrack(TBuffer &buf, void *obj) {
      ((::TBTrack*)obj)->::TBTrack::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBTrack

namespace ROOT {
   static TClass *vectorlETBTrackgR_Dictionary();
   static void vectorlETBTrackgR_TClassManip(TClass*);
   static void *new_vectorlETBTrackgR(void *p = 0);
   static void *newArray_vectorlETBTrackgR(Long_t size, void *p);
   static void delete_vectorlETBTrackgR(void *p);
   static void deleteArray_vectorlETBTrackgR(void *p);
   static void destruct_vectorlETBTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TBTrack>*)
   {
      vector<TBTrack> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TBTrack>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TBTrack>", -2, "vector", 481,
                  typeid(vector<TBTrack>), DefineBehavior(ptr, ptr),
                  &vectorlETBTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TBTrack>) );
      instance.SetNew(&new_vectorlETBTrackgR);
      instance.SetNewArray(&newArray_vectorlETBTrackgR);
      instance.SetDelete(&delete_vectorlETBTrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlETBTrackgR);
      instance.SetDestructor(&destruct_vectorlETBTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TBTrack> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TBTrack>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETBTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TBTrack>*)0x0)->GetClass();
      vectorlETBTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETBTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETBTrackgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TBTrack> : new vector<TBTrack>;
   }
   static void *newArray_vectorlETBTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TBTrack>[nElements] : new vector<TBTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETBTrackgR(void *p) {
      delete ((vector<TBTrack>*)p);
   }
   static void deleteArray_vectorlETBTrackgR(void *p) {
      delete [] ((vector<TBTrack>*)p);
   }
   static void destruct_vectorlETBTrackgR(void *p) {
      typedef vector<TBTrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TBTrack>

namespace {
  void TriggerDictionaryInitialization_TBTrackDict_Impl() {
    static const char* headers[] = {
"include/TBTrack.h",
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
class __attribute__((annotate("$clingAutoload$include/TBTrack.h")))  TBTrack;
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/TBTrack.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TBTrack", payloadCode, "@",
"vector<TBTrack>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TBTrackDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TBTrackDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TBTrackDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TBTrackDict() {
  TriggerDictionaryInitialization_TBTrackDict_Impl();
}
