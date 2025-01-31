//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DACardDAV/CardDAVDelegateInfoProvider-Protocol.h>

@class ACAccountStore, ACAccountType, CNPromise, NSString;

@interface CardDAViCloudDelegateInfoProvider : NSObject <CardDAVDelegateInfoProvider>
{
    ACAccountStore *_accountStore;
    ACAccountType *_accountsType;
    CNPromise *_familyCirclePromise;
}

@property(retain, nonatomic) CNPromise *familyCirclePromise; // @synthesize familyCirclePromise=_familyCirclePromise;
@property(retain, nonatomic) ACAccountType *accountsType; // @synthesize accountsType=_accountsType;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)retryFamilyCircleFetch;
- (_Bool)isGuardianAccount:(id)arg1;
- (id)nonParentsInFamily;
- (id)appleIDsOfExistingDelegates:(id)arg1;
- (id)familyMembersPromise;
- (id)cardDAVAccounts;
- (id)collectDelegatesForAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

