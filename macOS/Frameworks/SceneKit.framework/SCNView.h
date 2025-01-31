//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SceneKit/SCNSceneRenderer-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, CALayer, NSColor, NSOpenGLContext, NSOpenGLPixelFormat, NSString, SCNCameraController, SCNDisplayLink, SCNJitterer, SCNNode, SCNRecursiveLock, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene;
@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, SCNCameraControlConfiguration, SCNEventHandler, SCNSceneRendererDelegate;

@interface SCNView : NSView <SCNSceneRenderer, SCNTechniqueSupport>
{
    double _currentSystemTime;
    double _lastUpdate;
    NSOpenGLPixelFormat *_userDefinedPixelFormat;
    NSString *__ibSceneName;
    unsigned long long __ibPreferredRenderingAPI;
    unsigned int _ibNoMultisampling:1;
    unsigned long long _renderingAPI;
    unsigned int _isOpaque:1;
    unsigned int _rendersContinuously:1;
    unsigned int _firstDrawDone:1;
    unsigned int _drawOnMainThreadPending:1;
    unsigned int _viewIsOffscreen:1;
    unsigned int _inRenderQueueForLayerBackedGLRendering:1;
    unsigned int _disableLinearRendering:1;
    unsigned int _isInLiveResize:1;
    _Bool _isHidden;
    _Bool _didTriggerRedrawWhileRendering;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    BOOL _displayLinkCreationRequested;
    BOOL _skipFramesIfNoDrawableAvailable;
    SCNDisplayLink *_displayLink;
    long long _preferredFramePerSeconds;
    CALayer *_backingLayer;
    SCNJitterer *_jitterer;
    SCNRecursiveLock *_lock;
    NSColor *_backgroundColor;
    struct CGSize _boundsSize;
    BOOL _asynchronousResizing;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    id <SCNEventHandler> _navigationCameraController;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    id <MTLDevice> _device;
}

+ (id)_defaultPixelFormat;
+ (id)_defaultPixelFormatWithAPI:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2 stencil:(BOOL)arg3;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_kvoKeysForwardedToRenderer;
+ (BOOL)lowLatency;
+ (BOOL)_isMetalSupported;
+ (id)deviceForOptions:(id)arg1;
+ (unsigned long long)renderingAPIForOptions:(id)arg1;
- (void)_cancelJitterRedisplay;
- (id)contentLayer;
- (void)rotateOf:(double)arg1;
- (double)zoomFactor;
- (void)setZoomFactor:(double)arg1;
- (BOOL)autoAdjustCamera;
- (void)setAutoAdjustCamera:(BOOL)arg1;
- (void)keyUp:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)windowChangedScreen:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)_windowBackingDidChange:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)_drawInBackingLayerWithCGLContext:(struct _CGLContextObject *)arg1 atTime:(double)arg2;
- (id)makeBackingLayer;
- (void)setWantsLayer:(BOOL)arg1;
- (id)_pixelFormatByDefaultingIfNeeded;
@property(retain, nonatomic) NSOpenGLPixelFormat *pixelFormat;
@property(retain, nonatomic) NSOpenGLContext *openGLContext;
- (id)_openGLContextIfAny;
- (id)_privateOpenGLContext;
- (id)_privateOpenGLContextIfAny;
- (void)_openGLContextDidChange:(id)arg1;
- (void)_clearAppKitGLContext;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)update;
- (void)reshape;
- (BOOL)lockFocusIfCanDraw;
- (BOOL)_isGLLayerBacked;
- (id)_scnlayerBackedOpenGLContext;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)setAsynchronousLoading:(BOOL)arg1;
- (void)setAllowsBrowsing:(BOOL)arg1;
- (double)_runFPSTestWithDuration:(double)arg1;
@property(readonly, nonatomic) unsigned long long renderingAPI;
- (void)setIbWantsMultisampling:(BOOL)arg1;
- (BOOL)ibWantsMultisampling;
- (void)setIbSceneName:(id)arg1;
- (id)ibSceneName;
- (void)setIbPreferredRenderingAPI:(int)arg1;
- (int)ibPreferredRenderingAPI;
- (void)set_ibPreferredRenderingAPI:(int)arg1;
- (int)_ibPreferredRenderingAPI;
- (void)set_ibWantsMultisampling:(BOOL)arg1;
- (BOOL)_ibWantsMultisampling;
- (void)set_ibSceneName:(id)arg1;
- (id)_ibSceneName;
@property(nonatomic) unsigned long long antialiasingMode;
- (id)_authoringEnvironment;
- (void)_cancelMouseMovedTracking;
- (void)_beginMouseMovedTracking;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)_showsAuthoringEnvironment;
@property(nonatomic) unsigned long long debugOptions;
- (void)_updateProbes:(id)arg1 withProgress:(id)arg2;
- (void)set_shouldDelegateARCompositing:(BOOL)arg1;
- (BOOL)_shouldDelegateARCompositing;
- (void)set_enableARMode:(BOOL)arg1;
- (BOOL)_enableARMode;
- (void)set_disableLinearRendering:(BOOL)arg1;
- (BOOL)_disableLinearRendering;
- (void)set_enablesDeferredShading:(BOOL)arg1;
- (BOOL)_enablesDeferredShading;
- (void)switchToNextCamera;
- (void)switchToCameraNamed:(id)arg1;
- (BOOL)_isEditor;
@property(readonly, copy) NSString *description;
- (const void *)__CFObject;
- (void)unlock;
- (void)lock;
- (id)snapshot;
@property(nonatomic) BOOL showsStatistics;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
@property(nonatomic) BOOL usesReverseZ;
- (void)_setNeedsDisplay;
@property(nonatomic) long long preferredFramesPerSecond;
- (BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_createDisplayLinkIfNeeded;
- (double)_renderThreadPriority;
- (void)setDisplayLink:(id)arg1;
- (id)displayLink;
- (void)set_wantsSceneRendererDelegationMessages:(BOOL)arg1;
- (BOOL)_wantsSceneRendererDelegationMessages;
@property(retain, nonatomic) SKScene *overlaySKScene;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) void *context;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long depthPixelFormat;
@property(readonly, nonatomic) unsigned long long colorPixelFormat;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
@property(nonatomic) BOOL autoenablesDefaultLighting;
@property(nonatomic) double sceneTime;
@property(nonatomic) double currentTime;
- (BOOL)isOpaque;
@property(copy, nonatomic) NSColor *backgroundColor;
- (void)_updateOpacity;
- (void)_backgroundDidChange;
- (id)_defaultBackgroundColor;
- (void)eventHandlerWantsRedraw;
- (void)setNavigationCameraController:(id)arg1;
- (id)navigationCameraController;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
@property(nonatomic) __weak id <SCNSceneRendererDelegate> delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (struct SCNVector4)_viewport;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
@property(nonatomic) BOOL rendersContinuously;
@property(getter=isPlaying) BOOL playing;
@property(nonatomic) BOOL loops;
@property(readonly, nonatomic) SCNCameraController *defaultCameraController;
@property(readonly, nonatomic) id <SCNCameraControlConfiguration> cameraControlConfiguration;
@property(nonatomic) BOOL allowsCameraControl;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
- (id)pointOfCulling;
- (void)setPointOfCulling:(id)arg1;
@property(readonly, nonatomic) struct CGRect currentViewport;
@property(retain, nonatomic) SCNNode *pointOfView;
- (void)setPointOfView:(id)arg1 animate:(BOOL)arg2;
- (void)setWantsBestResolutionOpenGLSurface:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_reshape;
- (void)_drawAtTime:(double)arg1 WithContext:(struct _CGLContextObject *)arg2;
- (struct CGSize)_updateBackingSize;
- (struct CGSize)backingSizeForBoundSize:(struct CGSize)arg1;
- (void)_updateContentsScaleFactor;
- (void)_resetContentsScaleFactor;
- (BOOL)_shouldInheritContentsScale:(float)arg1;
- (void)updateAtTime:(double)arg1;
- (void)SCN_displayLinkCallback:(double)arg1;
- (id)_renderingQueue;
- (BOOL)scn_inLiveResize;
- (void)setAsynchronousResizing:(BOOL)arg1;
- (BOOL)asynchronousResizing;
@property BOOL drawableResizesAsynchronously;
- (void)_scnUpdateContentsGravity;
- (BOOL)_canJitter;
- (BOOL)_supportsJitteringSyncRedraw;
- (void)_jitterRedisplayWithContext:(struct _CGLContextObject *)arg1;
@property(nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
- (void)scn_setBackingLayer:(id)arg1;
- (id)scn_backingLayer;
- (id)renderer;
- (unsigned long long)_renderOptions;
- (void)set_renderOptions:(unsigned long long)arg1;
- (struct CATransform3D)_screenTransform;
- (void)set_screenTransform:(struct CATransform3D)arg1;
- (double)_superSamplingFactor;
- (void)set_superSamplingFactor:(double)arg1;
- (void)setSkipFramesIfNoDrawableAvailable:(BOOL)arg1;
- (BOOL)skipFramesIfNoDrawableAvailable;
@property(retain, nonatomic) SCNScene *scene;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_selectRenderingAPIWithOptions:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit:(id)arg1;
- (void)_adjustBackingLayerPixelFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

