//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class PXGLayout;
@protocol PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver;

@protocol PXGDisplayAssetSource <PXGLayoutContentSource>
- (id <PXGDisplayAssetRequestObserver>)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(PXGLayout *)arg2;
- (id <PXDisplayAssetFetchResult>)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(PXGLayout *)arg2;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(PXGLayout *)arg1;
@end

