//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary;
@protocol AXElementFetcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXElementFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    NSObject<OS_dispatch_queue> *_filterAccessQueue;
    struct __AXObserver *_axRuntimeNotificationObserver;
    unsigned int _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    AXElementGroupPruner *_elementGroupPruner;
    _Bool _enabled;
    _Bool _fetchingElements;
    _Bool _eventManagementEnabled;
    _Bool _shouldIncludeNonScannerElements;
    _Bool _groupingEnabled;
    _Bool _didSendFakeScreenChangeOnLastFetch;
    int _elementGroupingHeuristics;
    id <AXElementFetcherDelegate> _delegate;
    NSMapTable *_fetchObservers;
    unsigned int _activeFetchEvents;
    NSArray *_currentApps;
    NSArray *_elementCache;
    AXElementGroup *_rootGroupCache;
    AXElementGroup *_keyboardGroupCache;
    NSMutableDictionary *_postFetchFilters;
    AXVisualElementGrouper *_visualElementGrouper;
    NSArray *_customCurrentApps;
}

+ (id)springBoardElement;
+ (id)systemWideElement;
@property(retain, nonatomic) NSArray *customCurrentApps; // @synthesize customCurrentApps=_customCurrentApps;
@property(nonatomic) _Bool didSendFakeScreenChangeOnLastFetch; // @synthesize didSendFakeScreenChangeOnLastFetch=_didSendFakeScreenChangeOnLastFetch;
@property(retain, nonatomic) AXVisualElementGrouper *visualElementGrouper; // @synthesize visualElementGrouper=_visualElementGrouper;
@property(retain, nonatomic) NSMutableDictionary *postFetchFilters; // @synthesize postFetchFilters=_postFetchFilters;
@property(retain, nonatomic) AXElementGroup *keyboardGroupCache; // @synthesize keyboardGroupCache=_keyboardGroupCache;
@property(retain, nonatomic) AXElementGroup *rootGroupCache; // @synthesize rootGroupCache=_rootGroupCache;
@property(retain, nonatomic) NSArray *elementCache; // @synthesize elementCache=_elementCache;
@property(retain, nonatomic) NSArray *currentApps; // @synthesize currentApps=_currentApps;
@property(nonatomic) unsigned int activeFetchEvents; // @synthesize activeFetchEvents=_activeFetchEvents;
@property(retain, nonatomic) NSMapTable *fetchObservers; // @synthesize fetchObservers=_fetchObservers;
@property(nonatomic) __weak id <AXElementFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int elementGroupingHeuristics; // @synthesize elementGroupingHeuristics=_elementGroupingHeuristics;
@property(nonatomic, getter=isGroupingEnabled) _Bool groupingEnabled; // @synthesize groupingEnabled=_groupingEnabled;
@property(nonatomic) _Bool shouldIncludeNonScannerElements; // @synthesize shouldIncludeNonScannerElements=_shouldIncludeNonScannerElements;
@property(nonatomic, getter=isEventManagementEnabled) _Bool eventManagementEnabled; // @synthesize eventManagementEnabled=_eventManagementEnabled;
@property(nonatomic, getter=isFetchingElements) _Bool fetchingElements; // @synthesize fetchingElements=_fetchingElements;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_debugLogElementCache;
- (id)_debugStringForFetchEvents:(unsigned int)arg1;
- (void)clearCache;
- (_Bool)_fetchGroups:(_Bool)arg1;
- (id)_fetchUnprocessedAppGroups;
- (id)_processAppGroup:(id)arg1 keyboardGroup:(id *)arg2;
@property(readonly, nonatomic) AXElementGroupPruner *elementGroupPruner;
- (id)_filterGroup:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(unsigned long)arg2 scanningBehaviorTraits:(unsigned long)arg3 label:(id)arg4 identifier:(id)arg5 currentPid:(int)arg6 remoteViewPids:(id)arg7;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2 remoteViewPids:(id)arg3;
- (id)findGroupableMatchingBlock:(CDUnknownBlockType)arg1;
- (id)_findGroupableMatchingBlock:(CDUnknownBlockType)arg1 inElementGroup:(id)arg2;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(_Bool)arg2 didWrap:(_Bool *)arg3;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;
- (id)lastElement;
- (id)firstElement;
- (id)closestElementToPoint:(struct CGPoint)arg1;
- (id)closestElementToElement:(id)arg1;
- (id)_findElementsMatchingBlock:(CDUnknownBlockType)arg1 internalRequest:(_Bool)arg2;
- (id)findElementsMatchingBlock:(CDUnknownBlockType)arg1;
- (id)findElementMatchingBlock:(CDUnknownBlockType)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)_filterElements:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (void)removeAllPostFetchFilters;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (void)addPostFetchFilter:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (id)_fetchUnprocessedElements;
- (_Bool)_fetchElements:(_Bool)arg1;
- (void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg1 orElements:(id)arg2 appsDidChange:(_Bool)arg3;
- (_Bool)_shouldConsiderCacheAsInvalid;
- (void)disableEventManagement;
- (void)enableEventManagement;
- (id)_axNotificationsForManagedEvents;
- (_Bool)_fetchEventCanBeManaged:(unsigned int)arg1;
- (int)_priorityForFetchEvent:(unsigned int)arg1;
- (double)_delayForFetchEvent:(unsigned int)arg1;
- (void)_scheduleFetchEvent:(unsigned int)arg1;
- (void)_tearDownEventCoalesceTimer;
- (void)_handleMediaDidBegin:(struct __CFData *)arg1;
- (void)_handleScreenWillChange:(struct __CFData *)arg1;
- (void)_handleApplicationWasActivated:(id)arg1;
- (void)_handleUpdateElementVisuals:(struct __CFData *)arg1;
- (void)_handleNativeFocusItemDidChange:(struct __CFData *)arg1;
- (void)_fetchEventOccurred:(unsigned int)arg1;
- (void)fetchEventOccurred:(unsigned int)arg1;
- (void)refresh;
- (void)removeFetchEvents:(unsigned int)arg1;
- (void)addFetchEvents:(unsigned int)arg1;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned int)arg1;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned int)arg1 foundNewElements:(_Bool)arg2;
- (void)_notifyObserversMediaDidBegin:(struct __CFData *)arg1;
- (void)_notifyObserversScreenWillChange:(struct __CFData *)arg1;
- (void)_notifyObserversApplicationWasActivated:(id)arg1;
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned int)arg1;
- (void)unregisterAllFetchObservers;
- (void)unregisterFetchObserver:(id)arg1;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
@property(readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *keyboardGroup;
@property(readonly, nonatomic) AXElementGroup *rootGroup;
@property(readonly, nonatomic) NSArray *availableElements;
@property(readonly, nonatomic) _Bool willFetchElements;
- (_Bool)_updateCurrentApps;
@property(readonly, nonatomic) AXElement *nativeFocusElement;
- (void)_setCurrentApplications:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned int)arg2 enableEventManagement:(_Bool)arg3 enableGrouping:(_Bool)arg4 shouldIncludeNonScannerElements:(_Bool)arg5 beginEnabled:(_Bool)arg6;

@end

