// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Designer.Advance-634be00a.h>
#include <Fuse.Designer.ChildEx-3abc5917.h>
#include <Fuse.Designer.ColorAttribute.h>
#include <Fuse.Designer.Compone-f85c8002.h>
#include <Fuse.Designer.Default-4ce45c5c.h>
#include <Fuse.Designer.Default-9dfa586.h>
#include <Fuse.Designer.Designe-64fd0c66.h>
#include <Fuse.Designer.DragDro-ac35b107.h>
#include <Fuse.Designer.Extensi-cad0ec95.h>
#include <Fuse.Designer.GroupAttribute.h>
#include <Fuse.Designer.HideAttribute.h>
#include <Fuse.Designer.HidesAttribute.h>
#include <Fuse.Designer.IconAttribute.h>
#include <Fuse.Designer.InlineAttribute.h>
#include <Fuse.Designer.Interva-7718ab37.h>
#include <Fuse.Designer.Optiona-9c5a3028.h>
#include <Fuse.Designer.Priorit-2702f9bc.h>
#include <Fuse.Designer.RangeAttribute.h>
#include <Fuse.Designer.Recursi-c8fd5285.h>
#include <Fuse.Designer.Require-2087cd68.h>
#include <Fuse.Designer.Spawnab-deffeced.h>
#include <Fuse.Designer.SpawnsAttribute.h>
#include <Fuse.Designer.Thickne-60c8dec2.h>
#include <Fuse.Designer.Transit-e6aaf21b.h>
#include <Fuse.Designer.UnoHostInterface.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float4x4.h>
#include <Uno.Func2-3.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
static uString* STRINGS[4];

namespace g{
namespace Fuse{
namespace Designer{

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class AdvancedAttribute :57
// {
static void AdvancedAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AdvancedAttribute__New1_fn, 0, true, type, 0));
}

uType* AdvancedAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(AdvancedAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.AdvancedAttribute", options);
    type->fp_build_ = AdvancedAttribute_build;
    type->fp_ctor_ = (void*)AdvancedAttribute__New1_fn;
    return type;
}

// public generated AdvancedAttribute() :57
void AdvancedAttribute__ctor_1_fn(AdvancedAttribute* __this)
{
    __this->ctor_1();
}

// public generated AdvancedAttribute New() :57
void AdvancedAttribute__New1_fn(AdvancedAttribute** __retval)
{
    *__retval = AdvancedAttribute::New1();
}

// public generated AdvancedAttribute() [instance] :57
void AdvancedAttribute::ctor_1()
{
    ctor_();
}

// public generated AdvancedAttribute New() [static] :57
AdvancedAttribute* AdvancedAttribute::New1()
{
    AdvancedAttribute* obj1 = (AdvancedAttribute*)uNew(AdvancedAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class ChildExtensionAttribute :12
// {
static void ChildExtensionAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ChildExtensionAttribute__New1_fn, 0, true, type, 0));
}

uType* ChildExtensionAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(ChildExtensionAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.ChildExtensionAttribute", options);
    type->fp_build_ = ChildExtensionAttribute_build;
    type->fp_ctor_ = (void*)ChildExtensionAttribute__New1_fn;
    return type;
}

// public generated ChildExtensionAttribute() :12
void ChildExtensionAttribute__ctor_1_fn(ChildExtensionAttribute* __this)
{
    __this->ctor_1();
}

// public generated ChildExtensionAttribute New() :12
void ChildExtensionAttribute__New1_fn(ChildExtensionAttribute** __retval)
{
    *__retval = ChildExtensionAttribute::New1();
}

// public generated ChildExtensionAttribute() [instance] :12
void ChildExtensionAttribute::ctor_1()
{
    ctor_();
}

// public generated ChildExtensionAttribute New() [static] :12
ChildExtensionAttribute* ChildExtensionAttribute::New1()
{
    ChildExtensionAttribute* obj1 = (ChildExtensionAttribute*)uNew(ChildExtensionAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class ColorAttribute :111
// {
static void ColorAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ColorAttribute__New1_fn, 0, true, type, 0));
}

uType* ColorAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(ColorAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.ColorAttribute", options);
    type->fp_build_ = ColorAttribute_build;
    type->fp_ctor_ = (void*)ColorAttribute__New1_fn;
    return type;
}

// public generated ColorAttribute() :111
void ColorAttribute__ctor_1_fn(ColorAttribute* __this)
{
    __this->ctor_1();
}

// public generated ColorAttribute New() :111
void ColorAttribute__New1_fn(ColorAttribute** __retval)
{
    *__retval = ColorAttribute::New1();
}

// public generated ColorAttribute() [instance] :111
void ColorAttribute::ctor_1()
{
    ctor_();
}

// public generated ColorAttribute New() [static] :111
ColorAttribute* ColorAttribute::New1()
{
    ColorAttribute* obj1 = (ColorAttribute*)uNew(ColorAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class ComponentOfAttribute :93
// {
static void ComponentOfAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ComponentOfAttribute, EntityClass), 0);
    type->Reflection.SetFields(1,
        new uField("EntityClass", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ComponentOfAttribute__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* ComponentOfAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ComponentOfAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.ComponentOfAttribute", options);
    type->fp_build_ = ComponentOfAttribute_build;
    return type;
}

// public ComponentOfAttribute(string entityClass) :96
void ComponentOfAttribute__ctor_1_fn(ComponentOfAttribute* __this, uString* entityClass)
{
    __this->ctor_1(entityClass);
}

// public ComponentOfAttribute New(string entityClass) :96
void ComponentOfAttribute__New1_fn(uString* entityClass, ComponentOfAttribute** __retval)
{
    *__retval = ComponentOfAttribute::New1(entityClass);
}

// public ComponentOfAttribute(string entityClass) [instance] :96
void ComponentOfAttribute::ctor_1(uString* entityClass)
{
    ctor_();
    EntityClass = entityClass;
}

// public ComponentOfAttribute New(string entityClass) [static] :96
ComponentOfAttribute* ComponentOfAttribute::New1(uString* entityClass)
{
    ComponentOfAttribute* obj1 = (ComponentOfAttribute*)uNew(ComponentOfAttribute_typeof());
    obj1->ctor_1(entityClass);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class DefaultComponentAttribute :99
// {
static void DefaultComponentAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DefaultComponentAttribute, ComponentClass), 0);
    type->Reflection.SetFields(1,
        new uField("ComponentClass", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DefaultComponentAttribute__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* DefaultComponentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DefaultComponentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.DefaultComponentAttribute", options);
    type->fp_build_ = DefaultComponentAttribute_build;
    return type;
}

// public DefaultComponentAttribute(string componentClass) :102
void DefaultComponentAttribute__ctor_1_fn(DefaultComponentAttribute* __this, uString* componentClass)
{
    __this->ctor_1(componentClass);
}

// public DefaultComponentAttribute New(string componentClass) :102
void DefaultComponentAttribute__New1_fn(uString* componentClass, DefaultComponentAttribute** __retval)
{
    *__retval = DefaultComponentAttribute::New1(componentClass);
}

// public DefaultComponentAttribute(string componentClass) [instance] :102
void DefaultComponentAttribute::ctor_1(uString* componentClass)
{
    ctor_();
    ComponentClass = componentClass;
}

// public DefaultComponentAttribute New(string componentClass) [static] :102
DefaultComponentAttribute* DefaultComponentAttribute::New1(uString* componentClass)
{
    DefaultComponentAttribute* obj1 = (DefaultComponentAttribute*)uNew(DefaultComponentAttribute_typeof());
    obj1->ctor_1(componentClass);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class DefaultInstanceAttribute :14
// {
static void DefaultInstanceAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DefaultInstanceAttribute, TargetProperty), 0,
        ::g::Uno::String_typeof(), offsetof(DefaultInstanceAttribute, Type), 0);
    type->Reflection.SetFields(2,
        new uField("TargetProperty", 0),
        new uField("Type", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DefaultInstanceAttribute__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uType* DefaultInstanceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DefaultInstanceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.DefaultInstanceAttribute", options);
    type->fp_build_ = DefaultInstanceAttribute_build;
    return type;
}

// public DefaultInstanceAttribute(string targetProperty, string type) :18
void DefaultInstanceAttribute__ctor_1_fn(DefaultInstanceAttribute* __this, uString* targetProperty, uString* type)
{
    __this->ctor_1(targetProperty, type);
}

// public DefaultInstanceAttribute New(string targetProperty, string type) :18
void DefaultInstanceAttribute__New1_fn(uString* targetProperty, uString* type, DefaultInstanceAttribute** __retval)
{
    *__retval = DefaultInstanceAttribute::New1(targetProperty, type);
}

// public DefaultInstanceAttribute(string targetProperty, string type) [instance] :18
void DefaultInstanceAttribute::ctor_1(uString* targetProperty, uString* type)
{
    ctor_();
    TargetProperty = targetProperty;
    Type = type;
}

// public DefaultInstanceAttribute New(string targetProperty, string type) [static] :18
DefaultInstanceAttribute* DefaultInstanceAttribute::New1(uString* targetProperty, uString* type)
{
    DefaultInstanceAttribute* obj1 = (DefaultInstanceAttribute*)uNew(DefaultInstanceAttribute_typeof());
    obj1->ctor_1(targetProperty, type);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class DesignerNameAttribute :87
// {
static void DesignerNameAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DesignerNameAttribute, Name), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DesignerNameAttribute__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* DesignerNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DesignerNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.DesignerNameAttribute", options);
    type->fp_build_ = DesignerNameAttribute_build;
    return type;
}

// public DesignerNameAttribute(string name) :90
void DesignerNameAttribute__ctor_1_fn(DesignerNameAttribute* __this, uString* name)
{
    __this->ctor_1(name);
}

// public DesignerNameAttribute New(string name) :90
void DesignerNameAttribute__New1_fn(uString* name, DesignerNameAttribute** __retval)
{
    *__retval = DesignerNameAttribute::New1(name);
}

// public DesignerNameAttribute(string name) [instance] :90
void DesignerNameAttribute::ctor_1(uString* name)
{
    ctor_();
    Name = name;
}

// public DesignerNameAttribute New(string name) [static] :90
DesignerNameAttribute* DesignerNameAttribute::New1(uString* name)
{
    DesignerNameAttribute* obj1 = (DesignerNameAttribute*)uNew(DesignerNameAttribute_typeof());
    obj1->ctor_1(name);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class DragDropPriorityAttribute :85
// {
static void DragDropPriorityAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DragDropPriorityAttribute__New1_fn, 0, true, type, 0));
}

uType* DragDropPriorityAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DragDropPriorityAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.DragDropPriorityAttribute", options);
    type->fp_build_ = DragDropPriorityAttribute_build;
    type->fp_ctor_ = (void*)DragDropPriorityAttribute__New1_fn;
    return type;
}

// public generated DragDropPriorityAttribute() :85
void DragDropPriorityAttribute__ctor_1_fn(DragDropPriorityAttribute* __this)
{
    __this->ctor_1();
}

// public generated DragDropPriorityAttribute New() :85
void DragDropPriorityAttribute__New1_fn(DragDropPriorityAttribute** __retval)
{
    *__retval = DragDropPriorityAttribute::New1();
}

// public generated DragDropPriorityAttribute() [instance] :85
void DragDropPriorityAttribute::ctor_1()
{
    ctor_();
}

// public generated DragDropPriorityAttribute New() [static] :85
DragDropPriorityAttribute* DragDropPriorityAttribute::New1()
{
    DragDropPriorityAttribute* obj1 = (DragDropPriorityAttribute*)uNew(DragDropPriorityAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class ExtensionAttribute :11
// {
static void ExtensionAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExtensionAttribute__New1_fn, 0, true, type, 0));
}

uType* ExtensionAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(ExtensionAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.ExtensionAttribute", options);
    type->fp_build_ = ExtensionAttribute_build;
    type->fp_ctor_ = (void*)ExtensionAttribute__New1_fn;
    return type;
}

// public generated ExtensionAttribute() :11
void ExtensionAttribute__ctor_1_fn(ExtensionAttribute* __this)
{
    __this->ctor_1();
}

// public generated ExtensionAttribute New() :11
void ExtensionAttribute__New1_fn(ExtensionAttribute** __retval)
{
    *__retval = ExtensionAttribute::New1();
}

// public generated ExtensionAttribute() [instance] :11
void ExtensionAttribute::ctor_1()
{
    ctor_();
}

// public generated ExtensionAttribute New() [static] :11
ExtensionAttribute* ExtensionAttribute::New1()
{
    ExtensionAttribute* obj1 = (ExtensionAttribute*)uNew(ExtensionAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class GroupAttribute :44
// {
static void GroupAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(GroupAttribute, Name), 0,
        ::g::Uno::Int_typeof(), offsetof(GroupAttribute, Priority), 0);
    type->Reflection.SetFields(2,
        new uField("Name", 0),
        new uField("Priority", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GroupAttribute__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()));
}

uType* GroupAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GroupAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.GroupAttribute", options);
    type->fp_build_ = GroupAttribute_build;
    return type;
}

// public GroupAttribute(string name, [int priority]) :48
void GroupAttribute__ctor_1_fn(GroupAttribute* __this, uString* name, int32_t* priority)
{
    __this->ctor_1(name, *priority);
}

// public GroupAttribute New(string name, [int priority]) :48
void GroupAttribute__New1_fn(uString* name, int32_t* priority, GroupAttribute** __retval)
{
    *__retval = GroupAttribute::New1(name, *priority);
}

// public GroupAttribute(string name, [int priority]) [instance] :48
void GroupAttribute::ctor_1(uString* name, int32_t priority)
{
    ctor_();
    Name = name;
    Priority = priority;
}

// public GroupAttribute New(string name, [int priority]) [static] :48
GroupAttribute* GroupAttribute::New1(uString* name, int32_t priority)
{
    GroupAttribute* obj1 = (GroupAttribute*)uNew(GroupAttribute_typeof());
    obj1->ctor_1(name, priority);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class HideAttribute :6
// {
static void HideAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HideAttribute__New1_fn, 0, true, type, 0));
}

uType* HideAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(HideAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.HideAttribute", options);
    type->fp_build_ = HideAttribute_build;
    type->fp_ctor_ = (void*)HideAttribute__New1_fn;
    return type;
}

// public generated HideAttribute() :6
void HideAttribute__ctor_1_fn(HideAttribute* __this)
{
    __this->ctor_1();
}

// public generated HideAttribute New() :6
void HideAttribute__New1_fn(HideAttribute** __retval)
{
    *__retval = HideAttribute::New1();
}

// public generated HideAttribute() [instance] :6
void HideAttribute::ctor_1()
{
    ctor_();
}

// public generated HideAttribute New() [static] :6
HideAttribute* HideAttribute::New1()
{
    HideAttribute* obj1 = (HideAttribute*)uNew(HideAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class HidesAttribute :51
// {
static void HidesAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(HidesAttribute, TargetProperty), 0);
    type->Reflection.SetFields(1,
        new uField("TargetProperty", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HidesAttribute__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* HidesAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HidesAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.HidesAttribute", options);
    type->fp_build_ = HidesAttribute_build;
    return type;
}

// public HidesAttribute(string targetProperty) :54
void HidesAttribute__ctor_1_fn(HidesAttribute* __this, uString* targetProperty)
{
    __this->ctor_1(targetProperty);
}

// public HidesAttribute New(string targetProperty) :54
void HidesAttribute__New1_fn(uString* targetProperty, HidesAttribute** __retval)
{
    *__retval = HidesAttribute::New1(targetProperty);
}

// public HidesAttribute(string targetProperty) [instance] :54
void HidesAttribute::ctor_1(uString* targetProperty)
{
    ctor_();
    TargetProperty = targetProperty;
}

// public HidesAttribute New(string targetProperty) [static] :54
HidesAttribute* HidesAttribute::New1(uString* targetProperty)
{
    HidesAttribute* obj1 = (HidesAttribute*)uNew(HidesAttribute_typeof());
    obj1->ctor_1(targetProperty);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class IconAttribute :26
// {
static void IconAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(IconAttribute, Path), 0);
    type->Reflection.SetFields(1,
        new uField("Path", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IconAttribute__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* IconAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(IconAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.IconAttribute", options);
    type->fp_build_ = IconAttribute_build;
    return type;
}

// public IconAttribute(string path) :29
void IconAttribute__ctor_1_fn(IconAttribute* __this, uString* path)
{
    __this->ctor_1(path);
}

// public IconAttribute New(string path) :29
void IconAttribute__New1_fn(uString* path, IconAttribute** __retval)
{
    *__retval = IconAttribute::New1(path);
}

// public IconAttribute(string path) [instance] :29
void IconAttribute::ctor_1(uString* path)
{
    ctor_();
    Path = path;
}

// public IconAttribute New(string path) [static] :29
IconAttribute* IconAttribute::New1(uString* path)
{
    IconAttribute* obj1 = (IconAttribute*)uNew(IconAttribute_typeof());
    obj1->ctor_1(path);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class InlineAttribute :9
// {
static void InlineAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InlineAttribute__New1_fn, 0, true, type, 0));
}

uType* InlineAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(InlineAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.InlineAttribute", options);
    type->fp_build_ = InlineAttribute_build;
    type->fp_ctor_ = (void*)InlineAttribute__New1_fn;
    return type;
}

// public generated InlineAttribute() :9
void InlineAttribute__ctor_1_fn(InlineAttribute* __this)
{
    __this->ctor_1();
}

// public generated InlineAttribute New() :9
void InlineAttribute__New1_fn(InlineAttribute** __retval)
{
    *__retval = InlineAttribute::New1();
}

// public generated InlineAttribute() [instance] :9
void InlineAttribute::ctor_1()
{
    ctor_();
}

// public generated InlineAttribute New() [static] :9
InlineAttribute* InlineAttribute::New1()
{
    InlineAttribute* obj1 = (InlineAttribute*)uNew(InlineAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class IntervalAttribute :123
// {
static void IntervalAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(IntervalAttribute, Interval), 0);
    type->Reflection.SetFields(1,
        new uField("Interval", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IntervalAttribute__New1_fn, 0, true, type, 1, ::g::Uno::Float_typeof()));
}

uType* IntervalAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(IntervalAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.IntervalAttribute", options);
    type->fp_build_ = IntervalAttribute_build;
    return type;
}

// public IntervalAttribute(float interval) :126
void IntervalAttribute__ctor_1_fn(IntervalAttribute* __this, float* interval)
{
    __this->ctor_1(*interval);
}

// public IntervalAttribute New(float interval) :126
void IntervalAttribute__New1_fn(float* interval, IntervalAttribute** __retval)
{
    *__retval = IntervalAttribute::New1(*interval);
}

// public IntervalAttribute(float interval) [instance] :126
void IntervalAttribute::ctor_1(float interval)
{
    ctor_();
    Interval = interval;
}

// public IntervalAttribute New(float interval) [static] :126
IntervalAttribute* IntervalAttribute::New1(float interval)
{
    IntervalAttribute* obj1 = (IntervalAttribute*)uNew(IntervalAttribute_typeof());
    obj1->ctor_1(interval);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class OptionalHideAttribute :7
// {
static void OptionalHideAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OptionalHideAttribute__New1_fn, 0, true, type, 0));
}

uType* OptionalHideAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(OptionalHideAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.OptionalHideAttribute", options);
    type->fp_build_ = OptionalHideAttribute_build;
    type->fp_ctor_ = (void*)OptionalHideAttribute__New1_fn;
    return type;
}

// public generated OptionalHideAttribute() :7
void OptionalHideAttribute__ctor_1_fn(OptionalHideAttribute* __this)
{
    __this->ctor_1();
}

// public generated OptionalHideAttribute New() :7
void OptionalHideAttribute__New1_fn(OptionalHideAttribute** __retval)
{
    *__retval = OptionalHideAttribute::New1();
}

// public generated OptionalHideAttribute() [instance] :7
void OptionalHideAttribute::ctor_1()
{
    ctor_();
}

// public generated OptionalHideAttribute New() [static] :7
OptionalHideAttribute* OptionalHideAttribute::New1()
{
    OptionalHideAttribute* obj1 = (OptionalHideAttribute*)uNew(OptionalHideAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class PriorityAttribute :35
// {
static void PriorityAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(PriorityAttribute, Priority), 0);
    type->Reflection.SetFields(1,
        new uField("Priority", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PriorityAttribute__New1_fn, 0, true, type, 1, ::g::Uno::Int_typeof()));
}

uType* PriorityAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PriorityAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.PriorityAttribute", options);
    type->fp_build_ = PriorityAttribute_build;
    return type;
}

// public PriorityAttribute([int Priority]) :38
void PriorityAttribute__ctor_1_fn(PriorityAttribute* __this, int32_t* Priority1)
{
    __this->ctor_1(*Priority1);
}

// public PriorityAttribute New([int Priority]) :38
void PriorityAttribute__New1_fn(int32_t* Priority1, PriorityAttribute** __retval)
{
    *__retval = PriorityAttribute::New1(*Priority1);
}

// public PriorityAttribute([int Priority]) [instance] :38
void PriorityAttribute::ctor_1(int32_t Priority1)
{
    ctor_();
    Priority = Priority1;
}

// public PriorityAttribute New([int Priority]) [static] :38
PriorityAttribute* PriorityAttribute::New1(int32_t Priority1)
{
    PriorityAttribute* obj1 = (PriorityAttribute*)uNew(PriorityAttribute_typeof());
    obj1->ctor_1(Priority1);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class RangeAttribute :114
// {
static void RangeAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(RangeAttribute, Min), 0,
        ::g::Uno::Float_typeof(), offsetof(RangeAttribute, Max), 0,
        ::g::Uno::Float_typeof(), offsetof(RangeAttribute, Exponent), 0);
    type->Reflection.SetFields(3,
        new uField("Exponent", 2),
        new uField("Max", 1),
        new uField("Min", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)RangeAttribute__New1_fn, 0, true, type, 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)RangeAttribute__New2_fn, 0, true, type, 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()));
}

uType* RangeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RangeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.RangeAttribute", options);
    type->fp_build_ = RangeAttribute_build;
    return type;
}

// public RangeAttribute(float min, float max) :119
void RangeAttribute__ctor_1_fn(RangeAttribute* __this, float* min, float* max)
{
    __this->ctor_1(*min, *max);
}

// public RangeAttribute(float min, float max, float exponent) :120
void RangeAttribute__ctor_2_fn(RangeAttribute* __this, float* min, float* max, float* exponent)
{
    __this->ctor_2(*min, *max, *exponent);
}

// public RangeAttribute New(float min, float max) :119
void RangeAttribute__New1_fn(float* min, float* max, RangeAttribute** __retval)
{
    *__retval = RangeAttribute::New1(*min, *max);
}

// public RangeAttribute New(float min, float max, float exponent) :120
void RangeAttribute__New2_fn(float* min, float* max, float* exponent, RangeAttribute** __retval)
{
    *__retval = RangeAttribute::New2(*min, *max, *exponent);
}

// public RangeAttribute(float min, float max) [instance] :119
void RangeAttribute::ctor_1(float min, float max)
{
    Exponent = 1.0f;
    ctor_();
    Min = min;
    Max = max;
}

// public RangeAttribute(float min, float max, float exponent) [instance] :120
void RangeAttribute::ctor_2(float min, float max, float exponent)
{
    Exponent = 1.0f;
    ctor_();
    Min = min;
    Max = max;
    Exponent = exponent;
}

// public RangeAttribute New(float min, float max) [static] :119
RangeAttribute* RangeAttribute::New1(float min, float max)
{
    RangeAttribute* obj1 = (RangeAttribute*)uNew(RangeAttribute_typeof());
    obj1->ctor_1(min, max);
    return obj1;
}

// public RangeAttribute New(float min, float max, float exponent) [static] :120
RangeAttribute* RangeAttribute::New2(float min, float max, float exponent)
{
    RangeAttribute* obj2 = (RangeAttribute*)uNew(RangeAttribute_typeof());
    obj2->ctor_2(min, max, exponent);
    return obj2;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class RecursionSafeAttribute :129
// {
static void RecursionSafeAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RecursionSafeAttribute__New1_fn, 0, true, type, 0));
}

uType* RecursionSafeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(RecursionSafeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.RecursionSafeAttribute", options);
    type->fp_build_ = RecursionSafeAttribute_build;
    type->fp_ctor_ = (void*)RecursionSafeAttribute__New1_fn;
    return type;
}

// public generated RecursionSafeAttribute() :129
void RecursionSafeAttribute__ctor_1_fn(RecursionSafeAttribute* __this)
{
    __this->ctor_1();
}

// public generated RecursionSafeAttribute New() :129
void RecursionSafeAttribute__New1_fn(RecursionSafeAttribute** __retval)
{
    *__retval = RecursionSafeAttribute::New1();
}

// public generated RecursionSafeAttribute() [instance] :129
void RecursionSafeAttribute::ctor_1()
{
    ctor_();
}

// public generated RecursionSafeAttribute New() [static] :129
RecursionSafeAttribute* RecursionSafeAttribute::New1()
{
    RecursionSafeAttribute* obj1 = (RecursionSafeAttribute*)uNew(RecursionSafeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class RequiredComponentAttribute :105
// {
static void RequiredComponentAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(RequiredComponentAttribute, ComponentClass), 0);
    type->Reflection.SetFields(1,
        new uField("ComponentClass", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RequiredComponentAttribute__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* RequiredComponentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(RequiredComponentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.RequiredComponentAttribute", options);
    type->fp_build_ = RequiredComponentAttribute_build;
    return type;
}

// public RequiredComponentAttribute(string componentClass) :108
void RequiredComponentAttribute__ctor_1_fn(RequiredComponentAttribute* __this, uString* componentClass)
{
    __this->ctor_1(componentClass);
}

// public RequiredComponentAttribute New(string componentClass) :108
void RequiredComponentAttribute__New1_fn(uString* componentClass, RequiredComponentAttribute** __retval)
{
    *__retval = RequiredComponentAttribute::New1(componentClass);
}

// public RequiredComponentAttribute(string componentClass) [instance] :108
void RequiredComponentAttribute::ctor_1(uString* componentClass)
{
    ctor_();
    ComponentClass = componentClass;
}

// public RequiredComponentAttribute New(string componentClass) [static] :108
RequiredComponentAttribute* RequiredComponentAttribute::New1(uString* componentClass)
{
    RequiredComponentAttribute* obj1 = (RequiredComponentAttribute*)uNew(RequiredComponentAttribute_typeof());
    obj1->ctor_1(componentClass);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class SpawnableAttribute :59
// {
static void SpawnableAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SpawnableAttribute__New1_fn, 0, true, type, 0));
}

uType* SpawnableAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(SpawnableAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.SpawnableAttribute", options);
    type->fp_build_ = SpawnableAttribute_build;
    type->fp_ctor_ = (void*)SpawnableAttribute__New1_fn;
    return type;
}

// public generated SpawnableAttribute() :59
void SpawnableAttribute__ctor_1_fn(SpawnableAttribute* __this)
{
    __this->ctor_1();
}

// public generated SpawnableAttribute New() :59
void SpawnableAttribute__New1_fn(SpawnableAttribute** __retval)
{
    *__retval = SpawnableAttribute::New1();
}

// public generated SpawnableAttribute() [instance] :59
void SpawnableAttribute::ctor_1()
{
    ctor_();
}

// public generated SpawnableAttribute New() [static] :59
SpawnableAttribute* SpawnableAttribute::New1()
{
    SpawnableAttribute* obj1 = (SpawnableAttribute*)uNew(SpawnableAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class SpawnsAttribute :61
// {
static void SpawnsAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(SpawnsAttribute, SourceType), 0,
        ::g::Uno::String_typeof(), offsetof(SpawnsAttribute, TargetProperty), 0);
    type->Reflection.SetFields(2,
        new uField("SourceType", 0),
        new uField("TargetProperty", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SpawnsAttribute__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uType* SpawnsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SpawnsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.SpawnsAttribute", options);
    type->fp_build_ = SpawnsAttribute_build;
    return type;
}

// public SpawnsAttribute(string sourceType, string targetProperty) :65
void SpawnsAttribute__ctor_1_fn(SpawnsAttribute* __this, uString* sourceType, uString* targetProperty)
{
    __this->ctor_1(sourceType, targetProperty);
}

// public SpawnsAttribute New(string sourceType, string targetProperty) :65
void SpawnsAttribute__New1_fn(uString* sourceType, uString* targetProperty, SpawnsAttribute** __retval)
{
    *__retval = SpawnsAttribute::New1(sourceType, targetProperty);
}

// public SpawnsAttribute(string sourceType, string targetProperty) [instance] :65
void SpawnsAttribute::ctor_1(uString* sourceType, uString* targetProperty)
{
    ctor_();
    SourceType = sourceType;
    TargetProperty = targetProperty;
}

// public SpawnsAttribute New(string sourceType, string targetProperty) [static] :65
SpawnsAttribute* SpawnsAttribute::New1(uString* sourceType, uString* targetProperty)
{
    SpawnsAttribute* obj1 = (SpawnsAttribute*)uNew(SpawnsAttribute_typeof());
    obj1->ctor_1(sourceType, targetProperty);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class ThicknessAttribute :112
// {
static void ThicknessAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ThicknessAttribute__New1_fn, 0, true, type, 0));
}

uType* ThicknessAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(ThicknessAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.ThicknessAttribute", options);
    type->fp_build_ = ThicknessAttribute_build;
    type->fp_ctor_ = (void*)ThicknessAttribute__New1_fn;
    return type;
}

// public generated ThicknessAttribute() :112
void ThicknessAttribute__ctor_1_fn(ThicknessAttribute* __this)
{
    __this->ctor_1();
}

// public generated ThicknessAttribute New() :112
void ThicknessAttribute__New1_fn(ThicknessAttribute** __retval)
{
    *__retval = ThicknessAttribute::New1();
}

// public generated ThicknessAttribute() [instance] :112
void ThicknessAttribute::ctor_1()
{
    ctor_();
}

// public generated ThicknessAttribute New() [static] :112
ThicknessAttribute* ThicknessAttribute::New1()
{
    ThicknessAttribute* obj1 = (ThicknessAttribute*)uNew(ThicknessAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\Attributes.uno
// -------------------------------------------------------------------------------------

// public sealed class TransitionAttribute :72
// {
static void TransitionAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(TransitionAttribute, IncomingType), 0,
        ::g::Uno::String_typeof(), offsetof(TransitionAttribute, TargetType), 0,
        ::g::Uno::String_typeof(), offsetof(TransitionAttribute, TargetProperty), 0);
    type->Reflection.SetFields(3,
        new uField("IncomingType", 0),
        new uField("TargetProperty", 2),
        new uField("TargetType", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TransitionAttribute__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uType* TransitionAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TransitionAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Designer.TransitionAttribute", options);
    type->fp_build_ = TransitionAttribute_build;
    return type;
}

// public TransitionAttribute(string incomingType, string targetType, string targetProperty) :77
void TransitionAttribute__ctor_1_fn(TransitionAttribute* __this, uString* incomingType, uString* targetType, uString* targetProperty)
{
    __this->ctor_1(incomingType, targetType, targetProperty);
}

// public TransitionAttribute New(string incomingType, string targetType, string targetProperty) :77
void TransitionAttribute__New1_fn(uString* incomingType, uString* targetType, uString* targetProperty, TransitionAttribute** __retval)
{
    *__retval = TransitionAttribute::New1(incomingType, targetType, targetProperty);
}

// public TransitionAttribute(string incomingType, string targetType, string targetProperty) [instance] :77
void TransitionAttribute::ctor_1(uString* incomingType, uString* targetType, uString* targetProperty)
{
    ctor_();
    IncomingType = incomingType;
    TargetType = targetType;
    TargetProperty = targetProperty;
}

// public TransitionAttribute New(string incomingType, string targetType, string targetProperty) [static] :77
TransitionAttribute* TransitionAttribute::New1(uString* incomingType, uString* targetType, uString* targetProperty)
{
    TransitionAttribute* obj1 = (TransitionAttribute*)uNew(TransitionAttribute_typeof());
    obj1->ctor_1(incomingType, targetType, targetProperty);
    return obj1;
}
// }

// C:\Users\JuanJose\AppData\Local\Fusetools\Packages\Fuse.Designer\1.9.0\UnoHostInterface.uno
// -------------------------------------------------------------------------------------------

// public static extern class UnoHostInterface :6
// {
static void UnoHostInterface_build(uType* type)
{
    ::STRINGS[0] = uString::Const("VisualAppearedFactory func is null");
    ::STRINGS[1] = uString::Const("VisualBoundsChangedFactory func is null");
    ::STRINGS[2] = uString::Const("VisualDisappearedFactory func is null");
    ::STRINGS[3] = uString::Const("VisualTransformChangedFactory func is null");
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Rect_typeof(), ::g::Uno::Float4x4_typeof(), NULL), ::g::Uno::IDisposable_typeof(), NULL), (uintptr_t)&UnoHostInterface::VisualAppearedFactory_, uFieldFlagsStatic,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL), ::g::Uno::IDisposable_typeof(), NULL), (uintptr_t)&UnoHostInterface::VisualBoundsChangedFactory_, uFieldFlagsStatic,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4x4_typeof(), NULL), ::g::Uno::IDisposable_typeof(), NULL), (uintptr_t)&UnoHostInterface::VisualTransformChangedFactory_, uFieldFlagsStatic,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action_typeof(), ::g::Uno::IDisposable_typeof(), NULL), (uintptr_t)&UnoHostInterface::VisualDisappearedFactory_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("OnVisualAppeared", NULL, (void*)UnoHostInterface__OnVisualAppeared_fn, 0, true, ::g::Uno::IDisposable_typeof(), 2, uObject_typeof(), ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Rect_typeof(), ::g::Uno::Float4x4_typeof(), NULL)),
        new uFunction("OnVisualBoundsChanged", NULL, (void*)UnoHostInterface__OnVisualBoundsChanged_fn, 0, true, ::g::Uno::IDisposable_typeof(), 2, uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL)),
        new uFunction("OnVisualDisappeared", NULL, (void*)UnoHostInterface__OnVisualDisappeared_fn, 0, true, ::g::Uno::IDisposable_typeof(), 2, uObject_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("OnVisualTransformChanged", NULL, (void*)UnoHostInterface__OnVisualTransformChanged_fn, 0, true, ::g::Uno::IDisposable_typeof(), 2, uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4x4_typeof(), NULL)));
}

uClassType* UnoHostInterface_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Designer.UnoHostInterface", options);
    type->fp_build_ = UnoHostInterface_build;
    return type;
}

// public static Uno.IDisposable OnVisualAppeared(object obj, Uno.Action<Uno.Rect, float4x4> handler) :14
void UnoHostInterface__OnVisualAppeared_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = UnoHostInterface::OnVisualAppeared(obj, handler);
}

// public static Uno.IDisposable OnVisualBoundsChanged(object obj, Uno.Action<Uno.Rect> handler) :22
void UnoHostInterface__OnVisualBoundsChanged_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = UnoHostInterface::OnVisualBoundsChanged(obj, handler);
}

// public static Uno.IDisposable OnVisualDisappeared(object obj, Uno.Action handler) :38
void UnoHostInterface__OnVisualDisappeared_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = UnoHostInterface::OnVisualDisappeared(obj, handler);
}

// public static Uno.IDisposable OnVisualTransformChanged(object obj, Uno.Action<float4x4> handler) :30
void UnoHostInterface__OnVisualTransformChanged_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = UnoHostInterface::OnVisualTransformChanged(obj, handler);
}

uSStrong<uDelegate*> UnoHostInterface::VisualAppearedFactory_;
uSStrong<uDelegate*> UnoHostInterface::VisualBoundsChangedFactory_;
uSStrong<uDelegate*> UnoHostInterface::VisualTransformChangedFactory_;
uSStrong<uDelegate*> UnoHostInterface::VisualDisappearedFactory_;

// public static Uno.IDisposable OnVisualAppeared(object obj, Uno.Action<Uno.Rect, float4x4> handler) [static] :14
uObject* UnoHostInterface::OnVisualAppeared(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Designer.UnoHostInterface", "OnVisualAppeared(object,Uno.Action<Uno.Rect, float4x4>)");

    if (::g::Uno::Delegate::op_Equality(UnoHostInterface::VisualAppearedFactory_, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"VisualAppea...*/]));

    return (uObject*)uPtr(UnoHostInterface::VisualAppearedFactory_)->Invoke(2, obj, handler);
}

// public static Uno.IDisposable OnVisualBoundsChanged(object obj, Uno.Action<Uno.Rect> handler) [static] :22
uObject* UnoHostInterface::OnVisualBoundsChanged(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Designer.UnoHostInterface", "OnVisualBoundsChanged(object,Uno.Action<Uno.Rect>)");

    if (::g::Uno::Delegate::op_Equality(UnoHostInterface::VisualBoundsChangedFactory_, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"VisualBound...*/]));

    return (uObject*)uPtr(UnoHostInterface::VisualBoundsChangedFactory_)->Invoke(2, obj, handler);
}

// public static Uno.IDisposable OnVisualDisappeared(object obj, Uno.Action handler) [static] :38
uObject* UnoHostInterface::OnVisualDisappeared(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Designer.UnoHostInterface", "OnVisualDisappeared(object,Uno.Action)");

    if (::g::Uno::Delegate::op_Equality(UnoHostInterface::VisualDisappearedFactory_, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"VisualDisap...*/]));

    return (uObject*)uPtr(UnoHostInterface::VisualDisappearedFactory_)->Invoke(2, obj, handler);
}

// public static Uno.IDisposable OnVisualTransformChanged(object obj, Uno.Action<float4x4> handler) [static] :30
uObject* UnoHostInterface::OnVisualTransformChanged(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Designer.UnoHostInterface", "OnVisualTransformChanged(object,Uno.Action<float4x4>)");

    if (::g::Uno::Delegate::op_Equality(UnoHostInterface::VisualTransformChangedFactory_, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"VisualTrans...*/]));

    return (uObject*)uPtr(UnoHostInterface::VisualTransformChangedFactory_)->Invoke(2, obj, handler);
}
// }

}}} // ::g::Fuse::Designer
