//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AMSUserNotification, AVPlayerViewController, UIImageView, UILabel;
@protocol AMPUserNotificationContentDelegate;

__attribute__((visibility("hidden")))
@interface AMPUserNotificationContentViewController : UIViewController
{
    AMSUserNotification *_userNotification;
    id <AMPUserNotificationContentDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIImageView *_imageView;
    AVPlayerViewController *_videoPlayerController;
}

@property(readonly, nonatomic) AVPlayerViewController *videoPlayerController; // @synthesize videoPlayerController=_videoPlayerController;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <AMPUserNotificationContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AMSUserNotification *userNotification; // @synthesize userNotification=_userNotification;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mediaPause;
- (void)imageViewTapped:(id)arg1;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) struct CGSize expectedContentSize;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)loadView;
- (id)initWithNotification:(id)arg1 delegate:(id)arg2;

@end

