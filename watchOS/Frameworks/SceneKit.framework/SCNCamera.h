//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;
@protocol MTLTexture;

@interface SCNCamera : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    // Error parsing type: ^{__C3DCamera={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]}){?=[4]}dd}ffffiib1b1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})ffffffffffffiffffffffffffff{?=fffffii}^{__C3DEffectSlot}I^{__C3DFXTechnique}^vf}, name: _camera
    unsigned int _isPresentationInstance:1;
    unsigned int _custom:1;
    unsigned int _legacyFov:1;
    unsigned int _usesOrthographicProjection:1;
    unsigned int _automaticallyAdjustsZRange:1;
    unsigned int _fillMode:1;
    unsigned int _projectionDirection:1;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    float _xFov;
    float _yFov;
    double _orthographicScale;
    double _zNear;
    double _zFar;
    float _fieldOfView;
    float _focalLength;
    float _sensorSize;
    float _fStop;
    float _focusDistance;
    float _dofIntensity;
    int _bladeCount;
    int _focalBlurSampleCount;
    float _aspectRatio;
    unsigned int _categoryBitMask;
    struct SCNMatrix4 _projectionTransform;
    SCNTechnique *_technique;
    SCNMaterialProperty *_colorGrading;
    _Bool _wantsHDR;
    float _whitePoint;
    float _averageGray;
    float _exposureOffset;
    float _minimumExposure;
    float _maximumExposure;
    _Bool _wantsExposureAdaptation;
    float _exposureAdaptationDuration;
    float _exposureAdaptationBrighteningSpeedFactor;
    float _exposureAdaptationDarkeningSpeedFactor;
    float _exposureAdaptationHistogramRangeHighProbability;
    float _exposureAdaptationHistogramRangeLowProbability;
    int _exposureAdaptationMode;
    float _bloomIntensity;
    float _bloomThreshold;
    int _bloomIteration;
    float _bloomIterationSpread;
    float _bloomBlurRadius;
    float _motionBlurIntensity;
    float _vignettingPower;
    float _vignettingIntensity;
    float _colorFringeStrength;
    float _colorFringeIntensity;
    float _saturation;
    float _contrast;
    float _grainIntensity;
    float _grainScale;
    _Bool _grainIsColored;
    float _whiteBalanceTemperature;
    float _whiteBalanceTint;
    struct {
        float intensity;
        float radius;
        float bias;
        float depthThreshold;
        float normalThreshold;
        int sampleCount;
        int downSample;
    } _screenSpaceAmbientOcclusion;
    id <MTLTexture> _grainTexture;
    float _grainSlice;
}

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingFocalLength;
+ (id)keyPathsForValuesAffectingFieldOfView;
+ (id)camera;
+     // Error parsing type: @12@0:4^{__C3DCamera={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]}){?=[4]}dd}ffffiib1b1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})ffffffffffffiffffffffffffff{?=fffffii}^{__C3DEffectSlot}I^{__C3DFXTechnique}^vf}8, name: cameraWithCameraRef:
+ (id)cameraWithMDLCamera:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNCamera:(id)arg1;
- (void)setFocalSize:(float)arg1;
- (float)focalSize;
- (void)setFocalDistance:(float)arg1;
- (float)focalDistance;
- (void)_customEncodingOfSCNCamera:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
@property(readonly, nonatomic) SCNMaterialProperty *colorGrading;
- (struct SCNMatrix4)projectionTransformWithViewportSize:(struct CGSize)arg1;
@property(nonatomic) struct SCNMatrix4 projectionTransform;
-     // Error parsing type: ^{__C3DCamera={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]}){?=[4]}dd}ffffiib1b1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})ffffffffffffiffffffffffffff{?=fffffii}^{__C3DEffectSlot}I^{__C3DFXTechnique}^vf}8@0:4, name: cameraRef
- (_Bool)useLegacyFov;
- (void)setYMag:(double)arg1;
- (double)yMag;
- (void)setXMag:(double)arg1;
- (double)xMag;
- (void)setAspectRatio:(float)arg1;
- (float)aspectRatio;
@property(nonatomic) int projectionDirection;
- (void)setFieldOfViewOrientation:(int)arg1;
- (int)fieldOfViewOrientation;
- (void)setFillMode:(int)arg1;
- (int)fillMode;
@property(nonatomic) float focusDistance;
@property(nonatomic) int focalBlurSampleCount;
@property(nonatomic) int apertureBladeCount;
@property(nonatomic) float fStop;
- (void)setAperture:(float)arg1;
- (float)aperture;
@property(nonatomic) float focalLength;
@property(nonatomic) float sensorHeight;
@property(nonatomic) float fieldOfView;
- (void)_updateFocalLength;
- (void)_updateFov;
@property(nonatomic) double zNear;
@property(nonatomic) double zFar;
- (void)setYFov:(double)arg1;
- (double)yFov;
- (void)setXFov:(double)arg1;
- (double)xFov;
@property(nonatomic) float whitePoint;
@property(nonatomic) _Bool wantsHDR;
@property(nonatomic) _Bool wantsExposureAdaptation;
@property(nonatomic) float vignettingPower;
@property(nonatomic) float vignettingIntensity;
@property(nonatomic) _Bool usesOrthographicProjection;
@property(nonatomic) float saturation;
@property(nonatomic) double orthographicScale;
@property(nonatomic) float motionBlurIntensity;
@property(nonatomic) float minimumExposure;
@property(nonatomic) float maximumExposure;
- (void)setFocalBlurRadius:(float)arg1;
- (float)focalBlurRadius;
- (void)setDofIntensity:(float)arg1;
- (float)dofIntensity;
@property(nonatomic) _Bool wantsDepthOfField;
@property(nonatomic) float exposureOffset;
- (void)setExposureAdaptationMode:(int)arg1;
- (int)exposureAdaptationMode;
- (void)setExposureAdaptationHistogramRangeLowProbability:(float)arg1;
- (float)exposureAdaptationHistogramRangeLowProbability;
- (void)setExposureAdaptationHistogramRangeHighProbability:(float)arg1;
- (float)exposureAdaptationHistogramRangeHighProbability;
- (void)setExposureAdaptationDuration:(float)arg1;
- (float)exposureAdaptationDuration;
@property(nonatomic) float exposureAdaptationDarkeningSpeedFactor;
@property(nonatomic) float exposureAdaptationBrighteningSpeedFactor;
@property(nonatomic) float whiteBalanceTint;
@property(nonatomic) float whiteBalanceTemperature;
- (void)setGrainTexture:(id)arg1;
- (id)grainTexture;
- (void)setGrainSlice:(float)arg1;
- (float)grainSlice;
@property(nonatomic) _Bool grainIsColored;
@property(nonatomic) float grainScale;
@property(nonatomic) float grainIntensity;
@property(nonatomic) float contrast;
@property(nonatomic) float colorFringeIntensity;
@property(nonatomic) float colorFringeStrength;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) float bloomIterationSpread;
- (void)setBloomIteration:(int)arg1;
@property(nonatomic) int bloomIterationCount;
- (int)bloomIteration;
@property(nonatomic) float bloomThreshold;
@property(nonatomic) float bloomIntensity;
@property(nonatomic) float bloomBlurRadius;
@property(nonatomic) float averageGray;
@property(nonatomic) _Bool automaticallyAdjustsZRange;
- (void)setScreenSpaceAmbientOcclusionDownSample:(int)arg1;
- (int)screenSpaceAmbientOcclusionDownSample;
- (void)setScreenSpaceAmbientOcclusionSampleCount:(int)arg1;
- (int)screenSpaceAmbientOcclusionSampleCount;
@property(nonatomic) float screenSpaceAmbientOcclusionNormalThreshold;
@property(nonatomic) float screenSpaceAmbientOcclusionDepthThreshold;
@property(nonatomic) float screenSpaceAmbientOcclusionBias;
@property(nonatomic) float screenSpaceAmbientOcclusionRadius;
@property(nonatomic) float screenSpaceAmbientOcclusionIntensity;
- (_Bool)hasCustomProjectionTransform;
- (void)_registerAsObserver;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationCamera;
@property(copy, nonatomic) SCNTechnique *technique;
- (void)_syncObjCModel;
- (void)removeAllBindings;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(float)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(float)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
-     // Error parsing type: @12@0:4^{__C3DCamera={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]}){?=[4]}dd}ffffiib1b1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})ffffffffffffiffffffffffffff{?=fffffii}^{__C3DEffectSlot}I^{__C3DFXTechnique}^vf}8, name: initPresentationCameraWithCameraRef:
-     // Error parsing type: @12@0:4^{__C3DCamera={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]}){?=[4]}dd}ffffiib1b1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})ffffffffffffiffffffffffffff{?=fffffii}^{__C3DEffectSlot}I^{__C3DFXTechnique}^vf}8, name: initWithCameraRef:
- (id)init;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

