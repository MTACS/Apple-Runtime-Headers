//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VUIProductUberBackgroundInterface-Protocol.h>

@class IKViewElement, NSString, UIView, VUIProductBannerView, VUIProductUberBackgroundView;

__attribute__((visibility("hidden")))
@interface VUIProductBannerViewController : UIViewController <VUIProductUberBackgroundInterface>
{
    VUIProductUberBackgroundView *_uberBackgroundView;
    IKViewElement *_viewElement;
    VUIProductBannerView *_bannerView;
    UIView *_transitionBackgroundView;
}

@property(retain, nonatomic) UIView *transitionBackgroundView; // @synthesize transitionBackgroundView=_transitionBackgroundView;
@property(retain, nonatomic) VUIProductBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIProductUberBackgroundView *uberBackgroundView; // @synthesize uberBackgroundView=_uberBackgroundView;
- (void).cxx_destruct;
- (void)_configureViewSubviews;
- (void)setBannerOpacity:(double)arg1;
- (void)setTransitionBannerOpacity:(double)arg1;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) double topThreshold;
- (void)setUberImageOffset:(double)arg1;
@property(readonly, nonatomic) _Bool isUberLayoutActive;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

