//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Widgets/WGMajorListViewController.h>

#import <Widgets/WGWidgetPinningTeachingViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, WGWidgetPinningTeachingView;

@interface WGCarouselListViewController : WGMajorListViewController <WGWidgetPinningTeachingViewDelegate>
{
    id _sizeChangeObserver;
    _Bool _revealed;
    _Bool _visuallyRevealed;
    _Bool _footerVisible;
    double _revealProgress;
    double _dismissProgress;
    NSMutableDictionary *_catchupProperties;
    NSMutableDictionary *_catchupTimers;
    WGWidgetPinningTeachingView *_teachingView;
    NSMutableDictionary *_resizeContexts;
    NSMutableDictionary *_cachedThresholds;
    struct WGWidgetListSettings _listSettings;
}

@property(retain, nonatomic) NSMutableDictionary *cachedThresholds; // @synthesize cachedThresholds=_cachedThresholds;
@property(retain, nonatomic) NSMutableDictionary *resizeContexts; // @synthesize resizeContexts=_resizeContexts;
@property(retain, nonatomic) WGWidgetPinningTeachingView *teachingView; // @synthesize teachingView=_teachingView;
@property(nonatomic, getter=isFooterVisible) _Bool footerVisible; // @synthesize footerVisible=_footerVisible;
@property(retain, nonatomic) NSMutableDictionary *catchupTimers; // @synthesize catchupTimers=_catchupTimers;
@property(retain, nonatomic) NSMutableDictionary *catchupProperties; // @synthesize catchupProperties=_catchupProperties;
@property(nonatomic, getter=isVisuallyRevealed) _Bool visuallyRevealed; // @synthesize visuallyRevealed=_visuallyRevealed;
@property(nonatomic) double dismissProgress; // @synthesize dismissProgress=_dismissProgress;
@property(nonatomic) double revealProgress; // @synthesize revealProgress=_revealProgress;
@property(nonatomic, getter=isRevealed) _Bool revealed; // @synthesize revealed=_revealed;
@property(nonatomic) struct WGWidgetListSettings listSettings; // @synthesize listSettings=_listSettings;
- (void).cxx_destruct;
- (_Bool)shouldShowTeachingView;
- (void)widgetPinningTeachingViewDidSelectNo:(id)arg1;
- (void)widgetPinningTeachingViewDidSelectYes:(id)arg1;
- (id)_thresholdsForCell:(id)arg1;
- (void)_styleTeachingView:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 intersectionRect:(struct CGRect)arg3;
- (void)_styleHeaderView:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 intersectionRect:(struct CGRect)arg3;
- (void)_styleFooterView:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 intersectionRect:(struct CGRect)arg3 containerHeight:(double)arg4;
- (void)_styleFullyInvisibleBottomCell:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 thresholds:(id)arg3;
- (void)_styleDisapearingCellForBottomEdge:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 previousCellFrameInContainerView:(struct CGRect)arg3 thresholds:(id)arg4;
- (void)_styleCroppedAndScaledCellForBottomEdge:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 intersectionRect:(struct CGRect)arg3 thresholds:(id)arg4;
- (void)_styleCroppedCellForBottomEdge:(id)arg1 intersectionRect:(struct CGRect)arg2 thresholds:(id)arg3;
- (void)_styleFullyVisibleCell:(id)arg1;
- (void)_styleCroppedCellForTopEdge:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 intersectionRect:(struct CGRect)arg3 thresholds:(id)arg4;
- (void)_styleCroppedAndScaledCellForTopEdge:(id)arg1 withCellFrameInScrollViewBounds:(struct CGRect)arg2 thresholds:(id)arg3;
- (void)_styleFullyInvisibleTopCell:(id)arg1;
- (struct CGRect)_cellFrameInScrollBoundsForCell:(id)arg1;
- (void)_updateTeachingViewVisibilityAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_isViewControllerVisible;
- (_Bool)_hasEnoughContentToScroll;
- (id)_identifierForCell:(id)arg1;
- (unsigned long long)_indexForNextCellAfterContentOffset:(double)arg1;
- (unsigned long long)_indexOfFirstNonFavoritedWidgetInStackView;
- (double)easedOutValueForValue:(double)arg1;
- (void)_updateRevealState;
- (void)_updateCarouselEffect;
- (void)_createProperties;
- (id)_newCatchupPropertyForCell:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_updateCarouselAndRevealState;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setHeaderVisible:(_Bool)arg1;
- (_Bool)headerVisible;
- (void)setContainerView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)setVisuallyRevealed:(_Bool)arg1 withSlowAnimation:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resizeWidgetWrapperView:(id)arg1 toSize:(struct CGSize)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didUpdateStackViewArrangedSubviews;
- (unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3;
- (void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (void)dealloc;
- (id)initWithWidgetDiscoveryController:(id)arg1 listSettings:(struct WGWidgetListSettings)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

