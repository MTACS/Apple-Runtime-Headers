//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNFAuditToken, NSNumber;
@protocol CNTCC;

@interface CNFAccessAuthorization : NSObject
{
    id <CNTCC> _tcc;
    CNFAuditToken *_auditToken;
    int _addressBookPreflightStatus;
    int _contactsFullPreflightStatus;
    int _contactsLimitedPreflightStatus;
    struct NSNumber *_isClientLegacyImpl;
}

+ (id)sharedInstance;
+ (id)os_log;
@property(retain, nonatomic) NSNumber *isClientLegacyImpl; // @synthesize isClientLegacyImpl=_isClientLegacyImpl;
@property(nonatomic) int contactsLimitedPreflightStatus; // @synthesize contactsLimitedPreflightStatus=_contactsLimitedPreflightStatus;
@property(nonatomic) int contactsFullPreflightStatus; // @synthesize contactsFullPreflightStatus=_contactsFullPreflightStatus;
@property(nonatomic) int addressBookPreflightStatus; // @synthesize addressBookPreflightStatus=_addressBookPreflightStatus;
@property(retain, nonatomic) CNFAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) id <CNTCC> tcc; // @synthesize tcc=_tcc;
- (void).cxx_destruct;
- (id)_readFileData:(int)arg1 offset:(int)arg2 size:(unsigned int)arg3;
- (_Bool)_isPid:(int)arg1 linkedOnOrAfter:(CDStruct_c0454aff)arg2;
@property(readonly, nonatomic) _Bool isClientLegacy;
@property(readonly, nonatomic) _Bool isClientWhitelisted;
- (_Bool)doesClientHaveNotesEntitlement;
- (struct NSNumber *)resolveFuture:(id)arg1;
- (_Bool)isAccessGrantedRequestingAccessIfNeeded;
- (void)updatePreflightStatus:(int)arg1 forService:(int)arg2;
- (id)accessGrantedFutureForService:(int)arg1;
- (id)sharedAccessGrantedFutureForRequest:(int)arg1;
- (_Bool)isAccessGrantedWithError:(id *)arg1;
- (void)requestAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isNotesAccessGranted;
- (_Bool)isAddressBookAccessGranted;
@property(readonly, nonatomic) _Bool isFullAccessGranted;
@property(readonly, nonatomic) _Bool isLimitedAccessGranted;
@property(readonly, nonatomic) _Bool isAccessGranted;
- (void)requestAuthorization:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isAccessRestricted;
@property(readonly, nonatomic) int authorizationStatus;
- (id)initWithAuditToken:(id)arg1 tcc:(id)arg2;
- (id)initWithAuditToken:(id)arg1;
- (id)init;

@end

