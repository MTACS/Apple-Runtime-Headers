//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/_NSCollectionLayoutAuxiliaryHosting-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSString, _NSCollectionLayoutAuxiliaryItemSolver, _NSCollectionLayoutSectionGeometryTranslator, _NSCollectionPreferredSizes, _NSDataSourceSnapshotter, _NSRTree, _UICollectionCompositionalLayoutSolverOptions;
@protocol NSCollectionLayoutContainer;

@interface _NSCollectionCompositionalLayoutSolver : NSObject <_NSCollectionLayoutAuxiliaryHosting>
{
    BOOL _estimatesSizes;
    BOOL _layoutCannotBeSolved;
    BOOL _hasOrthogonalSrollingSections;
    BOOL _roundsToScreenScale;
    BOOL _layoutRTL;
    BOOL _shouldPerformPhysicalRTLTransforms;
    int _layoutAxis;
    id <NSCollectionLayoutContainer> _container;
    NSObject *_traitCollection;
    _NSDataSourceSnapshotter *_dataSourceSnapshot;
    double _interSectionSpacing;
    NSIndexSet *_orthogonalScrollingSectionIndexes;
    _UICollectionCompositionalLayoutSolverOptions *_options;
    Class _layoutAttributeClass;
    Class _invalidationContextClass;
    CDUnknownBlockType _invalidationHandler;
    double _memoizedScreenScale;
    CDUnknownBlockType _sectionProvider;
    NSIndexSet *_solutionBookmarkIndexesWithPinnedSupplementaryItems;
    NSArray *_solutionBookmarks;
    _NSRTree *_sectionIndexer;
    _NSCollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedSupplementaryAttributes;
    NSMutableDictionary *_cachedDecorationAttributes;
    NSArray *_globalSupplementaryItems;
    _NSCollectionLayoutAuxiliaryItemSolver *_globalSupplementarySolver;
    _NSCollectionPreferredSizes *_globalSupplementaryPreferredSizes;
    long long _numberOfSectionsWithTransformVisibleItemsHandler;
    struct CGSize _actualContentSize;
}

@property(nonatomic) BOOL shouldPerformPhysicalRTLTransforms; // @synthesize shouldPerformPhysicalRTLTransforms=_shouldPerformPhysicalRTLTransforms;
@property(nonatomic) long long numberOfSectionsWithTransformVisibleItemsHandler; // @synthesize numberOfSectionsWithTransformVisibleItemsHandler=_numberOfSectionsWithTransformVisibleItemsHandler;
@property(retain, nonatomic) _NSCollectionPreferredSizes *globalSupplementaryPreferredSizes; // @synthesize globalSupplementaryPreferredSizes=_globalSupplementaryPreferredSizes;
@property(retain, nonatomic) _NSCollectionLayoutAuxiliaryItemSolver *globalSupplementarySolver; // @synthesize globalSupplementarySolver=_globalSupplementarySolver;
@property(retain, nonatomic) NSArray *globalSupplementaryItems; // @synthesize globalSupplementaryItems=_globalSupplementaryItems;
@property(retain, nonatomic) NSMutableDictionary *cachedDecorationAttributes; // @synthesize cachedDecorationAttributes=_cachedDecorationAttributes;
@property(retain, nonatomic) NSMutableDictionary *cachedSupplementaryAttributes; // @synthesize cachedSupplementaryAttributes=_cachedSupplementaryAttributes;
@property(retain, nonatomic) NSMutableDictionary *cachedItemAttributes; // @synthesize cachedItemAttributes=_cachedItemAttributes;
@property(retain, nonatomic) _NSCollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator; // @synthesize sectionGeometryTranslator=_sectionGeometryTranslator;
@property(retain, nonatomic) _NSRTree *sectionIndexer; // @synthesize sectionIndexer=_sectionIndexer;
@property(retain, nonatomic) NSArray *solutionBookmarks; // @synthesize solutionBookmarks=_solutionBookmarks;
@property(retain, nonatomic) NSIndexSet *solutionBookmarkIndexesWithPinnedSupplementaryItems; // @synthesize solutionBookmarkIndexesWithPinnedSupplementaryItems=_solutionBookmarkIndexesWithPinnedSupplementaryItems;
@property(nonatomic) struct CGSize actualContentSize; // @synthesize actualContentSize=_actualContentSize;
@property(nonatomic) BOOL layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(copy, nonatomic) CDUnknownBlockType sectionProvider; // @synthesize sectionProvider=_sectionProvider;
@property(nonatomic) BOOL roundsToScreenScale; // @synthesize roundsToScreenScale=_roundsToScreenScale;
@property(nonatomic) double memoizedScreenScale; // @synthesize memoizedScreenScale=_memoizedScreenScale;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) Class invalidationContextClass; // @synthesize invalidationContextClass=_invalidationContextClass;
@property(retain, nonatomic) Class layoutAttributeClass; // @synthesize layoutAttributeClass=_layoutAttributeClass;
@property(retain, nonatomic) _UICollectionCompositionalLayoutSolverOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSIndexSet *orthogonalScrollingSectionIndexes; // @synthesize orthogonalScrollingSectionIndexes=_orthogonalScrollingSectionIndexes;
@property(nonatomic) BOOL hasOrthogonalSrollingSections; // @synthesize hasOrthogonalSrollingSections=_hasOrthogonalSrollingSections;
@property(nonatomic) BOOL layoutCannotBeSolved; // @synthesize layoutCannotBeSolved=_layoutCannotBeSolved;
@property(nonatomic) BOOL estimatesSizes; // @synthesize estimatesSizes=_estimatesSizes;
@property(readonly, nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property(retain, nonatomic) _NSDataSourceSnapshotter *dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(nonatomic) int layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(readonly, nonatomic) NSObject *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
- (void).cxx_destruct;
- (struct CGRect)bounds;
- (struct CGRect)_dynamicReferenceBounds;
- (id)auxiliaryHostPreferredSizes;
- (id)auxiliaryHostSupplementaryEnroller;
- (long long)auxiliaryHostAuxiliaryKind;
- (int)auxiliaryHostLayoutAxis;
- (BOOL)auxiliaryHostShouldLayoutRTL;
- (id)auxiliaryHostAuxiliaryItems;
- (id)auxiliaryHostContainer;
- (struct CGSize)auxiliaryHostPinningContentSize;
- (struct CGSize)auxiliaryHostContentSize;
- (id)_queryClientForSectionDefintionForSectionIndex:(long long)arg1;
- (id)_resolveOptionallyQueryingForSectionDefintions:(BOOL)arg1;
- (struct CGPoint)_firstBookmarkOffset;
- (void)_restoreStateFromBookmarkSnapshots:(id)arg1 bookmarks:(id)arg2 update:(id)arg3;
- (id)_snapshotBookmarks:(id)arg1;
- (void)_registerDecorationItemsIfNeeded:(id)arg1;
- (void)_configureLayoutForSections:(id)arg1;
- (BOOL)_sectionHasBackgroundDecorationView:(long long)arg1;
- (void)_updateBookmarkOffsetsForGlobalSupplementariesIfNeeded;
- (void)_updateSectionIndexer:(id)arg1 frame:(struct CGRect)arg2 solution:(id)arg3 section:(long long)arg4;
- (void)_updateGeometryTranslator;
- (void)_diffNonItemSupplementariesForUpdate:(id)arg1 resolveResult:(id)arg2 initialSupplementaryKeysSectionDict:(id)arg3;
- (id)_computeInitialSupplementaryKeysSectionDictForUpdate:(id)arg1;
- (void)_computeDeletedItemsAffectingSupplementariesForUpdate:(id)arg1 resolveResult:(id)arg2;
- (id)_rebasedSectionLayoutsWithDataSourceTranslator:(id)arg1;
- (id)_rebasedPreferredSizesWithDataSourceTranslator:(id)arg1;
- (struct CGSize)_clampedSolutionSizeForSolution:(id)arg1 layoutAxis:(int)arg2 scrollsOrthogonally:(BOOL)arg3;
- (struct CGRect)_globalFrameForSolutionFrame:(struct CGRect)arg1 bookmark:(id)arg2;
- (void)_recomputeSolutionBookmarksAndContentSize;
- (void)_invalidateAllAttributes;
- (void)_invalidateAttributes:(id)arg1;
- (void)_layoutAttributesForElementsInRect:(struct CGRect)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setCachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3;
- (id)_cachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2;
- (void)_setCachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3;
- (id)_cachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2;
- (id)_createAndCacheLayoutAttributesForDecorationItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(struct CGRect)arg3 additionalContentInset:(struct NSDirectionalEdgeInsets)arg4 zIndex:(long long)arg5;
- (id)_createAndCacheLayoutAttributesForSupplementaryItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(struct CGRect)arg3 zIndex:(long long)arg4;
- (id)_createAndCacheLayoutAttributesForItemAtIndexPath:(id)arg1 frame:(struct CGRect)arg2;
- (void)_enrichLayoutAttributes:(id)arg1 inSection:(id)arg2;
- (void)_solveWithSectionLayouts:(id)arg1 preferredSizesDict:(id)arg2 dataSourceSnapshot:(id)arg3 update:(id)arg4;
- (void)_solve;
- (id)_attributesQueryRectsForQueryRect:(struct CGRect)arg1;
- (BOOL)elementShouldAppearAbove:(id)arg1;
- (struct CGRect)orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(struct CGRect)arg2;
- (BOOL)orthogonalScrollingSectionDecorationShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (BOOL)orthogonalScrollingSectionSupplementaryShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (double)orthogonalScrollingPagingDimensionForSection:(long long)arg1;
- (struct CGPoint)orthogonalContentOffsetForProposedContentOffset:(struct CGPoint)arg1 section:(long long)arg2;
- (BOOL)orthogonalScrollingUsesCustomContentOffsetForSection:(long long)arg1;
- (BOOL)shouldCenterOrthogonalScrollingPageForSection:(long long)arg1;
- (id)extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (long long)orthogonalScrollingBehaviorForSection:(long long)arg1;
- (struct CGVector)scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (struct CGPoint)orthogonalOffsetForSection:(long long)arg1;
- (void)setOrthogonalOffset:(struct CGPoint)arg1 forSection:(long long)arg2;
- (struct NSDirectionalEdgeInsets)contentInsetsForSection:(long long)arg1;
- (struct CGSize)effectiveContentSizeForSection:(long long)arg1;
- (struct CGRect)layoutRectForSection:(long long)arg1;
@property(readonly, nonatomic) struct CGSize contentSize;
- (id)visualDescription;
- (id)resolveForInvalidatedPreferredAttributes:(id)arg1;
- (BOOL)updatePreferredSizeIfNeededForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (BOOL)shouldInvalidateForNewTraitCollection:(id)arg1;
- (id)resolveForUpdatedGlobalSupplementaries:(id)arg1;
- (id)resolveForContainerChange:(id)arg1;
- (id)resolveSolutionForUpdate:(id)arg1;
- (void)prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (id)mutatedVisibleItemsForElementsForVisibleBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL shouldTransformVisibleItemsDuringContentOffsetChanges;
@property(readonly, nonatomic) NSArray *layoutAttributesForPinnedSupplementaryItems;
@property(readonly, nonatomic) BOOL hasPinnedSupplementaryItems;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateCachedDecorationAttributes;
- (void)invalidateCachedSupplementaryAttributes;
- (void)invalidateCachedItemsAttributes;
- (void)invalidateCachedItemsAttributesForItemsAtIndexPaths:(id)arg1;
- (void)invalidateCachedDecorationAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)invalidateCachedSupplementaryAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)updateContainerOffsetForPinnedSupplementarySectionItems:(struct CGPoint)arg1;
- (struct CGRect)_horizontallyFlipFrameForRTLIfNeeded:(struct CGRect)arg1 inSection:(long long)arg2;
- (id)initWithContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 dataSourceSnapshot:(id)arg4 options:(id)arg5 sectionProvider:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

