// This file was generated based on C:/Users/JuanJose/Desktop/Mario/generated/bundles/login-transition/build/Android/Preview/cache/ux15/LoginTransition.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LoginTransition_FuseScaling_Factor_Property;}

namespace g{

// internal sealed class LoginTransition_FuseScaling_Factor_Property :18
// {
::g::Uno::UX::Property1_type* LoginTransition_FuseScaling_Factor_Property_typeof();
void LoginTransition_FuseScaling_Factor_Property__ctor_3_fn(LoginTransition_FuseScaling_Factor_Property* __this, ::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name);
void LoginTransition_FuseScaling_Factor_Property__Get1_fn(LoginTransition_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void LoginTransition_FuseScaling_Factor_Property__New1_fn(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name, LoginTransition_FuseScaling_Factor_Property** __retval);
void LoginTransition_FuseScaling_Factor_Property__get_Object_fn(LoginTransition_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LoginTransition_FuseScaling_Factor_Property__Set1_fn(LoginTransition_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct LoginTransition_FuseScaling_Factor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Scaling*> _obj;

    void ctor_3(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
    static LoginTransition_FuseScaling_Factor_Property* New1(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
