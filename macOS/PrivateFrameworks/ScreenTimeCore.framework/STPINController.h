//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, STCoreUser;
@protocol OS_dispatch_source;

@interface STPINController : NSObject
{
    NSDate *_timeoutEndDate;
    STCoreUser *_user;
    NSObject<OS_dispatch_source> *_backoffTimer;
}

+ (unsigned long long)pinLength;
@property(retain) NSObject<OS_dispatch_source> *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) STCoreUser *user; // @synthesize user=_user;
@property(copy) NSDate *timeoutEndDate; // @synthesize timeoutEndDate=_timeoutEndDate;
- (void).cxx_destruct;
- (void)_beginTimeoutUntilDate:(id)arg1;
- (id)_timeoutEndDateForAttemptNumber:(long long)arg1;
- (BOOL)_authenticateWithPIN:(id)arg1 forUser:(id)arg2 error:(id *)arg3;
- (void)authenticateWithPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)authenticateWithPIN:(id)arg1 error:(id *)arg2;
- (void)_setNewPIN:(id)arg1 currentPIN:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_isPINValid:(id)arg1;
- (void)removePIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePIN:(id)arg1 toPIN:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUser:(id)arg1;

@end

