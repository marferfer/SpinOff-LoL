// This file was generated based on C:/Users/JuanJose/Desktop/Mario/generated/bundles/login-transition/build/Android/Preview/cache/ux15/LoginTransition.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginTransition-6d20ec95.h>
#include <Fuse.Translation.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LoginTransition_FuseTranslation_X_Property :51
// {
static void LoginTransition_FuseTranslation_X_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Translation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Translation*/], offsetof(LoginTransition_FuseTranslation_X_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* LoginTransition_FuseTranslation_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LoginTransition_FuseTranslation_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LoginTransition_FuseTranslation_X_Property", options);
    type->fp_build_ = LoginTransition_FuseTranslation_X_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))LoginTransition_FuseTranslation_X_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LoginTransition_FuseTranslation_X_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))LoginTransition_FuseTranslation_X_Property__Set1_fn;
    return type;
}

// public LoginTransition_FuseTranslation_X_Property(Fuse.Translation obj, Uno.UX.Selector name) :54
void LoginTransition_FuseTranslation_X_Property__ctor_3_fn(LoginTransition_FuseTranslation_X_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :56
void LoginTransition_FuseTranslation_X_Property__Get1_fn(LoginTransition_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("LoginTransition_FuseTranslation_X_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[0/*Fuse.Translation*/]))->X(), void();
}

// public LoginTransition_FuseTranslation_X_Property New(Fuse.Translation obj, Uno.UX.Selector name) :54
void LoginTransition_FuseTranslation_X_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, LoginTransition_FuseTranslation_X_Property** __retval)
{
    *__retval = LoginTransition_FuseTranslation_X_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :55
void LoginTransition_FuseTranslation_X_Property__get_Object_fn(LoginTransition_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :57
void LoginTransition_FuseTranslation_X_Property__Set1_fn(LoginTransition_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("LoginTransition_FuseTranslation_X_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[0/*Fuse.Translation*/]))->X(v_);
}

// public LoginTransition_FuseTranslation_X_Property(Fuse.Translation obj, Uno.UX.Selector name) [instance] :54
void LoginTransition_FuseTranslation_X_Property::ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public LoginTransition_FuseTranslation_X_Property New(Fuse.Translation obj, Uno.UX.Selector name) [static] :54
LoginTransition_FuseTranslation_X_Property* LoginTransition_FuseTranslation_X_Property::New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    LoginTransition_FuseTranslation_X_Property* obj1 = (LoginTransition_FuseTranslation_X_Property*)uNew(LoginTransition_FuseTranslation_X_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
