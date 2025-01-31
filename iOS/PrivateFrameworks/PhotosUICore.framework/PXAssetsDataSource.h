//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@protocol PXDisplayAssetCollection;

@interface PXAssetsDataSource : PXSectionedDataSource
{
}

- (void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2;
- (id)assetCollectionReferenceNearestToObjectReference:(id)arg1;
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1;
- (_Bool)hasCurationForAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsForAssetCollection:(id)arg1;
- (struct PXSimpleIndexPath)keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)startingAssetReference;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (Class)objectReferenceClassForItem;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg2;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1;
- (id)assetCollectionReferenceForAssetCollectionReference:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForAssetCollectionReference:(id)arg1;
- (id)assetCollectionReferenceAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (Class)objectReferenceClassForSection;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> lastAssetCollection;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> firstAssetCollection;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)estimatedAssetsCountLocalizedString;
- (long long)aggregateMediaType;
- (long long)totalNumberOfItems;
- (id)photosGraphSuggestedContributions;
- (_Bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;
- (id)metadataAssetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;

@end

