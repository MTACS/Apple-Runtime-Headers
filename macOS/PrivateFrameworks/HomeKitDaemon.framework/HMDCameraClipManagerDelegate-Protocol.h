//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMCameraClip, HMDCameraClipManager, HMDCameraClipSignificantEventNotification;

@protocol HMDCameraClipManagerDelegate <NSObject>

@optional
- (void)clipManagerDidDisableCloudStorage:(HMDCameraClipManager *)arg1;
- (void)clipManager:(HMDCameraClipManager *)arg1 didDeleteClip:(HMCameraClip *)arg2;
- (void)clipManager:(HMDCameraClipManager *)arg1 didAddSignificantEventNotification:(HMDCameraClipSignificantEventNotification *)arg2;
- (void)clipManagerDidBecomeUnavailable:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidBecomeAvailable:(HMDCameraClipManager *)arg1;
@end

