//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/TKTokenBaseContext.h>

#import <CryptoTokenKit/TKTokenDriverProtocol-Protocol.h>

@class NSString, NSXPCConnection, TKTokenDriver;

__attribute__((visibility("hidden")))
@interface TKTokenDriverContext : TKTokenBaseContext <TKTokenDriverProtocol>
{
    NSXPCConnection *_configurationConnection;
    id _initialKeepAlive;
    TKTokenDriver *_driver;
}

@property(readonly, nonatomic) TKTokenDriver *driver; // @synthesize driver=_driver;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)configureWithReply:(CDUnknownBlockType)arg1;
- (void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)acquireTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)startRequestWithError:(id *)arg1;
- (void)setup;
@property(readonly, nonatomic) double idleTimeout;
- (id)configurationForTokenID:(id)arg1;
- (id)configurationProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

