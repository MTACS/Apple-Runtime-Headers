//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError, NSString, NSUUID, SidecarDevice;

@protocol SidecarCore_Interface
- (void)relayTerminateService;
- (void)relayPresenterServiceExtensionReady:(NSUUID *)arg1;
- (void)relayPresenterStartServiceExtension:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)relaySession:(long long)arg1 closedWithError:(NSError *)arg2;
- (void)relaySession:(long long)arg1 receivedOPACKData:(NSData *)arg2 dataLink:(long long)arg3;
- (void)relaySession:(NSUUID *)arg1 openedByDevice:(SidecarDevice *)arg2 dataLink:(long long)arg3 service:(NSString *)arg4;
@end

