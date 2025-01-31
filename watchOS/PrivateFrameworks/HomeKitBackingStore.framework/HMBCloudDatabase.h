//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/APSConnectionDelegate-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class APSConnection, CKContainer, CKContainerID, CKDatabase, HMBCloudDatabaseConfiguration, HMBCloudDatabaseStateModel, HMBLocalDatabase, HMBLocalZone, HMFUnfairLock, NAFuture, NSMutableDictionary, NSSet, NSString;
@protocol HMBCloudDatabaseDelegate;

@interface HMBCloudDatabase : HMFObject <APSConnectionDelegate, HMFLogging>
{
    id <HMBCloudDatabaseDelegate> _delegate;
    HMBCloudDatabaseConfiguration *_configuration;
    NAFuture *_initialCloudSyncFuture;
    HMBLocalDatabase *_localDatabase;
    HMBLocalZone *_stateZone;
    HMFUnfairLock *_propertyLock;
    HMBCloudDatabaseStateModel *_privateDatabaseState;
    HMBCloudDatabaseStateModel *_sharedDatabaseState;
    HMBCloudDatabaseStateModel *_publicDatabaseState;
    NSMutableDictionary *_zoneStateByZoneID;
    CKContainer *_container;
    CKDatabase *_sharedDatabase;
    CKDatabase *_privateDatabase;
    CKDatabase *_publicDatabase;
    APSConnection *_apsConnection;
    NAFuture *_manateeAvailabilityFuture;
}

+ (id)logCategory;
+ (_Bool)retryCloudKitOperationAfterError:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;
+ (id)extantDatabasesLock;
+ (id)extantDatabases;
@property(retain, nonatomic) NAFuture *manateeAvailabilityFuture; // @synthesize manateeAvailabilityFuture=_manateeAvailabilityFuture;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(readonly, nonatomic) CKDatabase *publicDatabase; // @synthesize publicDatabase=_publicDatabase;
@property(readonly, nonatomic) CKDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
@property(readonly, nonatomic) CKDatabase *sharedDatabase; // @synthesize sharedDatabase=_sharedDatabase;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSMutableDictionary *zoneStateByZoneID; // @synthesize zoneStateByZoneID=_zoneStateByZoneID;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *publicDatabaseState; // @synthesize publicDatabaseState=_publicDatabaseState;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *sharedDatabaseState; // @synthesize sharedDatabaseState=_sharedDatabaseState;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *privateDatabaseState; // @synthesize privateDatabaseState=_privateDatabaseState;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) HMBLocalZone *stateZone; // @synthesize stateZone=_stateZone;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(retain, nonatomic) NAFuture *initialCloudSyncFuture; // @synthesize initialCloudSyncFuture=_initialCloudSyncFuture;
@property(readonly, copy, nonatomic) HMBCloudDatabaseConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <HMBCloudDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)operationConfigurationWithProcessingOptions:(id)arg1;
- (void)removeStateForZoneID:(id)arg1;
- (id)openExistingSharedZoneWithID:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)openExistingPrivateZoneWithID:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)openOrCreatePrivateZoneWithID:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (void)handleRemovedZoneIDs:(id)arg1;
- (void)handleUpdatedZonesIDs:(id)arg1;
- (void)handleCreatedZoneIDs:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)shutdown;
- (id)performAdministrativeFetchForDatabaseScope:(int)arg1 withForce:(_Bool)arg2;
- (id)performAdministrativeFetchForAllDatabases:(_Bool)arg1;
- (void)addDatabaseOperation:(id)arg1 forScope:(int)arg2;
- (void)addContainerOperation:(id)arg1;
- (_Bool)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2 error:(id *)arg3;
- (_Bool)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(int)arg2 error:(id *)arg3;
- (id)performInitialCloudSync;
@property(readonly, nonatomic) CKContainerID *containerID;
- (id)initWithLocalDatabase:(id)arg1 configuration:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 stateZone:(id)arg2 container:(id)arg3 configuration:(id)arg4 databaseStateModelsByScope:(id)arg5 zoneStateModels:(id)arg6;
- (id)declineInvitation:(id)arg1;
- (id)acceptInvitation:(id)arg1;
- (id)removeZoneWithID:(id)arg1;
- (id)createPrivateZoneWithID:(id)arg1;
- (id)fetchZonesOn:(id)arg1;
- (void)handleAccountChangedNotification:(id)arg1;
- (id)waitForManateeAvailability;
- (id)subscriptionIDForZoneID:(id)arg1;
- (id)subscriptionIDForCloudID:(id)arg1;
- (id)modifySubscriptionsUpdate:(id)arg1 remove:(id)arg2 on:(id)arg3;
- (id)fetchSubscriptionsOn:(id)arg1;
- (id)fetchUserRecordOn:(id)arg1;
- (id)acceptInvitations:(id)arg1;
- (id)fetchShareMetadataForInvitations:(id)arg1;
- (id)fetchParticipants:(id)arg1;
- (id)performCloudPullForScope:(int)arg1;
- (id)databaseStateForDatabaseScope:(int)arg1;
- (id)fetchZones:(_Bool)arg1;
@property(readonly, nonatomic) NSSet *publicZoneIDs;
@property(readonly, nonatomic) NSSet *sharedZoneIDs;
@property(readonly, nonatomic) NSSet *privateZoneIDs;
- (id)_zonesWithScope:(int)arg1;
- (id)setSubscription:(_Bool)arg1 forZoneWithID:(id)arg2 force:(_Bool)arg3;
- (id)updateSubscriptions:(_Bool)arg1;
- (id)unregisterSharedSubscription:(_Bool)arg1;
- (id)unregisterPrivateSubscription:(_Bool)arg1;
- (id)registerSharedSubscription:(_Bool)arg1;
- (id)registerPrivateSubscription:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

