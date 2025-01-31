//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RunningBoardServices/RBSLegacyAttribute.h>

@interface RBSLegacyAttribute (RBProcessState)
- (void)_mutateReasonWithContext:(id)arg1;
- (_Bool)_isLegacyReasonFinishableTask:(unsigned int)arg1;
- (unsigned int)_maxCPUUsageViolationPolicy;
- (unsigned int)_maxCPUDuration;
- (unsigned int)_maxCPUPercentage;
- (unsigned int)_endPolicy;
- (unsigned int)_startPolicy;
- (_Bool)_definesRelativeStartTime;
- (double)_invalidationDurationExpiringTaskCompletionsQuickly:(_Bool)arg1;
- (_Bool)_suspendsOnTaskSuspension;
- (unsigned char)_jetsamBand;
- (unsigned char)_terminationResistance;
- (unsigned char)_role;
- (_Bool)_gpuAllowed;
- (_Bool)_preventIdleSleep;
- (_Bool)_isValidViewServiceRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)_isApplicableToTargetIdentity:(id)arg1;
- (_Bool)_isApplicableToTargetPropertiesInContext:(id)arg1 outBundleProperty:(out id *)arg2;
- (_Bool)_isValidForOriginatorEntitlementsInContext:(id)arg1;
- (_Bool)conflictsWithAttribute:(id)arg1;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAcquisitionContext:(id)arg1;
@end

