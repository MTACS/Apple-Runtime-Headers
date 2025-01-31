//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMBLocalZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMBShareUserID, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, NAFuture, NSObject, NSString;
@protocol HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDDatabase, OS_dispatch_queue;

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMFLogging>
{
    _Bool _ownedTrust;
    int _configureState;
    id <HMDCloudShareTrustManagerDataSource> _dataSource;
    id <HMDCloudShareTrustManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <HMDDatabase> _database;
    HMDCloudShareMessenger *_cloudShareMessenger;
    NAFuture *_configureFuture;
    HMBCloudZone *_cloudZone;
    HMBLocalZone *_localZone;
    HMDCloudShareParticipantsManager *_cloudShareParticipantManager;
    HMBShareUserID *_ownerCloudShareID;
    CDUnknownBlockType _participantsManagerFactory;
}

+ (id)logCategory;
@property(copy) CDUnknownBlockType participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property(retain) HMBShareUserID *ownerCloudShareID; // @synthesize ownerCloudShareID=_ownerCloudShareID;
@property(retain) HMDCloudShareParticipantsManager *cloudShareParticipantManager; // @synthesize cloudShareParticipantManager=_cloudShareParticipantManager;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, getter=isOwnedTrust) _Bool ownedTrust; // @synthesize ownedTrust=_ownedTrust;
@property(readonly) NAFuture *configureFuture; // @synthesize configureFuture=_configureFuture;
@property(readonly) HMDCloudShareMessenger *cloudShareMessenger; // @synthesize cloudShareMessenger=_cloudShareMessenger;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDCloudShareTrustManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDCloudShareTrustManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
@property int configureState; // @synthesize configureState=_configureState;
- (void)updateUsersCloudShareIDs;
- (void)_finishConfigure;
- (void)_configureOwnerCloudShareIDWithCloudZone:(id)arg1;
- (void)_fetchCompletedWithFetchZoneResult:(id)arg1 error:(id)arg2;
- (void)_requestShareInvitationForSharedZone;
- (void)_configureWithSharedZone;
- (void)_configureWithOwnedZone;
- (void)_configure;
- (void)configure;
- (id)initWithDatabase:(id)arg1 isOwnedTrust:(_Bool)arg2 messageTargetUUID:(id)arg3 queue:(id)arg4 ownerCloudShareID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

