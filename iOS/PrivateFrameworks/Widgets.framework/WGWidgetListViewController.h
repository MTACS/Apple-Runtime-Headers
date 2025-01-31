//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Widgets/UIScrollViewDelegate-Protocol.h>
#import <Widgets/WGWidgetDebugging-Protocol.h>
#import <Widgets/WGWidgetDiscoveryObserving-Protocol.h>
#import <Widgets/WGWidgetExtensionVisibilityProviding-Protocol.h>
#import <Widgets/WGWidgetHostingViewControllerDelegate-Protocol.h>
#import <Widgets/WGWidgetListItemViewControllerDelegate-Protocol.h>

@class MTMaterialView, NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, UIControl, UIScrollView, UIStackView, WGWidgetDiscoveryController;
@protocol WGWidgetListViewControllerDelegate;

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate, WGWidgetExtensionVisibilityProviding>
{
    WGWidgetDiscoveryController *_discoveryController;
    MTMaterialView *_captureOnlyMaterialView;
    NSMutableDictionary *_userInterfaceStylesToCaptureOnlyMaterialViews;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSMutableDictionary *_cancelTouchesAssertionsByWidgetID;
    NSMutableDictionary *_widgetIDsToItemVCs;
    struct CGSize _maxVisibleContentSize;
    _Bool _shouldBlurContent;
    _Bool _editingIcons;
    id <WGWidgetListViewControllerDelegate> _delegate;
    UIControl *_editButton;
    NSArray *_previouslyVisibleWidgetIDs;
    NSLayoutConstraint *_stackViewBottomConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *stackViewBottomConstraint; // @synthesize stackViewBottomConstraint=_stackViewBottomConstraint;
@property(retain, nonatomic, getter=_previouslyVisibleWidgetIDs, setter=_setPreviouslyVisibleWidgetIDs:) NSArray *previouslyVisibleWidgetIDs; // @synthesize previouslyVisibleWidgetIDs=_previouslyVisibleWidgetIDs;
@property(nonatomic, getter=isEditingIcons) _Bool editingIcons; // @synthesize editingIcons=_editingIcons;
@property(retain, nonatomic) UIControl *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) _Bool shouldBlurContent; // @synthesize shouldBlurContent=_shouldBlurContent;
@property(nonatomic) __weak id <WGWidgetListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isWidgetExtensionVisible:(id)arg1;
- (id)widgetListItemViewController:(id)arg1 widgetHostWithIdentifier:(id)arg2;
- (struct CGRect)visibleFrameForWidget:(id)arg1;
- (_Bool)managingContainerIsVisibleForWidget:(id)arg1;
- (void)remoteViewControllerDidDisconnectForWidget:(id)arg1;
- (void)brokenViewDidAppearForWidget:(id)arg1;
- (void)remoteViewControllerViewDidHideForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (struct UIEdgeInsets)layoutMarginForWidget:(id)arg1;
- (struct UIEdgeInsets)marginInsetsForWidget:(id)arg1;
- (void)unregisterWidgetForRefreshEvents:(id)arg1;
- (void)registerWidgetForRefreshEvents:(id)arg1;
- (struct CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (struct CGSize)_maxVisibleContentSize;
- (struct CGRect)_visibleContentFrameForBounds:(struct CGRect)arg1 withContentOccludingInsets:(struct UIEdgeInsets)arg2;
- (void)widgetDiscoveryController:(id)arg1 orderDidChangeForWidgetIdentifiers:(id)arg2;
- (void)widgetDiscoveryControllerSignificantWidgetsChange:(id)arg1;
- (void)_scrollViewDidStop;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_presentEditViewController;
- (id)_wrapperViewForWidgetPlatterView:(id)arg1;
- (void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1;
- (id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
- (void)_invokeBlockWithPlatterViewsVisibleInBounds:(CDUnknownBlockType)arg1;
- (void)_invokeBlockWithPlatterViewsVisibleInRect:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)_invokeBlockWithAllPlatterViews:(CDUnknownBlockType)arg1;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 withPlatterViewsPassingTest:(CDUnknownBlockType)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)resizeWidgetWrapperView:(id)arg1 toSize:(struct CGSize)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)_adjustContentOffsetToInsideContent:(_Bool)arg1;
- (void)_invalidateAllCancelTouchesAssertions;
- (void)_cancelTouchesForWidget:(id)arg1;
- (void)_cancelTouchesForHitWidgetIfNecessaryAndDisableTouchesOnAllWidgets;
- (id)_platterViewAtLocation:(struct CGPoint)arg1;
- (void)_repopulateStackView;
- (void)_updateBackgroundViewForPlatter:(id)arg1;
- (id)_scrollViewIfLoaded;
- (id)_scrollViewLoadingIfNecessary:(_Bool)arg1;
- (void)_configureScrollView;
- (void)_invalidateAllAlternateCaptureOnlyMaterialViews;
- (void)_invalidateAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1;
- (void)_configureAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1;
- (void)_configureCaptureOnlyMaterialView;
- (id)_newCaptureOnlyMaterialView;
- (void)_pruneAlternateCaptureOnlyMaterialViews;
- (CDUnknownBlockType)_insert:(_Bool)arg1 listItem:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(_Bool)arg4;
- (void)_didUpdateStackViewArrangedSubviews;
- (CDUnknownBlockType)_beginInsertion:(_Bool)arg1 ofListItem:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(_Bool)arg4;
- (unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3;
- (void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (void)_configureStackView;
- (id)_platterViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (id)_listItemViewControllerForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(_Bool)arg2;
@property(readonly, nonatomic, getter=_group) NSString *group;
@property(readonly, nonatomic) unsigned long long widgetCount;
@property(readonly, nonatomic) UIScrollView *widgetListView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)visibleWidgetIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

