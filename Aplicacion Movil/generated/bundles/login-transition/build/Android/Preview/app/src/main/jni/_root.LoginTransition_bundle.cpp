// This file was generated based on C:/Users/JuanJose/Desktop/Mario/generated/bundles/login-transition/LoginTransition.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginTransition_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[9];

namespace g{

// public static generated class LoginTransition_bundle :0
// {
// static LoginTransition_bundle() :0
static void LoginTransition_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    LoginTransition_bundle::arrowe8f9a594_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[1/*"arrow-23242...*/]);
    LoginTransition_bundle::avatarhome8741b20d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[2/*"avatarhome-...*/]);
    LoginTransition_bundle::bglogin9c628e55_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[3/*"bglogin-aff...*/]);
    LoginTransition_bundle::headerhomed4357b6f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[4/*"headerhome-...*/]);
    LoginTransition_bundle::MainViewe945c156_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[5/*"mainview-cb...*/]);
    LoginTransition_bundle::markloginbd028f61_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[6/*"marklogin-2...*/]);
    LoginTransition_bundle::password_icona285f3ce_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[7/*"password_ic...*/]);
    LoginTransition_bundle::user_icon22b17d90_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginTransi...*/]))->GetFile(::STRINGS[8/*"user_icon-3...*/]);
}

static void LoginTransition_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("LoginTransition");
    ::STRINGS[1] = uString::Const("arrow-23242f90.png");
    ::STRINGS[2] = uString::Const("avatarhome-84ddcb35.png");
    ::STRINGS[3] = uString::Const("bglogin-aff0f35d.png");
    ::STRINGS[4] = uString::Const("headerhome-66c601af.png");
    ::STRINGS[5] = uString::Const("mainview-cb8c4a65.js");
    ::STRINGS[6] = uString::Const("marklogin-2094acc1.png");
    ::STRINGS[7] = uString::Const("password_icon-3a249802.png");
    ::STRINGS[8] = uString::Const("user_icon-3e37b2f4.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::arrowe8f9a594_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::avatarhome8741b20d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::bglogin9c628e55_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::headerhomed4357b6f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::MainViewe945c156_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::markloginbd028f61_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::password_icona285f3ce_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginTransition_bundle::user_icon22b17d90_, uFieldFlagsStatic);
    type->Reflection.SetFields(8,
        new uField("arrowe8f9a594", 0),
        new uField("avatarhome8741b20d", 1),
        new uField("bglogin9c628e55", 2),
        new uField("headerhomed4357b6f", 3),
        new uField("MainViewe945c156", 4),
        new uField("markloginbd028f61", 5),
        new uField("password_icona285f3ce", 6),
        new uField("user_icon22b17d90", 7));
}

uClassType* LoginTransition_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("LoginTransition_bundle", options);
    type->fp_build_ = LoginTransition_bundle_build;
    type->fp_cctor_ = LoginTransition_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::arrowe8f9a594_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::avatarhome8741b20d_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::bglogin9c628e55_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::headerhomed4357b6f_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::MainViewe945c156_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::markloginbd028f61_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::password_icona285f3ce_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginTransition_bundle::user_icon22b17d90_;
// }

} // ::g
