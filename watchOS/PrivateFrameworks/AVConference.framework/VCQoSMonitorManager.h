//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCQoSMonitorManager : VCObject
{
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableArray *_moitors;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *moitors; // @synthesize moitors=_moitors;
- (_Bool)doesQoSSourceExistForStreamToken:(id)arg1;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(int)arg2;
- (void)unregisterQoSReportingSourceForToken:(int)arg1;
- (void)registerQoSReportingSourceForToken:(int)arg1;
- (void)dealloc;
- (id)init;

@end

