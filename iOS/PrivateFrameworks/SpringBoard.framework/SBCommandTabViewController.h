//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBIconViewDelegate-Protocol.h>

@class MTMaterialShadowView, NSLayoutConstraint, NSMutableArray, NSOrderedSet, NSString, SBIconController, SBIconModel, SBIconView, UILabel, UIPanGestureRecognizer, UIStackView, UIView;
@protocol SBCommandTabViewControllerDelegate;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate>
{
    NSOrderedSet *_recentDisplayItems;
    unsigned long long _selectedIndex;
    SBIconController *_iconController;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    MTMaterialShadowView *_backgroundMaterialView;
    UIView *_blurredBackgroundView;
    UIView *_selectionSquareView;
    SBIconView *_selectedIconView;
    UILabel *_selectedIconLabel;
    NSLayoutConstraint *_selectionXLayoutConstraint;
    NSLayoutConstraint *_selectedLabelXConstraint;
    NSLayoutConstraint *_selectedLabelBottomConstraint;
    UIStackView *_stackView;
    SBIconView *_homeIconView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _isTouchDown;
    _Bool _isIconSelected;
    id <SBCommandTabViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBCommandTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateForUserInterfaceStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_handleUIGesture:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (unsigned long long)indexOfDisplayItem:(id)arg1;
- (void)_updateIconSelectionPositionAndLabelText;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
- (void)iconTapped:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)iconTouchBegan:(id)arg1;
- (void)iconModelDidChange:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)selectedApplicationDisplayItem;
- (void)previous;
- (void)next;
- (void)showCommandTabBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithRecentDisplayItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

