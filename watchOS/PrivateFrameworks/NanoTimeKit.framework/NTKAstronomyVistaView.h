//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/NUAnimationObserver-Protocol.h>
#import <NanoTimeKit/NUViewDelegate-Protocol.h>

@class CLKDevice, NSMutableSet, NSString, NUScene, NUView, UIImageView;
@protocol NTKAstronomyVistaViewObserver;

@interface NTKAstronomyVistaView : UIView <NUAnimationObserver, NUViewDelegate>
{
    NUView *_viewer;
    UIImageView *_fallbackImageView;
    unsigned int _fallbackVista;
    NSMutableSet *_activeContentsAnimations;
    unsigned int _vista;
    unsigned int _isSupplemental:1;
    unsigned int _isDisplayOn:1;
    unsigned int _isAnimating:1;
    CLKDevice *_device;
    id <NTKAstronomyVistaViewObserver> _observer;
}

@property(nonatomic) __weak id <NTKAstronomyVistaViewObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_handleCSLPIBacklightDidTurnOn;
- (void)_handleCSLPIBacklightWillTurnOff;
- (void)viewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2;
- (void)universeAnimationFinished:(id)arg1;
- (void)_setVista:(unsigned int)arg1 scene:(id)arg2;
- (void)setVista:(unsigned int)arg1;
- (id)generateAnimationArrayFromVista:(unsigned int)arg1 toVista:(unsigned int)arg2;
- (void)showSupplemental:(_Bool)arg1 animated:(_Bool)arg2;
- (unsigned int)vista;
- (id)rotatable:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)_updateAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)updateSunLocationAnimated:(_Bool)arg1;
- (void)setMinFrameInterval:(int)arg1;
- (void)setOpaque:(_Bool)arg1;
@property(retain, nonatomic) NUScene *scene;
- (id)_fallbackImageForVista:(unsigned int)arg1;
- (id)snapshotImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

