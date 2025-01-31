//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCaptureCore/ICDevice.h>

@class ICCameraProperties, NSArray, NSNumber, NSObject, NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface ICCameraDevice : ICDevice
{
    BOOL _ejectable;
    BOOL _accessRestrictedAppleDevice;
    BOOL _locked;
    BOOL _batteryLevelAvailable;
    BOOL _allowsSyncingClock;
    BOOL _beingEjected;
    ICCameraProperties *_cameraProperties;
    double _timeOffset;
    unsigned long long _batteryLevel;
    unsigned long long _numberOfDownloadableItems;
    NSObject<OS_dispatch_queue> *_deviceNotificationQueue;
    NSObject<OS_dispatch_queue> *_deviceCommandQueue;
    long long _enumerationOrder;
    NSProgress *_progress;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) long long enumerationOrder; // @synthesize enumerationOrder=_enumerationOrder;
@property(nonatomic) BOOL beingEjected; // @synthesize beingEjected=_beingEjected;
@property(nonatomic) BOOL allowsSyncingClock; // @synthesize allowsSyncingClock=_allowsSyncingClock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceCommandQueue; // @synthesize deviceCommandQueue=_deviceCommandQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceNotificationQueue; // @synthesize deviceNotificationQueue=_deviceNotificationQueue;
@property(readonly, nonatomic) unsigned long long numberOfDownloadableItems; // @synthesize numberOfDownloadableItems=_numberOfDownloadableItems;
@property(nonatomic) unsigned long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) BOOL batteryLevelAvailable; // @synthesize batteryLevelAvailable=_batteryLevelAvailable;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice; // @synthesize accessRestrictedAppleDevice=_accessRestrictedAppleDevice;
@property(nonatomic) ICCameraProperties *cameraProperties; // @synthesize cameraProperties=_cameraProperties;
@property(nonatomic, getter=isEjectable) BOOL ejectable; // @synthesize ejectable=_ejectable;
- (void)finishedSerializedOperation;
- (char *)operationName:(unsigned long long)arg1;
- (void)signalOperationComplete;
- (void)signalOperationIdle;
- (void)startSerializedOperationWithDictionary:(id)arg1 andOperationType:(unsigned long long)arg2;
- (id)operationIdentifier:(id)arg1;
- (BOOL)updateMediaPresentation;
@property unsigned long long mediaPresentation;
- (BOOL)setDefaultMediaPresentation:(unsigned long long)arg1;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (void)registerForNotifications:(id)arg1 options:(id)arg2;
- (long long)cameraFilesContentSizeInBytes;
- (void)popMediaFiles:(id)arg1;
- (void)pushMediaFiles:(id)arg1;
- (void)removeCameraFileFromIndex:(id)arg1;
- (void)indexCameraFileDate:(id)arg1;
- (void)indexCameraFileUUID:(id)arg1;
- (void)addCameraFileToIndex:(id)arg1;
- (void)removeCameraFolderFromIndex:(id)arg1;
- (void)addCameraFolderToIndex:(id)arg1;
- (void)removeMediaFiles:(id)arg1;
- (void)removeMediaFile:(id)arg1;
- (BOOL)addMediaFiles:(id)arg1;
- (void)storageAvailable;
- (void)removeFolder:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)resetContent;
- (void)removeContent;
- (void)getContent;
- (void)requestSendPTPCommand:(id)arg1 outData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSendPTPCommand:(id)arg1 outData:(id)arg2 sendCommandDelegate:(id)arg3 didSendCommandSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)requestReadDataFromFile:(id)arg1 atOffset:(long long)arg2 length:(long long)arg3 readDelegate:(id)arg4 didReadDataSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)requestUploadFile:(id)arg1 options:(id)arg2 uploadDelegate:(id)arg3 didUploadSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)cancelDownload;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)cancelDelete;
- (void)dispatchAsyncForOperationType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)requestDeleteFiles:(id)arg1 deleteFailed:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestDeleteFiles:(id)arg1;
- (void)requestUnpairDevice;
- (void)requestPairDevice;
- (void)requestDisableTethering;
- (void)requestEnableTethering;
- (void)requestTakePicture;
- (void)requestSyncClock;
- (void)requestCloseSessionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCloseSession;
- (void)requestOpenSessionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestOpenSessionWithOptions:(id)arg1;
- (void)requestOpenSession;
- (void)updateMediaPresentationPreference:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (id)relateMedia:(id)arg1;
- (id)relateGroupedMedia:(id)arg1;
- (id)relateLegacyMedia:(id)arg1;
- (void)grindMedia:(id [10])arg1 index:(int *)arg2 file:(id)arg3;
- (void)blendMedia:(id [10])arg1 ofLength:(int)arg2 withMedia:(id [10])arg3 ofLength:(int)arg4;
- (long long)stitchMedia:(id)arg1 withMedia:(id)arg2;
- (id)ownerMedia:(id)arg1 withMedia:(id)arg2;
- (void)unregisterForImageCaptureEventNotifications:(id)arg1;
- (void)registerForImageCaptureEventNotifications:(id)arg1;
- (void)handleContent:(id)arg1;
- (void)updateMediaFilesCount:(id)arg1;
- (void)updateEnumeratingErrorStatus;
- (void)updateLockedErrorStatus;
- (BOOL)updateAppleProperties:(id)arg1;
- (BOOL)handleCommandCompletion:(id)arg1;
- (id)filesOfType:(id)arg1;
- (id)cameraFileIndexesMatchingDateCriteria:(id)arg1;
- (id)cameraFileWithUUID:(id)arg1;
- (id)cameraFileWithObjectID:(unsigned long long)arg1;
- (id)cameraFolderWithObjectID:(unsigned long long)arg1;
- (BOOL)legacyDevice;
- (void)setAppleRelatedUUIDSupport:(unsigned long long)arg1;
- (BOOL)supportsMediaFormatCatalog;
@property(readonly, nonatomic) NSArray *mediaFiles;
@property(readonly, nonatomic) NSArray *contents;
- (void)setTetheredCaptureEnabled:(BOOL)arg1;
- (void)setEstimatedCountOfMediafiles:(unsigned long long)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long long)arg1;
- (void)addCapability:(id)arg1;
- (void)setICloudPhotosEnabled:(BOOL)arg1;
@property(readonly, nonatomic) BOOL iCloudPhotosEnabled;
@property(readonly) NSArray *supportedSidecarFiles;
@property(readonly) NSString *productVersion;
@property(readonly) NSString *productType;
@property(readonly) NSNumber *devicePairedState;
@property(readonly) NSString *deviceEnclosureColor;
@property(readonly) NSString *deviceColor;
@property(readonly) NSString *deviceClass;
@property(readonly) NSString *buildVersion;
@property(readonly, nonatomic) BOOL tetheredCaptureEnabled;
@property(readonly) BOOL isEnumeratingContent;
- (void)resetAccessRestriction;
- (void)setAccessRestriction:(unsigned long long)arg1;
- (void)updateAccessRestriction;
@property(readonly) unsigned long long estimatedNumberOfDownloadableItems;
- (BOOL)automaticallyRetrieveData;
@property(readonly) unsigned long long estimatedCountOfMediafiles;
- (BOOL)hasTemporaryStore;
@property(readonly, nonatomic) unsigned long long contentCatalogPercentCompleted;
@property(nonatomic) BOOL preheatMetadata;
@property(readonly, nonatomic) NSString *mountPoint;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)updateProperties:(id)arg1;
- (void)bringupCameraProperties;
- (void)teardownCameraProperties;
- (void)setteardownPhase:(BOOL)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *mediaProcessingQueue;
- (BOOL)teardownPhase;
- (void)initializeCameraProperties:(id)arg1;
- (void)cleanupDeviceWithErrorCode:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, getter=mountPoint) NSString *mountPath;

@end

