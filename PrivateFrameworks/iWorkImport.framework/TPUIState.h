/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPUIState : NSObject <NSCopying> {
    TSKAnnotationAuthor * _authorForFiltering;
    NSString * _authorForFilteringName;
    bool  _changeTrackingPaused;
    NSDictionary * _chartUIState;
    TSDFreehandDrawingToolkitUIState * _freehandDrawingToolkitUIState;
    bool  _hasShowsCTDeletions;
    bool  _hasShowsCTMarkup;
    bool  _inspectorHidden;
    bool  _layoutBordersVisible;
    bool  _masterDrawablesSelectable;
    long long  _pageViewState;
    bool  _pencilAnnotationsHidden;
    double  _presentationAutoScrollSpeed;
    bool  _rulersVisible;
    NSString * _selectedInspectorSwitchSegmentIdentifier;
    TSKSelectionPath * _selectionPath;
    bool  _showUserDefinedGuides;
    bool  _showsActivitySidebar;
    bool  _showsCTDeletions;
    bool  _showsCTMarkup;
    bool  _showsComments;
    bool  _showsPageNavigator;
    double  _viewScale;
    long long  _viewScaleMode;
    long long  _viewScaleModeiOS;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _windowFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _wordCountHUDPosition;
    int  _wordCountHUDType;
    bool  _wordCountHUDVisible;
}

@property (nonatomic, retain) TSKAnnotationAuthor *authorForFiltering;
@property (nonatomic, copy) NSString *authorForFilteringName;
@property (nonatomic) bool changeTrackingPaused;
@property (nonatomic, copy) NSDictionary *chartUIState;
@property (nonatomic, retain) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (nonatomic, readonly) bool hasShowsCTDeletions;
@property (nonatomic, readonly) bool hasShowsCTMarkup;
@property (nonatomic) bool inspectorHidden;
@property (nonatomic) bool layoutBordersVisible;
@property (nonatomic) bool masterDrawablesSelectable;
@property (nonatomic) long long pageViewState;
@property (nonatomic) bool pencilAnnotationsHidden;
@property (nonatomic) double presentationAutoScrollSpeed;
@property (nonatomic) bool rulersVisible;
@property (nonatomic, copy) NSString *selectedInspectorSwitchSegmentIdentifier;
@property (nonatomic, copy) TSKSelectionPath *selectionPath;
@property (nonatomic) bool showUserDefinedGuides;
@property (nonatomic) bool showsActivitySidebar;
@property (nonatomic) bool showsCTDeletions;
@property (nonatomic) bool showsCTMarkup;
@property (nonatomic) bool showsComments;
@property (nonatomic) bool showsPageNavigator;
@property (nonatomic) double viewScale;
@property (nonatomic) long long viewScaleMode;
@property (nonatomic) long long viewScaleModeiOS;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } windowFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } wordCountHUDPosition;
@property (nonatomic) int wordCountHUDType;
@property (nonatomic) bool wordCountHUDVisible;

- (void).cxx_destruct;
- (id)archivedUIStateInContext:(id)arg1;
- (id)authorForFiltering;
- (id)authorForFilteringName;
- (bool)changeTrackingPaused;
- (id)chartUIState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freehandDrawingToolkitUIState;
- (bool)hasShowsCTDeletions;
- (bool)hasShowsCTMarkup;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Point {} *x4; struct Reference {} *x5; struct Reference {} *x6; float x7; bool x8; bool x9; bool x10; bool x11; struct Size {} *x12; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; bool x14; bool x15; bool x16; bool x17; int x18; struct Point {} *x19; struct Size {} *x20; float x21; unsigned int x22; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x23; float x24; float x25; struct SelectionPathArchive {} *x26; bool x27; bool x28; bool x29; bool x30; int x31; struct SelectionPathArchive {} *x32; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x33; bool x34; bool x35; int x36; struct Reference {} *x37; struct Reference {} *x38; float x39; int x40; }*)arg1 unarchiver:(id)arg2;
- (bool)inspectorHidden;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUIState:(id)arg1;
- (bool)layoutBordersVisible;
- (bool)masterDrawablesSelectable;
- (long long)pageViewState;
- (bool)pencilAnnotationsHidden;
- (double)presentationAutoScrollSpeed;
- (bool)rulersVisible;
- (void)saveToArchive:(struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Point {} *x4; struct Reference {} *x5; struct Reference {} *x6; float x7; bool x8; bool x9; bool x10; bool x11; struct Size {} *x12; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; bool x14; bool x15; bool x16; bool x17; int x18; struct Point {} *x19; struct Size {} *x20; float x21; unsigned int x22; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x23; float x24; float x25; struct SelectionPathArchive {} *x26; bool x27; bool x28; bool x29; bool x30; int x31; struct SelectionPathArchive {} *x32; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x33; bool x34; bool x35; int x36; struct Reference {} *x37; struct Reference {} *x38; float x39; int x40; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)selectedInspectorSwitchSegmentIdentifier;
- (id)selectionPath;
- (void)setAuthorForFiltering:(id)arg1;
- (void)setAuthorForFilteringName:(id)arg1;
- (void)setChangeTrackingPaused:(bool)arg1;
- (void)setChartUIState:(id)arg1;
- (void)setFreehandDrawingToolkitUIState:(id)arg1;
- (void)setInspectorHidden:(bool)arg1;
- (void)setLayoutBordersVisible:(bool)arg1;
- (void)setMasterDrawablesSelectable:(bool)arg1;
- (void)setPageViewState:(long long)arg1;
- (void)setPencilAnnotationsHidden:(bool)arg1;
- (void)setPresentationAutoScrollSpeed:(double)arg1;
- (void)setRulersVisible:(bool)arg1;
- (void)setSelectedInspectorSwitchSegmentIdentifier:(id)arg1;
- (void)setSelectionPath:(id)arg1;
- (void)setShowUserDefinedGuides:(bool)arg1;
- (void)setShowsActivitySidebar:(bool)arg1;
- (void)setShowsCTDeletions:(bool)arg1;
- (void)setShowsCTMarkup:(bool)arg1;
- (void)setShowsComments:(bool)arg1;
- (void)setShowsPageNavigator:(bool)arg1;
- (void)setViewScale:(double)arg1;
- (void)setViewScaleMode:(long long)arg1;
- (void)setViewScaleModeiOS:(long long)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWordCountHUDPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setWordCountHUDType:(int)arg1;
- (void)setWordCountHUDVisible:(bool)arg1;
- (bool)showUserDefinedGuides;
- (bool)showsActivitySidebar;
- (bool)showsCTDeletions;
- (bool)showsCTMarkup;
- (bool)showsComments;
- (bool)showsPageNavigator;
- (double)viewScale;
- (long long)viewScaleMode;
- (long long)viewScaleModeiOS;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowFrame;
- (struct CGPoint { double x1; double x2; })wordCountHUDPosition;
- (int)wordCountHUDType;
- (bool)wordCountHUDVisible;

@end
