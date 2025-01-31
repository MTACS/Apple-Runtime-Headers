//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSUUID, REMObjectID, REMStoreContainerToken;

@protocol REMXPCDebugPerformer
- (void)resetBabysitterWithRestrictedAccountID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)dataAccessStatusReports:(void (^)(NSArray *, NSError *))arg1;
- (void)logStoresDirectoryContents;
- (void)destroyIsolatedStoreContainerWithToken:(REMStoreContainerToken *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createIsolatedStoreContainerWithCompletion:(void (^)(REMStoreContainerToken *, NSError *))arg1;
- (void)fetchContactsMatching:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)crashDaemonWithMessage:(NSString *)arg1;
- (void)simulateCoreLocationExitRegionWithIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)simulateCoreLocationEnterRegionWithIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)removeGeofenceWithUUID:(NSUUID *)arg1 completion:(void (^)(void))arg2;
- (void)addGeofenceWithLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 uuid:(NSUUID *)arg4 completion:(void (^)(void))arg5;
- (void)fetchGeofencesWithCompletion:(void (^)(NSArray *))arg1;
- (void)purgeDeletedObjectsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)persistenceStoreIDForAccountID:(REMObjectID *)arg1 completion:(void (^)(NSString *))arg2;
- (void)fireDebugNotificationWithText:(NSString *)arg1 identifier:(NSString *)arg2 categoryIdentifier:(NSString *)arg3 reference:(NSString *)arg4 isRemove:(_Bool)arg5 completion:(void (^)(NSError *))arg6;
- (void)nukeDatabase:(void (^)(NSError *))arg1;
- (void)daemonVersion:(void (^)(NSString *))arg1;
@end

