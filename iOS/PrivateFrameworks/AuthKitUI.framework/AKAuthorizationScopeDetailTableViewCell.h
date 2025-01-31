//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;

@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell
{
    _Bool _internalChecked;
    UILabel *_scopeLabel;
    UILabel *_mainLabel;
    UILabel *_mainDetailLabel;
    UIImageView *_leadingCheckmarkView;
    UILayoutGuide *_mainGuide;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_mainLabelLeadingConstraint;
    unsigned long long _internalCheckmarkStyle;
}

@property(nonatomic, getter=internalIsChecked) _Bool internalChecked; // @synthesize internalChecked=_internalChecked;
@property(nonatomic) unsigned long long internalCheckmarkStyle; // @synthesize internalCheckmarkStyle=_internalCheckmarkStyle;
@property(readonly, nonatomic) NSLayoutConstraint *mainLabelLeadingConstraint; // @synthesize mainLabelLeadingConstraint=_mainLabelLeadingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) UILayoutGuide *mainGuide; // @synthesize mainGuide=_mainGuide;
@property(retain, nonatomic) UIImageView *leadingCheckmarkView; // @synthesize leadingCheckmarkView=_leadingCheckmarkView;
@property(readonly, nonatomic) UILabel *mainDetailLabel; // @synthesize mainDetailLabel=_mainDetailLabel;
@property(readonly, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(readonly, nonatomic) UILabel *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
- (void).cxx_destruct;
- (id)_checkmarkImage;
- (id)_checkmarkCircleImage;
- (id)_circleImage;
- (id)_clearImage;
- (id)_unselectedCheckmarkCircleImageView;
- (id)_selectedCheckmarkCircleImageView;
- (id)_checkmarkCircleImageViewChecked:(_Bool)arg1;
- (id)_checkmarkImageView;
- (void)_setCheckmarkStyleTrailingChecked:(_Bool)arg1;
- (void)_setCheckMarkStyleLeadingChecked:(_Bool)arg1;
@property(nonatomic, getter=isChecked) _Bool checked;
@property(nonatomic) unsigned long long checkmarkStyle;
@property(nonatomic) double minimumHeight;
- (_Bool)_isLTR;
- (void)_setSeparatorIndentToMainLabel;
- (void)layoutSubviews;
- (id)_newLabel;
- (void)_setupLayout;
- (void)_setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

