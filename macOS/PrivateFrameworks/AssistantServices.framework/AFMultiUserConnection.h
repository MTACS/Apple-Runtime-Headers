//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface AFMultiUserConnection : NSObject
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)getSharedUserProfileLimitWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_multiUserServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_clearConnection;
- (void)dealloc;
- (id)init;

@end

