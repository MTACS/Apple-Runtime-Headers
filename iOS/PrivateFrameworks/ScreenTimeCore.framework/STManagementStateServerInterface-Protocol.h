//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeCore/NSObject-Protocol.h>

@class NSDateInterval, NSDictionary, NSNumber, NSString, NSURL;

@protocol STManagementStateServerInterface <NSObject>
- (void)shouldAllowOneMoreMinuteForWebsiteURL:(NSURL *)arg1 replyHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)shouldAllowOneMoreMinuteForBundleIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)permitWebFilterURL:(NSURL *)arg1 pageTitle:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)performMigrationFromMCXSettings:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)contactManagementStateForDSID:(NSNumber *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)setContactManagementState:(long long)arg1 forDSID:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)communicationPoliciesForDSID:(NSNumber *)arg1 withCompletionHandler:(void (^)(long long, long long, NSError *))arg2;
- (void)communicationPoliciesWithCompletionHandler:(void (^)(long long, long long, NSError *))arg1;
- (void)deleteAllWebApplicationHistory:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteWebHistoryDuringInterval:(NSDateInterval *)arg1 webApplication:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteWebHistoryForDomain:(NSString *)arg1 webApplication:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteWebHistoryForURL:(NSURL *)arg1 webApplication:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)authenticateRestrictionsPasscode:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)clearRestrictionsPasscodeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)shouldRequestMoreTimeWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)screenTimeSyncStateWithCompletionHandler:(void (^)(long long, NSError *))arg1;
- (void)enableScreenTimeForDSID:(NSNumber *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)screenTimeStateWithCompletionHandler:(void (^)(long long, NSError *))arg1;
@end

