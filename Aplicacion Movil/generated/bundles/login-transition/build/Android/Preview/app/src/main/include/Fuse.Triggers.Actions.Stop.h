// This file was generated based on C:/Users/JuanJose/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.9.0/Actions/Playback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-baf069a8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Stop;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Stop :112
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof();
void Stop__ctor_3_fn(Stop* __this);
void Stop__New2_fn(Stop** __retval);
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target);

struct Stop : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    void ctor_3();
    static Stop* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
