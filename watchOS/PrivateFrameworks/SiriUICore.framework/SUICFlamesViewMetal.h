//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalKit/MTKView.h>

#import <SiriUICore/SUICFlamesViewProviding-Protocol.h>

@class CADisplayLink, NSMutableArray, NSMutableSet, NSString, SUICAudioLevelSmoother, SUICFlameGroup, UIColor, UIImage, UIImageView, UIScreen;
@protocol MTLBuffer, MTLCommandQueue, MTLRenderPipelineState, SUICFlamesViewProvidingDelegate;

@interface SUICFlamesViewMetal : MTKView <SUICFlamesViewProviding>
{
    CADisplayLink *_displayLink;
    int _currentContextCount;
    NSMutableSet *_renderingDisabledReasons;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    int _flameProgramHandle;
    int _auraProgramHandle;
    int _vShadID;
    int _fShadID;
    unsigned int _vertexArrayObjectHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _elementArrayHandle;
    unsigned long long _numIndices;
    unsigned long long _numVertices;
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _maxVertexCircles;
    unsigned int _auraVertexCircles;
    float _maxSubdivisionLevel;
    float _auraMinSubdivisionLevel;
    float _auraMaxSubdivisionLevel;
    NSMutableArray *_flameGroups;
    SUICFlameGroup *_currentFlameGroup;
    float _viewWidth;
    float _viewHeight;
    float _dictationUnitSize;
    UIScreen *_screen;
    UIImageView *_overlayImageView;
    double _startTime;
    float _dictationRedColor;
    float _dictationGreenColor;
    float _dictationBlueColor;
    SUICAudioLevelSmoother *_levelSmoother;
    int _fidelity;
    float _frameRateScalingFactor;
    _Bool _transitionFinished;
    _Bool _isInitialized;
    _Bool _hasCustomActiveFrame;
    _Bool _shadersAreCompiled;
    _Bool _reduceMotionEnabled;
    id <MTLRenderPipelineState> _pipelineState[4];
    id <MTLCommandQueue> _commandQueue;
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _indexBuffer;
    // Error parsing type: , name: _viewportSize
    _Bool _accelerateTransitions;
    _Bool _showAura;
    _Bool _freezesAura;
    _Bool _reduceFrameRate;
    _Bool _reduceThinkingFramerate;
    _Bool _renderInBackground;
    id <SUICFlamesViewProvidingDelegate> _flamesDelegate;
    int _state;
    UIColor *_dictationColor;
    float _horizontalScaleFactor;
    int _mode;
    UIImage *_overlayImage;
    struct CGRect _activeFrame;
}

+ (void)setIndexCacheSize:(unsigned int)arg1;
+ (id)_indexCache;
+ (void)prewarmShadersForScreen:(id)arg1 initialFrame:(struct CGRect)arg2 activeFrame:(struct CGRect)arg3 fidelity:(int)arg4 prewarmInBackground:(_Bool)arg5;
+ (void)prewarmShadersForScreen:(id)arg1 activeFrame:(struct CGRect)arg2 fidelity:(int)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(int)arg3 prewarmInBackground:(_Bool)arg4;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(int)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2;
+ (_Bool)_supportsAdaptiveFramerate;
+ (Class)layerClass;
@property(nonatomic) _Bool renderInBackground; // @synthesize renderInBackground=_renderInBackground;
@property(nonatomic) _Bool reduceThinkingFramerate; // @synthesize reduceThinkingFramerate=_reduceThinkingFramerate;
@property(nonatomic) _Bool reduceFrameRate; // @synthesize reduceFrameRate=_reduceFrameRate;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) float horizontalScaleFactor; // @synthesize horizontalScaleFactor=_horizontalScaleFactor;
@property(nonatomic) _Bool freezesAura; // @synthesize freezesAura=_freezesAura;
@property(retain, nonatomic) UIColor *dictationColor; // @synthesize dictationColor=_dictationColor;
@property(nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property(nonatomic) _Bool showAura; // @synthesize showAura=_showAura;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool accelerateTransitions; // @synthesize accelerateTransitions=_accelerateTransitions;
@property(nonatomic) __weak id <SUICFlamesViewProvidingDelegate> flamesDelegate; // @synthesize flamesDelegate=_flamesDelegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (float)_currentMicPowerLevel;
- (void)_didFinishTransition;
- (void)_updateCurveLayer:(id)arg1;
- (void)_didSkipFrameUpdateWithReason:(id)arg1 andCount:(unsigned int)arg2;
- (id)_metalLayer;
- (_Bool)_isOriginatingProcessInBackground;
@property(readonly, nonatomic) _Bool isRenderingEnabled;
- (_Bool)inDictationMode;
- (_Bool)inSiriMode;
- (void)_tearDownDisplayLink;
- (_Bool)_deviceNeeds2xFlamesWithCurrentScale:(float)arg1;
- (float)_currentDisplayScale;
- (void)layoutSubviews;
- (void)_updateOrthoProjection;
- (_Bool)_resizeFromLayer:(id)arg1;
- (_Bool)_loadPipelineLibraries;
- (_Bool)_initMetalAndSetupDisplayLink:(_Bool)arg1;
- (_Bool)_setupVertexBuffer;
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int **)arg4 atStartIndex:(int)arg5 withFill:(_Bool)arg6 withCullingForAura:(_Bool)arg7 forVertices:(struct *)arg8;
-     // Error parsing type: 16@0:48, name: _predeterminedVertexPositionForAuraWithPolarVertex:
- (unsigned int)_numVerticesPerCircle;
- (void)_setupDisplayLink;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_reduceMotionStatusChanged:(id)arg1;
- (void)resetAndReinitialize:(_Bool)arg1;
- (void)_prewarmShaders;
- (void)prewarmShadersForCurrentMode;
- (void)setRenderingEnabled:(_Bool)arg1 forReason:(id)arg2;
@property(nonatomic) _Bool paused;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)_updateDisplayLinkPausedState;
- (int)_preferredFramesPerSecond;
- (void)_setPreferredFramesPerSecond;
- (void)fadeOutCurrentAura;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 screenScale:(float)arg2 fidelity:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 fidelity:(int)arg3;
- (void)_setValuesForFidelity:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

