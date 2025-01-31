//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, UIImageView, UILabel;

@interface WFCameraFlashButton : UIControl
{
    BOOL _expanded;
    BOOL _needsHiding;
    NSArray *_labels;
    UILabel *_selectedLabel;
    UIImageView *_flashView;
}

@property(nonatomic) BOOL needsHiding; // @synthesize needsHiding=_needsHiding;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak UIImageView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
- (void).cxx_destruct;
@property(nonatomic) long long flashMode;
- (struct CGSize)intrinsicContentSize;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

