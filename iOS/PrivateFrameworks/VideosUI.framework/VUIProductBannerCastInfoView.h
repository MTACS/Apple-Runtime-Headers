//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUICastInfoLayout;

__attribute__((visibility("hidden")))
@interface VUIProductBannerCastInfoView : UIView
{
    VUICastInfoLayout *_layout;
    IKViewElement *_viewElement;
    NSArray *_labels;
}

+ (id)configureViewWithItems:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUICastInfoLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)_updateTextColor;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

