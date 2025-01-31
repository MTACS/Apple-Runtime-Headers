//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/_UITextAttachmentDrawingView.h>

#import <PencilKit/PKTextAttachmentView-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/UIScrollViewDelegate-Protocol.h>

@class CALayer, NSString, NSTextAttachment, PKSelectDrawingGestureRecognizer, PKTextAttachmentDrawingResizeView, PKTextAttachmentDrawingViewTouchRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;

@interface PKTextAttachmentDrawingView : _UITextAttachmentDrawingView <PKTextAttachmentView, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    UIScrollView *_tileMaskView;
    _Bool _resizeUpper;
    _Bool _inserted;
    _Bool _zoomingProgramatically;
    UIView *_tileScaleView;
    NSTextAttachment *_textAttachment;
    double _zoomScale;
    PKTextAttachmentDrawingResizeView *_topResizeView;
    PKTextAttachmentDrawingResizeView *_bottomResizeView;
    CALayer *_linesLayer;
    PKTextAttachmentDrawingViewTouchRecognizer *_resizeHighlightGestureRecognizer;
    UIPanGestureRecognizer *_resizeDragGestureRecognizer;
    PKSelectDrawingGestureRecognizer *_selectDrawingGestureRecognizer;
    UITapGestureRecognizer *_eatKeyboardGestureRecognizer;
    UILongPressGestureRecognizer *_showMenuGestureRecognizer;
    UILongPressGestureRecognizer *_hideMenuGestureRecognizer;
    double _zoomStartScale;
    struct CGPoint _zoomStartLocationInWindow;
    struct CGPoint _zoomStartLocationInAttachment;
    struct CGPoint _textViewContentOffsetStartLocation;
    struct CGRect _originalDrawingBounds;
    struct CGRect _originalViewBounds;
    struct UIEdgeInsets _originalContentInset;
}

@property(nonatomic) double zoomStartScale; // @synthesize zoomStartScale=_zoomStartScale;
@property(nonatomic) struct CGPoint textViewContentOffsetStartLocation; // @synthesize textViewContentOffsetStartLocation=_textViewContentOffsetStartLocation;
@property(nonatomic) struct CGPoint zoomStartLocationInAttachment; // @synthesize zoomStartLocationInAttachment=_zoomStartLocationInAttachment;
@property(nonatomic) struct CGPoint zoomStartLocationInWindow; // @synthesize zoomStartLocationInWindow=_zoomStartLocationInWindow;
@property(nonatomic) _Bool zoomingProgramatically; // @synthesize zoomingProgramatically=_zoomingProgramatically;
@property(nonatomic) _Bool inserted; // @synthesize inserted=_inserted;
@property(nonatomic) struct UIEdgeInsets originalContentInset; // @synthesize originalContentInset=_originalContentInset;
@property(nonatomic) struct CGRect originalViewBounds; // @synthesize originalViewBounds=_originalViewBounds;
@property(nonatomic) struct CGRect originalDrawingBounds; // @synthesize originalDrawingBounds=_originalDrawingBounds;
@property(nonatomic) _Bool resizeUpper; // @synthesize resizeUpper=_resizeUpper;
@property(retain, nonatomic) UILongPressGestureRecognizer *hideMenuGestureRecognizer; // @synthesize hideMenuGestureRecognizer=_hideMenuGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *showMenuGestureRecognizer; // @synthesize showMenuGestureRecognizer=_showMenuGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *eatKeyboardGestureRecognizer; // @synthesize eatKeyboardGestureRecognizer=_eatKeyboardGestureRecognizer;
@property(retain, nonatomic) PKSelectDrawingGestureRecognizer *selectDrawingGestureRecognizer; // @synthesize selectDrawingGestureRecognizer=_selectDrawingGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *resizeDragGestureRecognizer; // @synthesize resizeDragGestureRecognizer=_resizeDragGestureRecognizer;
@property(retain, nonatomic) PKTextAttachmentDrawingViewTouchRecognizer *resizeHighlightGestureRecognizer; // @synthesize resizeHighlightGestureRecognizer=_resizeHighlightGestureRecognizer;
@property(retain, nonatomic) CALayer *linesLayer; // @synthesize linesLayer=_linesLayer;
@property(retain, nonatomic) PKTextAttachmentDrawingResizeView *bottomResizeView; // @synthesize bottomResizeView=_bottomResizeView;
@property(retain, nonatomic) PKTextAttachmentDrawingResizeView *topResizeView; // @synthesize topResizeView=_topResizeView;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) __weak NSTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
@property(readonly, nonatomic) UIView *tileScaleView; // @synthesize tileScaleView=_tileScaleView;
- (void).cxx_destruct;
- (void)resetZoom;
- (void)drawingDataDidChange:(id)arg1;
- (id)dataForTextAttachment:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutTileViews;
- (void)updateTileContainerViewFrame;
- (void)drawLines;
- (void)layoutSubviews;
- (_Bool)isAtEndOfDocument;
@property(readonly, nonatomic) _Bool isAtBeginningOfDocument;
- (void)scaleDrawing:(double)arg1 withOffset:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)scaleDrawing:(double)arg1;
- (void)metadata:(id)arg1;
- (void)_share:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)deleteStrokeSelection:(id)arg1;
- (void)copyStrokeSelection:(id)arg1;
- (void)cutStrokeSelection:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)showDrawingMenu:(id)arg1;
- (void)hideDrawingMenu:(id)arg1;
- (void)selectDrawing:(id)arg1;
- (void)menuDidHide:(id)arg1;
@property(readonly, nonatomic) _Bool drawingMenuVisible;
- (void)drawingScrollViewDidScroll:(id)arg1;
- (void)resizeDrawing:(id)arg1;
- (void)higlightResize:(id)arg1;
- (_Bool)gestureRecognizerShouldDelayLift:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)_drawingGestureRecognizer;
- (void)_preemptKeyboardForTapOnDrawing:(id)arg1;
- (_Bool)hitTestResizeHandles:(struct CGPoint)arg1 threshold:(double)arg2;
- (_Bool)hitByTouchLocation:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
- (_Bool)hitChrome:(struct CGPoint)arg1 isStylus:(_Bool)arg2;
- (void)_setHeight:(double)arg1 originalHeight:(double)arg2 growFromTop:(_Bool)arg3;
- (void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(_Bool)arg2;
- (void)updateDrawingHeight:(double)arg1;
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;
- (void)_adjustResizeIndicatorVisibility:(_Bool)arg1;
- (void)_adjustResizeIndicatorVisibility;
- (void)_adjustResizeIndicatorVisibilityNotification;
- (void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2;
- (void)updateFrameForTextContainer;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)fingerDrawingEnabledDidChange;
- (void)drawingDidChange;
- (void)drawingWillBegin;
@property(readonly, nonatomic) double drawingAspectRatio;
- (struct CGRect)drawingBounds;
@property(readonly, nonatomic) struct CGSize drawingVisibleSize;
- (void)_updateAttachmentBounds;
- (long long)_characterIndex;
- (id)_textView;
- (void)_triggerRedraw;
- (void)setContentHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (id)tileMaskView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1 inserted:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

