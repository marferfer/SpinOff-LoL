// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Types.ByteBuffer.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTa-1f7bf541.h>
#include <Uno.Compiler.ExportTa-36e8b687.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Compiler.ExportTa-535c540a.h>
#include <Uno.Compiler.ExportTa-575c7de8.h>
#include <Uno.Compiler.ExportTa-d031c56.h>
#include <Uno.Compiler.ExportTa-d07b0040.h>
#include <Uno.Compiler.ExportTa-e7d9de3.h>
#include <Uno.Compiler.ExportTa-f620648.h>
#include <Uno.Exception.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[3];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\DontCopyStructAttribute.uno
// ------------------------------------------------------------------------------------------------------------------------------------

// public sealed class DontCopyStructAttribute :4
// {
static void DontCopyStructAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontCopyStructAttribute__New1_fn, 0, true, type, 0));
}

uType* DontCopyStructAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DontCopyStructAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute", options);
    type->fp_build_ = DontCopyStructAttribute_build;
    type->fp_ctor_ = (void*)DontCopyStructAttribute__New1_fn;
    return type;
}

// public generated DontCopyStructAttribute() :4
void DontCopyStructAttribute__ctor_1_fn(DontCopyStructAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontCopyStructAttribute New() :4
void DontCopyStructAttribute__New1_fn(DontCopyStructAttribute** __retval)
{
    *__retval = DontCopyStructAttribute::New1();
}

// public generated DontCopyStructAttribute() [instance] :4
void DontCopyStructAttribute::ctor_1()
{
    ctor_();
}

// public generated DontCopyStructAttribute New() [static] :4
DontCopyStructAttribute* DontCopyStructAttribute::New1()
{
    DontCopyStructAttribute* obj1 = (DontCopyStructAttribute*)uNew(DontCopyStructAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\DontExportAttribute.uno
// --------------------------------------------------------------------------------------------------------------------------------

// public sealed class DontExportAttribute :4
// {
static void DontExportAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontExportAttribute__New1_fn, 0, true, type, 0));
}

uType* DontExportAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DontExportAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontExportAttribute", options);
    type->fp_build_ = DontExportAttribute_build;
    type->fp_ctor_ = (void*)DontExportAttribute__New1_fn;
    return type;
}

// public generated DontExportAttribute() :4
void DontExportAttribute__ctor_1_fn(DontExportAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontExportAttribute New() :4
void DontExportAttribute__New1_fn(DontExportAttribute** __retval)
{
    *__retval = DontExportAttribute::New1();
}

// public generated DontExportAttribute() [instance] :4
void DontExportAttribute::ctor_1()
{
    ctor_();
}

// public generated DontExportAttribute New() [static] :4
DontExportAttribute* DontExportAttribute::New1()
{
    DontExportAttribute* obj1 = (DontExportAttribute*)uNew(DontExportAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\DotNetTypeAttribute.uno
// --------------------------------------------------------------------------------------------------------------------------------

// public sealed class DotNetOverrideAttribute :13
// {
static void DotNetOverrideAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DotNetOverrideAttribute__New1_fn, 0, true, type, 0));
}

uType* DotNetOverrideAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DotNetOverrideAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DotNetOverrideAttribute", options);
    type->fp_build_ = DotNetOverrideAttribute_build;
    type->fp_ctor_ = (void*)DotNetOverrideAttribute__New1_fn;
    return type;
}

// public generated DotNetOverrideAttribute() :13
void DotNetOverrideAttribute__ctor_1_fn(DotNetOverrideAttribute* __this)
{
    __this->ctor_1();
}

// public generated DotNetOverrideAttribute New() :13
void DotNetOverrideAttribute__New1_fn(DotNetOverrideAttribute** __retval)
{
    *__retval = DotNetOverrideAttribute::New1();
}

// public generated DotNetOverrideAttribute() [instance] :13
void DotNetOverrideAttribute::ctor_1()
{
    ctor_();
}

// public generated DotNetOverrideAttribute New() [static] :13
DotNetOverrideAttribute* DotNetOverrideAttribute::New1()
{
    DotNetOverrideAttribute* obj1 = (DotNetOverrideAttribute*)uNew(DotNetOverrideAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\Foreign\ForeignDataView.uno
// ------------------------------------------------------------------------------------------------------------------------------------

// public static extern class ForeignDataView :69
// {
static void ForeignDataView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("unoArray");
    ::STRINGS[1] = uString::Const("ForeignDataView failed to create a direct buffer");
    ::STRINGS[2] = uString::Const("ForeignDataView was unable to create a Java view to the data");
    type->Reflection.SetFunctions(1,
        new uFunction("Create", NULL, (void*)ForeignDataView__Create_fn, 0, true, ::g::Java::Object_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
}

uClassType* ForeignDataView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.ForeignDataView", options);
    type->fp_build_ = ForeignDataView_build;
    return type;
}

// public static Java.Object Create(byte[] unoArray) :75
void ForeignDataView__Create_fn(uArray* unoArray, ::g::Java::Object** __retval)
{
    *__retval = ForeignDataView::Create(unoArray);
}

// private static Java.Object CreateInner(Android.Base.Primitives.ujobject directBuffer, object unoObj) :98
void ForeignDataView__CreateInner_fn(jobject* directBuffer, uObject* unoObj, ::g::Java::Object** __retval)
{
    *__retval = ForeignDataView::CreateInner(*directBuffer, unoObj);
}

// private static Java.Object CreateInnerJava(Java.Object directBuffer, object unoObj) :110
void ForeignDataView__CreateInnerJava_fn(::g::Java::Object* directBuffer, uObject* unoObj, ::g::Java::Object** __retval)
{
    *__retval = ForeignDataView::CreateInnerJava(directBuffer, unoObj);
}

// public static Java.Object Create(byte[] unoArray) [static] :75
::g::Java::Object* ForeignDataView::Create(uArray* unoArray)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.ForeignDataView", "Create(byte[])");

    if (unoArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"unoArray"*/]));

    return ForeignDataView::CreateInner(::g::Android::Base::Types::ByteBuffer::NewDirectByteBuffer(unoArray), unoArray);
}

// private static Java.Object CreateInner(Android.Base.Primitives.ujobject directBuffer, object unoObj) [static] :98
::g::Java::Object* ForeignDataView::CreateInner(jobject directBuffer, uObject* unoObj)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.ForeignDataView", "CreateInner(Android.Base.Primitives.ujobject,object)");

    if (!::g::Android::Base::Types::ByteBuffer::ValidDirectByteBuffer(directBuffer))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"ForeignData...*/]));

    ::g::Android::Base::Wrappers::JWrapper* wrappedBuffer = ::g::Android::Base::Wrappers::JWrapper::Wrap(directBuffer, false, false);
    ::g::Java::Object* result = ForeignDataView::CreateInnerJava(wrappedBuffer, unoObj);

    if (result == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"ForeignData...*/]));

    return result;
}

// private static Java.Object CreateInnerJava(Java.Object directBuffer, object unoObj) [static] :110
::g::Java::Object* ForeignDataView::CreateInnerJava(::g::Java::Object* directBuffer, uObject* unoObj)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateInnerJava51", "(Ljava/lang/Object;Lcom/uno/UnoObject;)Ljava/lang/Object;");
        ::g::Java::Object* _udirectBuffer=directBuffer;
        jobject _directBuffer = (_udirectBuffer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udirectBuffer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uunoObj=unoObj;
        jobject _unoObj = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uunoObj);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_directBuffer,_unoObj);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_directBuffer!=NULL) { U_JNIVAR->DeleteLocalRef(_directBuffer); }
        if (_unoObj!=NULL) { U_JNIVAR->DeleteLocalRef(_unoObj); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\OptionalAttribute.uno
// ------------------------------------------------------------------------------------------------------------------------------

// public sealed class OptionalAttribute :4
// {
static void OptionalAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OptionalAttribute__New1_fn, 0, true, type, 0));
}

uType* OptionalAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(OptionalAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.OptionalAttribute", options);
    type->fp_build_ = OptionalAttribute_build;
    type->fp_ctor_ = (void*)OptionalAttribute__New1_fn;
    return type;
}

// public generated OptionalAttribute() :4
void OptionalAttribute__ctor_1_fn(OptionalAttribute* __this)
{
    __this->ctor_1();
}

// public generated OptionalAttribute New() :4
void OptionalAttribute__New1_fn(OptionalAttribute** __retval)
{
    *__retval = OptionalAttribute::New1();
}

// public generated OptionalAttribute() [instance] :4
void OptionalAttribute::ctor_1()
{
    ctor_();
}

// public generated OptionalAttribute New() [static] :4
OptionalAttribute* OptionalAttribute::New1()
{
    OptionalAttribute* obj1 = (OptionalAttribute*)uNew(OptionalAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\StaticAttribute.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public sealed class StaticAttribute :4
// {
static void StaticAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StaticAttribute__New1_fn, 0, true, type, 0));
}

uType* StaticAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(StaticAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.StaticAttribute", options);
    type->fp_build_ = StaticAttribute_build;
    type->fp_ctor_ = (void*)StaticAttribute__New1_fn;
    return type;
}

// public generated StaticAttribute() :4
void StaticAttribute__ctor_1_fn(StaticAttribute* __this)
{
    __this->ctor_1();
}

// public generated StaticAttribute New() :4
void StaticAttribute__New1_fn(StaticAttribute** __retval)
{
    *__retval = StaticAttribute::New1();
}

// public generated StaticAttribute() [instance] :4
void StaticAttribute::ctor_1()
{
    ctor_();
}

// public generated StaticAttribute New() [static] :4
StaticAttribute* StaticAttribute::New1()
{
    StaticAttribute* obj1 = (StaticAttribute*)uNew(StaticAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\TargetSpecificImplementationAttribute.uno
// --------------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class TargetSpecificImplementationAttribute :5
// {
static void TargetSpecificImplementationAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificImplementationAttribute__New1_fn, 0, true, type, 0));
}

uType* TargetSpecificImplementationAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TargetSpecificImplementationAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute", options);
    type->fp_build_ = TargetSpecificImplementationAttribute_build;
    type->fp_ctor_ = (void*)TargetSpecificImplementationAttribute__New1_fn;
    return type;
}

// public generated TargetSpecificImplementationAttribute() :5
void TargetSpecificImplementationAttribute__ctor_1_fn(TargetSpecificImplementationAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificImplementationAttribute New() :5
void TargetSpecificImplementationAttribute__New1_fn(TargetSpecificImplementationAttribute** __retval)
{
    *__retval = TargetSpecificImplementationAttribute::New1();
}

// public generated TargetSpecificImplementationAttribute() [instance] :5
void TargetSpecificImplementationAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificImplementationAttribute New() [static] :5
TargetSpecificImplementationAttribute* TargetSpecificImplementationAttribute::New1()
{
    TargetSpecificImplementationAttribute* obj1 = (TargetSpecificImplementationAttribute*)uNew(TargetSpecificImplementationAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\UnoCore\1.9.0\Source\Uno\Compiler\ExportTargetInterop\TargetSpecificTypeAttribute.uno
// ----------------------------------------------------------------------------------------------------------------------------------------

// public sealed class TargetSpecificTypeAttribute :5
// {
static void TargetSpecificTypeAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificTypeAttribute__New1_fn, 0, true, type, 0));
}

uType* TargetSpecificTypeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TargetSpecificTypeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute", options);
    type->fp_build_ = TargetSpecificTypeAttribute_build;
    type->fp_ctor_ = (void*)TargetSpecificTypeAttribute__New1_fn;
    return type;
}

// public generated TargetSpecificTypeAttribute() :5
void TargetSpecificTypeAttribute__ctor_1_fn(TargetSpecificTypeAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificTypeAttribute New() :5
void TargetSpecificTypeAttribute__New1_fn(TargetSpecificTypeAttribute** __retval)
{
    *__retval = TargetSpecificTypeAttribute::New1();
}

// public generated TargetSpecificTypeAttribute() [instance] :5
void TargetSpecificTypeAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificTypeAttribute New() [static] :5
TargetSpecificTypeAttribute* TargetSpecificTypeAttribute::New1()
{
    TargetSpecificTypeAttribute* obj1 = (TargetSpecificTypeAttribute*)uNew(TargetSpecificTypeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
