// This file was generated based on C:/Users/JuanJose/Desktop/Mario/generated/bundles/login-transition/build/Android/Preview/cache/ux15/LoginTransition.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginTransition-927a53e5.h>
#include <Fuse.Animations.Animator.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LoginTransition_FuseAnimationsAnimator_Delay_Property :67
// {
static void LoginTransition_FuseAnimationsAnimator_Delay_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Animations::Animator_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Animations.Animator*/], offsetof(LoginTransition_FuseAnimationsAnimator_Delay_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* LoginTransition_FuseAnimationsAnimator_Delay_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LoginTransition_FuseAnimationsAnimator_Delay_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LoginTransition_FuseAnimationsAnimator_Delay_Property", options);
    type->fp_build_ = LoginTransition_FuseAnimationsAnimator_Delay_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))LoginTransition_FuseAnimationsAnimator_Delay_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LoginTransition_FuseAnimationsAnimator_Delay_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))LoginTransition_FuseAnimationsAnimator_Delay_Property__Set1_fn;
    return type;
}

// public LoginTransition_FuseAnimationsAnimator_Delay_Property(Fuse.Animations.Animator obj, Uno.UX.Selector name) :70
void LoginTransition_FuseAnimationsAnimator_Delay_Property__ctor_3_fn(LoginTransition_FuseAnimationsAnimator_Delay_Property* __this, ::g::Fuse::Animations::Animator* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed double Get(Uno.UX.PropertyObject obj) :72
void LoginTransition_FuseAnimationsAnimator_Delay_Property__Get1_fn(LoginTransition_FuseAnimationsAnimator_Delay_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval)
{
    uStackFrame __("LoginTransition_FuseAnimationsAnimator_Delay_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Animations::Animator*>(obj, ::TYPES[0/*Fuse.Animations.Animator*/]))->Delay(), void();
}

// public LoginTransition_FuseAnimationsAnimator_Delay_Property New(Fuse.Animations.Animator obj, Uno.UX.Selector name) :70
void LoginTransition_FuseAnimationsAnimator_Delay_Property__New1_fn(::g::Fuse::Animations::Animator* obj, ::g::Uno::UX::Selector* name, LoginTransition_FuseAnimationsAnimator_Delay_Property** __retval)
{
    *__retval = LoginTransition_FuseAnimationsAnimator_Delay_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :71
void LoginTransition_FuseAnimationsAnimator_Delay_Property__get_Object_fn(LoginTransition_FuseAnimationsAnimator_Delay_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, double v, Uno.UX.IPropertyListener origin) :73
void LoginTransition_FuseAnimationsAnimator_Delay_Property__Set1_fn(LoginTransition_FuseAnimationsAnimator_Delay_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin)
{
    uStackFrame __("LoginTransition_FuseAnimationsAnimator_Delay_Property", "Set(Uno.UX.PropertyObject,double,Uno.UX.IPropertyListener)");
    double v_ = *v;
    uPtr(uCast< ::g::Fuse::Animations::Animator*>(obj, ::TYPES[0/*Fuse.Animations.Animator*/]))->Delay(v_);
}

// public LoginTransition_FuseAnimationsAnimator_Delay_Property(Fuse.Animations.Animator obj, Uno.UX.Selector name) [instance] :70
void LoginTransition_FuseAnimationsAnimator_Delay_Property::ctor_3(::g::Fuse::Animations::Animator* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public LoginTransition_FuseAnimationsAnimator_Delay_Property New(Fuse.Animations.Animator obj, Uno.UX.Selector name) [static] :70
LoginTransition_FuseAnimationsAnimator_Delay_Property* LoginTransition_FuseAnimationsAnimator_Delay_Property::New1(::g::Fuse::Animations::Animator* obj, ::g::Uno::UX::Selector name)
{
    LoginTransition_FuseAnimationsAnimator_Delay_Property* obj1 = (LoginTransition_FuseAnimationsAnimator_Delay_Property*)uNew(LoginTransition_FuseAnimationsAnimator_Delay_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
