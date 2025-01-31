//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCloudShareTrustManager, HMDHome, HMDUser, NSString;

@protocol HMDCloudShareTrustManagerDataSource <NSObject>
- (HMDHome *)homeForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (HMDUser *)ownerForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (NSString *)zoneNameForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (_Bool)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 shouldShareTrustWithUser:(HMDUser *)arg2;
@end

