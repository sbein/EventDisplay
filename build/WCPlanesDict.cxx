// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddIWCPlanesDict

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
#include "include/WCPlanes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *WCPlanes_Dictionary();
   static void WCPlanes_TClassManip(TClass*);
   static void *new_WCPlanes(void *p = 0);
   static void *newArray_WCPlanes(Long_t size, void *p);
   static void delete_WCPlanes(void *p);
   static void deleteArray_WCPlanes(void *p);
   static void destruct_WCPlanes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCPlanes*)
   {
      ::WCPlanes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WCPlanes),0);
      static ::ROOT::TGenericClassInfo 
         instance("WCPlanes", "include/WCPlanes.h", 11,
                  typeid(::WCPlanes), DefineBehavior(ptr, ptr),
                  &WCPlanes_Dictionary, isa_proxy, 0,
                  sizeof(::WCPlanes) );
      instance.SetNew(&new_WCPlanes);
      instance.SetNewArray(&newArray_WCPlanes);
      instance.SetDelete(&delete_WCPlanes);
      instance.SetDeleteArray(&deleteArray_WCPlanes);
      instance.SetDestructor(&destruct_WCPlanes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCPlanes*)
   {
      return GenerateInitInstanceLocal((::WCPlanes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCPlanes*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WCPlanes_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WCPlanes*)0x0)->GetClass();
      WCPlanes_TClassManip(theClass);
   return theClass;
   }

   static void WCPlanes_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCPlanes(void *p) {
      return  p ? new(p) ::WCPlanes : new ::WCPlanes;
   }
   static void *newArray_WCPlanes(Long_t nElements, void *p) {
      return p ? new(p) ::WCPlanes[nElements] : new ::WCPlanes[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCPlanes(void *p) {
      delete ((::WCPlanes*)p);
   }
   static void deleteArray_WCPlanes(void *p) {
      delete [] ((::WCPlanes*)p);
   }
   static void destruct_WCPlanes(void *p) {
      typedef ::WCPlanes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCPlanes

namespace {
  void TriggerDictionaryInitialization_WCPlanesDict_Impl() {
    static const char* headers[] = {
"include/WCPlanes.h",
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
class __attribute__((annotate("$clingAutoload$include/WCPlanes.h")))  WCPlanes;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/WCPlanes.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"WCPlanes", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("WCPlanesDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_WCPlanesDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_WCPlanesDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_WCPlanesDict() {
  TriggerDictionaryInitialization_WCPlanesDict_Impl();
}
