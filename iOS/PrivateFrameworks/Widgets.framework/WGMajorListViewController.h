//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Widgets/WGWidgetListViewController.h>

#import <Widgets/WGWidgetIconAnimationExtraViewsProviding-Protocol.h>
#import <Widgets/WGWidgetListFooterViewDelegate-Protocol.h>

@class NSArray, NSString, UIView, UIViewController, WGWidgetListFooterView, WGWidgetListHeaderView;
@protocol WGMajorListViewControllerDelegate;

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate, WGWidgetIconAnimationExtraViewsProviding>
{
    _Bool _footerVisible;
    _Bool _headerVisible;
    UIView *_containerView;
    WGWidgetListFooterView *_footerView;
    UIViewController *_headerContentViewController;
    WGWidgetListHeaderView *_headerView;
}

@property(nonatomic, getter=isHeaderVisible) _Bool headerVisible; // @synthesize headerVisible=_headerVisible;
@property(readonly, nonatomic) WGWidgetListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIViewController *headerContentViewController; // @synthesize headerContentViewController=_headerContentViewController;
@property(readonly, nonatomic) WGWidgetListFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, getter=_isFooterVisible, setter=_setFooterVisible:) _Bool _footerVisible; // @synthesize _footerVisible;
- (void).cxx_destruct;
- (void)_updateEditButtonVisibilityAnimated:(_Bool)arg1;
- (void)_updateFooterVisibility;
- (void)_updateHeaderVisibility;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (void)_updateFooterViewShouldBlurContent;
- (void)presentEditView:(id)arg1;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEditingIcons:(_Bool)arg1;
- (void)setShouldBlurContent:(_Bool)arg1;
- (unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3;
- (void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (void)_configureStackView;
- (id)_group;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) UIView *extraViewsContainer;
@property(readonly, nonatomic) _Bool shouldAnimateLastTwoViewsAsOne;
@property(readonly, copy, nonatomic) NSArray *extraViews;
- (void)_insertHeaderView;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WGMajorListViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

