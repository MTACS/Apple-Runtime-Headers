//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

#import <AppleMediaServices/AMSHashable-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ACAccount (AppleMediaServices) <AMSHashable>
+ (_Bool)_isAccountFlagWritable:(id)arg1;
+ (_Bool)_isAccountFlagValue:(id)arg1 validForAccountFlag:(id)arg2;
+ (id)_getSetCookiesForResponse:(id)arg1;
+ (id)_getSetGlobalCookiesForResponse:(id)arg1;
+ (id)_defaultValueForAccountFlag:(id)arg1;
- (_Bool)ams_valueForAccountFlag:(id)arg1;
- (void)ams_setValue:(_Bool)arg1 forAccountFlag:(id)arg2;
- (void)ams_removeHomeUserIdentifier:(id)arg1;
- (_Bool)ams_postAccountFlagsWithBagContract:(id)arg1;
- (id)ams_secureToken;
- (void)ams_addHomeUserIdentifier:(id)arg1;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 dataProtectionClass:(unsigned int)arg3 expectedClass:(Class)arg4;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3;
- (_Bool)_setCookies:(id)arg1;
- (id)_hashedStorefront;
- (id)_hashedIdentifiers;
- (id)_hashedMultiUserIdentifiers;
- (id)_hashedActiveState;
- (id)_createCookieStorage;
- (id)_cookiesMatchingProperties:(id)arg1;
- (id)_accountPropertyForKey:(id)arg1 dataProtectionClass:(unsigned int)arg2 expectedClasses:(id)arg3 error:(id *)arg4;
- (id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2;
@property(readonly, nonatomic) NSString *hashedDescription;
- (void)ams_removeCookiesMatchingProperties:(id)arg1;
- (void)ams_removeCookies:(id)arg1;
- (void)ams_removeAllCookies;
- (id)ams_cookiesForURL:(id)arg1;
- (_Bool)ams_addGlobalCookiesForResult:(id)arg1;
- (_Bool)ams_addGlobalCookiesForResponse:(id)arg1;
- (_Bool)ams_addCookiesForResult:(id)arg1;
- (_Bool)ams_addCookiesForResponse:(id)arg1;
- (_Bool)ams_addCookies:(id)arg1;
- (id)ams_storefrontForMediaType:(id)arg1;
- (void)ams_setStorefront:(id)arg1 forMediaType:(id)arg2;
- (void)ams_setActive:(_Bool)arg1 forMediaType:(id)arg2;
- (void)ams_setAccountFlagValue:(id)arg1 forAccountFlag:(id)arg2;
- (int)ams_mergePrivacyAcknowledgement:(id)arg1;
- (_Bool)ams_isDuplicate:(id)arg1;
- (_Bool)ams_isActiveForMediaType:(id)arg1;
- (_Bool)ams_encryptAccountFlags;
- (id)ams_delta:(id)arg1;
- (id)ams_accountFlagValueForAccountFlag:(id)arg1;
@property(readonly, nonatomic) NSString *ams_storefront;
- (void)ams_setValidPayment:(_Bool)arg1;
- (void)ams_setStorefront:(id)arg1;
- (void)ams_setServerResponse:(id)arg1;
- (void)ams_setRawPassword:(id)arg1;
- (void)ams_setPassword:(id)arg1;
@property(nonatomic, setter=ams_setMergedPrivacyAcknowledgement:) _Bool ams_mergedPrivacyAcknowledgement;
- (void)ams_setManagedAppleID:(_Bool)arg1;
- (void)ams_setLastName:(id)arg1;
- (void)ams_setInGoodStanding:(_Bool)arg1;
- (void)ams_setiCloudFamily:(_Bool)arg1;
- (void)ams_setFirstName:(id)arg1;
- (void)ams_setDSID:(id)arg1;
- (void)ams_setCreditsString:(id)arg1;
- (void)ams_setBiometricsState:(int)arg1;
- (void)ams_setAltDSID:(id)arg1;
- (void)ams_setAgreedToTerms:(_Bool)arg1;
- (void)ams_setAccountFlags:(id)arg1;
- (id)ams_lastAuthenticationServerResponse;
@property(readonly, nonatomic) unsigned int ams_securityLevel;
- (_Bool)ams_requiresAuthKitUpdate;
- (id)ams_rawPassword;
@property(readonly, nonatomic) NSDictionary *ams_privacyAcknowledgement;
- (id)ams_password;
@property(nonatomic, setter=ams_setPaidPasswordPromptSetting:) unsigned int ams_paidPasswordPromptSetting;
@property(readonly, nonatomic) NSString *ams_lastName;
- (_Bool)ams_isValidPayment;
@property(readonly, nonatomic, getter=ams_isSandboxAccount) _Bool ams_sandboxAccount;
@property(readonly, nonatomic, getter=ams_isManagedAppleID) _Bool ams_managedAppleID;
@property(readonly, nonatomic, getter=ams_isLocalAccount) _Bool ams_localAccount;
@property(readonly, nonatomic, getter=ams_isiTunesAccount) _Bool ams_iTunesAccount;
- (_Bool)ams_isInGoodStanding;
@property(readonly, nonatomic, getter=ams_isIDMSAccount) _Bool ams_IDMSAccount;
- (_Bool)ams_isiCloudFamily;
@property(readonly, nonatomic, getter=ams_isiCloudAccount) _Bool ams_iCloudAccount;
@property(readonly, nonatomic, getter=ams_isHSA2) _Bool ams_HSA2;
@property(readonly, nonatomic, getter=ams_isDemoAccount) _Bool ams_demoAccount;
@property(readonly, nonatomic) NSString *ams_fullName;
@property(nonatomic, setter=ams_setFreePasswordPromptSetting:) unsigned int ams_freePasswordPromptSetting;
@property(readonly, nonatomic) NSString *ams_firstName;
@property(readonly, nonatomic) NSNumber *ams_DSID;
- (_Bool)ams_didAgreeToTerms;
@property(readonly, nonatomic) NSString *ams_creditsString;
@property(readonly, nonatomic) NSArray *ams_cookies;
- (int)ams_biometricsState;
@property(readonly, nonatomic) NSString *ams_altDSID;
- (id)ams_accountFlags;

// Remaining properties
@property(readonly, nonatomic, getter=ams_isPrivateListeningEnabled) _Bool ams_privateListeningEnabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

