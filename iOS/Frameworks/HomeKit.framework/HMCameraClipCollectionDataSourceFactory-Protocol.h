//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMCameraProfile, NSUUID, _HMCameraClipCollectionDataSource, _HMCameraClipCollectionDataSourceForNotification, _HMContext;

@protocol HMCameraClipCollectionDataSourceFactory <NSObject>
- (_HMCameraClipCollectionDataSourceForNotification *)dataSourceForProfile:(HMCameraProfile *)arg1 notification:(NSUUID *)arg2 context:(_HMContext *)arg3;
- (_HMCameraClipCollectionDataSource *)dataSourceForProfile:(HMCameraProfile *)arg1 context:(_HMContext *)arg2;
@end

