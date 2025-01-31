//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SFBluetoothPairingSession : NSObject
{
    char _btAddrStr[32];
    _Bool _btConfigured;
    _Bool _btConnecting;
    struct BTDeviceImpl *_btDevice;
    _Bool _btDisconnected;
    struct BTPairingAgentImpl *_btPairingAgent;
    _Bool _btPairingAgentStarted;
    struct BTSessionImpl *_btSession;
    _Bool _btSessionAddedServiceCallback;
    _Bool _btSessionAttaching;
    _Bool _btStarted;
    _Bool _invalidateCalled;
    unsigned int _retryCount;
    _Bool _retryOnDetach;
    NSObject<OS_dispatch_source> *_retryTimer;
    double _startTime;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_os_transaction> *_transaction;
    struct LogCategory *_ucat;
    _Bool _connectOnly;
    _Bool _disconnectOnly;
    _Bool _guestMode;
    _Bool _userNotInContacts;
    unsigned int _deviceVersion;
    CDUnknownBlockType _completionHandler;
    NSString *_deviceAddress;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guestAddress;
    NSData *_guestKey;
    NSString *_name;
}

@property(nonatomic) _Bool userNotInContacts; // @synthesize userNotInContacts=_userNotInContacts;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool guestMode; // @synthesize guestMode=_guestMode;
@property(copy, nonatomic) NSData *guestKey; // @synthesize guestKey=_guestKey;
@property(copy, nonatomic) NSString *guestAddress; // @synthesize guestAddress=_guestAddress;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool disconnectOnly; // @synthesize disconnectOnly=_disconnectOnly;
@property(readonly, nonatomic) unsigned int deviceVersion; // @synthesize deviceVersion=_deviceVersion;
@property(copy, nonatomic) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) _Bool connectOnly; // @synthesize connectOnly=_connectOnly;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_btDeletePairingAndRetry;
- (void)_btEnsureStopped;
- (int)_btEnsureStarted;
- (void)_completed:(int)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

