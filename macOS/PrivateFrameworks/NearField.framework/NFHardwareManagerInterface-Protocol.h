//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NearField/NSObject-Protocol.h>

@class NSData, NSObject, NSUUID;
@protocol NFContactlessPaymentSessionCallbacks, NFContactlessSessionCallbacks, NFECommercePaymentSessionCallbacks, NFFieldDetectSessionCallbacks, NFHardwareManagerCallbacks, NFNdefTagSessionCallbacks, NFPeerPaymentSessionCallbacks, NFReaderSessionCallbacks, NFSecureElementManagerSessionCallbacks, NFSessionInterface, NFTrustSessionCallbacks;

@protocol NFHardwareManagerInterface <NSObject>
- (oneway void)setChipscope:(BOOL)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)updateBackgroundTagReading:(unsigned int)arg1 callback:(void (^)(NSError *, unsigned int))arg2;
- (oneway void)dumpLPMDebugLog:(void (^)(NSError *))arg1;
- (oneway void)disableHeadlessMiniNV:(void (^)(NSError *))arg1;
- (oneway void)headlessFactoryMode:(void (^)(NSError *, unsigned int))arg1;
- (oneway void)enableHeadlessTestMode:(unsigned short)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)configureHeadlessFactoryMode:(BOOL)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)pushSignedRF:(NSData *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)areSessionsAllowed:(void (^)(BOOL, NSError *))arg1;
- (oneway void)getHostCardEmulationLog:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)toggleGPIO:(unsigned short)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)triggerDelayedWake:(unsigned char)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)getPowerCounters:(void (^)(NSError *, NSDictionary *))arg1;
- (oneway void)getUniqueFDRKeyXPC:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getDieID:(void (^)(NSData *, NSError *))arg1;
- (oneway void)actOnUserInitiatedSystemShutDown:(unsigned int)arg1 callback:(void (^)(void))arg2;
- (oneway void)hasCard:(void (^)(BOOL, NSError *))arg1;
- (oneway void)setAuthorization:(NSData *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)blessedUser:(void (^)(NSUUID *))arg1;
- (oneway void)setBlessedUser:(NSUUID *)arg1 keybagUUID:(NSUUID *)arg2 withAuthorization:(NSData *)arg3 callback:(void (^)(unsigned int))arg4;
- (oneway void)checkUserBlessing:(NSUUID *)arg1 callback:(void (^)(unsigned int, BOOL))arg2;
- (oneway void)queueNdefTagSession:(NSObject<NFNdefTagSessionCallbacks> *)arg1 data:(NSData *)arg2 callback:(void (^)(NSObject<NFNdefTagSessionInterface> *, BOOL, NSError *))arg3;
- (oneway void)queuePeerPaymentSession:(NSObject<NFPeerPaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFPeerPaymentSessionInterface> *, BOOL, NSError *))arg2;
- (oneway void)configureRFConfigForCathay:(BOOL)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)queueReaderSessionInternal:(NSObject<NFReaderSessionCallbacks> *)arg1 showUI:(BOOL)arg2 callback:(void (^)(NSObject<NFReaderSessionInternalInterface> *, BOOL, NSError *))arg3;
- (oneway void)queueTrustSession:(NSObject<NFTrustSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFTrustSessionInterface> *, BOOL, NSError *))arg2;
- (oneway void)queueLoyaltyAndPaymentSession:(NSObject<NFContactlessPaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFContactlessPaymentSessionInterface> *, BOOL, NSError *))arg2;
- (oneway void)queueSecureElementManagerSession:(NSObject<NFSecureElementManagerSessionCallbacks> *)arg1 priority:(BOOL)arg2 callback:(void (^)(NSObject<NFSecureElementManagerSessionInterface> *, BOOL, NSError *))arg3;
- (oneway void)queueContactlessUICCSession:(NSObject<NFSessionInterface> *)arg1 callback:(void (^)(NSObject<NFContactlessUICCSessionInterface> *, BOOL, NSError *))arg2;
- (oneway void)queueContactlessSession:(NSObject<NFContactlessSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFContactlessSessionInterface> *, BOOL, NSError *))arg2;
- (oneway void)queueContactlessPaymentSession:(NSObject<NFContactlessPaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFContactlessPaymentSessionInterface> *, BOOL, NSError *))arg2;
- (oneway void)queueECommercePaymentSession:(NSObject<NFECommercePaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFECommercePaymentSessionInterface> *, BOOL, NSError *))arg2;
- (oneway void)queueFieldDetectSession:(NSObject<NFFieldDetectSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFFieldDetectSessionInterface> *, NSError *))arg2;
- (oneway void)setFieldDetectEnabled:(BOOL)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)preWarm:(void (^)(NSError *))arg1;
- (oneway void)unregisterForCallbacks:(NSObject<NFHardwareManagerCallbacks> *)arg1;
- (oneway void)registerForCallbacks:(NSObject<NFHardwareManagerCallbacks> *)arg1;
- (oneway void)rfSettings:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)expressModesInfo:(void (^)(BOOL, NSDictionary *))arg1;
- (oneway void)secureElements:(void (^)(NSArray *))arg1;
- (oneway void)controllerInfo:(void (^)(NFHardwareControllerInfo *, NSError *))arg1;
- (oneway void)areNFFeaturesSupported:(unsigned long long)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)isHWSupported:(void (^)(unsigned int))arg1;
@end

