// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME builddIDialogDict

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
#include "include/Dialog.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Dialog_Dictionary();
   static void Dialog_TClassManip(TClass*);
   static void delete_Dialog(void *p);
   static void deleteArray_Dialog(void *p);
   static void destruct_Dialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Dialog*)
   {
      ::Dialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Dialog),0);
      static ::ROOT::TGenericClassInfo 
         instance("Dialog", "include/Dialog.h", 15,
                  typeid(::Dialog), DefineBehavior(ptr, ptr),
                  &Dialog_Dictionary, isa_proxy, 0,
                  sizeof(::Dialog) );
      instance.SetDelete(&delete_Dialog);
      instance.SetDeleteArray(&deleteArray_Dialog);
      instance.SetDestructor(&destruct_Dialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Dialog*)
   {
      return GenerateInitInstanceLocal((::Dialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Dialog*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Dialog_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Dialog*)0x0)->GetClass();
      Dialog_TClassManip(theClass);
   return theClass;
   }

   static void Dialog_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Dialog(void *p) {
      delete ((::Dialog*)p);
   }
   static void deleteArray_Dialog(void *p) {
      delete [] ((::Dialog*)p);
   }
   static void destruct_Dialog(void *p) {
      typedef ::Dialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Dialog

namespace {
  void TriggerDictionaryInitialization_DialogDict_Impl() {
    static const char* headers[] = {
"include/Dialog.h",
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
class __attribute__((annotate("$clingAutoload$include/Dialog.h")))  Dialog;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/Dialog.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Dialog", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DialogDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DialogDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DialogDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DialogDict() {
  TriggerDictionaryInitialization_DialogDict_Impl();
}
