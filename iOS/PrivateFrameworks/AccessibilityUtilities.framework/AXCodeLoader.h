//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXImageMonitorObserver-Protocol.h>

@class NSMutableSet, NSString;
@protocol AXImageMonitor, OS_dispatch_queue, OS_dispatch_source;

@interface AXCodeLoader : NSObject <AXImageMonitorObserver>
{
    id <AXImageMonitor> _imageMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_loadAccessibilityCodeItemsSource;
    NSObject<OS_dispatch_source> *_dyldImageActivityCoalesceTimer;
    long long _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSMutableSet *_trackedCodeItems;
    NSMutableSet *_accessibilityCodeItems;
    CDUnknownBlockType _beginTrackingCompletion;
    NSObject<OS_dispatch_queue> *_beginTrackingCompletionQueue;
    _Bool _initialLoadHasOccurred;
    _Bool _initialLoadHasFinished;
    NSString *_currentPlatformKey;
    _Bool _shouldAutoloadAccessibilityCodeItems;
    long long _trackingMode;
    CDUnknownBlockType _shouldLoadAccessibilityCodeItemBlock;
    CDUnknownBlockType _didLoadAccessibilityCodeItemBlock;
    CDUnknownBlockType _loadEventWillOccurBlock;
    CDUnknownBlockType _loadEventDidOccurBlock;
}

+ (id)defaultLoader;
@property(copy, nonatomic) CDUnknownBlockType loadEventDidOccurBlock; // @synthesize loadEventDidOccurBlock=_loadEventDidOccurBlock;
@property(copy, nonatomic) CDUnknownBlockType loadEventWillOccurBlock; // @synthesize loadEventWillOccurBlock=_loadEventWillOccurBlock;
@property(copy, nonatomic) CDUnknownBlockType didLoadAccessibilityCodeItemBlock; // @synthesize didLoadAccessibilityCodeItemBlock=_didLoadAccessibilityCodeItemBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldLoadAccessibilityCodeItemBlock; // @synthesize shouldLoadAccessibilityCodeItemBlock=_shouldLoadAccessibilityCodeItemBlock;
@property(nonatomic) _Bool shouldAutoloadAccessibilityCodeItems; // @synthesize shouldAutoloadAccessibilityCodeItems=_shouldAutoloadAccessibilityCodeItems;
@property(nonatomic) long long trackingMode; // @synthesize trackingMode=_trackingMode;
- (void).cxx_destruct;
- (void)iterateInitialImageListForImageMonitor:(id)arg1;
- (void)imageMonitor:(id)arg1 didAddImage:(id)arg2;
- (void)queryAccessibilityBundleIsLoadedWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadAccessibilityCodeItems;
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)arg1;
- (id)_accessibilityBundleMapURLs;
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)arg1;
- (id)_accessibilityCodeItemMatchingName:(id)arg1 type:(long long)arg2;
- (id)_platformKeyForPlatform:(unsigned int)arg1;
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;
- (void)_cancelDyldImageActivityTimer;
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)arg1;
- (void)setAccessibilityCodeItemsNeedLoaded;
- (id)codeItemForBundle:(id)arg1;
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(_Bool)arg1;
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(_Bool)arg1;
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(_Bool)arg1;
- (void)_addTrackedCodeItem:(id)arg1;
- (void)endTrackingLoadedCodeItemsWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)arg1 completion:(CDUnknownBlockType)arg2 targetQueue:(id)arg3;
@property(readonly, nonatomic) _Bool isInitialLoadFinished;
@property(readonly, nonatomic) _Bool isTrackingLoadedCodeItems;
- (CDUnknownBlockType)_validLoadEventDidOccurBlock;
- (CDUnknownBlockType)_validLoadEventWillOccurBlock;
- (CDUnknownBlockType)_validDidLoadAccessibilityCodeItemBlock;
- (CDUnknownBlockType)_validShouldLoadAccessibilityCodeItemBlock;
- (id)init;
- (id)initWithImageMonitor:(id)arg1;
- (id)rogueAccessibilityCodeItems;
- (id)trackedCodeItems;
- (void)logLoaderState;
- (id)_stateDescForItem:(id)arg1;
- (id)accessibilityCodeItemDefinitions;
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;
- (id)recomputedCodeItemsForAllFrameworks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

