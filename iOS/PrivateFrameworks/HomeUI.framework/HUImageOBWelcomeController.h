//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeFullCenterContentController.h>

@class NSLayoutConstraint, UIImage, UIImageView, UIView;

@interface HUImageOBWelcomeController : OBWelcomeFullCenterContentController
{
    unsigned long long _contentMode;
    UIImageView *_contentImageView;
    UIView *_contentImageViewContainer;
    NSLayoutConstraint *_contentImageViewContainerHeightConstraint;
    NSLayoutConstraint *_contentImageViewContainerWidthConstraint;
    NSLayoutConstraint *_contentImageViewTopConstraint;
    NSLayoutConstraint *_contentImageViewBottomConstraint;
    NSLayoutConstraint *_contentImageViewLeadingConstraint;
    NSLayoutConstraint *_contentImageViewTrailingConstraint;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) NSLayoutConstraint *contentImageViewTrailingConstraint; // @synthesize contentImageViewTrailingConstraint=_contentImageViewTrailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentImageViewLeadingConstraint; // @synthesize contentImageViewLeadingConstraint=_contentImageViewLeadingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentImageViewBottomConstraint; // @synthesize contentImageViewBottomConstraint=_contentImageViewBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentImageViewTopConstraint; // @synthesize contentImageViewTopConstraint=_contentImageViewTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentImageViewContainerWidthConstraint; // @synthesize contentImageViewContainerWidthConstraint=_contentImageViewContainerWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentImageViewContainerHeightConstraint; // @synthesize contentImageViewContainerHeightConstraint=_contentImageViewContainerHeightConstraint;
@property(readonly, nonatomic) UIView *contentImageViewContainer; // @synthesize contentImageViewContainer=_contentImageViewContainer;
@property(readonly, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
- (void).cxx_destruct;
- (void)_updateContentImageViewInsetConstraints;
- (void)_updateContentImageViewContainerConstraints;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(retain, nonatomic) UIImage *contentImage;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;

@end

