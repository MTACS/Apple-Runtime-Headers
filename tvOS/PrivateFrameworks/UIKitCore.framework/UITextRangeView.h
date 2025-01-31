//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIResponder, UISelectionGrabber, UITextGestureTuning, UITextSelectionView, UITouch;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView
{
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    int m_mode;
    NSArray *m_rects;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    struct CGPoint m_initialPoint;
    struct CGRect m_startEdge;
    struct CGRect m_endEdge;
    struct CGPoint m_basePoint;
    struct CGPoint m_extentPoint;
    struct CGPoint m_initialBasePoint;
    struct CGPoint m_initialExtentPoint;
    double m_initialDistance;
    struct CGPoint m_touchOffset;
    double m_firstMovedTime;
    UIView *m_rectContainerView;
    UISelectionGrabber *m_startGrabber;
    UISelectionGrabber *m_endGrabber;
    UITextGestureTuning *m_gestureTuning;
    _Bool m_animateUpdate;
    _Bool m_baseIsStart;
    _Bool m_commandsWereShowing;
    _Bool m_willBeginMagnifying;
    _Bool m_inGesture;
    _Bool m_magnifying;
    _Bool m_scrolling;
    _Bool m_scaling;
    _Bool m_rotating;
    _Bool m_inputViewIsChanging;
    _Bool m_isClearingRange;
    _Bool m_shouldStayVisible;
}

@property(nonatomic) _Bool shouldStayVisible; // @synthesize shouldStayVisible=m_shouldStayVisible;
@property(nonatomic) _Bool isClearingRange; // @synthesize isClearingRange=m_isClearingRange;
@property(nonatomic) _Bool inputViewIsChanging; // @synthesize inputViewIsChanging=m_inputViewIsChanging;
@property(nonatomic) _Bool rotating; // @synthesize rotating=m_rotating;
@property(nonatomic) _Bool scaling; // @synthesize scaling=m_scaling;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=m_scrolling;
@property(nonatomic) _Bool inGesture; // @synthesize inGesture=m_inGesture;
@property(nonatomic) _Bool magnifying; // @synthesize magnifying=m_magnifying;
@property(nonatomic) _Bool willBeginMagnifying; // @synthesize willBeginMagnifying=m_willBeginMagnifying;
@property(nonatomic) _Bool commandsWereShowing; // @synthesize commandsWereShowing=m_commandsWereShowing;
@property(nonatomic) _Bool animateUpdate; // @synthesize animateUpdate=m_animateUpdate;
@property(retain, nonatomic) UISelectionGrabber *endGrabber; // @synthesize endGrabber=m_endGrabber;
@property(retain, nonatomic) UISelectionGrabber *startGrabber; // @synthesize startGrabber=m_startGrabber;
@property(nonatomic) double firstMovedTime; // @synthesize firstMovedTime=m_firstMovedTime;
@property(nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=m_touchOffset;
@property(nonatomic) double initialDistance; // @synthesize initialDistance=m_initialDistance;
@property(nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=m_initialExtentPoint;
@property(nonatomic) struct CGPoint initialBasePoint; // @synthesize initialBasePoint=m_initialBasePoint;
@property(nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=m_extentPoint;
@property(nonatomic) struct CGPoint basePoint; // @synthesize basePoint=m_basePoint;
@property(nonatomic) struct CGRect endEdge; // @synthesize endEdge=m_endEdge;
@property(nonatomic) struct CGRect startEdge; // @synthesize startEdge=m_startEdge;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=m_initialPoint;
@property(nonatomic) _Bool baseIsStart; // @synthesize baseIsStart=m_baseIsStart;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=m_activeTouch;
- (void).cxx_destruct;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;
- (struct CGPoint)magnifierPoint;
- (void)updateGrabbers;
- (_Bool)_endIsHorizontal;
- (_Bool)_startIsHorizontal;
- (void)updateRectViews;
- (struct CGRect)_selectionClipRect;
- (void)updateBaseAndExtentPointsFromEdges;
- (void)beginMagnifying;
- (void)animateHighlighterDelayedFadeInOnLayer:(id)arg1;
- (void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(struct CGPoint)arg2;
- (void)animateHighlighterExpanderAnimation;
@property(readonly, nonatomic) _Bool autoscrolled;
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;
- (void)setTouchOffset:(struct CGPoint)arg1 touchPoint:(struct CGPoint)arg2;
- (_Bool)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;
- (void)cancelDelayedActions;
- (void)stopAnimating;
- (void)startAnimating;
- (void)updateDots;
- (void)clearRangeAnimated:(_Bool)arg1;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)didRotate;
- (void)willRotate;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (void)didScroll;
- (void)willScroll;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=m_rects;
- (void)updateEdges;
@property(readonly, nonatomic) UIResponder<UITextInput> *container;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)updateAfterEffectiveModeChange;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) struct CGPoint activeTouchPoint;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_gestureRecognizerShouldReceiveTouch:(id)arg1;
- (void)_createGestureTuningIfNecessary;
- (void)setMagnifierOrientation;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)_endEdgeHitRect;
- (struct CGRect)_startEdgeHitRect;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;

@end

