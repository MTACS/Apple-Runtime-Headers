//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CBPairingAgentParentDelegate-Protocol.h>
#import <CoreBluetooth/CBXpcConnectionDelegate-Protocol.h>

@class CBPairingAgent, CBXpcConnection, NSData, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate>
{
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    _Bool _tccComplete;
    int _state;
    int _authorization;
    NSData *_advertisingAddress;
    NSString *_localAddressString;
    NSString *_localName;
}

@property(readonly) NSString *localName; // @synthesize localName=_localName;
@property(readonly) NSString *localAddressString; // @synthesize localAddressString=_localAddressString;
@property(copy, nonatomic) NSData *advertisingAddress; // @synthesize advertisingAddress=_advertisingAddress;
@property(nonatomic) _Bool tccComplete; // @synthesize tccComplete=_tccComplete;
@property(nonatomic) int authorization; // @synthesize authorization=_authorization;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)performTCCCheck:(id)arg1;
- (void)doneWithTCC;
- (id)peerWithInfo:(id)arg1;
- (void)triggerBTErrorReport:(int)arg1;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
- (void)xpcConnectionIsInvalid;
- (void)xpcConnectionDidReset;
- (void)handleLocalDeviceStateUpdatedMsg:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)isMsgAllowedAlways:(unsigned short)arg1;
- (_Bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleStateUpdatedMsg:(id)arg1;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)_handleAdvertisingAddressChanged:(id)arg1;
- (void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2;
- (_Bool)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)sendDebugMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3;
- (void)extractLocalDeviceStatesDictionary:(id)arg1;
- (void)setConnectionTargetQueue:(id)arg1;
@property(readonly, retain, nonatomic) CBPairingAgent *sharedPairingAgent; // @dynamic sharedPairingAgent;
- (void)dealloc;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

