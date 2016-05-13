// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddIMapperDict

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
#include "include/Mapper.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Mapper_Dictionary();
   static void Mapper_TClassManip(TClass*);
   static void delete_Mapper(void *p);
   static void deleteArray_Mapper(void *p);
   static void destruct_Mapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Mapper*)
   {
      ::Mapper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Mapper),0);
      static ::ROOT::TGenericClassInfo 
         instance("Mapper", "include/Mapper.h", 96,
                  typeid(::Mapper), DefineBehavior(ptr, ptr),
                  &Mapper_Dictionary, isa_proxy, 0,
                  sizeof(::Mapper) );
      instance.SetDelete(&delete_Mapper);
      instance.SetDeleteArray(&deleteArray_Mapper);
      instance.SetDestructor(&destruct_Mapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Mapper*)
   {
      return GenerateInitInstanceLocal((::Mapper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Mapper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Mapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Mapper*)0x0)->GetClass();
      Mapper_TClassManip(theClass);
   return theClass;
   }

   static void Mapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Mapper(void *p) {
      delete ((::Mapper*)p);
   }
   static void deleteArray_Mapper(void *p) {
      delete [] ((::Mapper*)p);
   }
   static void destruct_Mapper(void *p) {
      typedef ::Mapper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Mapper

namespace {
  void TriggerDictionaryInitialization_MapperDict_Impl() {
    static const char* headers[] = {
"include/Mapper.h",
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
class __attribute__((annotate("$clingAutoload$include/Mapper.h")))  Mapper;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/Mapper.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Mapper", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MapperDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MapperDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MapperDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MapperDict() {
  TriggerDictionaryInitialization_MapperDict_Impl();
}
