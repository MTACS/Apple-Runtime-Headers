//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface HUQuickControlStepperSegmentView : UIView
{
    _Bool _isSegmentViewHighlighted;
    NSString *_title;
    unsigned long long _segmentLocation;
    double _cornerRadius;
    unsigned long long _reachabilityState;
    UIView *_highlightedOverlayView;
    UILabel *_titleLabel;
    unsigned long long _style;
    unsigned long long _orientation;
    unsigned long long _controlSize;
}

@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *highlightedOverlayView; // @synthesize highlightedOverlayView=_highlightedOverlayView;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long segmentLocation; // @synthesize segmentLocation=_segmentLocation;
@property(nonatomic) _Bool isSegmentViewHighlighted; // @synthesize isSegmentViewHighlighted=_isSegmentViewHighlighted;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_contentSizeCategoryDidChange;
- (void)setTintColor:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_updateUIHighlightedOverlayView;
- (void)_updateTitleTextColor;
- (void)_updateTitleFontSize;
- (void)_updateTitleFont;
- (void)_createTitleLabelIfNecessary;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1 orientation:(unsigned long long)arg2 controlSize:(unsigned long long)arg3;

@end

