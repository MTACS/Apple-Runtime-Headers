//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBLocalZone, HMCameraClipEncryptionManager, NSData, NSMutableArray, NSObject, NSString, NSUUID;
@protocol HMDCameraRecordingUploaderDelegate, HMDCameraRecordingUploaderFactory, OS_dispatch_queue;

@interface HMDCameraRecordingUploader : HMFObject <HMFLogging>
{
    double _maximumClipDuration;
    unsigned long long _activeUploadOperationCount;
    NSData *_videoInitData;
    double _targetFragmentDuration;
    id <HMDCameraRecordingUploaderDelegate> _delegate;
    NSUUID *_clipModelID;
    HMBLocalZone *_localZone;
    id <HMDCameraRecordingUploaderFactory> _factory;
    HMCameraClipEncryptionManager *_encryptionManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    double _frameTimeOffset;
    NSMutableArray *_operations;
    double _totalClipDuration;
}

+ (id)logCategory;
@property double totalClipDuration; // @synthesize totalClipDuration=_totalClipDuration;
@property(readonly) NSMutableArray *operations; // @synthesize operations=_operations;
@property double frameTimeOffset; // @synthesize frameTimeOffset=_frameTimeOffset;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) id <HMDCameraRecordingUploaderFactory> factory; // @synthesize factory=_factory;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(retain) NSUUID *clipModelID; // @synthesize clipModelID=_clipModelID;
@property __weak id <HMDCameraRecordingUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
@property(copy) NSData *videoInitData; // @synthesize videoInitData=_videoInitData;
@property(readonly) unsigned long long activeUploadOperationCount; // @synthesize activeUploadOperationCount=_activeUploadOperationCount;
@property(readonly) double maximumClipDuration; // @synthesize maximumClipDuration=_maximumClipDuration;
- (void).cxx_destruct;
- (id)errorForCancel;
- (_Bool)errorIsCancelled:(id)arg1;
- (void)_cancelOperationsForCurrentClip;
- (id)_finish;
- (void)_startNextOperationWithLastOperationWasFinalized:(_Bool)arg1;
- (void)_operationCompleted:(id)arg1 finalizeOnError:(_Bool)arg2 promise:(id)arg3;
- (id)_addOperation:(id)arg1 finalizeClipOnError:(_Bool)arg2;
- (void)_createClipModel:(id)arg1;
- (id)finish;
- (id)addNotificationWithReason:(unsigned long long)arg1 confidenceLevel:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 heroFrameData:(id)arg4 offset:(double)arg5 homePresenceByPairingIdentity:(id)arg6;
- (id)addPosterFrameData:(id)arg1 offset:(double)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)addVideoSegmentData:(id)arg1 startDate:(id)arg2 duration:(double)arg3;
- (id)addVideoInitData:(id)arg1;
- (id)initWithLocalZone:(id)arg1 workQueue:(id)arg2 videoInitData:(id)arg3 targetFragmentDuration:(double)arg4 factory:(id)arg5;
- (id)initWithLocalZone:(id)arg1 workQueue:(id)arg2 videoInitData:(id)arg3 targetFragmentDuration:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

