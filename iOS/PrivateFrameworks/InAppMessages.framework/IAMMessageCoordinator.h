//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMEventReceiver-Protocol.h>
#import <InAppMessages/IAMWebMessagePresentationCoordinatorDelegate-Protocol.h>

@class IAMWebMessagePresentationCoordinator, ICInAppMessageManager, NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol IAMApplicationContextProvider, IAMMessageMetricsDelegate, IAMMessageReceiver, OS_dispatch_queue;

@interface IAMMessageCoordinator : NSObject <IAMWebMessagePresentationCoordinatorDelegate, IAMEventReceiver>
{
    ICInAppMessageManager *_iTunesCloudIAMManager;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_registeredMessageEntries;
    NSMutableDictionary *_registeredMetadataEntries;
    id <IAMApplicationContextProvider> _applicationContext;
    NSDictionary *_messageEntriesByMonitoredKeys;
    IAMWebMessagePresentationCoordinator *_webMessagePresentationCoordinator;
    NSMutableOrderedSet *_visibleViewControllers;
    id <IAMMessageReceiver> _targetFallback;
    _Bool _registeredAsObserverForICNotifications;
    _Bool _modalIsPresented;
    id <IAMMessageMetricsDelegate> _metricsDelegate;
}

+ (_Bool)isModalPresentedByAnyCoordinator;
+ (void)removeVisibleViewController:(id)arg1;
+ (void)addVisibleViewController:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak id <IAMMessageMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property(retain, nonatomic) NSDictionary *messageEntriesByMonitoredKeys; // @synthesize messageEntriesByMonitoredKeys=_messageEntriesByMonitoredKeys;
@property(retain, nonatomic) NSArray *registeredMessageEntries; // @synthesize registeredMessageEntries=_registeredMessageEntries;
- (void).cxx_destruct;
- (void)_incrementNumberOfDisplayForMessageEntry:(id)arg1;
- (void)_reportDisplayToITunesCloudManagerWithEventIdentifier:(id)arg1;
- (void)reportDisplayForMessageEntry:(id)arg1;
- (id)viewControllerForModalPresentationUsingCoordinator:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)arg1 actionConfiguration:(id)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)arg1 event:(id)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)arg1;
- (void)setRegisteredMetadataEntry:(id)arg1 forKey:(id)arg2;
- (id)registeredMetadataEntryForKey:(id)arg1;
- (void)setRegisteredMetadataEntries:(id)arg1;
- (id)registeredMetadataEntries;
- (id)messageEntriesByRealKeyCorrespondingToEvent:(id)arg1;
- (id)messagesToReevaluate:(id)arg1 forEvent:(id)arg2;
- (void)updateMetadataOfMessageEntriesByRealKey:(id)arg1 forReceivedEvent:(id)arg2;
- (id)allMessageEntriesWithoutDuplicates:(id)arg1;
- (void)receiveEvent:(id)arg1;
- (void)_updateMessagesByMonitoredKeys;
- (void)_reevaluateMessages:(id)arg1;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1;
- (void)displayMessageFromMessageEntry:(id)arg1;
- (void)removeVisibleViewController:(id)arg1;
- (void)addVisibleViewController:(id)arg1;
- (void)start;
- (void)startWithApplicationContext:(id)arg1;
- (void)startWithApplicationContext:(id)arg1 andTargetFallback:(id)arg2;
- (void)fetchMessagesFromiTunesCloud;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

