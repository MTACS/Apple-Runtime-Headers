//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HAPBTLECentralManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class CUBLEScanner, HAPBTLECentralManager, HMDAccessoryQueues, HMFTimer, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate>
{
    NSObject<OS_dispatch_queue> *workQueue;
    HMFTimer *scanTimer;
    CUBLEScanner *cubleScanner;
    HAPBTLECentralManager *centralManager;
    HMDAccessoryQueues *scanQueue;
}

+ (id)sharedScanLock;
@property(retain, nonatomic) HMDAccessoryQueues *scanQueue; // @synthesize scanQueue;
@property(retain, nonatomic) HAPBTLECentralManager *centralManager; // @synthesize centralManager;
@property(retain, nonatomic) CUBLEScanner *cubleScanner; // @synthesize cubleScanner;
@property(retain, nonatomic) HMFTimer *scanTimer; // @synthesize scanTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)_stopScan;
- (_Bool)startScan:(id)arg1 timeout:(double)arg2;
- (void)_checkCanScan;
- (void)_stopTimer;
- (void)_flushQueue;
- (id)init;
- (void)didUpdateBTLEState:(int)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

