//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class HMAccessoryNetworkAccessViolation, NSArray;
@protocol _HMNetworkConfigurationProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile
{
    _Bool _supportsWiFiReconfiguration;
    long long _targetProtectionMode;
    long long _currentProtectionMode;
    NSArray *_allowedHosts;
    HMAccessoryNetworkAccessViolation *_accessViolation;
    long long _credentialType;
    id <_HMNetworkConfigurationProfileDelegate> _delegate;
}

@property(nonatomic) __weak id <_HMNetworkConfigurationProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleWiFiReconfigurationUpdated:(id)arg1;
- (void)_handleAccessViolationUpdated:(id)arg1;
- (void)_handleHostsUpdated:(id)arg1;
- (void)_handleProtectionModeUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
- (void)_notifyDelegateOfUpdatedAccessViolation;
- (void)_notifyDelegateOfUpdatedAllowedHosts;
- (void)_notifyDelegateOfUpdatedProtectionModeWithAccessModeChanged:(_Bool)arg1;
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateProtectionMode:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)__checkContextAndCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageDestination;
- (id)messageTargetUUID;
- (void)setCredentialType:(long long)arg1;
@property(readonly) long long credentialType; // @synthesize credentialType=_credentialType;
- (void)setSupportsWiFiReconfiguration:(_Bool)arg1;
@property(readonly) _Bool supportsWiFiReconfiguration; // @synthesize supportsWiFiReconfiguration=_supportsWiFiReconfiguration;
- (void)setTargetProtectionMode:(long long)arg1;
@property(readonly) long long targetProtectionMode; // @synthesize targetProtectionMode=_targetProtectionMode;
- (void)setCurrentProtectionMode:(long long)arg1;
@property(readonly) long long currentProtectionMode; // @synthesize currentProtectionMode=_currentProtectionMode;
- (void)setAccessViolation:(id)arg1;
@property(readonly) HMAccessoryNetworkAccessViolation *accessViolation; // @synthesize accessViolation=_accessViolation;
- (void)setAllowedHosts:(id)arg1;
@property(readonly) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
- (void)_registerNotificationHandlers;
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 allowedHosts:(id)arg4 accessViolation:(id)arg5 supportsWiFiReconfiguration:(_Bool)arg6 credentialType:(long long)arg7;

@end

