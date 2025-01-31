//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class CALayer, NSArray, UIImageView, UILabel, UIView, UIVisualEffectView, _UIHostActivityProxy;

@interface UIShareGroupActivityCell : UICollectionViewCell
{
    _Bool _disabled;
    _UIHostActivityProxy *_activityProxy;
    UILabel *_titleLabel;
    UIImageView *_activityImageView;
    UIView *_imageSlotView;
    UIView *_titleSlotView;
    UIView *_badgeSlotView;
    CALayer *_darkeningLayer;
    UIVisualEffectView *_vibrantLabelView;
    UIImageView *_darkenedImageView;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

@property(retain, nonatomic) NSArray *largeTextConstraints; // @synthesize largeTextConstraints=_largeTextConstraints;
@property(retain, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) UIImageView *darkenedImageView; // @synthesize darkenedImageView=_darkenedImageView;
@property(retain, nonatomic) UIVisualEffectView *vibrantLabelView; // @synthesize vibrantLabelView=_vibrantLabelView;
@property(retain, nonatomic) CALayer *darkeningLayer; // @synthesize darkeningLayer=_darkeningLayer;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIView *badgeSlotView; // @synthesize badgeSlotView=_badgeSlotView;
@property(retain, nonatomic) UIView *titleSlotView; // @synthesize titleSlotView=_titleSlotView;
@property(retain, nonatomic) UIView *imageSlotView; // @synthesize imageSlotView=_imageSlotView;
@property(retain, nonatomic) UIImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UIHostActivityProxy *activityProxy; // @synthesize activityProxy=_activityProxy;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateDarkening;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

