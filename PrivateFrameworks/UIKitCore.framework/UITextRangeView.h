/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextRangeView : UIView {
    UITouch * m_activeTouch;
    bool  m_animateUpdate;
    bool  m_baseIsStart;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_basePoint;
    bool  m_commandsWereShowing;
    UIResponder<UITextInput> * m_container;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_endEdge;
    UISelectionGrabber * m_endGrabber;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_extentPoint;
    double  m_firstMovedTime;
    bool  m_inGesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_initialBasePoint;
    double  m_initialDistance;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_initialExtentPoint;
    bool  m_inputViewIsChanging;
    bool  m_isClearingRange;
    bool  m_magnifying;
    int  m_mode;
    UIView * m_rectContainerView;
    NSMutableArray * m_rectViews;
    NSArray * m_rects;
    bool  m_rotating;
    bool  m_scaling;
    bool  m_scrolling;
    UITextSelectionView * m_selectionView;
    bool  m_shouldStayVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_startEdge;
    UISelectionGrabber * m_startGrabber;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_touchOffset;
}

@property (nonatomic, retain) UITouch *activeTouch;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } activeTouchPoint;
@property (nonatomic) bool animateUpdate;
@property (nonatomic, readonly) bool autoscrolled;
@property (nonatomic) bool baseIsStart;
@property (nonatomic) struct CGPoint { double x1; double x2; } basePoint;
@property (nonatomic) bool commandsWereShowing;
@property (nonatomic, readonly) UIResponder<UITextInput> *container;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endEdge;
@property (nonatomic, retain) UISelectionGrabber *endGrabber;
@property (nonatomic) struct CGPoint { double x1; double x2; } extentPoint;
@property (nonatomic) double firstMovedTime;
@property (nonatomic) bool inGesture;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialBasePoint;
@property (nonatomic) double initialDistance;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialExtentPoint;
@property (nonatomic) bool inputViewIsChanging;
@property (nonatomic) bool isClearingRange;
@property (nonatomic) bool isScrolling;
@property (nonatomic) bool magnifying;
@property (nonatomic) int mode;
@property (nonatomic, retain) NSArray *rects;
@property (nonatomic) bool rotating;
@property (nonatomic) bool scaling;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic) bool shouldStayVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startEdge;
@property (nonatomic, retain) UISelectionGrabber *startGrabber;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchOffset;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_endEdgeHitRect;
- (bool)_endIsHorizontal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_startEdgeHitRect;
- (bool)_startIsHorizontal;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)activeTouch;
- (struct CGPoint { double x1; double x2; })activeTouchPoint;
- (bool)animateUpdate;
- (struct CGPoint { double x1; double x2; })applyTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)autoscrolled;
- (bool)baseIsStart;
- (struct CGPoint { double x1; double x2; })basePoint;
- (void)beginMagnifying;
- (void)cancelDelayedActions;
- (void)clearRangeAnimated:(bool)arg1;
- (bool)commandsWereShowing;
- (id)container;
- (struct CGPoint { double x1; double x2; })convertFromMagnifierPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)didRotate;
- (void)didScroll;
- (void)doneMagnifying;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge;
- (id)endGrabber;
- (struct CGPoint { double x1; double x2; })extentPoint;
- (double)firstMovedTime;
- (bool)inGesture;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionView:(id)arg2;
- (struct CGPoint { double x1; double x2; })initialBasePoint;
- (double)initialDistance;
- (struct CGPoint { double x1; double x2; })initialExtentPoint;
- (void)inputViewDidChange;
- (bool)inputViewIsChanging;
- (void)inputViewWillChange;
- (bool)isClearingRange;
- (bool)isScrolling;
- (struct CGPoint { double x1; double x2; })magnifierPoint;
- (bool)magnifying;
- (int)mode;
- (bool)pointCloserToEnd:(struct CGPoint { double x1; double x2; })arg1 startEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 endEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForMagnification;
- (id)rects;
- (void)removeFromSuperview;
- (bool)rotating;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (bool)scaling;
- (id)selectionView;
- (void)setActiveTouch:(id)arg1;
- (void)setAnimateUpdate:(bool)arg1;
- (void)setBaseIsStart:(bool)arg1;
- (void)setBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCommandsWereShowing:(bool)arg1;
- (void)setEndEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEndGrabber:(id)arg1;
- (void)setExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFirstMovedTime:(double)arg1;
- (void)setInGesture:(bool)arg1;
- (void)setInitialBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialDistance:(double)arg1;
- (void)setInitialExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputViewIsChanging:(bool)arg1;
- (void)setIsClearingRange:(bool)arg1;
- (void)setIsScrolling:(bool)arg1;
- (void)setMagnifierOrientation;
- (void)setMagnifying:(bool)arg1;
- (void)setMode:(int)arg1;
- (void)setRects:(id)arg1;
- (void)setRotating:(bool)arg1;
- (void)setScaling:(bool)arg1;
- (void)setShouldStayVisible:(bool)arg1;
- (void)setStartEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartGrabber:(id)arg1;
- (void)setTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchOffset:(struct CGPoint { double x1; double x2; })arg1 touchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)shouldStayVisible;
- (void)startAnimating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge;
- (id)startGrabber;
- (void)stopAnimating;
- (struct CGPoint { double x1; double x2; })touchOffset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateBaseAndExtentPointsFromEdges;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateDots;
- (void)updateEdges;
- (void)updateGrabbers;
- (void)updateRectViews;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willRotate;
- (void)willScroll;

@end
