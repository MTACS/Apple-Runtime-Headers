//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKControllerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureTarget-Protocol.h>

@class CADisplayLink, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString, PKController, PKDrawing, PKDrawingPowerSavingController, PKInk, PKMetalRendererController, PKMetalView, PKRulerController, PKSelectionController, UIColor, UIGestureRecognizer, UIImage;
@protocol OS_dispatch_queue, PKDrawingGestureRecognizerProtocol, PKTiledCanvasViewDelegate;

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKDrawingGestureTarget>
{
    unsigned long long _numSkippedDoubleBufferedFrames;
    struct {
        unsigned int delegateSupportsDrawingDidChange:1;
        unsigned int delegateSupportsWillBeginNewStroke:1;
        unsigned int delegateSupportsBeganStroke:1;
        unsigned int delegateSupportsCancelledStroke:1;
        unsigned int delegateSupportsEndedStroke:1;
        unsigned int delegateSupportsWillBeginDrawing:1;
        unsigned int delegateSupportsDidBeginDrawing:1;
        unsigned int delegateSupportsDrawingMoved:1;
        unsigned int delegateSupportsDidEndDrawing:1;
        unsigned int delegateSupportsDidFinishRenderingStrokeOnRenderQueue:1;
        unsigned int delegateSupportsShouldBeginDrawingWithTouch:1;
        unsigned int delegateSupportsDidEraseStrokes:1;
        unsigned int delegateSupportsRegisterUndoCommand:1;
    } _canvasViewFlags;
    _Bool _isDrawing;
    _Bool _isErasingObjects;
    _Bool _isSelecting;
    _Bool _insertSpaceEnabled;
    _Bool _predictionDisabled;
    _Bool _allowLiveInteraction;
    _Bool _liveStrokeMode;
    _Bool _shouldPause;
    _Bool _usePrivateResourceHandler;
    _Bool __didCancelSelection;
    _Bool _hasValidOnscreenVisibleStrokes;
    _Bool _editMenuVisible;
    PKController *_drawingController;
    id <PKTiledCanvasViewDelegate> _delegate;
    UIImage *_paperTexture;
    PKDrawing *_drawing;
    PKInk *_ink;
    UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *_drawingGestureRecognizer;
    UIColor *_liveRenderingOverrideColor;
    PKSelectionController *_selectionController;
    PKRulerController *_rulerController;
    double _metalLayerContentsScaleOverride;
    PKDrawing *_currentDrawingBeingCopiedToCanvas;
    double __fixedDrawingScale;
    PKMetalView *_metalView;
    CADisplayLink *_displayLink;
    long long _maxNumPredictionPoints;
    double _drawingStartTimestamp;
    PKDrawingPowerSavingController *_powerSavingController;
    CDUnknownBlockType _purgeResourcesBlock;
    NSMutableArray *_strokesToErase;
    NSMutableSet *_strokeIDsToErase;
    CDUnknownBlockType _generateOnscreenVisibleStrokesBlock;
    NSObject<OS_dispatch_queue> *_onscreenVisibleStrokesQueue;
    NSArray *_onscreenVisibleStrokes;
    long long _currentGenerationCount;
    NSArray *_strokesAnimatingToDestination;
    double _liveAnimationStartTime;
    NSMutableArray *_fadeOutStrokeAnimations;
    NSMutableSet *_strokeUUIDsAboutToBeRemoved;
    struct CGSize __fixedPixelSize;
    struct CGPoint __oldEraseLocation;
    struct CGPoint __drawingBeganLocation;
    struct CGRect _viewScissor;
    struct CGAffineTransform _strokeTransform;
    struct CGAffineTransform _paperTransform;
}

+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) _Bool editMenuVisible; // @synthesize editMenuVisible=_editMenuVisible;
@property(retain, nonatomic) NSMutableSet *strokeUUIDsAboutToBeRemoved; // @synthesize strokeUUIDsAboutToBeRemoved=_strokeUUIDsAboutToBeRemoved;
@property(retain, nonatomic) NSMutableArray *fadeOutStrokeAnimations; // @synthesize fadeOutStrokeAnimations=_fadeOutStrokeAnimations;
@property(nonatomic) double liveAnimationStartTime; // @synthesize liveAnimationStartTime=_liveAnimationStartTime;
@property(copy, nonatomic) NSArray *strokesAnimatingToDestination; // @synthesize strokesAnimatingToDestination=_strokesAnimatingToDestination;
@property(nonatomic) long long currentGenerationCount; // @synthesize currentGenerationCount=_currentGenerationCount;
@property(retain, nonatomic) NSArray *onscreenVisibleStrokes; // @synthesize onscreenVisibleStrokes=_onscreenVisibleStrokes;
@property(nonatomic) _Bool hasValidOnscreenVisibleStrokes; // @synthesize hasValidOnscreenVisibleStrokes=_hasValidOnscreenVisibleStrokes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *onscreenVisibleStrokesQueue; // @synthesize onscreenVisibleStrokesQueue=_onscreenVisibleStrokesQueue;
@property(copy, nonatomic) CDUnknownBlockType generateOnscreenVisibleStrokesBlock; // @synthesize generateOnscreenVisibleStrokesBlock=_generateOnscreenVisibleStrokesBlock;
@property(nonatomic) struct CGPoint _drawingBeganLocation; // @synthesize _drawingBeganLocation=__drawingBeganLocation;
@property(retain, nonatomic) NSMutableSet *strokeIDsToErase; // @synthesize strokeIDsToErase=_strokeIDsToErase;
@property(retain, nonatomic) NSMutableArray *strokesToErase; // @synthesize strokesToErase=_strokesToErase;
@property(nonatomic) _Bool _didCancelSelection; // @synthesize _didCancelSelection=__didCancelSelection;
@property(nonatomic) struct CGPoint _oldEraseLocation; // @synthesize _oldEraseLocation=__oldEraseLocation;
@property(copy, nonatomic) CDUnknownBlockType purgeResourcesBlock; // @synthesize purgeResourcesBlock=_purgeResourcesBlock;
@property(retain, nonatomic) PKDrawingPowerSavingController *powerSavingController; // @synthesize powerSavingController=_powerSavingController;
@property double drawingStartTimestamp; // @synthesize drawingStartTimestamp=_drawingStartTimestamp;
@property(nonatomic) long long maxNumPredictionPoints; // @synthesize maxNumPredictionPoints=_maxNumPredictionPoints;
@property(nonatomic) _Bool usePrivateResourceHandler; // @synthesize usePrivateResourceHandler=_usePrivateResourceHandler;
@property(nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) PKMetalView *metalView; // @synthesize metalView=_metalView;
@property(nonatomic) double _fixedDrawingScale; // @synthesize _fixedDrawingScale=__fixedDrawingScale;
@property(nonatomic) struct CGSize _fixedPixelSize; // @synthesize _fixedPixelSize=__fixedPixelSize;
@property(nonatomic) __weak PKDrawing *currentDrawingBeingCopiedToCanvas; // @synthesize currentDrawingBeingCopiedToCanvas=_currentDrawingBeingCopiedToCanvas;
@property(nonatomic) _Bool liveStrokeMode; // @synthesize liveStrokeMode=_liveStrokeMode;
@property _Bool allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(nonatomic) double metalLayerContentsScaleOverride; // @synthesize metalLayerContentsScaleOverride=_metalLayerContentsScaleOverride;
@property(nonatomic) _Bool predictionDisabled; // @synthesize predictionDisabled=_predictionDisabled;
@property(nonatomic) _Bool insertSpaceEnabled; // @synthesize insertSpaceEnabled=_insertSpaceEnabled;
@property(nonatomic) _Bool isSelecting; // @synthesize isSelecting=_isSelecting;
@property(nonatomic) _Bool isErasingObjects; // @synthesize isErasingObjects=_isErasingObjects;
@property(nonatomic) __weak PKRulerController *rulerController; // @synthesize rulerController=_rulerController;
@property(nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) UIColor *liveRenderingOverrideColor; // @synthesize liveRenderingOverrideColor=_liveRenderingOverrideColor;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *drawingGestureRecognizer; // @synthesize drawingGestureRecognizer=_drawingGestureRecognizer;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) UIImage *paperTexture; // @synthesize paperTexture=_paperTexture;
@property(nonatomic) __weak id <PKTiledCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKController *_drawingController; // @synthesize _drawingController;
- (void).cxx_destruct;
- (struct CGSize)_rendererControllerPixelSize;
- (struct CGSize)_metalViewDrawableSize;
- (void)fadeOutAndHideStrokes:(id)arg1 duration:(double)arg2;
- (void)testHideOldestStroke;
- (void)checkAnimationsDidEndAtTime:(double)arg1;
- (void)testLiveStrokeToDestinationFrame:(struct CGRect)arg1 destinationTexture:(struct CGImage *)arg2;
- (id)_strokeUUIDsForStrokes:(id)arg1;
- (void)_addSpaceBelowDrawingForStroke:(id)arg1 touch:(id)arg2;
- (_Bool)_isLassoAddingSpace:(id)arg1;
- (void)selectionCancelled;
- (void)lassoEnded:(id)arg1;
- (_Bool)lassoShouldClearSelectionOrToggleMenu:(id)arg1;
- (void)selectionBegan:(id)arg1;
- (struct CGPoint)clampInputPointForSelection:(struct CGPoint)arg1;
- (void)toggleEditMenuAtLocation:(struct CGPoint)arg1;
- (void)dismissEditMenuIfNecessary;
- (void)cancelGenerateVisibleStrokesBlockIfNecessary;
- (void)clearOnscreenVisibleStrokeCacheAndCancelBlockIfNecessary;
- (void)findOnscreenVisibleStrokesForFrame:(struct CGRect)arg1 inDrawing:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateStrokesOnCanvasForVisibleFrame:(struct CGRect)arg1 inDrawing:(id)arg2;
- (void)generateOnscreenVisibleStrokesForCanvas;
- (void)eraserCancelled;
- (void)eraserEnded:(id)arg1;
- (void)eraserMoved:(id)arg1;
- (_Bool)eraserBegan:(id)arg1;
- (void)_didFinishErasingStrokes:(_Bool)arg1;
- (void)eraseStrokesForPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (CDStruct_f17e9403)drawingInputPoint:(struct CGPoint)arg1 forTouch:(id)arg2 predicted:(_Bool)arg3;
- (void)drawingBegan:(id)arg1;
- (id)currentStroke;
- (_Bool)isRulerSupportedForCurrentInk;
- (void)cancelPurgeResourcesBlock;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)drawingChanged:(id)arg1;
- (void)_setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(struct CGAffineTransform)arg3 setupComplete:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)delayCompletionBlockUntilPresentation:(CDUnknownBlockType)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_drawingDisplay:(double)arg1;
@property(readonly, nonatomic) _Bool hasVisibleStrokes;
- (void)setHidden:(_Bool)arg1;
- (void)handleDrawingShouldPause:(_Bool)arg1;
- (_Bool)_isLiveAnimating;
- (void)setNeedsDrawingDisplay;
@property(readonly, nonatomic) PKMetalRendererController *_rendererController;
- (void)setupDisplayLink;
- (void)resizeBackingBuffersForPixelSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)_setFixedPointSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)setupMetalViewForWideGamut:(_Bool)arg1 withPixelSize:(struct CGSize)arg2;
- (void)setupViewWithPixelSize:(struct CGSize)arg1 drawingSize:(struct CGSize)arg2;
- (void)adjustedPixelSize:(struct CGSize *)arg1 drawingSize:(struct CGSize *)arg2;
- (double)layerContentsScale;
- (void)setResourceCacheSize:(unsigned long long)arg1;
- (void)setCanvasBackgroundColor:(id)arg1;
@property(readonly, nonatomic) struct CGRect renderedStrokesBounds;
- (void)setupGestures;
- (void)setupDrawing;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 usePrivateResourceHandler:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

