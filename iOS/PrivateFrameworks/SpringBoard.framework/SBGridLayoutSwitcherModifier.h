//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFluidSwitcherScrollProviding-Protocol.h>

@class NSString;
@protocol SBFluidSwitcherScrollProvidingDelegate, SBGridLayoutSwitcherModifierDelegate;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver, SBFluidSwitcherScrollProviding>
{
    _Bool _usesFixedCardSize;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    double _unroundedCardScale;
    id <SBGridLayoutSwitcherModifierDelegate> _gridDelegate;
    unsigned long long _scrollAxis;
    unsigned long long _fixedGroupingSize;
    NSString *_softFilteredBundleIdentifier;
    unsigned long long _alignment;
    struct CGSize _fixedCardSize;
}

@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *softFilteredBundleIdentifier; // @synthesize softFilteredBundleIdentifier=_softFilteredBundleIdentifier;
@property(nonatomic) struct CGSize fixedCardSize; // @synthesize fixedCardSize=_fixedCardSize;
@property(nonatomic, getter=isUsingFixedCardSize) _Bool usesFixedCardSize; // @synthesize usesFixedCardSize=_usesFixedCardSize;
@property(nonatomic) unsigned long long fixedGroupingSize; // @synthesize fixedGroupingSize=_fixedGroupingSize;
@property(nonatomic) unsigned long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(nonatomic) __weak id <SBGridLayoutSwitcherModifierDelegate> gridDelegate; // @synthesize gridDelegate=_gridDelegate;
@property(nonatomic) double cardScale; // @synthesize cardScale=_unroundedCardScale;
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (id)_softFilteredAppLayouts;
- (struct CGSize)_scaledCardSize;
- (struct CGSize)_cardSize;
- (unsigned long long)_numberOfRows;
- (unsigned long long)_numberOfColumns;
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;
- (double)_gridSwitcherPageScale;
- (double)_cardHeaderHeight;
- (unsigned long long)_columnForIndex:(unsigned long long)arg1;
- (unsigned long long)_rowForIndex:(unsigned long long)arg1;
- (double)_horizontalSpacing;
- (double)_verticalSpacing;
- (double)_trailingPadding;
- (double)_leadingPadding;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;
@property(readonly, nonatomic) double effectiveHorizontalSpacing;
- (void)_applyPrototypeSettings;
- (_Bool)cardsNeedBackgroundWallpaperTreatment;
- (void)resetAdjustedScrollingState;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1;
- (struct CGSize)fittedContentSize;
- (struct CGSize)contentSize;
- (struct CGPoint)pagingOrigin;
- (double)cardCornerRadiusInSwitcher;
- (double)centerYOffsetWhenPresented;
- (struct CGSize)interpageSpacingForPaging;
- (_Bool)scrollViewPagingEnabled;
- (double)decelerationRate;
- (double)switcherCardScale;
- (double)snapshotScale;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (double)contentViewScale;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithScrollAxis:(unsigned long long)arg1 fixedGroupingSize:(unsigned long long)arg2 cardScale:(double)arg3 alignment:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

