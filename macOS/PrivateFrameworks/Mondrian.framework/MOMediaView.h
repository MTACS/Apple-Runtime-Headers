//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Mondrian/NSScrollViewDelegate-Protocol.h>

@class CIFilter, MOCollectionView, MOLRUCache, MOMediaViewLayout, MOMonitoringController, MONSOperationQueue, NSColor, NSColorSpace, NSIndexPath, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString;
@protocol MOMediaViewDataSource, MOMediaViewDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MOMediaView : NSView <NSScrollViewDelegate>
{
    MOCollectionView *_collectionView;
    MOMediaViewLayout *_mediaViewLayout;
    id <MOMediaViewDataSource> _dataSource;
    id <MOMediaViewDelegate> _delegate;
    NSColor *_backgroundColor;
    BOOL _inLiveResize;
    BOOL _mouseDownHitBackground;
    BOOL _performBackgroundClickCheck;
    BOOL _allowsMotionBlurScrolling;
    double _motionBlurScrollingRadius;
    CIFilter *_motionBlurScrollingFilter;
    BOOL _allowsBestOnDeceleration;
    struct CGRect _decelerationTargetDocumentRect;
    BOOL _fadesBestOnUpdates;
    BOOL _animateSelection;
    BOOL _showsLowThumbnails;
    BOOL _showsBestThumbnails;
    BOOL _showsThumbnailsIndicators;
    unsigned long long _thumbnailMode;
    BOOL _usesBestNearestInterpolation;
    BOOL _usesSmoothScrolling;
    MONSOperationQueue *_operationQueue;
    BOOL _isCancellingAllOperations;
    NSMapTable *_lowThumbnailsCellOperations;
    NSMapTable *_bestThumbnailsCellOperations;
    MOLRUCache *_lowThumbnailsMemoryCache;
    NSMapTable *_lowThumbnailsPrefetchOperations;
    MOLRUCache *_bestThumbnailsMemoryCache;
    NSMapTable *_bestThumbnailsPrefetchOperations;
    NSMutableArray *_bestThumbnailsOperations;
    unsigned long long _maxBestConcurrentOperationCount;
    NSMapTable *_mainQueueThumbnailsOperations;
    struct CGPoint _collectionViewContentPreviousOffset;
    MOMonitoringController *_monitoringController;
    double _backingScaleFactor;
    NSColorSpace *_colorSpace;
    struct CGRect _lastOverdrawRect;
    NSObject<OS_dispatch_source> *_memoryStatusSource;
    unsigned long long _memoryStatus;
    id _activity;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    NSIndexPath *_liveResizeAnchorIndexPath;
    struct CGPoint _liveResizeAnchorOffset;
    NSMutableDictionary *_pinnedThumbnails;
    NSMutableSet *_mainThreadRunLoopBlockTokens;
    NSObject<OS_dispatch_queue> *_mainThreadRunLoopBlockTokensQueue;
    NSMapTable *_mainThreadRunLoopBlockTokensCellsMap;
    struct {
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int waitingForVisibleContent:1;
        unsigned int viewIsPrepared:1;
        unsigned int inModalSelectionMode:1;
        unsigned int modalSelectionModeSavedAllowsContinuousSelectionState:1;
        unsigned int modalSelectionModeSavedAllowsPaintingSelectionState:1;
        unsigned int modalSelectionModeSavedLassoSelectsInverse:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceMediaSectionAtIndexPath:1;
        unsigned int dataSourceCellReuseIdentifierAtIndexPath:1;
        unsigned int dataSourceSupplementaryViewReuseIdentifierOfKindAtIndexPath:1;
        unsigned int dataSourceCanMoveItemsAtIndexPaths:1;
        unsigned int dataSourceAllowedDropPositionsForItemsAtIndexPathsMovedToIndexPath:1;
        unsigned int dataSourceDragOperationForItemsAtIndexPathsMovedOntoItemAtIndexPath:1;
        unsigned int dataSourceMoveItemsAtIndexPathsToIndexPathsDropPosition:1;
        unsigned int dataSourceShouldExchangeItemsAtIndexPathsWithProposedIndexPaths:1;
        unsigned int dataSourceExchangeItemsAtIndexPathsWithIndexPaths:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffset;
        unsigned int delegateWillUpdateCell:1;
        unsigned int delegateDidUpdateCell:1;
        unsigned int delegateWillUpdateSupplementaryView:1;
        unsigned int delegateDidUpdateSupplementaryView:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateShouldSelectItem:1;
        unsigned int delegateShouldDeselectItem:1;
        unsigned int delegateDidSelectItem:1;
        unsigned int delegateDidDeselectItem:1;
        unsigned int delegateSelectionWillChange:1;
        unsigned int delegateSelectionDidChange:1;
        unsigned int delegateSelectionWillAddAndRemove:1;
        unsigned int delegateSelectionDidAddAndRemove:1;
        unsigned int delegateSectionsForSelectAllAction:1;
        unsigned int delegateBackgroundWasClicked:1;
        unsigned int delegateBackgroundWasRightClicked:1;
        unsigned int delegateWillBeginScrolling:1;
        unsigned int delegateDidScroll:1;
        unsigned int delegateDidEndScrolling:1;
        unsigned int delegateDidEndScrollingAnimation:1;
        unsigned int delegateMouseDownWithEvent:1;
        unsigned int delegateItemWasDoubleClickedAtIndexPathWithEvent:1;
        unsigned int delegateItemWasRightClickedAtIndexPathWithEvent:1;
        unsigned int delegateLoadingThumbnail:1;
        unsigned int delegateUpdatesLayoutOnDrag:1;
        unsigned int delegateImageForDraggedItemAtIndexPath:1;
        unsigned int delegatePasteboardWriterForItemAtIndexPath:1;
        unsigned int delegateDraggingItemForIndexPathProposedDraggingItem:1;
        unsigned int delegatePreferredDraggingFormation:1;
        unsigned int delegateCreatedDraggingSessionForItemsAtIndexPaths:1;
        unsigned int delegateDraggingSessionSourceOperationMaskForDraggingContext:1;
        unsigned int delegateDraggingSessionWillBeginAtPoint:1;
        unsigned int delegateDraggingSessionMovedToPoint:1;
        unsigned int delegateDraggingSessionEndedAtPointDragOperation:1;
        unsigned int delegateDragSourceIdentifier:1;
        unsigned int delegatePrepareForDragOperation:1;
        unsigned int delegatePerformDragOperation:1;
        unsigned int delegateDraggingEntered:1;
        unsigned int delegateDraggingUpdated:1;
        unsigned int delegateDraggingExited:1;
        unsigned int delegateDraggingEnded:1;
    } _mediaViewFlags;
    unsigned long long _mediaSectionsMinimumMemoryCacheSlots;
    unsigned long long _mediaItemsMinimumMemoryCacheSlots;
    unsigned long long _mediaSectionsMaximumMemoryCacheSlots;
    unsigned long long _mediaItemsMaximumMemoryCacheSlots;
    double _bestResolutionThumbnailQualityScale1;
    double _bestResolutionThumbnailQualityScale2;
    unsigned long long _prefetchLowThumbnailsPagesCount;
    unsigned long long _prefetchLowThumbnailsWhileScrollingPagesCount;
    unsigned long long _lowThumbnailsMemoryCacheSlotsAlignement;
    double _lowThumbnailsMemoryCacheSlotsMinimumFactor;
    double _lowThumbnailsMemoryCacheSlotsMaximumFactor;
    unsigned long long _prefetchBestThumbnailsPagesCount;
    unsigned long long _prefetchBestThumbnailsWhileScrollingPagesCount;
    unsigned long long _bestThumbnailsMemoryCacheSlotsAlignement;
    double _bestThumbnailsMemoryCacheSlotsMinimumFactor;
    double _bestThumbnailsMemoryCacheSlotsMaximumFactor;
    BOOL _needsToPrefetchTargetBestThumbnails;
    struct CGRect _currentScrollTargetRect;
    struct CGRect _lastVisibleRect;
    unsigned long long _lastScrollDirection;
    unsigned long long _pptSampledCountOfFrames;
    unsigned long long _pptSampledCountOfEmptyCells;
}

@property(nonatomic) struct CGPoint liveResizeAnchorOffset; // @synthesize liveResizeAnchorOffset=_liveResizeAnchorOffset;
@property(retain, nonatomic) NSIndexPath *liveResizeAnchorIndexPath; // @synthesize liveResizeAnchorIndexPath=_liveResizeAnchorIndexPath;
@property(retain, nonatomic) MOCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) struct CGPoint collectionViewContentPreviousOffset; // @synthesize collectionViewContentPreviousOffset=_collectionViewContentPreviousOffset;
@property BOOL isCancellingAllOperations; // @synthesize isCancellingAllOperations=_isCancellingAllOperations;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property(nonatomic) double bestThumbnailsMemoryCacheSlotsMaximumFactor; // @synthesize bestThumbnailsMemoryCacheSlotsMaximumFactor=_bestThumbnailsMemoryCacheSlotsMaximumFactor;
@property(nonatomic) double bestThumbnailsMemoryCacheSlotsMinimumFactor; // @synthesize bestThumbnailsMemoryCacheSlotsMinimumFactor=_bestThumbnailsMemoryCacheSlotsMinimumFactor;
@property(nonatomic) unsigned long long bestThumbnailsMemoryCacheSlotsAlignement; // @synthesize bestThumbnailsMemoryCacheSlotsAlignement=_bestThumbnailsMemoryCacheSlotsAlignement;
@property(nonatomic) unsigned long long prefetchBestThumbnailsWhileScrollingPagesCount; // @synthesize prefetchBestThumbnailsWhileScrollingPagesCount=_prefetchBestThumbnailsWhileScrollingPagesCount;
@property(nonatomic) unsigned long long prefetchBestThumbnailsPagesCount; // @synthesize prefetchBestThumbnailsPagesCount=_prefetchBestThumbnailsPagesCount;
@property(nonatomic) double lowThumbnailsMemoryCacheSlotsMaximumFactor; // @synthesize lowThumbnailsMemoryCacheSlotsMaximumFactor=_lowThumbnailsMemoryCacheSlotsMaximumFactor;
@property(nonatomic) double lowThumbnailsMemoryCacheSlotsMinimumFactor; // @synthesize lowThumbnailsMemoryCacheSlotsMinimumFactor=_lowThumbnailsMemoryCacheSlotsMinimumFactor;
@property(nonatomic) unsigned long long lowThumbnailsMemoryCacheSlotsAlignement; // @synthesize lowThumbnailsMemoryCacheSlotsAlignement=_lowThumbnailsMemoryCacheSlotsAlignement;
@property(nonatomic) unsigned long long prefetchLowThumbnailsWhileScrollingPagesCount; // @synthesize prefetchLowThumbnailsWhileScrollingPagesCount=_prefetchLowThumbnailsWhileScrollingPagesCount;
@property(nonatomic) unsigned long long prefetchLowThumbnailsPagesCount; // @synthesize prefetchLowThumbnailsPagesCount=_prefetchLowThumbnailsPagesCount;
@property(nonatomic) double bestResolutionThumbnailQualityScale2; // @synthesize bestResolutionThumbnailQualityScale2=_bestResolutionThumbnailQualityScale2;
@property(nonatomic) double bestResolutionThumbnailQualityScale1; // @synthesize bestResolutionThumbnailQualityScale1=_bestResolutionThumbnailQualityScale1;
@property(nonatomic) unsigned long long mediaItemsMaximumMemoryCacheSlots; // @synthesize mediaItemsMaximumMemoryCacheSlots=_mediaItemsMaximumMemoryCacheSlots;
@property(nonatomic) unsigned long long mediaSectionsMaximumMemoryCacheSlots; // @synthesize mediaSectionsMaximumMemoryCacheSlots=_mediaSectionsMaximumMemoryCacheSlots;
@property(nonatomic) unsigned long long mediaItemsMinimumMemoryCacheSlots; // @synthesize mediaItemsMinimumMemoryCacheSlots=_mediaItemsMinimumMemoryCacheSlots;
@property(nonatomic) unsigned long long mediaSectionsMinimumMemoryCacheSlots; // @synthesize mediaSectionsMinimumMemoryCacheSlots=_mediaSectionsMinimumMemoryCacheSlots;
@property(nonatomic) BOOL usesSmoothScrolling; // @synthesize usesSmoothScrolling=_usesSmoothScrolling;
@property(nonatomic) BOOL usesBestNearestInterpolation; // @synthesize usesBestNearestInterpolation=_usesBestNearestInterpolation;
@property(nonatomic) unsigned long long thumbnailMode; // @synthesize thumbnailMode=_thumbnailMode;
@property(nonatomic) BOOL showsThumbnailsIndicators; // @synthesize showsThumbnailsIndicators=_showsThumbnailsIndicators;
@property(nonatomic) BOOL showsBestThumbnails; // @synthesize showsBestThumbnails=_showsBestThumbnails;
@property(nonatomic) BOOL showsLowThumbnails; // @synthesize showsLowThumbnails=_showsLowThumbnails;
@property(nonatomic) BOOL fadesBestOnUpdates; // @synthesize fadesBestOnUpdates=_fadesBestOnUpdates;
@property(nonatomic) BOOL animateSelection; // @synthesize animateSelection=_animateSelection;
@property(nonatomic) BOOL allowsBestOnDeceleration; // @synthesize allowsBestOnDeceleration=_allowsBestOnDeceleration;
@property(nonatomic) BOOL allowsMotionBlurScrolling; // @synthesize allowsMotionBlurScrolling=_allowsMotionBlurScrolling;
@property(readonly, nonatomic) MOMediaViewLayout *mediaViewLayout; // @synthesize mediaViewLayout=_mediaViewLayout;
@property(nonatomic) __weak id <MOMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MOMediaViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)scrollingDebugInformation;
- (void)rescheduleOperations;
- (void)_rescheduleOperations;
- (void)cancelAllOperations:(CDUnknownBlockType)arg1;
- (void)cancelAllOperations;
- (id)currentBestThumbnailOperationDependency;
- (void)cancelAllThumbnailPrefetchOperations;
- (void)cancelAllThumbnailPrefetchOperationsForIndexPath:(id)arg1;
- (void)cancelAllThumbnailCellOperations;
- (void)cancelAllThumbnailCellOperationsForCell:(id)arg1;
- (BOOL)hasMainThreadRunLoopBlockWithToken:(id)arg1;
- (void)removeMainThreadRunLoopBlockWithToken:(id)arg1 forCellUUID:(id)arg2;
- (void)addMainThreadRunLoopBlockWithToken:(id)arg1 forCellUUID:(id)arg2;
- (void)cancelMainThreadRunLoopBlockForCellUUID:(id)arg1;
- (void)cancelAllMainThreadRunLoopBlocks;
- (void)cancelAllBestThumbnailPrefetchOperations;
- (void)cancelAllBestThumbnailPrefetchOperationsButIndexPaths:(id)arg1;
- (void)cancelBestThumbnailPrefetchOperationForIndexPath:(id)arg1;
- (BOOL)hasBestThumbnailPrefetchOperationForIndexPath:(id)arg1;
- (void)removeBestThumbnailPrefetchOperation:(id)arg1;
- (void)addBestThumbnailPrefetchOperation:(id)arg1;
- (void)cancelAllLowThumbnailPrefetchOperations;
- (void)cancelAllLowThumbnailPrefetchOperationsButIndexPaths:(id)arg1;
- (void)cancelLowThumbnailPrefetchOperationForIndexPath:(id)arg1;
- (BOOL)hasLowThumbnailPrefetchOperationForIndexPath:(id)arg1;
- (void)removeLowThumbnailPrefetchOperation:(id)arg1;
- (void)addLowThumbnailPrefetchOperation:(id)arg1;
- (void)cancelAllMainQueueThumbnailOperations;
- (void)cancelMainQueueThumbnailOperationForContext:(id)arg1;
- (BOOL)hasMainQueueThumbnailOperationForContext:(id)arg1;
- (void)removeMainQueueThumbnailOperation:(id)arg1;
- (void)addMainQueueThumbnailOperation:(id)arg1;
- (unsigned long long)mainQueueThumbnailsOperationsCount;
- (void)cancelAllBestThumbnailCellOperations;
- (void)cancelAllBestThumbnailCellNonVisibleOperations;
- (void)cancelBestThumbnailCellOperationsForCell:(id)arg1;
- (BOOL)hasBestThumbnailCellOperationForCell:(id)arg1;
- (void)removeBestThumbnailCellOperation:(id)arg1;
- (void)addBestThumbnailCellOperation:(id)arg1;
- (unsigned long long)bestThumbnailsCellOperationsCount;
- (void)cancelAllLowThumbnailCellOperations;
- (void)cancelLowThumbnailCellOperationsForCell:(id)arg1;
- (BOOL)hasLowThumbnailCellOperationForCell:(id)arg1;
- (void)removeLowThumbnailCellOperation:(id)arg1;
- (void)addLowThumbnailCellOperation:(id)arg1;
- (unsigned long long)lowThumbnailsCellOperationsCount;
- (id)_bestThumbnailsPrefetchOperations;
- (id)_lowThumbnailsPrefetchOperations;
- (id)_mainQueueThumbnailsOperations;
- (id)_bestThumbnailsCellOperations;
- (id)_lowThumbnailsCellOperations;
- (void)invalidateThumbnailsMemoryCaches;
- (void)_setLowThumbnailInMemory:(id)arg1 forMediaItem:(id)arg2;
- (id)_lowThumbnailInMemoryForMediaItem:(id)arg1;
- (void)_setBestThumbnailInMemory:(id)arg1 andResolution:(unsigned long long)arg2 forMediaItem:(id)arg3;
- (id)_bestThumbnailInMemoryForMediaItem:(id)arg1 andResolution:(unsigned long long)arg2;
- (void)prefetchBestForItemsAroundIndexPath:(id)arg1;
- (void)prefetchBestThumbnailsAtIndexPaths:(id)arg1;
- (void)prefetchContentItemsBestThumbnails;
- (void)prefetchBestThumbnails:(unsigned long long)arg1;
- (void)prefetchBestThumbnailsInRect:(struct CGRect)arg1 pageDirection:(unsigned long long)arg2;
- (void)prefetchBestThumbnailsInRect:(struct CGRect)arg1;
- (void)prefetchBestThumbnails:(unsigned long long)arg1 pageDirection:(unsigned long long)arg2;
- (void)prefetchLowThumbnailsForScrolling;
- (void)prefetchLowThumbnails:(unsigned long long)arg1;
- (void)prefetchAdjacentThumbnails:(BOOL)arg1;
- (void)prefetchLowThumbnails:(unsigned long long)arg1 pageDirection:(unsigned long long)arg2;
- (void)prefetchLowThumbnailsInRect:(struct CGRect)arg1 pageDirection:(unsigned long long)arg2;
- (void)prefetchLowThumbnailsInExactRect:(struct CGRect)arg1;
- (void)prefetchLowThumbnailsAtIndexPaths:(id)arg1;
- (void)prefetchContentItemsLowThumbnails;
- (void)resetOverdraw;
- (void)refreshContentCells;
- (void)updateVisibleSupplementaryViews;
- (void)updateVisibleCells;
- (void)updateContentSupplementaryViews;
- (void)updateContentCells;
- (void)updateContentCellsToBest;
- (void)updateVisibleCellsToBest;
- (id)orderedContentCells;
- (unsigned long long)countOfEmptyCells;
- (void)_updateCellToBest:(id)arg1 withMediaItem:(id)arg2 atIndexPath:(id)arg3 withDependencyOperation:(id)arg4;
- (BOOL)_canShowBestThumbnailsForCell:(id)arg1;
- (void)_updateCell:(id)arg1 withMediaItem:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)shouldFadeBestThumbnailsForCell:(id)arg1;
- (BOOL)shouldUseNearestInterpolationForBestThumbnail;
- (long long)operationQueuePriorityForType:(unsigned long long)arg1 withCell:(id)arg2;
- (struct CGRect)_criticalScrollingArea;
- (void)_updateSupplementaryView:(id)arg1 ofKind:(id)arg2 withMediaSection:(id)arg3 atIndexPath:(id)arg4;
- (void)systemColorsDidChange:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_mediaViewBackgroundHitByEvent:(id)arg1;
- (id)_mediaViewRelatedViewHitByEvent:(id)arg1;
- (BOOL)inLiveResize;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)_updateContentsInResponseToUserInitiatedSizeChange;
- (BOOL)inModalSelectionMode;
- (void)setModalSelectionMode:(BOOL)arg1;
- (void)indexPathsForSelectedItemsDidAdd:(id)arg1 remove:(id)arg2;
- (void)indexPathsForSelectedItemsWillAdd:(id)arg1 remove:(id)arg2;
- (void)deselectAllItems:(BOOL)arg1;
- (void)selectAllItems:(BOOL)arg1;
- (void)deselectItemsInSection:(long long)arg1 animated:(BOOL)arg2;
- (void)selectItemsInSection:(long long)arg1 animated:(BOOL)arg2;
- (id)_indexPathsForAllItemsInSection:(long long)arg1;
- (void)deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (void)selectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (id)mediaItemsForSelectedItems;
- (id)indexPathsForAllItems;
- (id)indexPathsForSelectedItems;
- (BOOL)selectedItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *lastRightClickedIndexPath;
@property(readonly, nonatomic, getter=isLassoSelectionInProgress) BOOL lassoSelectionInProgress;
- (unsigned long long)numberOfSelectedItems;
- (void)enumerateVisibleSupplementaryViewsOfKind:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)orderedOverdrawMediaItems;
- (id)orderedVisibleMediaItems;
- (id)visibleMediaItemIndexPathsWithOverdraw;
- (id)visibleMediaItemIndexPaths;
- (id)visibleMediaItems;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)collectionView:(id)arg1 exchangeItemsAtIndexPaths:(id)arg2 withIndexPaths:(id)arg3;
- (void)collectionView:(id)arg1 moveItemsAtIndexPaths:(id)arg2 toIndexPath:(id)arg3 dropPosition:(long long)arg4;
- (unsigned long long)collectionView:(id)arg1 dragOperationForItemsAtIndexPaths:(id)arg2 movedOntoItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 allowedDropPositionsForItemsAtIndexPaths:(id)arg2 movedToIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setMotionBlurRadius:(double)arg1 animated:(BOOL)arg2;
- (void)_updateMotionBlurScrolling;
- (void)collectionView:(id)arg1 draggingEnded:(id)arg2;
- (void)collectionView:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 draggingEntered:(id)arg2;
- (BOOL)collectionView:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)collectionView:(id)arg1 prepareForDragOperation:(id)arg2;
- (id)dragSourceIdentifierForCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (void)collectionView:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3;
- (unsigned long long)collectionView:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (id)collectionView:(id)arg1 draggingItemForIndexPath:(id)arg2 proposedDraggingItem:(id)arg3;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 imageForDraggedItemAtIndexPath:(id)arg2;
- (long long)collectionViewPreferredDraggingFormation:(id)arg1;
- (BOOL)collectionViewUpdatesLayoutOnDrag:(id)arg1;
- (BOOL)collectionView:(id)arg1 shouldExchangeItemsAtIndexPaths:(id)arg2 withProposedIndexPaths:(id)arg3;
- (void)collectionView:(id)arg1 didPrepareForOverdraw:(struct CGRect)arg2;
- (void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 itemWasDoubleClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 mouseDownWithEvent:(id)arg2;
- (id)sectionsForSelectAllActionInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 indexPathsForSelectedItemsDidAdd:(id)arg2 remove:(id)arg3 animated:(BOOL)arg4;
- (void)collectionView:(id)arg1 indexPathsForSelectedItemsWillAdd:(id)arg2 remove:(id)arg3 animated:(BOOL)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionViewDidEndDecelerating:(id)arg1;
- (void)_collectionViewDidEndDecelerating;
- (void)collectionViewDidEndScrolling:(id)arg1;
- (void)_collectionViewDidEndScrolling;
- (void)collectionViewDidScroll:(id)arg1;
- (BOOL)_closeEnoughToLoadBestThumbnailForCell:(id)arg1;
- (BOOL)_closeEnoughToPrefetchTargetBestThumbnailsWhenScrolling;
- (void)collectionViewWillBeginScrolling:(id)arg1;
- (void)_collectionViewWillBeginScrolling;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetOnResizeForProposedContentOffset:(struct CGPoint)arg2;
- (struct CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (void)scrollViewBeganMomentum:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollToEnd:(BOOL)arg1;
- (void)scrollToBeginning:(BOOL)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 userInteractivelyScrolling:(BOOL)arg4;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)didEndScrollingContent;
- (void)willBeginScrollingContent;
@property(nonatomic) BOOL externalDropEnabled;
@property(nonatomic) BOOL rearrangingAllowAutoscroll;
@property(nonatomic) BOOL rearrangingEnabled;
- (id)mediaVisiblePivotIndexPath;
- (struct CGRect)thumbnailFrameForItemAtIndexPath:(id)arg1;
- (struct CGRect)visibleFrameForItemAtIndexPath:(id)arg1;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (id)closestIndexPathForItemAtPoint:(struct CGPoint)arg1 byDelta:(double)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)_thumbnailAtIndexPath:(id)arg1;
- (id)mediaSectionAtIndexPath:(id)arg1;
- (id)mediaSectionAtIndex:(long long)arg1;
- (id)mediaItemsAtIndexPaths:(id)arg1;
- (id)mediaItemAtIndexPath:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)_setBackgroundColor:(id)arg1;
- (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1;
- (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (void)updateSectionsAtIndexPaths:(id)arg1 ofKind:(id)arg2;
- (void)updateItemsAtIndexPaths:(id)arg1;
- (void)refreshItemsAtIndexPaths:(id)arg1;
- (void)updateSectionAtIndexPath:(id)arg1 ofKind:(id)arg2;
- (void)updateItemAtIndexPath:(id)arg1;
- (void)refreshItemAtIndexPath:(id)arg1;
- (void)invalidateMediaItemAtIndexPath:(id)arg1;
- (void)setMediaViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setMediaViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateCollectionViewWithMediaViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadData:(BOOL)arg1;
- (void)reloadData;
- (BOOL)needsReload;
- (void)setNeedsReload:(BOOL)arg1;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)_registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)_registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)openMonitoringPanel:(id)arg1;
- (id)monitoringController;
- (void)openSettingsPanel:(id)arg1;
- (id)settingsPanelController;
- (void)keyDown:(id)arg1;
- (void)_willTerminateNotification;
- (void)_didResignActiveNotification;
- (id)gridView;
@property(readonly, retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)setConcurrencyEnabled:(BOOL)arg1;
- (struct CGPoint)mediaViewPointForLayoutPoint:(struct CGPoint)arg1;
- (struct CGPoint)layoutPointForMediaViewPoint:(struct CGPoint)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidChangeBackingProperties;
- (void)_viewDidChangeBackingProperties;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewCleanup;
- (void)_viewCleanup;
- (void)viewPrepare;
- (void)_viewDidPrepare:(BOOL)arg1;
- (void)_viewWillPrepare;
- (BOOL)isWaitingForVisibleContent;
- (void)waitUntilVisibleContentIsPrepared:(double)arg1 includingBest:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_waitUntilVisibleContentIsPrepared:(double)arg1 includingBest:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isVisibleContentPrepared:(BOOL)arg1;
- (void)flushPinnedThumbnails;
- (id)pinVisibleThumbnails;
- (void)invalidateAllMemoryCaches;
- (void)prefetchAdjacentMediaContent;
- (void)prefetchBestVisibleMediaContent;
- (void)prefetchLowVisibleMediaContent;
- (void)updateMediaContentToBest;
- (void)updateAllVisibleToBest;
- (void)updateAllVisibleContent;
- (void)updateAllContent;
- (void)updateMemoryCaches:(unsigned long long)arg1;
- (void)updateMemoryCaches;
- (void)installMemoryPressureListener;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 responsiveScrolling:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mediaViewLayout:(id)arg2 responsiveScrolling:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1 mediaViewLayout:(id)arg2;

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

