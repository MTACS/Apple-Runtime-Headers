//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSError, NSString, PXDisplayAssetUIView, PXGadgetSpec, PXRoundedCornerOverlayView, PXUIAssetBadgeView, PXUIMediaProvider, UIImage, UILabel;
@protocol PXDisplayAsset, PXDisplaySuggestion;

@interface PXForYouSuggestionGadgetContentView : UIView <PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver>
{
    CDStruct_d97c9657 _updateFlags;
    _Bool _forceAssetContentReload;
    _Bool _assetContentHidden;
    _Bool _blursDegradedContent;
    id <PXDisplaySuggestion> _suggestion;
    id <PXDisplayAsset> _keyAsset;
    NSString *_title;
    NSString *_subtitle;
    PXUIMediaProvider *_mediaProvider;
    PXGadgetSpec *_gadgetSpec;
    long long _mode;
    PXDisplayAssetUIView *_assetView;
    PXUIAssetBadgeView *_badgeView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXRoundedCornerOverlayView *_roundedOverlayView;
    NSString *_caption;
    unsigned long long _badgeTypes;
}

+ (id)placeholderFilters;
+ (struct UIFont *)titleLabelFont;
+ (struct UIFont *)suggestionLabelFont;
+ (double)scaledSubtitleBaselineDistance;
+ (double)scaledTitleWithSuggestionBaselineDistance;
+ (double)scaledTitleBaselineDistance;
+ (double)scaledSuggestionBaselineDistance;
+ (void)preloadResources;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withSuggestion:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
@property(nonatomic) unsigned long long badgeTypes; // @synthesize badgeTypes=_badgeTypes;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) PXRoundedCornerOverlayView *roundedOverlayView; // @synthesize roundedOverlayView=_roundedOverlayView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXUIAssetBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PXDisplayAssetUIView *assetView; // @synthesize assetView=_assetView;
@property(nonatomic) _Bool blursDegradedContent; // @synthesize blursDegradedContent=_blursDegradedContent;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool assetContentHidden; // @synthesize assetContentHidden=_assetContentHidden;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(retain, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(retain, nonatomic) id <PXDisplaySuggestion> suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)_handleChangedAsset:(id)arg1;
- (void)_updateBadgeContents;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateTitleFont;
- (void)_updateAssetViewPlaceholderFilters;
- (id)previewAssetView;
- (void)_updateAssetViewAnimatedContentEnabled;
- (void)_updateAssetView;
- (void)_updateBadgeViews;
- (void)_updateRoundedCornerOverlayView;
@property(readonly, nonatomic) UIImage *currentAssetImage;
@property(readonly, nonatomic) struct CGRect assetContentsRect;
- (struct CGRect)assetContentBoundsInCoordinateSpace:(id)arg1;
- (struct CGSize)_calculateLayoutWithInputSize:(struct CGSize)arg1 apply:(_Bool)arg2;
- (struct CGRect)_assetFrameInBounds:(struct CGRect)arg1;
- (void)_updateIfNeeded;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool isDisplayingFullQualityContent;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

