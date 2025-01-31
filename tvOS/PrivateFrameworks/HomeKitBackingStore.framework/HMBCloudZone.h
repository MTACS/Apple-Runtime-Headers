//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBMirrorProtocol-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class CKDatabase, CKShareParticipant, HMBCloudDatabase, HMBCloudZoneID, HMBCloudZoneShareModel, HMBLocalZone, HMBModelContainer, HMFUnfairLock, NAFuture, NSMapTable, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSUUID;
@protocol HMBCloudZoneDelegate, HMBCloudZoneRebuilder;

@interface HMBCloudZone : HMFObject <HMFLogging, HMBMirrorProtocol>
{
    _Bool _shouldRebuildOnManateeKeyLoss;
    _Bool _needsZoneCreation;
    NAFuture *_startUp;
    HMBCloudDatabase *_cloudDatabase;
    id <HMBCloudZoneDelegate> _delegate;
    HMBLocalZone *_localZone;
    CKDatabase *_database;
    HMBLocalZone *_stateZone;
    NSUUID *_stateModelID;
    HMBCloudZoneID *_zoneID;
    NSMapTable *_modelClassToRequiresPostProcessingMap;
    NSMapTable *_inflightPushOperations;
    HMFUnfairLock *_propertyLock;
    NSString *_deviceIdentifier;
    NAFuture *_shutdownFuture;
    NAFuture *_destroyFuture;
    NAFuture *_currentCloudPullFuture;
    NAFuture *_queuedCloudPullFuture;
    id <HMBCloudZoneRebuilder> _rebuilder;
    HMBCloudZoneShareModel *_shareModel;
    NSOperationQueue *_shareOperationQueue;
    NSMutableDictionary *_shareParticipantModelsByClientIdentifier;
    HMBModelContainer *_modelContainer;
}

+ (id)logCategory;
@property(retain, nonatomic) HMBModelContainer *modelContainer; // @synthesize modelContainer=_modelContainer;
@property(readonly, nonatomic) NSMutableDictionary *shareParticipantModelsByClientIdentifier; // @synthesize shareParticipantModelsByClientIdentifier=_shareParticipantModelsByClientIdentifier;
@property(readonly, nonatomic) NSOperationQueue *shareOperationQueue; // @synthesize shareOperationQueue=_shareOperationQueue;
@property(retain, nonatomic) HMBCloudZoneShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) id <HMBCloudZoneRebuilder> rebuilder; // @synthesize rebuilder=_rebuilder;
@property(retain, nonatomic) NAFuture *queuedCloudPullFuture; // @synthesize queuedCloudPullFuture=_queuedCloudPullFuture;
@property(retain, nonatomic) NAFuture *currentCloudPullFuture; // @synthesize currentCloudPullFuture=_currentCloudPullFuture;
@property(retain, nonatomic) NAFuture *destroyFuture; // @synthesize destroyFuture=_destroyFuture;
@property(retain, nonatomic) NAFuture *shutdownFuture; // @synthesize shutdownFuture=_shutdownFuture;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(retain, nonatomic) NSMapTable *inflightPushOperations; // @synthesize inflightPushOperations=_inflightPushOperations;
@property(readonly, nonatomic) NSMapTable *modelClassToRequiresPostProcessingMap; // @synthesize modelClassToRequiresPostProcessingMap=_modelClassToRequiresPostProcessingMap;
@property(retain, nonatomic) HMBCloudZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(nonatomic) _Bool needsZoneCreation; // @synthesize needsZoneCreation=_needsZoneCreation;
@property(readonly, nonatomic) NSUUID *stateModelID; // @synthesize stateModelID=_stateModelID;
@property(nonatomic) __weak HMBLocalZone *stateZone; // @synthesize stateZone=_stateZone;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, nonatomic) _Bool shouldRebuildOnManateeKeyLoss; // @synthesize shouldRebuildOnManateeKeyLoss=_shouldRebuildOnManateeKeyLoss;
@property(nonatomic) __weak id <HMBCloudZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(readonly, nonatomic) NAFuture *startUp; // @synthesize startUp=_startUp;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void)handleDeletion;
- (void)addDatabaseOperation:(id)arg1;
- (void)handleUpdatedInternalModels:(id)arg1;
- (_Bool)isInternalModel:(id)arg1;
- (id)flush;
- (_Bool)startupWithModelContainer:(id)arg1 error:(id *)arg2;
- (void)startUpWithLocalZone:(id)arg1;
- (_Bool)retryCloudKitOperationAfterError:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;
- (id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;
- (id)destroy;
- (id)shutdown;
- (void)dealloc;
- (id)initWithCloudDatabase:(id)arg1 shouldRebuildOnManateeKeyLoss:(_Bool)arg2 state:(id)arg3;
- (id)encodeCloudFrom:(id)arg1 externalData:(id)arg2 createdRecords:(id)arg3 error:(id *)arg4;
- (id)decodeModelFrom:(id)arg1 fullyPopulatedRecord:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NAFuture *waitForPendingRebuild;
@property(readonly, nonatomic) long long keyStatus;
- (void)rebuild;
- (void)handleZoneChangedNotification;
@property(readonly, nonatomic, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;
- (void)handleLostKeys;
- (id)startUpRebuilderIfNeeded;
- (id)decodeShareModelFromShare:(id)arg1;
- (id)encodeShareModel:(id)arg1;
- (id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(_Bool)arg4;
- (id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(_Bool)arg4 needsNewInvitationToken:(_Bool)arg5;
- (id)decodeManateeCloudFrom:(id)arg1 fullyPopulatedRecord:(_Bool)arg2 error:(id *)arg3;
- (id)encodeManateeCloudModel:(id)arg1 externalData:(id)arg2 createdRecords:(id)arg3 error:(id *)arg4;
- (_Bool)populateManateeCloudRecord:(id)arg1 withModel:(id)arg2 createdRecords:(id)arg3 error:(id *)arg4;
- (id)recordIDForModel:(id)arg1;
- (_Bool)resolveConflicts:(id)arg1 options:(id)arg2;
- (id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2;
- (id)performCloudPullWithOptions:(id)arg1;
- (id)unregisterSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSubscriptionForExternalRecordType:(id)arg1;
@property(readonly, copy) NSSet *subscriptions;
- (id)fetchCompleteModels:(id)arg1 force:(_Bool)arg2;
- (id)fetchCompleteModel:(id)arg1 force:(_Bool)arg2;
- (id)fetchCompleteModelsForRecordIDs:(id)arg1;
- (id)fetchCompleteModelForRecordID:(id)arg1;
- (id)fetchRecordWithRecordID:(id)arg1 canRetry:(_Bool)arg2;
- (id)fetchRecordsWithRecordIDs:(id)arg1 desiredKeys:(id)arg2;
- (id)_triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;
- (id)_pushDeletedParticipantRecordID:(id)arg1;
- (id)_pushUpdatedParticipantRecord:(id)arg1;
- (id)_pushUpdatedShare:(id)arg1;
- (id)_addShareOperationWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_handleLeaveCloudShareErrorUsingCloudZoneRecordPushResult:(id)arg1;
- (id)_leaveCloudShareRequestingNewInvitationToken:(_Bool)arg1;
- (id)leaveCloudShareRequestingNewInvitationToken:(_Bool)arg1;
- (void)_handleUpdatedShareParticipantModels:(id)arg1;
- (id)handleUpdatedShareParticipantModels:(id)arg1;
- (void)_handleUpdatedShareModel:(id)arg1;
- (id)handleUpdatedShareModel:(id)arg1;
- (id)_createShareModel;
- (id)createShareModel;
- (void)initializeShareModels;
- (_Bool)handleUpdatedShareParticipantRecord:(id)arg1 error:(id *)arg2;
- (_Bool)handleUpdatedShare:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) CKShareParticipant *currentParticipant;
@property(readonly, nonatomic) CKShareParticipant *ownerParticipant;
- (id)participantWithClientIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *participants;
- (id)_revokeShareForParticipant:(id)arg1;
- (id)revokeShareForParticipant:(id)arg1;
- (id)_setWriteAccessEnabled:(_Bool)arg1 forParticipant:(id)arg2;
- (id)setWriteAccessEnabled:(_Bool)arg1 forParticipant:(id)arg2;
- (id)_fetchInvitationWithContext:(id)arg1;
- (id)fetchInvitationWithContext:(id)arg1;
- (id)fetchCloudShareIDForShareParticipantClientIdentifier:(id)arg1;
- (id)fetchCurrentParticipantCloudShareID;
- (id)fetchOwnerParticipantCloudShareID;
- (id)currentParticipantCloudShareID;
- (id)ownerParticipantCloudShareID;
- (id)cloudFieldForEncoding:(unsigned long long)arg1;
- (id)cloudMetadataForModel:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (_Bool)populateV4CloudRecord:(id)arg1 withModel:(id)arg2 metadataFieldData:(id)arg3 startEncoding:(unsigned long long)arg4 endEncoding:(unsigned long long)arg5 error:(id *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

