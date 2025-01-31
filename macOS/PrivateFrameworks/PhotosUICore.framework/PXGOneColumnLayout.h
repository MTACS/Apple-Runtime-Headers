//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGItemsLayout.h>

#import <PhotosUICore/PXCuratedLibraryAllPhotosBodyLayout-Protocol.h>

@class NSString;

@interface PXGOneColumnLayout : PXGItemsLayout <PXCuratedLibraryAllPhotosBodyLayout>
{
    CDStruct_5f1286c4 _updateFlags;
    BOOL _isUpdating;
    BOOL _didAlreadyUpdateLoadedItems;
    BOOL _enableBestCropRect;
    BOOL _fillSafeAreaTopInset;
    int _mediaKind;
    int _presentationType;
    double _interItemSpacing;
    double _overrideAspectRatio;
    double _overrideAspectRatioAmount;
    double _aspectRatioLimit;
    id _anchorObjectReference;
    long long _anchorItem;
    struct CGPoint _anchorViewportCenter;
    struct CGPoint _anchorItemCenter;
    struct NSEdgeInsets _padding;
}

@property(nonatomic) struct CGPoint anchorItemCenter; // @synthesize anchorItemCenter=_anchorItemCenter;
@property(nonatomic) long long anchorItem; // @synthesize anchorItem=_anchorItem;
@property(nonatomic) struct CGPoint anchorViewportCenter; // @synthesize anchorViewportCenter=_anchorViewportCenter;
@property(retain, nonatomic) id anchorObjectReference; // @synthesize anchorObjectReference=_anchorObjectReference;
@property(nonatomic) BOOL fillSafeAreaTopInset; // @synthesize fillSafeAreaTopInset=_fillSafeAreaTopInset;
@property(nonatomic) double aspectRatioLimit; // @synthesize aspectRatioLimit=_aspectRatioLimit;
@property(nonatomic) double overrideAspectRatioAmount; // @synthesize overrideAspectRatioAmount=_overrideAspectRatioAmount;
@property(nonatomic) double overrideAspectRatio; // @synthesize overrideAspectRatio=_overrideAspectRatio;
@property(nonatomic) BOOL enableBestCropRect; // @synthesize enableBestCropRect=_enableBestCropRect;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) int presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) int mediaKind; // @synthesize mediaKind=_mediaKind;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;
- (void)loadedItemsDidChange;
- (void)invalidateLoadedItems;
- (BOOL)canHandleVisibleRectRejection;
- (void)visibleRectDidChange;
- (void)alphaDidChange;
- (void)screenScaleDidChange;
- (void)referenceSizeDidChange;
- (void)setVisibleRect:(struct CGRect)arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (struct _NSRange)itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1;
- (struct _NSRange)itemRangeInRect:(struct CGRect)arg1;
- (long long)itemClosestTo:(struct CGPoint)arg1;
- (struct CGRect)frameForItem:(long long)arg1;
- (struct _NSRange)_itemsToLoadForAnchorItem:(long long)arg1 visibleRect:(struct CGRect)arg2;
- (struct _NSRange)itemsToLoad;
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;
- (void)_updateSpriteStyles;
- (void)_updateVisibleRect;
- (void)_updateSprites;
- (void)update;
@property(readonly, copy) NSString *description;
- (id)init;
- (struct CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;
@property(nonatomic) BOOL loadItemsOutsideAnchorViewport;
@property(readonly, nonatomic) struct CGRect loadedItemsRect;
@property(nonatomic) BOOL hideIncompleteLastRow;
@property(readonly, nonatomic) long long visualItemShift;
- (BOOL)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(BOOL)arg3;
- (long long)columnForItem:(long long)arg1;
@property(nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) BOOL supportsContentMode;
@property(nonatomic) unsigned char mediaFlags;

// Remaining properties
@property(nonatomic) long long contentMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct _NSRange loadedItems;
@property(readonly) Class superclass;

@end

