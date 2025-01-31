//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

#import <ARKit/ARRecordingTechniqueProtocol-Protocol.h>

@class ARParentImageSensorSettings, NSError, NSMutableDictionary, NSObject, NSSet, NSString, NSURL;
@protocol ARRecordingTechniqueDelegate, OS_dispatch_queue;

@interface ARRecordingTechniquePublic : ARTechnique <ARRecordingTechniqueProtocol>
{
    NSObject<OS_dispatch_queue> *_masterQueue;
    NSObject<OS_dispatch_queue> *_timeSensitiveQueue;
    unsigned long long _sensorDataTypes;
    double _sessionSourceTime;
    _Bool _writerReady;
    NSMutableDictionary *_lastRecordedTimestamps;
    NSError *_finishedError;
    _Bool _expectDepthData;
    _Bool _expectAudioData;
    _Bool _expectCustomData;
    _Bool _shouldSaveVideoInPhotosLibrary;
    NSURL *_outputFileURL;
    id <ARRecordingTechniqueDelegate> _recordingTechniqueDelegate;
    ARParentImageSensorSettings *_parentImageSensorSettings;
    unsigned long long _state;
}

+ (_Bool)isSupported;
+ (id)metadataIdentifierForARSensorDataClass:(Class)arg1;
+ (id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;
@property unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings; // @synthesize parentImageSensorSettings=_parentImageSensorSettings;
@property __weak id <ARRecordingTechniqueDelegate> recordingTechniqueDelegate; // @synthesize recordingTechniqueDelegate=_recordingTechniqueDelegate;
@property(nonatomic) _Bool shouldSaveVideoInPhotosLibrary; // @synthesize shouldSaveVideoInPhotosLibrary=_shouldSaveVideoInPhotosLibrary;
@property(nonatomic) _Bool expectCustomData; // @synthesize expectCustomData=_expectCustomData;
@property(nonatomic) _Bool expectAudioData; // @synthesize expectAudioData=_expectAudioData;
@property(nonatomic) _Bool expectDepthData; // @synthesize expectDepthData=_expectDepthData;
@property(readonly, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
- (void).cxx_destruct;
- (void)didFinishRecording;
- (void)didFailWithError:(id)arg1;
- (void)isReadyToRecord;
- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (void)_finish:(id)arg1;
- (void)_fail:(id)arg1;
- (void)removeTemporaryVideoFile;
- (void)copyVideoToPhotoLibrary;
- (_Bool)finished;
- (_Bool)allowedToWrite;
- (void)finishRecording;
- (void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
- (void)startRecording;
@property(readonly, nonatomic) NSSet *recordingResultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
@property(readonly, nonatomic) unsigned long long recordingSensorDataTypes;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 startImmediately:(_Bool)arg4;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

