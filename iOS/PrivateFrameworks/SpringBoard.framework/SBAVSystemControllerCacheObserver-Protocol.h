//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, SBAVSystemControllerCache;

@protocol SBAVSystemControllerCacheObserver <NSObject>

@optional
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateAirplayDisplayActive:(_Bool)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateActiveAudioRoutingWithRoute:(NSString *)arg2 routeAttributes:(NSDictionary *)arg3 activeOutputDevices:(NSArray *)arg4;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateActiveOutputDevices:(NSArray *)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdatePickableRoutes:(NSArray *)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateActiveAudioRoute:(NSString *)arg2;
- (void)cache:(SBAVSystemControllerCache *)arg1 didUpdateRecordingPID:(int)arg2;
- (void)cacheDidRebuildAfterServerDeath:(SBAVSystemControllerCache *)arg1;
@end

