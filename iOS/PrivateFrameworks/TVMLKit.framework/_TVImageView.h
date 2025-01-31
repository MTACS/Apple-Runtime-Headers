//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAFilter, TVImageProxy, UIColor, UIImage, UIImageView;

@interface _TVImageView : UIControl
{
    _Bool _rendersImageAsTemplates;
    UIImage *_image;
    UIImageView *_imageView;
    UIColor *__focusedColor;
    long long _imageContentMode;
    UIImage *_flatImage;
    UIImage *_flatHighlightImage;
    _Bool _selected;
    double _cornerRadius;
    _Bool _continuousCorners;
    CAFilter *_highlightFilter;
    _Bool _imageContainsCornerRadius;
    _Bool _imageLoaded;
    _Bool __enableEdgeAntialiasingOnSelected;
    UIImage *_placeholderImage;
    TVImageProxy *_imageProxy;
    CDUnknownBlockType _completion;
    UIColor *__tintColor;
    UIColor *__darkTintColor;
}

@property(nonatomic, setter=_setEnableEdgeAntialiasingOnSelected:) _Bool _enableEdgeAntialiasingOnSelected; // @synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected;
@property(retain, nonatomic, setter=_setFocusedColor:) UIColor *_focusedColor; // @synthesize _focusedColor=__focusedColor;
@property(retain, nonatomic, setter=_setDarkTintColor:) UIColor *_darkTintColor; // @synthesize _darkTintColor=__darkTintColor;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // @synthesize _tintColor=__tintColor;
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(nonatomic) _Bool imageContainsCornerRadius; // @synthesize imageContainsCornerRadius=_imageContainsCornerRadius;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateCornerRadius;
- (void)_updateImageView;
- (void)_setImage:(id)arg1;
- (void)_updateTintColor;
- (id)_imageView;
- (void)_loadImage;
- (void)_reloadImageForLayoutDirectionChange;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)_resetContentRect;
- (void)_setContentRectInPixels:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2;
@property(nonatomic) double cornerRadius;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setImageProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (long long)contentMode;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

