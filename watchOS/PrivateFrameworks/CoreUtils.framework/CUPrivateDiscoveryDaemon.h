//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CUPrivateDiscoveryDaemon : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    struct NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    NSString *_xpcServiceName;
}

+ (id)sharedPrivateDiscoveryDaemon;
@property(copy, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
- (void).cxx_destruct;
- (void)_xpcConnectionInvalidated:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

