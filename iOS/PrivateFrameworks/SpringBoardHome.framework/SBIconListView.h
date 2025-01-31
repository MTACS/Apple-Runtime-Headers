//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListModelObserver-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SBFolderIconImageCache, SBHIconImageCache, SBIconListModel, SBIconListViewDraggingDestinationDelegate, SBIconListViewIconLocationTransitionHandler, _UILegibilitySettings;
@protocol SBIconListLayout, SBIconListLayoutDelegate, SBIconListLayoutProvider, SBIconListViewDragDelegate, SBIconViewProviding;

@interface SBIconListView : UIView <SBIconListModelObserver, BSDescriptionProviding>
{
    NSMutableArray *_removedIcons;
    _Bool _needsLayout;
    _Bool _inLayout;
    _Bool _rotating;
    _Bool _purged;
    _Bool _ignoreNextWindowChange;
    _Bool _performingSpecialIconAnimations;
    NSMapTable *_iconViews;
    NSMapTable *_specialIconAnimations;
    SBIconListViewDraggingDestinationDelegate *_draggingDelegate;
    struct __CFRunLoopObserver *_layoutRunLoopObserver;
    unsigned long long _predictedIconViewCount;
    _Bool _editing;
    _Bool _layoutReversed;
    _Bool _pausesIconsForScrolling;
    _Bool _iconsNeedLayout;
    _Bool _wantsFastIconReordering;
    _Bool _occluded;
    _Bool _alignsIconsOnPixelBoundaries;
    id <SBIconListLayoutProvider> _layoutProvider;
    long long _orientation;
    double _statusBarHeight;
    unsigned long long _userInterfaceLayoutDirectionHandling;
    unsigned long long _iconViewConfigurationOptions;
    _UILegibilitySettings *_legibilitySettings;
    id <SBIconListLayoutDelegate> _layoutDelegate;
    SBIconListModel *_model;
    id <SBIconViewProviding> _iconViewProvider;
    NSString *_iconLocation;
    double _iconContentScale;
    id <SBIconListViewDragDelegate> _dragDelegate;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconListViewIconLocationTransitionHandler *_currentIconLocationTransitionHandler;
    struct _NSRange _visibleColumnRange;
    struct SBIconListPredictedVisibleColumn _predictedVisibleColumn;
}

+ (struct CGRect)defaultFrameForOrientation:(long long)arg1;
+ (unsigned long long)defaultIconViewConfigurationOptions;
+ (long long)rotationAnchor;
@property(retain, nonatomic) SBIconListViewIconLocationTransitionHandler *currentIconLocationTransitionHandler; // @synthesize currentIconLocationTransitionHandler=_currentIconLocationTransitionHandler;
@property(nonatomic) _Bool alignsIconsOnPixelBoundaries; // @synthesize alignsIconsOnPixelBoundaries=_alignsIconsOnPixelBoundaries;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(nonatomic, getter=isOccluded) _Bool occluded; // @synthesize occluded=_occluded;
@property(nonatomic) _Bool wantsFastIconReordering; // @synthesize wantsFastIconReordering=_wantsFastIconReordering;
@property(nonatomic) __weak id <SBIconListViewDragDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
@property(nonatomic) double iconContentScale; // @synthesize iconContentScale=_iconContentScale;
@property(nonatomic) _Bool iconsNeedLayout; // @synthesize iconsNeedLayout=_iconsNeedLayout;
@property(nonatomic) struct SBIconListPredictedVisibleColumn predictedVisibleColumn; // @synthesize predictedVisibleColumn=_predictedVisibleColumn;
@property(nonatomic) struct _NSRange visibleColumnRange; // @synthesize visibleColumnRange=_visibleColumnRange;
@property(copy, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(retain, nonatomic) SBIconListModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SBIconListLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) unsigned long long iconViewConfigurationOptions; // @synthesize iconViewConfigurationOptions=_iconViewConfigurationOptions;
@property(nonatomic) unsigned long long userInterfaceLayoutDirectionHandling; // @synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling;
@property(nonatomic) _Bool pausesIconsForScrolling; // @synthesize pausesIconsForScrolling=_pausesIconsForScrolling;
@property(nonatomic, getter=isLayoutReversed) _Bool layoutReversed; // @synthesize layoutReversed=_layoutReversed;
@property(nonatomic, getter=isPurged) _Bool purged; // @synthesize purged=_purged;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) id <SBIconListLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_teardownLayoutRunloopObserverIfNeeded;
- (void)_setupLayoutRunLoopObserver;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (_Bool)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
- (void)willRotateWithTransitionCoordinator:(id)arg1;
- (void)iconLocationTransitionHandler:(id)arg1 completeTransition:(_Bool)arg2;
- (void)iconLocationTransitionHandler:(id)arg1 setProgress:(double)arg2;
@property(readonly, nonatomic, getter=isTransitioningIconLocation) _Bool transitioningIconLocation;
- (id)beginTransitionToIconLocation:(id)arg1 reason:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)ignoreNextWindowChange;
- (struct SBIconCoordinate)coordinateAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)fractionalCoordinateAtPoint:(struct CGPoint)arg1;
- (unsigned long long)rowAtPoint:(struct CGPoint)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2;
- (unsigned long long)rowAtPoint:(struct CGPoint)arg1;
- (unsigned long long)columnAtPoint:(struct CGPoint)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2 fractionOfDistanceThroughColumn:(double *)arg3;
- (unsigned long long)columnAtPoint:(struct CGPoint)arg1 fractionOfDistanceThroughColumn:(double *)arg2;
- (unsigned long long)columnAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1;
@property(readonly, nonatomic) double verticalIconPadding;
@property(readonly, nonatomic) double horizontalIconPadding;
- (double)horizontalBumpForColumn:(unsigned long long)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2;
@property(readonly, nonatomic) _Bool automaticallyAdjustsLayoutMetricsToFit;
- (void)getLayoutMetrics:(struct SBIconListLayoutMetrics *)arg1;
- (void)addDragObserver:(id)arg1 forDropSession:(id)arg2;
- (void)setIconsLabelAlpha:(double)arg1;
- (_Bool)isDock;
- (void)enumerateVisibleIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_updateEditingStateForIcons:(id)arg1 animated:(_Bool)arg2;
- (void)updateEditingStateAnimated:(_Bool)arg1;
- (void)hideAllIcons;
- (void)showAllIcons;
- (_Bool)_iconIsGapAdjacentAtIndex:(unsigned long long)arg1;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2 proposedOrder:(long long *)arg3;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2;
- (void)layoutIconsIfNeeded:(double)arg1 animationType:(long long)arg2 options:(unsigned long long)arg3;
- (void)layoutIconsIfNeeded:(double)arg1;
- (void)layoutIconsNow;
- (void)setIconsNeedLayout;
- (void)didAddIconView:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)shouldReparentView:(id)arg1;
- (_Bool)isDisplayingIconView:(id)arg1;
- (unsigned long long)indexOfIcon:(id)arg1;
- (struct SBIconCoordinate)coordinateForIconAtIndex:(unsigned long long)arg1;
- (struct SBIconCoordinate)coordinateForIcon:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)makeIconView;
- (id)iconViewForIcon:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfDisplayedIconViews;
- (id)displayedIconViewForIcon:(id)arg1;
- (struct CGPoint)centerForIconAtIndex:(unsigned long long)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2;
- (struct CGPoint)centerForIconAtIndex:(unsigned long long)arg1;
- (struct CGPoint)centerForIconCoordinate:(struct SBIconCoordinate)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2;
- (struct CGPoint)centerForIconCoordinate:(struct SBIconCoordinate)arg1;
- (struct CGPoint)centerForIcon:(id)arg1;
- (struct CGPoint)originForIcon:(id)arg1;
- (struct CGPoint)originForIconAtIndex:(unsigned long long)arg1;
- (struct CGSize)alignmentIconViewSize;
@property(readonly, nonatomic) struct CGSize alignmentIconSize;
- (void)removeAllIconAnimations;
- (void)setAlphaForAllIcons:(double)arg1;
- (id)removedIcons;
- (void)layoutAndCreateIcon:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)performZoomOutSpecialIconAnimationWithIcon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performSpecialIconAnimation:(long long)arg1 icon:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performSpecialIconAnimationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)markIcon:(id)arg1 asNeedingAnimation:(long long)arg2;
- (void)fadeInIconView:(id)arg1;
- (void)fadeInIcon:(id)arg1;
- (void)popIconView:(id)arg1;
- (void)popIcon:(id)arg1;
- (_Bool)allowsAddingIconCount:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long firstFreeSlotIndex;
- (_Bool)containsIcon:(id)arg1;
@property(readonly, nonatomic, getter=isFull) _Bool full;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, copy, nonatomic) NSArray *visibleIcons;
@property(readonly, copy, nonatomic) NSArray *icons;
- (unsigned long long)rowForIcon:(id)arg1;
@property(readonly, copy) NSString *description;
- (struct SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2;
- (unsigned long long)indexForCoordinate:(struct SBIconCoordinate)arg1 forOrientation:(long long)arg2;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
@property(readonly, nonatomic) unsigned long long maximumIconCount;
@property(readonly, nonatomic) unsigned long long iconRowsForSpacingCalculation;
@property(readonly, nonatomic) unsigned long long iconsInRowForSpacingCalculation;
@property(readonly, nonatomic) unsigned long long iconColumnsForCurrentOrientation;
@property(readonly, nonatomic) unsigned long long iconRowsForCurrentOrientation;
@property(readonly, nonatomic) id <SBIconListLayout> layout;
- (long long)layoutOrientation;
@property(readonly, nonatomic) _Bool adaptsOrientationToTraitCollection;
- (struct CGSize)iconImageSize;
@property(readonly, nonatomic) Class baseIconViewClass;
- (void)removeAllIconViews;
- (void)removeIconView:(id)arg1;
- (_Bool)isRTL;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
- (id)tintColor;
- (void)dealloc;
- (id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

