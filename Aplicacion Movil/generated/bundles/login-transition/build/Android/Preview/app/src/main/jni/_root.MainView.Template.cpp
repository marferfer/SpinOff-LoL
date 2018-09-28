// This file was generated based on C:/Users/JuanJose/Desktop/Mario/generated/bundles/login-transition/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginTransition-6cc69394.h>
#include <_root.LoginTransition-927a53e5.h>
#include <_root.LoginTransition-b25f43ec.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.TaskItem.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[9];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView.Template :5
// {
// static Template() :21
static void MainView__Template__cctor__fn(uType* __type)
{
    MainView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Y"*/]);
    MainView__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Factor"*/]);
    MainView__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Delay"*/]);
    MainView__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"ToggleLogge...*/]);
    MainView__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"animateItem"*/]);
    MainView__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"trans"*/]);
    MainView__Template::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"scaling"*/]);
}

static void MainView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Y");
    ::STRINGS[1] = uString::Const("Factor");
    ::STRINGS[2] = uString::Const("Delay");
    ::STRINGS[3] = uString::Const("ToggleLoggedIn");
    ::STRINGS[4] = uString::Const("animateItem");
    ::STRINGS[5] = uString::Const("trans");
    ::STRINGS[6] = uString::Const("scaling");
    ::STRINGS[7] = uString::Const("delay");
    ::STRINGS[8] = uString::Const("MainView.ux");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView__Template, trans_Y_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView__Template, scaling_Factor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(MainView__Template, temp_Delay_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(MainView__Template, temp1_Delay_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(MainView__Template, animateItem), 0,
        ::g::Fuse::Translation_typeof(), offsetof(MainView__Template, trans), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(MainView__Template, scaling), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template::__selector6_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 18;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent, MainView parentInstance) :9
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :24
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template", "New()");
    ::g::TaskItem* __self1 = ::g::TaskItem::New5();
    __this->trans = ::g::Fuse::Translation::New2();
    __this->trans_Y_inst = ::g::LoginTransition_FuseTranslation_Y_Property::New1(__this->trans, MainView__Template::__selector0_);
    __this->scaling = ::g::Fuse::Scaling::New2();
    __this->scaling_Factor_inst = ::g::LoginTransition_FuseScaling_Factor_Property::New1(__this->scaling, MainView__Template::__selector1_);
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], __this->trans_Y_inst);
    __this->temp_Delay_inst = ::g::LoginTransition_FuseAnimationsAnimator_Delay_Property::New1(temp, MainView__Template::__selector2_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"delay"*/]);
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], __this->scaling_Factor_inst);
    __this->temp1_Delay_inst = ::g::LoginTransition_FuseAnimationsAnimator_Delay_Property::New1(temp1, MainView__Template::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"delay"*/]);
    ::g::Fuse::Triggers::OnUserEvent* temp4 = ::g::Fuse::Triggers::OnUserEvent::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp5 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    __this->animateItem = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Delay_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Delay_inst, (uObject*)temp3, 3);
    __self1->SourceLineNumber(62);
    __self1->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    temp4->EventName(MainView__Template::__selector3_);
    temp4->SourceLineNumber(63);
    temp4->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp5);
    temp5->SourceLineNumber(64);
    temp5->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    temp5->Target((uObject*)__this->animateItem);
    uPtr(__this->animateItem)->Name(MainView__Template::__selector4_);
    uPtr(__this->animateItem)->SourceLineNumber(66);
    uPtr(__this->animateItem)->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->animateItem)->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->animateItem)->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->animateItem)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->animateItem)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Fuse::Animations::Change__set_Value_fn(temp, uCRef(0.0f));
    temp->Duration(0.8);
    temp->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp2->SourceLineNumber(67);
    temp2->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    ::g::Fuse::Animations::Change__set_Value_fn(temp1, uCRef(1.0f));
    temp1->Duration(0.6);
    temp1->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp3->SourceLineNumber(68);
    temp3->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    uPtr(__this->trans)->Y(-0.5f);
    uPtr(__this->trans)->Name(MainView__Template::__selector5_);
    uPtr(__this->trans)->SourceLineNumber(70);
    uPtr(__this->trans)->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    uPtr(__this->trans)->RelativeTo(::g::Fuse::TranslationModes::Size());
    uPtr(__this->scaling)->Factor(1.2f);
    uPtr(__this->scaling)->Name(MainView__Template::__selector6_);
    uPtr(__this->scaling)->SourceLineNumber(71);
    uPtr(__this->scaling)->SourceFileName(::STRINGS[8/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->animateItem);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->scaling);
    return *__retval = __self1, void();
}

// public Template New(MainView parent, MainView parentInstance) :9
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template::__selector0_;
::g::Uno::UX::Selector MainView__Template::__selector1_;
::g::Uno::UX::Selector MainView__Template::__selector2_;
::g::Uno::UX::Selector MainView__Template::__selector3_;
::g::Uno::UX::Selector MainView__Template::__selector4_;
::g::Uno::UX::Selector MainView__Template::__selector5_;
::g::Uno::UX::Selector MainView__Template::__selector6_;

// public Template(MainView parent, MainView parentInstance) [instance] :9
void MainView__Template::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainView parent, MainView parentInstance) [static] :9
MainView__Template* MainView__Template::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
