//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class UIImage, UIImageView;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController
{
    UIImageView *_contentImageView;
}

@property(readonly, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void).cxx_destruct;
- (void)_updateContentMode;
- (void)_viewDidUpdateContent;
- (double)_contentAspectRatio;
@property(retain, nonatomic) UIImage *contentImage;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;

@end

