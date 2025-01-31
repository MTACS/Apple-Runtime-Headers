//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView;

@interface CAMControlDrawerButton : UIButton
{
    long long _layoutStyle;
    NSString *_contentSize;
    long long _orientation;
    UIImageView *__backgroundView;
}

+ (struct CGSize)buttonSize;
+ (id)_backgroundImage;
@property(readonly, nonatomic) UIImageView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) NSString *contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)handleButtonReleased:(id)arg1;
- (_Bool)shouldUseActiveTintForCurrentState;
- (id)imageNameForCurrentState;
- (void)updateImage;
- (_Bool)shouldScaleImageWhileHighlighted;
- (void)didChangeContentSize;
@property(readonly, nonatomic) long long controlType;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isExpandable) _Bool expandable;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithLayoutStyle:(long long)arg1;

@end

