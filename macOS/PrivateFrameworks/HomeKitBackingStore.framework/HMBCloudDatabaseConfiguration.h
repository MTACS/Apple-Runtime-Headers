//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@class CKContainerID, CKOperationConfiguration, NSString;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>
{
    BOOL _manateeContainer;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKOperationConfiguration *_defaultOperationConfiguration;
}

@property(copy) CKOperationConfiguration *defaultOperationConfiguration; // @synthesize defaultOperationConfiguration=_defaultOperationConfiguration;
@property(getter=isManateeContainer) BOOL manateeContainer; // @synthesize manateeContainer=_manateeContainer;
@property(copy) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(readonly, copy) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (id)initWithContainerID:(id)arg1;

@end

