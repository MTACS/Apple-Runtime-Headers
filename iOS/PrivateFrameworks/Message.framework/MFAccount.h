//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/ECAuthenticatableAccount-Protocol.h>
#import <Message/EDAccount-Protocol.h>
#import <Message/EFPubliclyDescribable-Protocol.h>

@class ACAccount, ECAccount, ECAuthenticationScheme, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MFAccount : NSObject <EDAccount, ECAuthenticatableAccount, EFPubliclyDescribable>
{
    ACAccount *_persistentAccount;
    struct os_unfair_lock_s _persistentAccountLock;
    NSMutableDictionary *_unsavedAccountProperties;
    NSArray *emailAddressStrings;
    ECAccount *_baseAccount;
    NSString *_sourceApplicationBundleIdentifier;
}

+ (id)supportedDataclasses;
+ (id)saslProfileName;
+ (_Bool)isSSLEditable;
+ (_Bool)usesSSL;
+ (_Bool)isCommonPortNumber:(unsigned int)arg1;
+ (unsigned int)defaultSecurePortNumber;
+ (unsigned int)defaultPortNumber;
+ (id)hostname;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (void *)legacyKeychainProtocol;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (id)accountTypeString;
+ (_Bool)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3;
+ (id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2;
+ (id)propertiesWhichRequireValidation;
+ (id)predefinedValueForKey:(id)arg1;
+ (_Bool)isPredefinedAccountType;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)releaseAllConnectionsScheduler;
+ (id)accountTypeIdentifier;
+ (id)_accountClass;
+ (id)_newPersistentAccount;
+ (id)accountWithPersistentAccount:(id)arg1;
+ (id)authSchemesForAccountClass;
+ (id)accountWithProperties:(id)arg1;
+ (id)excludedAccountPropertyKeys;
+ (id)newAccountWithDictionary:(id)arg1;
+ (_Bool)shouldHealAccounts;
+ (void)setShouldHealAccounts:(_Bool)arg1;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(readonly, nonatomic) ECAccount *baseAccount; // @synthesize baseAccount=_baseAccount;
@property(readonly, copy, nonatomic) NSArray *emailAddressStrings; // @synthesize emailAddressStrings;
- (void).cxx_destruct;
- (void)setMissingPasswordError;
- (id)copyDiagnosticInformation;
- (_Bool)isSyncingNotes;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (id)enabledDataclasses;
- (id)loginDisabledErrorWithTitle:(id)arg1;
- (id)inaccessiblePasswordErrorWithTitle:(id)arg1;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (_Bool)shouldDisplayHostnameInErrorMessages;
- (_Bool)enableAccount;
- (_Bool)shouldEnableAfterError:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (id)networkAccountIdentifier;
@property(readonly) NSString *syncStoreIdentifier;
@property(readonly) NSString *uniqueID;
- (_Bool)_connectAndAuthenticate:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (_Bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)secureConnectionSettings;
- (id)insecureConnectionSettings;
- (id)alternateConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)defaultConnectionSettings;
- (id)certUIService;
- (id)authenticatedConnection;
- (_Bool)requiresAuthentication;
- (Class)connectionClass;
- (id)_newConnection;
@property(retain, nonatomic) ECAuthenticationScheme *preferredAuthScheme;
- (void)accountInfoDidChange;
- (void)setClientCertificates:(id)arg1;
- (id)clientCertificates;
@property(retain, nonatomic) NSString *domain;
- (void)setTryDirectSSL:(_Bool)arg1;
- (_Bool)allowsTrustPrompt;
- (void)setUsesSSL:(_Bool)arg1;
- (_Bool)usesSSL;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (struct __CFString *)connectionServiceType;
- (id)secureServiceName;
- (id)serviceName;
- (void)setPortNumber:(unsigned int)arg1;
- (unsigned int)defaultSecurePortNumber;
- (unsigned int)defaultPortNumber;
- (unsigned int)portNumber;
- (_Bool)hasPasswordCredential;
- (_Bool)canAuthenticateWithCurrentCredentials;
@property(readonly, copy, nonatomic) ACAccount *systemAccount;
- (_Bool)fetchTokensIfNecessary:(id *)arg1;
@property(readonly) NSString *managedTag;
@property(readonly) ACAccount *accountForRenewingCredentials;
- (_Bool)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)renewCredentialsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_renewCredentialsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setOAuth2Token:(id)arg1 refreshToken:(id)arg2;
@property(readonly, retain, nonatomic) NSString *oauth2Token;
- (unsigned long long)credentialAccessibility;
@property(copy, nonatomic) NSString *password;
- (id)_passwordWithError:(id *)arg1;
- (id)_password;
- (id)_credentialCreateIfNecessary:(_Bool)arg1 error:(id *)arg2;
- (id)_credentialCreateIfNecessary:(_Bool)arg1;
- (id)_credential;
- (_Bool)supportsMailDrop;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly, nonatomic, getter=isManaged) _Bool managed;
@property(copy, nonatomic) NSString *hostname;
@property(retain) NSString *username;
@property(retain, nonatomic) NSString *displayName;
- (_Bool)canGoOffline;
- (void)setActive:(_Bool)arg1;
- (_Bool)isActive;
- (_Bool)_boolForAccountInfoKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_objectForAccountInfoKey:(id)arg1;
- (id)valueInAccountPropertiesForKey:(id)arg1;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)_setAccountProperties:(id)arg1;
- (void)_queueAccountInfoDidChange;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
@property(readonly) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
- (id)_privacySafeDescription;
- (id)accountClass;
@property(readonly) NSString *type;
@property(readonly) NSString *parentAccountIdentifier;
@property(readonly) ACAccount *parentAccount;
@property(readonly, copy) NSString *identifier;
- (void)removePersistentAccount;
- (void)savePersistentAccount;
@property(readonly) ACAccount *persistentAccount;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (void)setPersistentAccount:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPersistentAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

