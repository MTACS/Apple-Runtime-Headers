//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYDeviceToDeviceAnalyticsHelper : NSObject
{
}

- (void)postFailureError:(id)arg1 connectionType:(unsigned long long)arg2 sourceDeviceModel:(id)arg3 sourceDeviceProductVersion:(id)arg4 targetDeviceModel:(id)arg5 targetDeviceProductVersion:(id)arg6;
- (void)postSuccessInfo:(id)arg1;
- (id)successInfoWithTransferSize:(unsigned long long)arg1 transferDuration:(double)arg2 restoreDuration:(double)arg3 connectionType:(unsigned long long)arg4 sourceDeviceModel:(id)arg5 sourceDeviceProductVersion:(id)arg6 targetDeviceModel:(id)arg7 targetDeviceProductVersion:(id)arg8;

@end

