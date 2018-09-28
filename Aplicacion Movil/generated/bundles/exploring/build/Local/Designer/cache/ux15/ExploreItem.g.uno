[Uno.Compiler.UxGenerated]
public partial class ExploreItem: Fuse.Controls.Panel
{
    bool _field_InDetailsMode;
    [global::Uno.UX.UXOriginSetter("SetInDetailsMode")]
    public bool InDetailsMode
    {
        get { return _field_InDetailsMode; }
        set { SetInDetailsMode(value, null); }
    }
    public void SetInDetailsMode(bool value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_InDetailsMode)
        {
            _field_InDetailsMode = value;
            OnPropertyChanged("InDetailsMode", origin);
        }
    }
    string _field_ImageName;
    [global::Uno.UX.UXOriginSetter("SetImageName")]
    public string ImageName
    {
        get { return _field_ImageName; }
        set { SetImageName(value, null); }
    }
    public void SetImageName(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ImageName)
        {
            _field_ImageName = value;
            OnPropertyChanged("ImageName", origin);
        }
    }
    string _field_Country;
    [global::Uno.UX.UXOriginSetter("SetCountry")]
    public string Country
    {
        get { return _field_Country; }
        set { SetCountry(value, null); }
    }
    public void SetCountry(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Country)
        {
            _field_Country = value;
            OnPropertyChanged("Country", origin);
        }
    }
    float4 _field_ForegroundColor;
    [global::Uno.UX.UXOriginSetter("SetForegroundColor")]
    public float4 ForegroundColor
    {
        get { return _field_ForegroundColor; }
        set { SetForegroundColor(value, null); }
    }
    public void SetForegroundColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ForegroundColor)
        {
            _field_ForegroundColor = value;
            OnPropertyChanged("ForegroundColor", origin);
        }
    }
    Fuse.Elements.Alignment _field_CardAlignment;
    [global::Uno.UX.UXOriginSetter("SetCardAlignment")]
    public Fuse.Elements.Alignment CardAlignment
    {
        get { return _field_CardAlignment; }
        set { SetCardAlignment(value, null); }
    }
    public void SetCardAlignment(Fuse.Elements.Alignment value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_CardAlignment)
        {
            _field_CardAlignment = value;
            OnPropertyChanged("CardAlignment", origin);
        }
    }
    readonly Fuse.Controls.Panel detailsImagePanel;
    readonly Fuse.Controls.Panel detailsPlacesPanel;
    readonly Fuse.Controls.Panel detailsInfoPanel;
    readonly Fuse.Controls.Panel detailsFactsPanel;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ExploreItem __parent;
        [Uno.WeakReference] internal readonly ExploreItem __parentInstance;
        public Template(ExploreItem parent, ExploreItem parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Grid();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new exploring_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("title");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new exploring_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("fact");
            var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp5 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            __self.Rows = "1*,1*";
            __self.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
            __self.SourceLineNumber = 36;
            __self.SourceFileName = "MainView.ux";
            temp.FontSize = 20f;
            temp.SourceLineNumber = 37;
            temp.SourceFileName = "MainView.ux";
            temp.Bindings.Add(temp4);
            temp2.SourceLineNumber = 37;
            temp2.SourceFileName = "MainView.ux";
            temp1.FontSize = 10f;
            temp1.TextColor = float4(0.6666667f, 0.6666667f, 0.6666667f, 1f);
            temp1.SourceLineNumber = 38;
            temp1.SourceFileName = "MainView.ux";
            temp1.Bindings.Add(temp5);
            temp3.SourceLineNumber = 38;
            temp3.SourceFileName = "MainView.ux";
            __self.Children.Add(temp);
            __self.Children.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ExploreItem __parent;
        [Uno.WeakReference] internal readonly ExploreItem __parentInstance;
        public Template1(ExploreItem parent, ExploreItem parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.StackPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new exploring_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.DataFunction();
            var temp2 = new global::Fuse.Controls.Text();
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.Alignment = Fuse.Elements.Alignment.Top;
            __self.Margin = float4(30f, 30f, 30f, 30f);
            __self.SourceLineNumber = 81;
            __self.SourceFileName = "MainView.ux";
            temp2.Value = "FACTS";
            temp2.TextColor = float4(1f, 1f, 1f, 1f);
            temp2.SourceLineNumber = 82;
            temp2.SourceFileName = "MainView.ux";
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.FontSize = 14f;
            temp.TextColor = float4(1f, 1f, 1f, 1f);
            temp.Margin = float4(0f, 15f, 0f, 0f);
            temp.SourceLineNumber = 83;
            temp.SourceFileName = "MainView.ux";
            temp.Bindings.Add(temp3);
            temp1.SourceLineNumber = 83;
            temp1.SourceFileName = "MainView.ux";
            __self.Children.Add(temp2);
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ExploreItem __parent;
        [Uno.WeakReference] internal readonly ExploreItem __parentInstance;
        public Template2(ExploreItem parent, ExploreItem parentInstance): base("Dot", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float4> TheColor_Color_inst;
        internal global::Fuse.Drawing.SolidColor TheColor;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            TheColor = new global::Fuse.Drawing.SolidColor();
            TheColor_Color_inst = new exploring_FuseDrawingSolidColor_Color_Property(TheColor, __selector0);
            var temp = new global::Fuse.Drawing.Stroke();
            var temp1 = new global::Fuse.Navigation.ActivatingAnimation();
            var temp2 = new global::Fuse.Animations.Change<float4>(TheColor_Color_inst);
            var temp3 = new global::Fuse.Animations.Scale();
            __self.Width = new Uno.UX.Size(6f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(6f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(5f, 5f, 5f, 5f);
            __self.Name = __selector1;
            __self.SourceLineNumber = 89;
            __self.SourceFileName = "MainView.ux";
            TheColor.Color = float4(1f, 1f, 1f, 0.3f);
            temp.Color = float4(1f, 1f, 1f, 1f);
            temp.Width = 1f;
            temp1.SourceLineNumber = 92;
            temp1.SourceFileName = "MainView.ux";
            temp1.Animators.Add(temp2);
            temp1.Animators.Add(temp3);
            temp2.Value = float4(1f, 1f, 1f, 1f);
            temp3.Factor = 1.2f;
            __self.Fills.Add(TheColor);
            __self.Strokes.Add(temp);
            __self.Children.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "Dot";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float> temp_FontSize_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<float> temp1_FontSize_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    global::Uno.UX.Property<Fuse.Elements.Alignment> placeContainer_Alignment_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Alignment> temp4_Alignment_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> img_File_inst;
    global::Uno.UX.Property<Fuse.Elements.Element> img_Element_LayoutMaster_inst;
    global::Uno.UX.Property<Fuse.Elements.Element> placeRect_Element_LayoutMaster_inst;
    global::Uno.UX.Property<Fuse.Elements.Element> infoRect_Element_LayoutMaster_inst;
    global::Uno.UX.Property<float> infoRect_Opacity_inst;
    global::Uno.UX.Property<float> infoRectContent_Opacity_inst;
    global::Uno.UX.Property<float> infoRectContentTrans_Y_inst;
    global::Uno.UX.Property<float> factsPanel_Opacity_inst;
    global::Uno.UX.Property<float> factsPanelTrans_Y_inst;
    global::Uno.UX.Property<Fuse.Elements.HitTestMode> factsPanel_HitTestMode_inst;
    global::Uno.UX.Property<bool> temp5_Value_inst;
    global::Uno.UX.Property<object> temp6_Items_inst;
    global::Uno.UX.Property<float> this_Opacity_inst;
    global::Uno.UX.Property<Fuse.Elements.HitTestMode> this_HitTestMode_inst;
    global::Uno.UX.Property<bool> temp7_Value_inst;
    internal global::Fuse.Controls.Panel placeContainer;
    internal global::Fuse.Controls.Panel placeRect;
    internal global::Fuse.Controls.Panel infoRect;
    internal global::Fuse.Controls.Grid infoRectContent;
    internal global::Fuse.Translation infoRectContentTrans;
    internal global::Fuse.Controls.Panel imgMaster;
    internal global::Fuse.Controls.Image img;
    internal global::Fuse.Controls.Grid factsPanel;
    internal global::Fuse.Translation factsPanelTrans;
    internal global::Fuse.Controls.PageControl factsPageControl;
    static ExploreItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ExploreItem(
		[global::Uno.UX.UXParameter("detailsImagePanel")] Fuse.Controls.Panel detailsImagePanel, 
		[global::Uno.UX.UXParameter("detailsPlacesPanel")] Fuse.Controls.Panel detailsPlacesPanel, 
		[global::Uno.UX.UXParameter("detailsInfoPanel")] Fuse.Controls.Panel detailsInfoPanel, 
		[global::Uno.UX.UXParameter("detailsFactsPanel")] Fuse.Controls.Panel detailsFactsPanel)
    {
        this.detailsImagePanel = detailsImagePanel;
        this.detailsPlacesPanel = detailsPlacesPanel;
        this.detailsInfoPanel = detailsInfoPanel;
        this.detailsFactsPanel = detailsFactsPanel;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp8 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new exploring_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp9 = new global::Fuse.Reactive.Property(temp8, exploring_accessor_ExploreItem_ImageName.Singleton);
        var temp10 = 26;
        var temp11 = new global::Fuse.Reactive.Constant(temp10);
        placeContainer = new global::Fuse.Controls.Panel();
        var temp12 = new global::Fuse.Reactive.Constant(placeContainer);
        var temp13 = new global::Fuse.Elements.WidthFunction(temp12);
        var temp14 = 230;
        var temp15 = new global::Fuse.Reactive.Constant(temp14);
        var temp16 = new global::Fuse.Reactive.Divide(temp13, temp15);
        temp_FontSize_inst = new exploring_FuseControlsTextControl_FontSize_Property(temp, __selector1);
        var temp17 = new global::Fuse.Reactive.Multiply(temp11, temp16);
        var temp18 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new exploring_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp19 = new global::Fuse.Reactive.Property(temp18, exploring_accessor_ExploreItem_Country.Singleton);
        var temp20 = 12;
        var temp21 = new global::Fuse.Reactive.Constant(temp20);
        var temp22 = new global::Fuse.Reactive.Constant(placeContainer);
        var temp23 = new global::Fuse.Elements.WidthFunction(temp22);
        var temp24 = 230;
        var temp25 = new global::Fuse.Reactive.Constant(temp24);
        var temp26 = new global::Fuse.Reactive.Divide(temp23, temp25);
        temp1_FontSize_inst = new exploring_FuseControlsTextControl_FontSize_Property(temp1, __selector1);
        var temp27 = new global::Fuse.Reactive.Multiply(temp21, temp26);
        var temp28 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Controls.Rectangle();
        temp2_Color_inst = new exploring_FuseControlsShape_Color_Property(temp2, __selector2);
        var temp29 = new global::Fuse.Reactive.Property(temp28, exploring_accessor_ExploreItem_ForegroundColor.Singleton);
        var temp30 = new global::Fuse.Reactive.Constant(this);
        placeContainer_Alignment_inst = new exploring_FuseElementsElement_Alignment_Property(placeContainer, __selector3);
        var temp31 = new global::Fuse.Reactive.Property(temp30, exploring_accessor_ExploreItem_CardAlignment.Singleton);
        var temp3 = new global::Fuse.Reactive.Each();
        temp3_Items_inst = new exploring_FuseReactiveEach_Items_Property(temp3, __selector4);
        var temp32 = new global::Fuse.Reactive.Data("numbers");
        var temp33 = new global::Fuse.Reactive.Constant(this);
        var temp4 = new global::Fuse.Controls.Panel();
        temp4_Alignment_inst = new exploring_FuseElementsElement_Alignment_Property(temp4, __selector3);
        var temp34 = new global::Fuse.Reactive.Property(temp33, exploring_accessor_ExploreItem_CardAlignment.Singleton);
        img = new global::Fuse.Controls.Image();
        img_File_inst = new exploring_FuseControlsImage_File_Property(img, __selector5);
        var temp35 = new global::Fuse.Reactive.Data("image");
        img_Element_LayoutMaster_inst = new exploring_FuseElementsElement_ElementLayoutMaster_Property(img, __selector6);
        placeRect = new global::Fuse.Controls.Panel();
        placeRect_Element_LayoutMaster_inst = new exploring_FuseElementsElement_ElementLayoutMaster_Property(placeRect, __selector6);
        infoRect = new global::Fuse.Controls.Panel();
        infoRect_Element_LayoutMaster_inst = new exploring_FuseElementsElement_ElementLayoutMaster_Property(infoRect, __selector6);
        infoRect_Opacity_inst = new exploring_FuseElementsElement_Opacity_Property(infoRect, __selector7);
        infoRectContent = new global::Fuse.Controls.Grid();
        infoRectContent_Opacity_inst = new exploring_FuseElementsElement_Opacity_Property(infoRectContent, __selector7);
        infoRectContentTrans = new global::Fuse.Translation();
        infoRectContentTrans_Y_inst = new exploring_FuseTranslation_Y_Property(infoRectContentTrans, __selector8);
        factsPanel = new global::Fuse.Controls.Grid();
        factsPanel_Opacity_inst = new exploring_FuseElementsElement_Opacity_Property(factsPanel, __selector7);
        factsPanelTrans = new global::Fuse.Translation();
        factsPanelTrans_Y_inst = new exploring_FuseTranslation_Y_Property(factsPanelTrans, __selector8);
        factsPanel_HitTestMode_inst = new exploring_FuseElementsElement_HitTestMode_Property(factsPanel, __selector9);
        var temp36 = new global::Fuse.Reactive.Constant(this);
        var temp5 = new global::Fuse.Triggers.WhileTrue();
        temp5_Value_inst = new exploring_FuseTriggersWhileBool_Value_Property(temp5, __selector0);
        var temp37 = new global::Fuse.Reactive.Property(temp36, exploring_accessor_ExploreItem_InDetailsMode.Singleton);
        var temp6 = new global::Fuse.Reactive.Each();
        temp6_Items_inst = new exploring_FuseReactiveEach_Items_Property(temp6, __selector4);
        var temp38 = new global::Fuse.Reactive.Data("facts");
        factsPageControl = new global::Fuse.Controls.PageControl();
        this_Opacity_inst = new exploring_FuseElementsElement_Opacity_Property(this, __selector7);
        this_HitTestMode_inst = new exploring_FuseElementsElement_HitTestMode_Property(this, __selector9);
        var temp39 = new global::Fuse.Reactive.Data("current");
        var temp40 = new global::Fuse.Reactive.Data("id");
        var temp41 = new global::Fuse.Reactive.NotEqual(temp39, temp40);
        var temp42 = new global::Fuse.Reactive.Data("inDetailsMode");
        var temp7 = new global::Fuse.Triggers.WhileTrue();
        temp7_Value_inst = new exploring_FuseTriggersWhileBool_Value_Property(temp7, __selector0);
        var temp43 = new global::Fuse.Reactive.LogicalAnd(temp41, temp42);
        var temp44 = new global::Fuse.Controls.StackPanel();
        var temp45 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp9, Fuse.Reactive.BindingMode.Read);
        var temp46 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp17, Fuse.Reactive.BindingMode.Default);
        var temp47 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp19, Fuse.Reactive.BindingMode.Read);
        var temp48 = new global::Fuse.Reactive.DataBinding(temp1_FontSize_inst, temp27, Fuse.Reactive.BindingMode.Default);
        var temp49 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp29, Fuse.Reactive.BindingMode.Read);
        var temp50 = new global::Fuse.Reactive.DataBinding(placeContainer_Alignment_inst, temp31, Fuse.Reactive.BindingMode.Read);
        var temp51 = new Template(this, this);
        var temp52 = new global::Fuse.Reactive.DataBinding(temp3_Items_inst, temp32, Fuse.Reactive.BindingMode.Default);
        var temp53 = new global::Fuse.Reactive.DataBinding(temp4_Alignment_inst, temp34, Fuse.Reactive.BindingMode.Read);
        imgMaster = new global::Fuse.Controls.Panel();
        var temp54 = new global::Fuse.Reactive.DataBinding(img_File_inst, temp35, Fuse.Reactive.BindingMode.Default);
        var temp55 = new global::Fuse.Animations.Move();
        var temp56 = new global::Fuse.Animations.Resize();
        var temp57 = new global::Fuse.Animations.Move();
        var temp58 = new global::Fuse.Animations.Resize();
        var temp59 = new global::Fuse.Animations.Move();
        var temp60 = new global::Fuse.Animations.Resize();
        var temp61 = new global::Fuse.Animations.Change<Fuse.Elements.Element>(img_Element_LayoutMaster_inst);
        var temp62 = new global::Fuse.Animations.Change<Fuse.Elements.Element>(placeRect_Element_LayoutMaster_inst);
        var temp63 = new global::Fuse.Animations.Change<Fuse.Elements.Element>(infoRect_Element_LayoutMaster_inst);
        var temp64 = new global::Fuse.Animations.Change<float>(infoRect_Opacity_inst);
        var temp65 = new global::Fuse.Animations.Change<float>(infoRectContent_Opacity_inst);
        var temp66 = new global::Fuse.Animations.Change<float>(infoRectContentTrans_Y_inst);
        var temp67 = new global::Fuse.Animations.Change<float>(factsPanel_Opacity_inst);
        var temp68 = new global::Fuse.Animations.Change<float>(factsPanelTrans_Y_inst);
        var temp69 = new global::Fuse.Animations.Change<Fuse.Elements.HitTestMode>(factsPanel_HitTestMode_inst);
        var temp70 = new global::Fuse.Triggers.Actions.BringToFront();
        var temp71 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp37, Fuse.Reactive.BindingMode.Read);
        var temp72 = new Template1(this, this);
        var temp73 = new global::Fuse.Reactive.DataBinding(temp6_Items_inst, temp38, Fuse.Reactive.BindingMode.Default);
        var temp74 = new global::Fuse.Controls.PageIndicator(factsPageControl);
        var Dot = new Template2(this, this);
        var temp75 = new global::Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp76 = new global::Fuse.Animations.Change<Fuse.Elements.HitTestMode>(this_HitTestMode_inst);
        var temp77 = new global::Fuse.Animations.Move();
        var temp78 = new global::Fuse.Reactive.DataBinding(temp7_Value_inst, temp43, Fuse.Reactive.BindingMode.Default);
        this.InDetailsMode = false;
        this.CardAlignment = Fuse.Elements.Alignment.Left;
        this.Aspect = 1.85f;
        this.Margin = float4(20f, 20f, 20f, 20f);
        this.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        this.SourceLineNumber = 6;
        this.SourceFileName = "MainView.ux";
        placeContainer.Width = new Uno.UX.Size(55f, Uno.UX.Unit.Percent);
        placeContainer.Name = __selector10;
        placeContainer.SourceLineNumber = 20;
        placeContainer.SourceFileName = "MainView.ux";
        placeContainer.Children.Add(placeRect);
        placeContainer.Bindings.Add(temp50);
        placeRect.Name = __selector11;
        placeRect.SourceLineNumber = 21;
        placeRect.SourceFileName = "MainView.ux";
        placeRect.Children.Add(temp44);
        placeRect.Children.Add(temp2);
        temp44.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Percent);
        temp44.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp44.Margin = float4(32f, 0f, 0f, 0f);
        temp44.SourceLineNumber = 22;
        temp44.SourceFileName = "MainView.ux";
        temp44.Children.Add(temp);
        temp44.Children.Add(temp1);
        temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp.TextColor = float4(1f, 1f, 1f, 1f);
        temp.SourceLineNumber = 23;
        temp.SourceFileName = "MainView.ux";
        temp.Bindings.Add(temp45);
        temp.Bindings.Add(temp46);
        temp9.SourceLineNumber = 23;
        temp9.SourceFileName = "MainView.ux";
        temp8.SourceLineNumber = 23;
        temp8.SourceFileName = "MainView.ux";
        temp17.SourceLineNumber = 23;
        temp17.SourceFileName = "MainView.ux";
        temp11.SourceLineNumber = 23;
        temp11.SourceFileName = "MainView.ux";
        temp16.SourceLineNumber = 23;
        temp16.SourceFileName = "MainView.ux";
        temp13.SourceLineNumber = 23;
        temp13.SourceFileName = "MainView.ux";
        temp12.SourceLineNumber = 23;
        temp12.SourceFileName = "MainView.ux";
        temp15.SourceLineNumber = 23;
        temp15.SourceFileName = "MainView.ux";
        temp1.TextColor = float4(1f, 1f, 1f, 1f);
        temp1.Margin = float4(0f, 20f, 0f, 0f);
        temp1.SourceLineNumber = 24;
        temp1.SourceFileName = "MainView.ux";
        temp1.Bindings.Add(temp47);
        temp1.Bindings.Add(temp48);
        temp19.SourceLineNumber = 24;
        temp19.SourceFileName = "MainView.ux";
        temp18.SourceLineNumber = 24;
        temp18.SourceFileName = "MainView.ux";
        temp27.SourceLineNumber = 24;
        temp27.SourceFileName = "MainView.ux";
        temp21.SourceLineNumber = 24;
        temp21.SourceFileName = "MainView.ux";
        temp26.SourceLineNumber = 24;
        temp26.SourceFileName = "MainView.ux";
        temp23.SourceLineNumber = 24;
        temp23.SourceFileName = "MainView.ux";
        temp22.SourceLineNumber = 24;
        temp22.SourceFileName = "MainView.ux";
        temp25.SourceLineNumber = 24;
        temp25.SourceFileName = "MainView.ux";
        temp2.Opacity = 0.9f;
        temp2.Layer = Fuse.Layer.Background;
        temp2.SourceLineNumber = 27;
        temp2.SourceFileName = "MainView.ux";
        temp2.Bindings.Add(temp49);
        temp29.SourceLineNumber = 27;
        temp29.SourceFileName = "MainView.ux";
        temp28.SourceLineNumber = 27;
        temp28.SourceFileName = "MainView.ux";
        temp31.SourceLineNumber = 20;
        temp31.SourceFileName = "MainView.ux";
        temp30.SourceLineNumber = 20;
        temp30.SourceFileName = "MainView.ux";
        temp4.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Percent);
        temp4.SourceLineNumber = 31;
        temp4.SourceFileName = "MainView.ux";
        temp4.Children.Add(infoRect);
        temp4.Bindings.Add(temp53);
        infoRect.Color = float4(1f, 1f, 1f, 1f);
        infoRect.Opacity = 0f;
        infoRect.Name = __selector12;
        infoRect.SourceLineNumber = 32;
        infoRect.SourceFileName = "MainView.ux";
        infoRect.Children.Add(infoRectContent);
        infoRectContent.Rows = "1*,1*";
        infoRectContent.Padding = float4(30f, 30f, 30f, 30f);
        infoRectContent.Opacity = 0f;
        infoRectContent.Name = __selector13;
        infoRectContent.SourceLineNumber = 33;
        infoRectContent.SourceFileName = "MainView.ux";
        infoRectContent.Children.Add(infoRectContentTrans);
        infoRectContent.Children.Add(temp3);
        infoRectContentTrans.Y = 0.15f;
        infoRectContentTrans.Name = __selector14;
        infoRectContentTrans.SourceLineNumber = 34;
        infoRectContentTrans.SourceFileName = "MainView.ux";
        infoRectContentTrans.RelativeTo = Fuse.TranslationModes.Size;
        temp3.SourceLineNumber = 35;
        temp3.SourceFileName = "MainView.ux";
        temp3.Templates.Add(temp51);
        temp3.Bindings.Add(temp52);
        temp32.SourceLineNumber = 35;
        temp32.SourceFileName = "MainView.ux";
        temp34.SourceLineNumber = 31;
        temp34.SourceFileName = "MainView.ux";
        temp33.SourceLineNumber = 31;
        temp33.SourceFileName = "MainView.ux";
        imgMaster.Height = new Uno.UX.Size(85f, Uno.UX.Unit.Percent);
        imgMaster.Name = __selector15;
        imgMaster.SourceLineNumber = 45;
        imgMaster.SourceFileName = "MainView.ux";
        imgMaster.Children.Add(img);
        img.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        img.Name = __selector16;
        img.SourceLineNumber = 46;
        img.SourceFileName = "MainView.ux";
        global::Fuse.Controls.LayoutControl.SetLayoutMaster(img, imgMaster);
        img.Bindings.Add(temp54);
        temp35.SourceLineNumber = 46;
        temp35.SourceFileName = "MainView.ux";
        temp5.SourceLineNumber = 49;
        temp5.SourceFileName = "MainView.ux";
        temp5.Animators.Add(temp55);
        temp5.Animators.Add(temp56);
        temp5.Animators.Add(temp57);
        temp5.Animators.Add(temp58);
        temp5.Animators.Add(temp59);
        temp5.Animators.Add(temp60);
        temp5.Animators.Add(temp61);
        temp5.Animators.Add(temp62);
        temp5.Animators.Add(temp63);
        temp5.Animators.Add(temp64);
        temp5.Animators.Add(temp65);
        temp5.Animators.Add(temp66);
        temp5.Animators.Add(temp67);
        temp5.Animators.Add(temp68);
        temp5.Animators.Add(temp69);
        temp5.Actions.Add(temp70);
        temp5.Bindings.Add(temp71);
        temp55.Vector = float3(1f, 1f, 1f);
        temp55.Duration = 0.6;
        temp55.RelativeTo = Fuse.Elements.TranslationModes.PositionOffset;
        temp55.RelativeNode = detailsImagePanel;
        temp55.Target = img;
        temp55.Easing = Fuse.Animations.Easing.CubicInOut;
        temp56.Vector = float2(1f, 1f);
        temp56.Duration = 0.6;
        temp56.Target = img;
        temp56.RelativeNode = detailsImagePanel;
        temp56.RelativeTo = Fuse.Elements.TranslationModes.Size;
        temp56.Easing = Fuse.Animations.Easing.CubicInOut;
        temp57.Vector = float3(1f, 1f, 1f);
        temp57.Duration = 0.6;
        temp57.RelativeTo = Fuse.Elements.TranslationModes.PositionOffset;
        temp57.RelativeNode = detailsPlacesPanel;
        temp57.Target = placeRect;
        temp57.Easing = Fuse.Animations.Easing.CubicInOut;
        temp58.Vector = float2(1f, 1f);
        temp58.Duration = 0.6;
        temp58.Target = placeRect;
        temp58.RelativeNode = detailsPlacesPanel;
        temp58.RelativeTo = Fuse.Elements.TranslationModes.Size;
        temp58.Easing = Fuse.Animations.Easing.CubicInOut;
        temp59.Vector = float3(1f, 1f, 1f);
        temp59.Duration = 0.6;
        temp59.RelativeTo = Fuse.Elements.TranslationModes.PositionOffset;
        temp59.RelativeNode = detailsInfoPanel;
        temp59.Target = infoRect;
        temp59.Easing = Fuse.Animations.Easing.CubicInOut;
        temp60.Vector = float2(1f, 1f);
        temp60.Duration = 0.6;
        temp60.Target = infoRect;
        temp60.RelativeNode = detailsInfoPanel;
        temp60.RelativeTo = Fuse.Elements.TranslationModes.Size;
        temp60.Easing = Fuse.Animations.Easing.CubicInOut;
        temp61.Value = detailsImagePanel;
        temp61.Delay = 0.6;
        temp62.Value = detailsPlacesPanel;
        temp62.Delay = 0.6;
        temp63.Value = detailsInfoPanel;
        temp63.Delay = 0.6;
        temp64.Value = 1f;
        temp64.Duration = 0.6;
        temp65.Value = 1f;
        temp65.Duration = 0.35;
        temp65.Delay = 0.45;
        temp66.Value = 0f;
        temp66.Duration = 0.35;
        temp66.Delay = 0.4;
        temp66.Easing = Fuse.Animations.Easing.CubicInOut;
        temp67.Value = 1f;
        temp67.Duration = 0.35;
        temp67.Delay = 0.55;
        temp68.Value = 0f;
        temp68.Duration = 0.35;
        temp68.Delay = 0.55;
        temp68.Easing = Fuse.Animations.Easing.CubicInOut;
        temp69.Value = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp70.SourceLineNumber = 74;
        temp70.SourceFileName = "MainView.ux";
        temp37.SourceLineNumber = 49;
        temp37.SourceFileName = "MainView.ux";
        temp36.SourceLineNumber = 49;
        temp36.SourceFileName = "MainView.ux";
        factsPanel.Rows = "1*,50";
        factsPanel.HitTestMode = Fuse.Elements.HitTestMode.None;
        factsPanel.Opacity = 0f;
        factsPanel.Name = __selector17;
        factsPanel.SourceLineNumber = 77;
        factsPanel.SourceFileName = "MainView.ux";
        global::Fuse.Controls.LayoutControl.SetLayoutMaster(factsPanel, detailsFactsPanel);
        factsPanel.Children.Add(factsPanelTrans);
        factsPanel.Children.Add(factsPageControl);
        factsPanel.Children.Add(temp74);
        factsPanelTrans.Y = 0.2f;
        factsPanelTrans.Name = __selector18;
        factsPanelTrans.SourceLineNumber = 78;
        factsPanelTrans.SourceFileName = "MainView.ux";
        factsPanelTrans.RelativeTo = Fuse.TranslationModes.Size;
        factsPageControl.Name = __selector19;
        factsPageControl.SourceLineNumber = 79;
        factsPageControl.SourceFileName = "MainView.ux";
        factsPageControl.Children.Add(temp6);
        temp6.SourceLineNumber = 80;
        temp6.SourceFileName = "MainView.ux";
        temp6.Templates.Add(temp72);
        temp6.Bindings.Add(temp73);
        temp38.SourceLineNumber = 80;
        temp38.SourceFileName = "MainView.ux";
        temp74.Alignment = Fuse.Elements.Alignment.Center;
        temp74.SourceLineNumber = 88;
        temp74.SourceFileName = "MainView.ux";
        temp74.Templates.Add(Dot);
        temp7.SourceLineNumber = 100;
        temp7.SourceFileName = "MainView.ux";
        temp7.Animators.Add(temp75);
        temp7.Animators.Add(temp76);
        temp7.Animators.Add(temp77);
        temp7.Bindings.Add(temp78);
        temp75.Value = 0f;
        temp75.Duration = 0.4;
        temp76.Value = Fuse.Elements.HitTestMode.None;
        temp77.Y = 100f;
        temp77.Duration = 0.4;
        temp43.SourceLineNumber = 100;
        temp43.SourceFileName = "MainView.ux";
        temp41.SourceLineNumber = 100;
        temp41.SourceFileName = "MainView.ux";
        temp39.SourceLineNumber = 100;
        temp39.SourceFileName = "MainView.ux";
        temp40.SourceLineNumber = 100;
        temp40.SourceFileName = "MainView.ux";
        temp42.SourceLineNumber = 100;
        temp42.SourceFileName = "MainView.ux";
        this.Children.Add(placeContainer);
        this.Children.Add(temp4);
        this.Children.Add(imgMaster);
        this.Children.Add(temp5);
        this.Children.Add(factsPanel);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "FontSize";
    static global::Uno.UX.Selector __selector2 = "Color";
    static global::Uno.UX.Selector __selector3 = "Alignment";
    static global::Uno.UX.Selector __selector4 = "Items";
    static global::Uno.UX.Selector __selector5 = "File";
    static global::Uno.UX.Selector __selector6 = "Element.LayoutMaster";
    static global::Uno.UX.Selector __selector7 = "Opacity";
    static global::Uno.UX.Selector __selector8 = "Y";
    static global::Uno.UX.Selector __selector9 = "HitTestMode";
    static global::Uno.UX.Selector __selector10 = "placeContainer";
    static global::Uno.UX.Selector __selector11 = "placeRect";
    static global::Uno.UX.Selector __selector12 = "infoRect";
    static global::Uno.UX.Selector __selector13 = "infoRectContent";
    static global::Uno.UX.Selector __selector14 = "infoRectContentTrans";
    static global::Uno.UX.Selector __selector15 = "imgMaster";
    static global::Uno.UX.Selector __selector16 = "img";
    static global::Uno.UX.Selector __selector17 = "factsPanel";
    static global::Uno.UX.Selector __selector18 = "factsPanelTrans";
    static global::Uno.UX.Selector __selector19 = "factsPageControl";
}
