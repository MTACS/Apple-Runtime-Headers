//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString;
@protocol BSInvalidatable, SBUIBiometricResourceObserver;

@protocol SBUIBiometricResource <NSObject>
@property(readonly, nonatomic) unsigned long long biometricLockoutState;
@property(readonly, nonatomic, getter=isMatchingAllowed) _Bool matchingAllowed;
@property(readonly, nonatomic, getter=isMatchingEnabled) _Bool matchingEnabled;
@property(readonly, nonatomic, getter=isPearlDetectEnabled) _Bool pearlDetectEnabled;
@property(readonly, nonatomic) _Bool hasPearlSupport;
@property(readonly, nonatomic, getter=isFingerDetectEnabled) _Bool fingerDetectEnabled;
@property(readonly, nonatomic, getter=isFingerOn) _Bool fingerOn;
@property(readonly, nonatomic) _Bool hasBiometricAuthenticationCapabilityEnabled;
@property(readonly, nonatomic) _Bool hasEnrolledIdentities;
- (void)resumeMatchingAdvisory:(_Bool)arg1;
- (void)resumeMatchingForAssertion:(id <BSInvalidatable>)arg1 advisory:(_Bool)arg2;
- (void)refreshMatchMode;
- (id <BSInvalidatable>)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(NSString *)arg2;
- (id <BSInvalidatable>)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(NSString *)arg2;
- (id <BSInvalidatable>)acquireFaceDetectionWantedAssertionForReason:(NSString *)arg1;
- (id <BSInvalidatable>)acquireFingerDetectionWantedAssertionForReason:(NSString *)arg1;
- (id <BSInvalidatable>)acquireFingerDetectionWantedAssertionForReason:(NSString *)arg1 HIDEventsOnly:(_Bool)arg2;
- (void)removeObserver:(id <SBUIBiometricResourceObserver>)arg1;
- (void)addObserver:(id <SBUIBiometricResourceObserver>)arg1;
@end

