//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVBackdropView;

@interface AVBackgroundView : UIView
{
    _Bool _automaticallyDrawsRoundedCorners;
    _Bool _circular;
    AVBackdropView *_backdropView;
}

@property(retain, nonatomic) AVBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(nonatomic) _Bool automaticallyDrawsRoundedCorners; // @synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners;
- (void).cxx_destruct;
- (_Bool)_isContainedInOverlappingBackgroundView;
- (void)_ensureOrRemoveBackdropView;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)_updateBackdropShape;
- (void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

