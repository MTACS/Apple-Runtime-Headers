//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureSourceFormat.h>

@class FigCaptureSourceCompanionFormat, FigCaptureSourceDepthDataFormat, NSArray;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat
{
    NSArray *_frontEndScalerCompanionFormats;
    _Bool _sifrSupported;
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;
    NSArray *_supportedDepthDataFormats;
    FigCaptureSourceDepthDataFormat *_streamingDXDYDepthDataFormat;
    _Bool _isStreamingDisparitySupported;
    _Bool _isStreamingDepthSupported;
    _Bool _isStillImageDisparitySupported;
    _Bool _isStillImageDepthSupported;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (CDStruct_79c71658)_nativeDimensionsWithoutCrop;
- (CDStruct_79c71658)_highQualitySensorDimensions;
- (_Bool)isCompatibleWithInfraredFormat:(id)arg1;
- (_Bool)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1;
- (void)_resolveProperties;
- (CDStruct_79c71658)_visibleSensorDimensionsIncludingCinematic:(_Bool)arg1;
- (CDStruct_79c71658)_maxUseableSensorDimensions;
- (CDStruct_79c71658)_outputDimensions;
@property(readonly) int ispPowerConsumption;
@property(readonly) int variableSensorPowerConsumption;
@property(readonly) int baseSensorPowerConsumption;
@property(readonly) int sensorPowerConsumption;
@property(readonly) float hardwareCost;
@property(readonly, getter=isMultiCamSupported) _Bool multiCamSupported;
@property(readonly, getter=isDeferredPhotoProcessingSupported) _Bool deferredPhotoProcessingSupported;
@property(readonly, getter=isNonDestructiveCropSupported) _Bool nonDestructiveCropSupported;
@property(readonly) CDStruct_79c71658 spatialOverCaptureHighResStillImageDimensions;
@property(readonly) float spatialOverCapturePercentage;
@property(readonly, getter=isSpatialOverCaptureSupported) _Bool spatialOverCaptureSupported;
@property(readonly, getter=isMomentCaptureMovieRecordingSupported) _Bool momentCaptureMovieRecordingSupported;
@property(readonly) float maxZoomFactorForDepthDataDelivery;
@property(readonly) float minZoomFactorForDepthDataDelivery;
- (id)streamingDXDYDepthDataFormat;
@property(readonly) NSArray *supportedDepthDataFormats;
@property(readonly, getter=isStillImageDepthSupported) _Bool stillImageDepthSupported;
@property(readonly, getter=isStillImageDisparitySupported) _Bool stillImageDisparitySupported;
@property(readonly, getter=isStreamingDepthSupported) _Bool streamingDepthSupported;
@property(readonly, getter=isStreamingDisparitySupported) _Bool streamingDisparitySupported;
@property(readonly) NSArray *AVCaptureSessionPresets;
@property(readonly, getter=isHighProfileH264Supported) _Bool highProfileH264Supported;
@property(readonly) float maxPortraitLightingEffectStrength;
@property(readonly) float minPortraitLightingEffectStrength;
@property(readonly) float defaultPortraitLightingEffectStrength;
@property(readonly) float maxSimulatedAperture;
@property(readonly) float minSimulatedAperture;
@property(readonly) float defaultSimulatedAperture;
- (_Bool)sushiRawBlackBorderingEnabled;
- (id)rawLensShadingCorrection;
@property(readonly) unsigned int supportedRawPixelFormat;
@property(readonly) NSArray *supportedColorSpaces;
@property(readonly, getter=isWideColorSupported) _Bool wideColorSupported;
- (_Bool)isStillImageISPChromaNoiseReductionEnabled;
@property(readonly) CDStruct_79c71658 highResStillImageDimensions;
- (_Bool)usesPacked10BitFirmwareStillImageOutputPixelFormat;
- (_Bool)isCaptureTimePhotoCurationSupported;
@property(readonly, getter=isDigitalFlashSupported) _Bool digitalFlashSupported;
- (int)redEyeReductionVersion;
@property(readonly, getter=isRedEyeReductionSupported) _Bool redEyeReductionSupported;
@property(readonly) _Bool zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property(readonly, getter=isZeroShutterLagSupported) _Bool zeroShutterLagSupported;
@property(readonly, getter=isStillImageISPMultiBandNoiseReductionSupported) _Bool stillImageISPMultiBandNoiseReductionSupported;
@property(readonly, getter=isISPMultiBandNoiseReductionSupported) _Bool ispMultiBandNoiseReductionSupported;
@property(readonly, getter=isStereoFusionSupported) _Bool stereoFusionSupported;
@property(readonly, getter=isQuadraHighResStillImageSupported) _Bool quadraHighResStillImageSupported;
@property(readonly, getter=isHighResStillImageSupported) _Bool highResStillImageSupported;
@property(readonly, getter=isHDRSupported) _Bool hdrSupported;
- (int)stillImageNoiseReductionAndStabilizationScheme;
@property(readonly, getter=isIrisVideoStabilizationSupported) _Bool irisVideoStabilizationSupported;
@property(readonly, getter=isIrisSupported) _Bool irisSupported;
@property(readonly) _Bool configureForSpatialOverCaptureSupport;
@property(readonly) _Bool configureForStillImageStabilizationSupport;
@property(readonly, getter=isStillImageStabilizationSupported) _Bool stillImageStabilizationSupported;
@property(readonly) _Bool needsPreviewDPCC;
@property(readonly, getter=isHighResPhotoFormat) _Bool highResPhotoFormat;
@property(readonly, getter=isPhotoFormat) _Bool photoFormat;
- (struct CGSize)stabilizationOverscanPercentageFromSensorForFESCropDimensions:(CDStruct_79c71658)arg1;
- (int)verticalSensorBinningFactor;
- (int)horizontalSensorBinningFactor;
- (_Bool)capturesStillsFromVideoStream;
@property(readonly, getter=isWideAsStatsMasterEnabled) _Bool wideAsStatsMasterEnabled;
@property(readonly, getter=isStagePreviewRenderingSupported) _Bool stagePreviewRenderingSupported;
@property(readonly, getter=isStudioAndContourPreviewRenderingSupported) _Bool studioAndContourPreviewRenderingSupported;
@property(readonly, getter=isSecondaryScalerUnavailable) _Bool secondaryScalerUnavailable;
@property(readonly, getter=isVisionDataDeliverySupported) _Bool visionDataDeliverySupported;
@property(readonly, getter=isLowLightVideoCaptureSupported) _Bool lowLightVideoCaptureSupported;
@property(readonly, getter=isVariableFrameRateVideoCaptureSupported) _Bool variableFrameRateVideoCaptureSupported;
@property(readonly) _Bool prefersSensorHDREnabled;
- (int)sensorHDRCompanionIndex;
@property(readonly) _Bool hasSensorHDRCompanionIndex;
- (CDStruct_79c71658)sourceCropAspectRatio;
- (CDStruct_79c71658)cropDimensionsForFES;
- (CDStruct_79c71658)fesInputCropDimensions;
- (CDStruct_79c71658)sensorCropDimensions;
- (id)depthCompanionFormat;
- (id)nonSIFRCompanionFormat;
@property(readonly, getter=isSIFRSupported) _Bool SIFRSupported;
- (id)frontEndScalerCompanionFormats;
@property(readonly) int autoFocusSystem;
- (float)lowLightVideoAEMaxGain;
- (float)depthDataMaxIntegrationTimeOverride;
- (float)depthDataAEMaxGain;
- (int)maxIntegrationTimeOverride;
- (float)aeMaxGain;
@property(readonly) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly) float maxISO;
@property(readonly) float minISO;
- (_Bool)ispChromaNoiseReductionEnabled;
- (int)temporalNoiseReductionMode;
@property(readonly) int rawBitDepth;
@property(readonly, getter=isZoomDynamicSensorCropSupported) _Bool zoomDynamicSensorCropSupported;
@property(readonly) float zoomFactorUpscaleThreshold;
@property(readonly) float maxZoomFactor;
@property(readonly, getter=isZoomSupported) _Bool zoomSupported;
- (int)fesBinningFactorHorizontal;
- (struct CGRect)maxVisibleSensorRect;
- (int)previewImageQueueSyncStrategy;
- (float)cinematicStabilizationExtendedLookAheadDuration;
- (float)stabilizationOverscanPercentageOverrideForCinematic;
- (int)stabilizationTypeOverrideForCinematic;
- (int)stabilizationTypeOverrideForStandard;
- (_Bool)isStabilizationModeSupported:(int)arg1;
@property(readonly, getter=isBinned) _Bool binned;
@property(readonly) float geometricDistortionCorrectedFieldOfView;
@property(readonly) float fieldOfView;
@property(readonly) float defaultMaxFrameRate;
@property(readonly) float defaultMinFrameRate;
@property(readonly) float maxSupportedFrameRate;
@property(readonly) float minSupportedFrameRate;
@property(readonly) CDStruct_79c71658 previewDimensions;
- (CDStruct_79c71658)nativeDimensions;
@property(readonly) CDStruct_79c71658 sensorDimensions;
@property(readonly) CDStruct_79c71658 dimensions;
@property(readonly) int formatIndex;
- (struct opaqueCMFormatDescription *)formatDescription;
- (unsigned int)mediaType;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;

@end

