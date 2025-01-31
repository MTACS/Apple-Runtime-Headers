//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASAuthorizationProviderExtensionAuthorizationRequest, NSData, NSDate, NSString, NSUUID, SOKerberosExtensionData, SOKerberosRealmSettings, SONetworkIdentity, SORealmSettingManager, SOSiteCode;
@protocol OS_dispatch_group;

@interface SOKerberosContext : NSObject
{
    _Bool _userNameIsReadOnly;
    _Bool _returnCredentialOnly;
    _Bool _credsCameFromKeychain;
    _Bool _requestCancelled;
    _Bool _attemptedToGetCredsFromKeychain;
    _Bool _forceLoginViewController;
    _Bool _requestStarted;
    NSString *_userPrincipalName;
    NSString *_userName;
    NSString *_realm;
    SOKerberosExtensionData *_extensionData;
    NSString *_hostName;
    NSString *_servicePrincipalName;
    NSString *_password;
    NSString *_changedPassword;
    NSUUID *_credentialUUID;
    NSData *_certificateSerialNumber;
    NSData *_certificateIssuer;
    NSString *_certificateTokenID;
    SOSiteCode *_siteCode;
    NSString *_cacheName;
    NSString *_callerBundleIdentifier;
    NSDate *_loginTimeStamp;
    NSObject<OS_dispatch_group> *_siteCodeGroup;
    SONetworkIdentity *_networkIdentity;
    ASAuthorizationProviderExtensionAuthorizationRequest *_authorizationRequest;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    SORealmSettingManager *_settingsManager;
}

@property(nonatomic) _Bool requestStarted; // @synthesize requestStarted=_requestStarted;
@property(retain, nonatomic) SORealmSettingManager *settingsManager; // @synthesize settingsManager=_settingsManager;
@property(retain) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(retain, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property(retain, nonatomic) SONetworkIdentity *networkIdentity; // @synthesize networkIdentity=_networkIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *siteCodeGroup; // @synthesize siteCodeGroup=_siteCodeGroup;
@property(retain, nonatomic) NSDate *loginTimeStamp; // @synthesize loginTimeStamp=_loginTimeStamp;
@property(nonatomic) _Bool forceLoginViewController; // @synthesize forceLoginViewController=_forceLoginViewController;
@property(nonatomic) _Bool attemptedToGetCredsFromKeychain; // @synthesize attemptedToGetCredsFromKeychain=_attemptedToGetCredsFromKeychain;
@property(nonatomic) _Bool requestCancelled; // @synthesize requestCancelled=_requestCancelled;
@property(nonatomic) _Bool credsCameFromKeychain; // @synthesize credsCameFromKeychain=_credsCameFromKeychain;
@property(retain, nonatomic) NSString *callerBundleIdentifier; // @synthesize callerBundleIdentifier=_callerBundleIdentifier;
@property(nonatomic) _Bool returnCredentialOnly; // @synthesize returnCredentialOnly=_returnCredentialOnly;
@property(retain, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(retain, nonatomic) SOSiteCode *siteCode; // @synthesize siteCode=_siteCode;
@property(retain, nonatomic) NSString *certificateTokenID; // @synthesize certificateTokenID=_certificateTokenID;
@property(retain, nonatomic) NSData *certificateIssuer; // @synthesize certificateIssuer=_certificateIssuer;
@property(retain, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property(retain, nonatomic) NSUUID *credentialUUID; // @synthesize credentialUUID=_credentialUUID;
@property(nonatomic) _Bool userNameIsReadOnly; // @synthesize userNameIsReadOnly=_userNameIsReadOnly;
@property(retain, nonatomic) NSString *changedPassword; // @synthesize changedPassword=_changedPassword;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *servicePrincipalName; // @synthesize servicePrincipalName=_servicePrincipalName;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) SOKerberosExtensionData *extensionData; // @synthesize extensionData=_extensionData;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userPrincipalName; // @synthesize userPrincipalName=_userPrincipalName;
- (void).cxx_destruct;
@property(readonly, nonatomic) SOKerberosRealmSettings *currentSettings;
- (void)presentAuthorizationViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)completeRequestWithError:(id)arg1;
- (void)completeRequestWithHTTPResponse:(id)arg1 httpBody:(id)arg2;
- (void)completeRequestWithHTTPResponseHeaders:(id)arg1;
- (void)completeRequestWithHeaders:(id)arg1;
- (void)completeRequest;
- (void)cancelRequest:(_Bool)arg1;
- (void)cancelRequest;
- (void)waitForCompletion;
- (void)startRequest;
- (void)setUserPrincipalNameAfterAuth:(id)arg1;
- (id)initWithRequest:(id)arg1 extensionData:(id)arg2 settingsManager:(id)arg3;

@end

