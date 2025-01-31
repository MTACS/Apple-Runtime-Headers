//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGCompositeLayout.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryBodyLayout-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryViewModelPresenter-Protocol.h>
#import <PhotosUICore/PXGSublayoutFaultingDelegate-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>
#import <PhotosUICore/PXMonthsSublayoutProvider-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, PXAssetsDataSource, PXAssetsSectionLayout, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXGSpriteReference;

@interface PXCuratedLibrarySectionedLayout : PXGCompositeLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout>
{
    CDStruct_d97c9657 _updateFlags;
    PXAssetsDataSource *_currentDataSource;
    long long _currentZoomLevel;
    NSMutableIndexSet *_zoomLevelsPreferringDominantHeros;
    long long *_accumulatedSectionItems;
    long long _accumulatedSectionItemsCount;
    _Bool _isUpdatingSublayouts;
    unsigned long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
    _Bool _isInitialLoad;
    _Bool _performedInitialLoad;
    PXCuratedLibraryLayoutSpec *_spec;
    PXCuratedLibraryViewModel *_viewModel;
    id _lastVisibleDominantObjectReference;
    PXGSpriteReference *_lastHitSpriteReference;
    double _defaultInterlayoutSpacing;
    long long _presentedZoomLevel;
    PXAssetsDataSource *_presentedDataSource;
    struct UIEdgeInsets _padding;
}

@property(readonly, nonatomic) PXAssetsDataSource *presentedDataSource; // @synthesize presentedDataSource=_presentedDataSource;
@property(readonly, nonatomic) long long presentedZoomLevel; // @synthesize presentedZoomLevel=_presentedZoomLevel;
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) double defaultInterlayoutSpacing; // @synthesize defaultInterlayoutSpacing=_defaultInterlayoutSpacing;
@property(nonatomic) _Bool performedInitialLoad; // @synthesize performedInitialLoad=_performedInitialLoad;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(retain, nonatomic) PXGSpriteReference *lastHitSpriteReference; // @synthesize lastHitSpriteReference=_lastHitSpriteReference;
@property(retain, nonatomic) id lastVisibleDominantObjectReference; // @synthesize lastVisibleDominantObjectReference=_lastVisibleDominantObjectReference;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PXCuratedLibraryLayoutSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (id)_targetAssetCollectionReferenceInZoomLevel:(long long)arg1 forTransitionFromAssetCollectionReference:(id)arg2;
- (id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)arg1 zoomLevel:(long long)arg2;
- (id)_heroSectionLayoutClosestToSectionLayout:(id)arg1 zoomLevel:(long long)arg2;
@property(readonly, nonatomic) PXAssetsSectionLayout *dominantSectionLayout;
- (struct CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1;
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (void)layout:(id)arg1 collectIndexesOfChapterHeaderSublayouts:(id)arg2 heroSublayouts:(id)arg3 inRange:(struct _NSRange)arg4;
- (_Bool)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2;
- (void)_configureSectionLayout:(id)arg1 atIndex:(long long)arg2;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1;
@property(retain, nonatomic) id dominantHeroPreferences;
- (void)setPrefersDominantHero:(_Bool)arg1 forZoomLevel:(long long)arg2;
- (_Bool)prefersDominantHeroForZoomLevel:(long long)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (void)clearLastVisibleAreaAnchoringInformation;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_anchorVisibleArea;
- (void)_updateSublayoutsForSkimming;
- (void)_prepareAccumulatedSectionItemsBufferForSections:(long long)arg1;
- (void)_updateSublayoutsDataSource;
- (void)willFaultOutSublayout:(id)arg1;
- (void)didFaultInSublayout:(id)arg1 fromEstimatedContentSize:(struct CGSize)arg2;
- (void)_updatePrefetchedSectionsForFaultedInSublayout:(id)arg1;
- (void)_updateFaultOutsets;
- (void)update;
- (void)dealloc;
- (id)init;
- (id)initWithViewModel:(id)arg1 spec:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

