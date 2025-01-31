//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HearingUtilities/HUDeviceController.h>

#import <HearingUtilities/AXHADeviceControllerProtocol-Protocol.h>
#import <HearingUtilities/CBCentralManagerDelegate-Protocol.h>

@class AXDispatchTimer, CBCentralManager, NSLock, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AXHearingAidDeviceController : HUDeviceController <CBCentralManagerDelegate, AXHADeviceControllerProtocol>
{
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    _Bool _isScanning;
    _Bool _isResetting;
    _Bool _centralIsOn;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    NSMutableArray *_availableSearchBlocks;
    NSMutableArray *_connectedSearchBlocks;
    NSMutableArray *_updateDeviceBlocks;
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXDispatchTimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    AXDispatchTimer *_availableDeviceTimer;
    _Bool _shouldActiveScan;
    NSMutableArray *_availablePeripherals;
    NSMutableArray *_loadedDevices;
    NSMutableArray *_connectedDevices;
    NSMutableArray *centralRequestBlocks;
    NSMutableArray *_persistentDevices;
}

+ (id)sharedController;
@property(nonatomic) _Bool shouldActiveScan; // @synthesize shouldActiveScan=_shouldActiveScan;
@property(retain, nonatomic) NSMutableArray *persistentDevices; // @synthesize persistentDevices=_persistentDevices;
@property(retain, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;
@property(retain, nonatomic) NSMutableArray *connectedSearchBlocks; // @synthesize connectedSearchBlocks=_connectedSearchBlocks;
@property(retain, nonatomic) NSMutableArray *availableSearchBlocks; // @synthesize availableSearchBlocks=_availableSearchBlocks;
@property(retain, nonatomic) NSMutableArray *centralRequestBlocks; // @synthesize centralRequestBlocks;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(retain) NSMutableArray *loadedDevices; // @synthesize loadedDevices=_loadedDevices;
@property(retain, nonatomic) NSMutableArray *availablePeripherals; // @synthesize availablePeripherals=_availablePeripherals;
- (void).cxx_destruct;
- (id)valueForProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)pairedHearingAidsDidChange;
- (void)persistPairedHearingAids;
- (void)unpairPeripheralWithUUID:(id)arg1;
- (void)checkPeripheralPaired:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)sendRequestToCentralManager:(CDUnknownBlockType)arg1;
- (void)forgetDevice:(id)arg1;
- (void)deviceDidFinishLoading:(id)arg1;
- (void)mergeDevice:(id)arg1 withDevice:(id)arg2;
- (void)clearConnectedDevices;
- (void)removeConnectedDevice:(id)arg1;
- (void)addConnectedDevice:(id)arg1;
- (void)clearAvailableDevices;
- (void)removeAvailableDevice:(id)arg1;
- (void)addAvailableDevice:(id)arg1;
- (void)clearLoadedDevices;
- (void)removeLoadedDevice:(id)arg1;
- (void)addLoadedDevice:(id)arg1;
- (void)loadedDevicesDidChange;
- (id)hearingAidsForPeripheral:(id)arg1;
- (id)hearingAidForDeviceID:(id)arg1;
- (id)hearingAidForPeripheral:(id)arg1;
- (id)hearingAidsForUUID:(id)arg1;
- (_Bool)isConnected;
- (_Bool)isPaired;
- (_Bool)isPartiallyConnected;
- (void)checkPartiallyPairedWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldRelinquishForPartialConnection:(CDUnknownBlockType)arg1;
- (_Bool)isScanning;
- (void)stopSearching;
- (_Bool)isBluetoothAvailable;
- (void)cancelPendingConnections;
- (void)disconnectFromHearingAidWithDeviceUUID:(id)arg1;
- (void)disconnectFromPeripheral:(id)arg1;
- (void)connectToPeripheral:(id)arg1;
- (void)resetConnectionToPeripheral:(id)arg1;
- (void)searchForConnectedDevices;
- (void)searchForAvailableDevices;
- (void)clearMissingHearingAids;
- (void)dealloc;
- (id)init;
- (void)searchForAvailableDevicesWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

