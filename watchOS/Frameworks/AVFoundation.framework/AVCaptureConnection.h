//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureConnectionInternal, AVCaptureOutput, AVCaptureVideoPreviewLayer, NSArray;

@interface AVCaptureConnection : NSObject
{
    AVCaptureConnectionInternal *_internal;
    _Bool _supportsVideoFieldMode;
    int _videoFieldMode;
}

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;
@property(nonatomic) int videoFieldMode; // @synthesize videoFieldMode=_videoFieldMode;
@property(readonly, nonatomic, getter=isVideoFieldModeSupported) _Bool supportsVideoFieldMode; // @synthesize supportsVideoFieldMode=_supportsVideoFieldMode;
- (_Bool)isTrulyDisabled;
- (void)_updatePropertiesForFormat:(id)arg1;
- (int)_resolveActiveVideoStabilizationMode:(int)arg1 format:(id)arg2;
- (void)_updateActiveVideoStabilizationMode:(int)arg1 bumpChangeSeed:(_Bool)arg2;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1 allConnections:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)sourcesFromFrontFacingCamera;
- (id)sourceDevice;
- (void)setDebugMetadataSidecarFileEnabled:(_Bool)arg1;
- (_Bool)isDebugMetadataSidecarFileEnabled;
- (void)setLivePhotoMetadataWritingEnabled:(_Bool)arg1;
- (_Bool)livePhotoMetadataWritingEnabled;
- (_Bool)isLivePhotoMetadataWritingSupported;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (int)videoRetainedBufferCountHint;
- (_Bool)isVideoRetainedBufferCountHintSupported;
@property(nonatomic, getter=isCameraIntrinsicMatrixDeliveryEnabled) _Bool cameraIntrinsicMatrixDeliveryEnabled;
@property(readonly, nonatomic, getter=isCameraIntrinsicMatrixDeliverySupported) _Bool cameraIntrinsicMatrixDeliverySupported;
- (void)_updateCameraIntrinsicMatrixDeliverySupported;
@property(readonly, nonatomic) int activeVideoStabilizationMode;
@property(nonatomic) int preferredVideoStabilizationMode;
@property(nonatomic) _Bool enablesVideoStabilizationWhenAvailable;
@property(readonly, nonatomic, getter=isVideoStabilizationEnabled) _Bool videoStabilizationEnabled;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) _Bool supportsVideoStabilization;
- (void)_updateMaxScaleAndCropFactorForFormat:(id)arg1;
@property(nonatomic) float videoScaleAndCropFactor;
@property(readonly, nonatomic) float videoMaxScaleAndCropFactor;
@property(nonatomic) CDStruct_1b6d18a9 videoMaxFrameDuration;
- (CDStruct_1b6d18a9)_videoMaxFrameDuration;
- (_Bool)isVideoMaxFrameDurationSet;
@property(readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) _Bool supportsVideoMaxFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 videoMinFrameDuration;
- (void)_setVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_videoMinFrameDuration;
- (_Bool)isVideoMinFrameDurationSet;
@property(readonly, nonatomic, getter=isVideoMinFrameDurationSupported) _Bool supportsVideoMinFrameDuration;
@property(nonatomic) int videoOrientation;
@property(readonly, nonatomic, getter=isVideoOrientationSupported) _Bool supportsVideoOrientation;
@property(nonatomic) _Bool automaticallyAdjustsVideoMirroring;
- (void)_setVideoMirrored:(_Bool)arg1;
@property(nonatomic, getter=isVideoMirrored) _Bool videoMirrored;
@property(readonly, nonatomic, getter=isVideoMirroringSupported) _Bool supportsVideoMirroring;
- (void)updateAudioChannelsArray;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (void)updateAudioLevelsArray;
@property(readonly, nonatomic) NSArray *audioChannels;
- (id)mediaType;
- (_Bool)isLive;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_setActive:(_Bool)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSArray *inputPorts;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property(readonly, nonatomic) AVCaptureOutput *output;
- (void)teardownObservers;
- (void)setupObservers;
- (id)session;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)setupInternalStorage;

@end

