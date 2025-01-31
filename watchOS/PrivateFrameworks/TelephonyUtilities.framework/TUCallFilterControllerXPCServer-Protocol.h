//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSSet, NSString, TUHandle;

@protocol TUCallFilterControllerXPCServer <NSObject>
- (oneway void)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3 reply:(void (^)(_Bool))arg4;
- (oneway void)policyForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (oneway void)shouldRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(_Bool))arg3;
- (oneway void)containsRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(_Bool))arg3;
- (oneway void)willRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(_Bool))arg3;
@end

