//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CSAsset : NSObject
{
    NSDictionary *_decodedInfo;
    NSString *_path;
    NSString *_resourcePath;
    NSString *_configVersion;
}

+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)defaultFallBackAssetForHearst;
+ (id)defaultFallBackAssetForSmartSiriVolume;
+ (id)fallBackAssetResourcePath;
+ (id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3;
+ (id)hybridEndpointerAssetFilename;
@property(readonly, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(readonly, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)isEqualAsset:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *hashFromResourcePath;
- (BOOL)containsCategory:(id)arg1;
- (BOOL)containsKey:(id)arg1 category:(id)arg2;
- (id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (BOOL)getBoolForKey:(id)arg1 category:(id)arg2 default:(BOOL)arg3;
- (id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)_decodeJson:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)initWithResourcePath:(id)arg1 configFile:(id)arg2 configVersion:(id)arg3;
@property(readonly, nonatomic) NSDictionary *SSVParameterDirectionary;
@property(readonly, nonatomic) float SSVNoiseWeight;
@property(readonly, nonatomic) float SSVTTSVolumeUpperLimitDB;
@property(readonly, nonatomic) float SSVTTSVolumeLowerLimitDB;
@property(readonly, nonatomic) float SSVUserOffsetOutputRangeHigh;
@property(readonly, nonatomic) float SSVUserOffsetOutputRangeLow;
@property(readonly, nonatomic) float SSVUserOffsetInputRangeHigh;
@property(readonly, nonatomic) float SSVUserOffsetInputRangeLow;
@property(readonly, nonatomic) float SSVLKFSTTSMappingOutputRangeHigh;
@property(readonly, nonatomic) float SSVLKFSTTSMappingOutputRangeLow;
@property(readonly, nonatomic) float SSVLKFSTTSMappingInputRangeHigh;
@property(readonly, nonatomic) float SSVLKFSTTSMappingInputRangeLow;
@property(readonly, nonatomic) float SSVNoiseTTSMappingOutputRangeHigh;
@property(readonly, nonatomic) float SSVNoiseTTSMappingOutputRangeLow;
@property(readonly, nonatomic) float SSVNoiseTTSMappingInputRangeHigh;
@property(readonly, nonatomic) float SSVNoiseTTSMappingInputRangeLow;
@property(readonly, nonatomic) float SSVLKFSMicSensitivityOffset;
@property(readonly, nonatomic) float SSVLKFSTimeConstant;
@property(readonly, nonatomic) float SSVNoiseMicSensitivityOffset;
@property(readonly, nonatomic) float SSVNoiseTimeConstant;
@property(readonly, nonatomic) unsigned int SSVLKFSUpperPercentile;
@property(readonly, nonatomic) unsigned int SSVLKFSLowerPercentile;
@property(readonly, nonatomic) unsigned int SSVNoiseUpperPercentile;
@property(readonly, nonatomic) unsigned int SSVNoiseLowerPercentile;
@property(readonly, nonatomic) unsigned int SSVEnergyBufferSize;
@property(readonly, nonatomic) unsigned long long SSVLKFSChannelBitset;
@property(readonly, nonatomic) unsigned long long SSVNoiseLevelChannelBitset;
- (id)configFilepathForDictationOrigin:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long VTFirstPassProcessingChannelsBitset;
@property(readonly, nonatomic) float VTFirstPassProcessingChunkSeconds;
@property(readonly, nonatomic) float VTFirstPassMasterChannelScoreBoost;
@property(readonly, nonatomic) float VTFirstPassDelaySecondsForChannelSelection;
@property(readonly, nonatomic) float VTFirstPassThreshold;
@property(readonly, nonatomic) NSString *VTFirstPassConfigPathNDAPI;
- (id)_sha256:(id)arg1;
- (id)_sha1:(id)arg1;
- (id)hearstRTModelLocaleMap;
- (id)hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3;
- (id)latestHearstRTModelForLocale:(id)arg1;
- (id)RTModelWithFallbackLanguage:(id)arg1;
- (id)createRTModelWithLocale:(id)arg1;
- (float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1;
- (float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1;
- (float)VTSecondPassRemoteVADThresholdFrom:(id)arg1;
- (float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1;
- (float)VTSecondPassRecognizerWaitTimeFrom:(id)arg1;
- (id)VTSecondPassRecognizerTokenFrom:(id)arg1;
- (float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1;
- (float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1;
- (BOOL)VTSecondPassUseKeywordSpottingFrom:(id)arg1;
- (id)VTSecondPassConfigPathRecognizerFrom:(id)arg1;
- (BOOL)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1;
- (id)VTSecondPassConfigPathNDAPIFrom:(id)arg1;
- (float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1;
- (float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1;
- (float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1;
- (float)VTSecondPassLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPass2ndChanceThresholdFrom:(id)arg1;
- (float)VTSecondPassThresholdFrom:(id)arg1;
- (id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1;
@property(readonly, nonatomic) float keywordDetectorWaitTimeSinceVT;
@property(readonly, nonatomic) NSString *keywordDetectorConfigPathRecognizer;
@property(readonly, nonatomic) float keywordDetectorThreshold;
@property(readonly, nonatomic) unsigned long long maxSpeakerVectorsToPersist;
@property(readonly, nonatomic) float speakerDetectorRetrainTriggerThreshold;
@property(readonly, nonatomic) float speakerDetectorThreshold;
@property(readonly, nonatomic) BOOL speakerDetectorThresholdAvailable;
@property(readonly, nonatomic) NSString *speakerDetectorNDAPIConfigPath;
@property(readonly, nonatomic) NSString *spgConfigFile;
@property(readonly, nonatomic) NSString *startOfSpeechDetectorConfigFile;
@property(readonly, nonatomic) NSString *languageDetectorConfigFile;
@property(readonly, nonatomic) NSArray *languageDetectorSupportedLocale;
@property(readonly, nonatomic) float CVTTwoShotDecisionWaitTime;
@property(readonly, nonatomic) float CVTTwoShotThreshold;
@property(readonly, nonatomic) float CVTThreshold;
@property(readonly, nonatomic) NSString *CVTConfigPathNDAPI;

@end

