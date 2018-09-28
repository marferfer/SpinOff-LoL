// This file was generated based on C:/Users/JuanJose/Desktop/Mario/generated/bundles/login-transition/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRootVisualProvider.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Drawing{struct BrushConverter;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemModule;}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct DiagnosticsImplModule;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Storage{struct StorageModule;}}}
namespace g{namespace Fuse{namespace Testing{struct UnoTestingHelper;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTaskModule;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClientModule;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace FuseJS{struct Base64;}}
namespace g{namespace FuseJS{struct Bundle;}}
namespace g{namespace FuseJS{struct Environment;}}
namespace g{namespace FuseJS{struct FileReaderImpl;}}
namespace g{namespace FuseJS{struct Globals;}}
namespace g{namespace FuseJS{struct Lifecycle;}}
namespace g{namespace FuseJS{struct UserEvents;}}
namespace g{namespace Polyfills{namespace Window{struct WindowModule;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::Property1*> plusButtonScaling_Factor_inst;
    uStrong< ::g::Uno::UX::Property1*> scalePlusButton_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> cross_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> plusButtonTranslation_Y_inst;
    uStrong< ::g::Uno::UX::Property1*> plusButtonTranslation_X_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> changeWidth_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> loadCircle_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> scaleAndFade_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> showLoggedIn_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> text_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_LengthAngleDegrees_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCirclePanel_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingButton_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> loggedInView_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> plusButton_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> goodMorningText_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> monthPanel_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> weekTranslation_Y_inst;
    uStrong< ::g::Uno::UX::Property1*> weekScaling_Factor_inst;
    uStrong< ::g::Uno::UX::Property1*> headerScaling_Factor_inst;
    uStrong< ::g::Uno::UX::Property1*> showPlusButton_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> profile_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> profileScaling_Factor_inst;
    uStrong< ::g::Uno::UX::Property1*> loggedInView_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> plusButton_IsEnabled_inst;
    uStrong< ::g::Fuse::Controls::Panel*> transitionScaleGuide;
    uStrong< ::g::Fuse::UserEvent*> ToggleLoggedIn;
    uStrong< ::g::Fuse::Controls::Panel*> plusButton;
    uStrong< ::g::Fuse::Controls::Panel*> cross;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showPlusButton;
    uStrong< ::g::Fuse::Scaling*> plusButtonScaling;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> scalePlusButton;
    uStrong< ::g::Fuse::Translation*> plusButtonTranslation;
    uStrong< ::g::Fuse::Controls::Circle*> plusButtonTransitionCircle;
    uStrong< ::g::Fuse::Scaling*> plusButtonCircleScaling;
    uStrong< ::g::Fuse::Controls::Circle*> plusButtonBackgroundCircle;
    uStrong< ::g::Fuse::Controls::Panel*> loggedInView;
    uStrong< ::g::Fuse::Translation*> weekTranslation;
    uStrong< ::g::Fuse::Scaling*> weekScaling;
    uStrong< ::g::Fuse::Scaling*> headerScaling;
    uStrong< ::g::Fuse::Controls::Text*> goodMorningText;
    uStrong< ::g::Fuse::Controls::Circle*> profile;
    uStrong< ::g::Fuse::Scaling*> profileScaling;
    uStrong< ::g::Fuse::Controls::Grid*> monthPanel;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loading;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> changeWidth;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loadCircle;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> scaleAndFade;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showLoggedIn;
    uStrong< ::g::Fuse::Controls::Grid*> loggedOutView;
    uStrong< ::g::Fuse::Controls::Text*> text;
    uStrong< ::g::Fuse::Controls::Panel*> loadingCirclePanel;
    uStrong< ::g::Fuse::Controls::Circle*> loadingCircle;
    uStrong< ::g::Fuse::Controls::Rectangle*> rectNormalScale;
    uStrong< ::g::Fuse::Controls::Circle*> loadingButton;
    uStrong< ::g::Fuse::Controls::Image*> mark;
    uStrong< ::g::Fuse::Controls::Grid*> loginArea;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule*> FuseReactiveFuseJSDiagnosticsImplModule;
    uStrong< ::g::Fuse::Reactive::FuseJS::Http*> FuseReactiveFuseJSHttp;
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> FuseReactiveFuseJSTimerModule;
    uStrong< ::g::Fuse::Drawing::BrushConverter*> FuseDrawingBrushConverter;
    uStrong< ::g::Fuse::Triggers::BusyTaskModule*> FuseTriggersBusyTaskModule;
    uStrong< ::g::Fuse::Testing::UnoTestingHelper*> FuseTestingUnoTestingHelper;
    uStrong< ::g::Fuse::FileSystem::FileSystemModule*> FuseFileSystemFileSystemModule;
    uStrong< ::g::Fuse::Storage::StorageModule*> FuseStorageStorageModule;
    uStrong< ::g::Fuse::WebSocket::WebSocketClientModule*> FuseWebSocketWebSocketClientModule;
    uStrong< ::g::Polyfills::Window::WindowModule*> PolyfillsWindowWindowModule;
    uStrong< ::g::FuseJS::Globals*> FuseJSGlobals;
    uStrong< ::g::FuseJS::Lifecycle*> FuseJSLifecycle;
    uStrong< ::g::FuseJS::Environment*> FuseJSEnvironment;
    uStrong< ::g::FuseJS::Base64*> FuseJSBase64;
    uStrong< ::g::FuseJS::Bundle*> FuseJSBundle;
    uStrong< ::g::FuseJS::FileReaderImpl*> FuseJSFileReaderImpl;
    uStrong< ::g::FuseJS::UserEvents*> FuseJSUserEvents;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return MainView_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return MainView_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return MainView_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return MainView_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return MainView_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return MainView_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return MainView_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return MainView_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return MainView_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return MainView_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return MainView_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return MainView_typeof()->Init(), __selector27_; }
    static ::g::Uno::UX::Selector __selector28_;
    static ::g::Uno::UX::Selector& __selector28() { return MainView_typeof()->Init(), __selector28_; }
    static ::g::Uno::UX::Selector __selector29_;
    static ::g::Uno::UX::Selector& __selector29() { return MainView_typeof()->Init(), __selector29_; }
    static ::g::Uno::UX::Selector __selector30_;
    static ::g::Uno::UX::Selector& __selector30() { return MainView_typeof()->Init(), __selector30_; }
    static ::g::Uno::UX::Selector __selector31_;
    static ::g::Uno::UX::Selector& __selector31() { return MainView_typeof()->Init(), __selector31_; }
    static ::g::Uno::UX::Selector __selector32_;
    static ::g::Uno::UX::Selector& __selector32() { return MainView_typeof()->Init(), __selector32_; }
    static ::g::Uno::UX::Selector __selector33_;
    static ::g::Uno::UX::Selector& __selector33() { return MainView_typeof()->Init(), __selector33_; }
    static ::g::Uno::UX::Selector __selector34_;
    static ::g::Uno::UX::Selector& __selector34() { return MainView_typeof()->Init(), __selector34_; }
    static ::g::Uno::UX::Selector __selector35_;
    static ::g::Uno::UX::Selector& __selector35() { return MainView_typeof()->Init(), __selector35_; }
    static ::g::Uno::UX::Selector __selector36_;
    static ::g::Uno::UX::Selector& __selector36() { return MainView_typeof()->Init(), __selector36_; }
    static ::g::Uno::UX::Selector __selector37_;
    static ::g::Uno::UX::Selector& __selector37() { return MainView_typeof()->Init(), __selector37_; }
    static ::g::Uno::UX::Selector __selector38_;
    static ::g::Uno::UX::Selector& __selector38() { return MainView_typeof()->Init(), __selector38_; }
    static ::g::Uno::UX::Selector __selector39_;
    static ::g::Uno::UX::Selector& __selector39() { return MainView_typeof()->Init(), __selector39_; }
    static ::g::Uno::UX::Selector __selector40_;
    static ::g::Uno::UX::Selector& __selector40() { return MainView_typeof()->Init(), __selector40_; }

    void ctor_4();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
