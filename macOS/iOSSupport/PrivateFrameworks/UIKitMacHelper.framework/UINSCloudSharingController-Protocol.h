//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitMacHelper/NSObject-Protocol.h>

@class CKShare;
@protocol UINSCloudSharingControllerDelegate;

@protocol UINSCloudSharingController <NSObject>
@property(nonatomic) unsigned long long availablePermissions;
@property(readonly, nonatomic) CKShare *share;
@property(nonatomic) __weak id <UINSCloudSharingControllerDelegate> delegate;
- (void)present;
@end

