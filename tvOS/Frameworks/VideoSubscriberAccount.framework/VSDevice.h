//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface VSDevice : NSObject
{
    CDUnknownFunctionPointerType _copyAnswer;
    NSOperationQueue *_privateQueue;
}

+ (unsigned long long)_deviceTypeWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (_Bool)_getMobileGestaltBoolean:(struct __CFString *)arg1 withCopyAnswer:(CDUnknownFunctionPointerType)arg2;
+ (_Bool)_runningACustomerBuildWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (_Bool)_runningAnInternalBuildWithCopyAnswer:(CDUnknownFunctionPointerType)arg1;
+ (id)currentDevice;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) CDUnknownFunctionPointerType copyAnswer; // @synthesize copyAnswer=_copyAnswer;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long deviceType;
@property(readonly, nonatomic, getter=isRunningACustomerBuild) _Bool runningACustomerBuild;
@property(readonly, nonatomic, getter=isRunningAnInternalBuild) _Bool runningAnInternalBuild;
- (void)fetchSetTopBoxProfileWithCompletion:(CDUnknownBlockType)arg1;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (id)init;

@end

