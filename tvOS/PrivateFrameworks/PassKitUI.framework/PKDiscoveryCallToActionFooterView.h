//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKDiscoveryCallToAction, PKDiscoveryMedia, UIImageView, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionFooterView : UIView
{
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UILabel *_expandedTitleLabel;
    UILabel *_expandedEditorialDescriptionLabel;
    long long _displayType;
    _Bool _hasIcon;
    _Bool _hasButton;
    _Bool _useAccessibilityLayout;
    CDUnknownBlockType _callToActionTappedOverride;
    _Bool _showActivityIndicator;
    id <PKDiscoveryCardViewDelegate> _delegate;
}

@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
- (void).cxx_destruct;
- (void)_loadImageData;
- (struct CGSize)_iconSize;
- (void)_layoutLabelsForBounds:(struct CGRect)arg1;
- (double)_buttonWidthForLabelWidth:(double)arg1;
- (struct CGSize)_buttonSizeForBounds:(struct CGRect)arg1;
- (id)_editorialDescriptionLabelFont;
- (id)_titleLabelFont;
- (id)_descriptionLabelWithLocalizedDescription:(id)arg1;
- (id)_titleLabelWithLocalizedTitle:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_descriptionLabelColor;
- (id)_titleLabelColor;
- (void)setCallToActionTappedOverride:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCallToAction:(id)arg1 displayType:(long long)arg2;

@end

