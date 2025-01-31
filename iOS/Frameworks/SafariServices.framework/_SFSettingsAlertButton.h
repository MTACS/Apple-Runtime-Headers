//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFSettingsAlertControl.h>

#import <SafariServices/_SFSettingsAlertOptionsGroupItemConfiguration-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertButton : _SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration>
{
    NSString *_text;
    NSAttributedString *_attributedText;
    NSArray *_contentConstraints;
    NSString *_textStyle;
    UIImage *_image;
    UIImageView *_imageView;
    UIView *_accessoryView;
    UILabel *_textLabel;
}

@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateTintColor;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_arrangedSubviews;
- (void)updateConstraints;
@property(readonly, nonatomic) UIView *trailingView;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

