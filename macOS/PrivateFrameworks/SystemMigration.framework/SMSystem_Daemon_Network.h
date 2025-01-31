//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemMigration/SMSystem_Daemon.h>

#import <SystemMigration/SMNNetworkSessionDelegateProtocol-Protocol.h>

@class NSDictionary, NSImage, NSNumber, NSObject, NSOrderedSet, NSString, NSURL, SMNNetworkSession, SMNetworkSourceProxy;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SMSystem_Daemon_Network : SMSystem_Daemon <SMNNetworkSessionDelegateProtocol>
{
    BOOL connected;
    BOOL _connectOK;
    BOOL _connecting;
    BOOL _determiningFastestConnection;
    BOOL _sourceKnowsPasscode;
    BOOL _connectionMethodHasChanged;
    BOOL _usedSWAP;
    BOOL _isCheckingForNewConnectionMethods;
    BOOL _attemptingWirelessSwitch;
    NSString *secretPassword;
    NSURL *_url;
    NSImage *_icon;
    SMNNetworkSession *_session;
    NSObject<OS_dispatch_semaphore> *_waitForCallbackSemaphore;
    NSObject<OS_dispatch_queue> *_atomicConnectionQueue;
    SMNetworkSourceProxy *_networkProxy;
    unsigned long long _networkState;
    NSString *_handoffHint;
    NSString *_remoteClientVersion;
    unsigned long long _remoteCapabilities;
    NSString *_remoteOSVersion;
    NSString *_serviceName;
    unsigned long long _effectiveConnectionMethod;
    unsigned long long _localConnectionMethod;
    unsigned long long _remoteConnectionMethod;
    unsigned long long _availableConnectionMethods;
    NSString *_fasterInterfaceRecommendation;
    NSString *_serviceType;
    NSDictionary *_descriptionData;
    NSString *_networkUUID;
    double _activeConnectionBenchmark;
}

+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendations;
+ (id)keyPathsForValuesAffectingConnectionFamilies;
+ (id)keyPathsForValuesAffectingCommonCapabilities;
+ (id)longTermIdentifierWithNameMatch:(id)arg1;
+ (unsigned long long)requiredScannerState;
+ (id)getSadAndGrayIconForModel:(id)arg1 ofSize:(long long)arg2;
+ (id)iconForFile:(id)arg1 ofSize:(double)arg2;
+ (id)URLWithType:(id)arg1 name:(id)arg2;
@property double activeConnectionBenchmark; // @synthesize activeConnectionBenchmark=_activeConnectionBenchmark;
@property(retain) NSString *networkUUID; // @synthesize networkUUID=_networkUUID;
@property(retain) NSDictionary *descriptionData; // @synthesize descriptionData=_descriptionData;
@property(retain) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(getter=isAttemptingWirelessSwitch) BOOL attemptingWirelessSwitch; // @synthesize attemptingWirelessSwitch=_attemptingWirelessSwitch;
@property BOOL isCheckingForNewConnectionMethods; // @synthesize isCheckingForNewConnectionMethods=_isCheckingForNewConnectionMethods;
@property BOOL usedSWAP; // @synthesize usedSWAP=_usedSWAP;
@property BOOL connectionMethodHasChanged; // @synthesize connectionMethodHasChanged=_connectionMethodHasChanged;
@property(readonly) NSString *fasterInterfaceRecommendation; // @synthesize fasterInterfaceRecommendation=_fasterInterfaceRecommendation;
@property unsigned long long availableConnectionMethods; // @synthesize availableConnectionMethods=_availableConnectionMethods;
@property unsigned long long remoteConnectionMethod; // @synthesize remoteConnectionMethod=_remoteConnectionMethod;
@property unsigned long long localConnectionMethod; // @synthesize localConnectionMethod=_localConnectionMethod;
@property unsigned long long effectiveConnectionMethod; // @synthesize effectiveConnectionMethod=_effectiveConnectionMethod;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain) NSString *remoteOSVersion; // @synthesize remoteOSVersion=_remoteOSVersion;
@property unsigned long long remoteCapabilities; // @synthesize remoteCapabilities=_remoteCapabilities;
@property(retain) NSString *remoteClientVersion; // @synthesize remoteClientVersion=_remoteClientVersion;
@property(retain) NSString *handoffHint; // @synthesize handoffHint=_handoffHint;
@property unsigned long long networkState; // @synthesize networkState=_networkState;
@property BOOL sourceKnowsPasscode; // @synthesize sourceKnowsPasscode=_sourceKnowsPasscode;
@property(retain) SMNetworkSourceProxy *networkProxy; // @synthesize networkProxy=_networkProxy;
@property BOOL determiningFastestConnection; // @synthesize determiningFastestConnection=_determiningFastestConnection;
@property(retain) NSObject<OS_dispatch_queue> *atomicConnectionQueue; // @synthesize atomicConnectionQueue=_atomicConnectionQueue;
@property(retain) NSObject<OS_dispatch_semaphore> *waitForCallbackSemaphore; // @synthesize waitForCallbackSemaphore=_waitForCallbackSemaphore;
@property(retain) SMNNetworkSession *session; // @synthesize session=_session;
@property BOOL connecting; // @synthesize connecting=_connecting;
@property BOOL connectOK; // @synthesize connectOK=_connectOK;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *secretPassword; // @synthesize secretPassword;
@property BOOL connected; // @synthesize connected;
- (void).cxx_destruct;
@property(readonly) NSOrderedSet *fasterInterfaceRecommendations;
@property(readonly) NSOrderedSet *connectionFamilies;
@property(readonly) unsigned long long commonCapabilities;
- (BOOL)shouldAcceptPeerCertificates:(id)arg1;
- (id)localCertificates;
- (void)session:(id)arg1 benchmarkedSoftAP:(double)arg2 infrastructureSample:(double)arg3;
- (void)session:(id)arg1 peerNamed:(id)arg2 updatedTxtRecord:(id)arg3;
- (void)sessionInterrupted:(id)arg1 connection:(id)arg2 active:(BOOL)arg3 didReplaceActiveConnection:(BOOL)arg4;
- (void)session:(id)arg1 streamClosing:(id)arg2;
- (void)session:(id)arg1 newIncomingStream:(id)arg2;
- (void)sessionIsActive:(id)arg1;
- (void)sessionHasFasterConnectionAvailable:(id)arg1;
- (void)sessionDeterminingFastestConnection:(id)arg1;
- (void)session:(id)arg1 didFailConnectionToPeerNamed:(id)arg2;
- (void)session:(id)arg1 resolvedPeerNamed:(id)arg2 txtRecord:(id)arg3;
- (void)session:(id)arg1 promotedNewConnectionToActive:(id)arg2 andResignedConnection:(id)arg3;
- (void)session:(id)arg1 finishedSamplingConnection:(id)arg2;
- (void)sessionDetectedNetworkConfigurationChanged:(id)arg1;
- (void)session:(id)arg1 failedToResolvePeerNamed:(id)arg2 errorCode:(long long)arg3;
- (void)session:(id)arg1 peerDisappeared:(id)arg2;
- (void)session:(id)arg1 discoveredPeerNamed:(id)arg2;
- (BOOL)session:(id)arg1 shouldAcceptPeerWithAddress:(id)arg2;
@property(readonly) BOOL hasSWAPConnection;
- (void)attemptingWirelessSwitch:(BOOL)arg1;
@property(readonly) BOOL shouldSwitchToAccessPoint;
- (unsigned long long)alInterfaceToSMInterface:(int)arg1;
- (void)notifySourceConnectionChanged;
- (void)observeChange;
- (BOOL)disallowsIPV6;
- (Class)networkProxyClass;
- (BOOL)connectSession;
- (BOOL)isMounted;
- (void)unmount;
- (void)mountWithCredentials:(id)arg1;
- (void)mount;
- (void)mountSync;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)evaluateServerType;
- (id)filesystemEnumeratorAtRelativePath:(id)arg1 skippingPaths:(id)arg2 sizeRequired:(BOOL)arg3;
- (void)resumeDataTransfers;
- (void)cancelDataTransfers;
- (id)copier;
- (id)statusDelegate;
- (id)volumeIcon;
- (double)estimatedTransferRate;
- (id)remoteProxy;
@property(readonly) __weak NSNumber *passcode;
- (id)volumeName;
- (id)productVersion;
- (BOOL)isInternal;
- (BOOL)isMountableByUser;
- (BOOL)isNetworkSystem;
- (unsigned long long)systemType;
- (id)displayState;
- (BOOL)matchesLongTermIdentifier:(id)arg1;
- (id)primaryIdentifier;
- (id)extendedDescription;
- (id)systemName;
@property(readonly) unsigned long long protocolVersion;
- (BOOL)isCaseSensitive;
- (BOOL)isDefaultEffaceable;
- (BOOL)isEncrypted;
- (id)createFileManager;
- (id)description;
- (id)accessibilityDescription;
- (void)dealloc;
- (id)initWithSession:(id)arg1 name:(id)arg2 txtRecord:(id)arg3;

@end

