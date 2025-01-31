//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppleAccount-Protocol.h>

@class ACAccount, ACAccountStore, NSArray, NSString;

@interface FCAppleAccount : NSObject <FCAppleAccount>
{
    _Bool _runningPPT;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    ACAccount *_iTunesAccount;
    NSString *_DSID;
    NSString *_userStoreFrontID;
    NSString *_contentStoreFrontID;
    NSString *_overrideContentStoreFrontID;
}

+ (id)sharedAccount;
+ (void)enableStoreFrontLocking;
@property(copy, nonatomic) NSString *overrideContentStoreFrontID; // @synthesize overrideContentStoreFrontID=_overrideContentStoreFrontID;
@property(copy, nonatomic) NSString *contentStoreFrontID; // @synthesize contentStoreFrontID=_contentStoreFrontID;
@property(copy, nonatomic) NSString *userStoreFrontID; // @synthesize userStoreFrontID=_userStoreFrontID;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(retain) ACAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(retain) ACAccount *primaryAccount; // @synthesize primaryAccount=_primaryAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(getter=isRunningPPT) _Bool runningPPT; // @synthesize runningPPT=_runningPPT;
- (void).cxx_destruct;
- (void)t_stopOverridingContentStoreFrontID;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)_reloadAccountsFromAccountStore;
- (void)_accountStoreDidChange;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(_Bool)arg1;
- (id)activeiTunesAccount;
- (void)checkAllDevicesRunningMinimumiOSVersion:(CDStruct_912cb5d2)arg1 macOSVersion:(CDStruct_912cb5d2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadStoreFrontWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)currentStoreFrontID;
@property(readonly, nonatomic) NSString *primaryLanguageCode;
@property(readonly, nonatomic) NSArray *supportedLanguageCodes;
@property(readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, nonatomic) _Bool isContentStoreFrontSupported;
- (void)reloadiTunesAccount;
- (_Bool)isUserSignedIntoiTunes;
- (id)iCloudAccountDSID;
- (id)iTunesAccountDSID;
- (id)iTunesAccountName;
@property(readonly, nonatomic) NSString *endpointConnectionClientID;
- (_Bool)isPrimaryAccountEmailAddress;
@property(readonly, nonatomic, getter=isUserSignedInToiCloud) _Bool userSignedInToiCloud;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

