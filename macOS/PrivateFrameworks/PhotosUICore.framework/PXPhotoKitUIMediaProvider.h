//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSArray, PHAssetResourceQualityClass, PHCachingImageManager, PHImageManager;

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider
{
    NSArray *_thumbnailQualityClasses;
    struct CGSize _lastTargetSize;
    PHAssetResourceQualityClass *_lastResourceQualityClass;
    struct CGSize _masterThumbnailSize;
    PHImageManager *_imageManager;
    PHCachingImageManager *_cachingImageManager;
}

@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(readonly, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
- (void).cxx_destruct;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)cancelImageRequest:(long long)arg1;
- (struct CGSize)masterThumbnailSize;
- (void)enumerateAvailableThumbnailDataFormats:(CDUnknownBlockType)arg1;
- (void)preheatDataForThumbnailIndexes:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3;
- (id)_qualityClassForTargetSize:(struct CGSize)arg1;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithImageManager:(id)arg1;

@end

