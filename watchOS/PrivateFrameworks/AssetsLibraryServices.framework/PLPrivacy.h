//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLPrivacy : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _authStatusFullAccess;
    int _authStatusSaveOnly;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isPhotosTCCAccessRestricted;
- (void)photoAccessPowersActive;
- (int)photosTCCAccessStatus;
- (_Bool)isPhotosTCCAccessNotAllowed;
- (_Bool)isPhotosTCCAccessAllowed;
- (_Bool)isPhotosAccessAllowedWithScope:(int)arg1 promptIfNeededWithHandler:(CDUnknownBlockType)arg2;
- (void)isPhotosAccessAllowedWithScope:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_isPhotosAccessAllowedWithScope:(int)arg1 forceHandler:(_Bool)arg2 accessAllowedHandler:(CDUnknownBlockType)arg3;
- (int)_authStatusForScope:(int)arg1;
- (void)_setAuthStatus:(int)arg1 scope:(int)arg2;
- (void)_setPreflightStatusForScope:(int)arg1;
- (struct __CFString *)_TCCForScope:(int)arg1;
- (id)init;

@end

