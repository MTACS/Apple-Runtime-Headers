//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSelectedConfiguration, HMDCameraRecordingSupportedAudioConfiguration, HMDCameraRecordingSupportedVideoConfiguration, HMDHAPAccessory, HMDService, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>
{
    _Bool _configureCameraInProgress;
    _Bool _canConfigureCameraForRecording;
    NSString *_logIdentifier;
    id <HMDCameraRecordingSettingsControlDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    HMDService *_recordingService;
    NSDictionary *_recordingConfigurationOverrides;
    HMDCameraRecordingGeneralConfiguration *_supportedRecordingConfiguration;
    HMDCameraRecordingSupportedVideoConfiguration *_supportedVideoConfiguration;
    HMDCameraRecordingSupportedAudioConfiguration *_supportedAudioConfiguration;
    NSMutableDictionary *_characteristicByType;
    HMDCameraRecordingSelectedConfiguration *_currentSelectedConfiguration;
}

+ (id)logCategory;
+ (id)audioCodecForCodecConfiguration:(id)arg1;
+ (id)audioBitRateForCodecConfiguration:(id)arg1;
+ (_Bool)isSupportedAudioCodec:(id)arg1;
+ (id)videoCodecForCodecConfiguration:(id)arg1;
+ (id)h264ProfileForCodecConfiguration:(id)arg1;
+ (_Bool)isSupportedH264Profile:(id)arg1;
+ (_Bool)isSupportedVideoCodec:(id)arg1;
+ (id)audioConfigurationsByPreferenceOrder;
+ (id)videoConfigurationsByPreferenceOrder;
+ (id)clientIdentifier;
@property(retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration; // @synthesize currentSelectedConfiguration=_currentSelectedConfiguration;
@property _Bool canConfigureCameraForRecording; // @synthesize canConfigureCameraForRecording=_canConfigureCameraForRecording;
@property _Bool configureCameraInProgress; // @synthesize configureCameraInProgress=_configureCameraInProgress;
@property(readonly) NSMutableDictionary *characteristicByType; // @synthesize characteristicByType=_characteristicByType;
@property(retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration; // @synthesize supportedAudioConfiguration=_supportedAudioConfiguration;
@property(retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration; // @synthesize supportedVideoConfiguration=_supportedVideoConfiguration;
@property(retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration; // @synthesize supportedRecordingConfiguration=_supportedRecordingConfiguration;
@property(retain) NSDictionary *recordingConfigurationOverrides; // @synthesize recordingConfigurationOverrides=_recordingConfigurationOverrides;
@property(readonly) HMDService *recordingService; // @synthesize recordingService=_recordingService;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraRecordingSettingsControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void).cxx_destruct;
@property(readonly) double configuredFragmentDuration;
@property(readonly, getter=isCameraConfiguredForRecording) _Bool cameraConfiguredForRecording;
- (void)_setSelectedRecordingConfiguration:(id)arg1;
- (id)_parseResponse:(id)arg1 forCharacteristicType:(id)arg2;
- (id)_parseSupportedVideoConfiguration:(id)arg1;
- (id)_parseSupportedAudioConfiguration:(id)arg1;
- (id)_parseSupportedRecordingConfiguration:(id)arg1;
- (id)_parseSelectedRecordingConfiguration:(id)arg1;
- (void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)arg1;
- (void)_readSupportedCameraRecordingConfiguration;
- (void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)arg1;
- (void)_readSelectedCameraRecordingConfiguration;
- (void)_readCameraRecordingSettings;
- (void)_selectedConfigurationDidUpdateTo:(id)arg1;
- (void)_configureCameraRecordingSettings;
- (void)configureCameraRecordingSettings;
- (void)dealloc;
- (void)updateCanConfigureCameraForRecording;
- (id)_recordingAudioConfiguration;
- (id)_recordingVideoConfiguration;
- (id)_preferredAudioConfigurationOverride;
- (id)_preferredVideoConfigurationOverride;
- (id)_recordingGeneralConfiguration;
- (void)handleCharacteristicValueUpdated:(id)arg1;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)handleAccessoryReachable:(id)arg1;
- (void)handleAccessoryUnreachable:(id)arg1;
- (void)start;
@property(readonly, copy) NSNumber *configuredImageHeight;
@property(readonly, copy) NSNumber *configuredImageWidth;
@property(readonly, copy) NSNumber *configuredIFrameInterval;
@property(readonly, copy) NSNumber *configuredBitRate;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

