//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PUICClientSideAnimation;
@protocol NTKTritiumAnimationControllerDelegate;

@interface NTKTritiumAnimationController : NSObject
{
    unsigned int _currentCurve;
    unsigned int _currentDirection;
    float _lastReversibleDisplayAnimationProgress;
    float _lastMonotonicTimeAnimationProgress;
    PUICClientSideAnimation *_toggleAnimation;
    PUICClientSideAnimation *_timeAnimation;
    _Bool _shouldProceedToTritiumOnAfterPreparation;
    NSTimer *_holdFirstFrameWatchdogTimer;
    CDUnknownBlockType _preparationCompletion;
    unsigned int _state;
    id <NTKTritiumAnimationControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <NTKTritiumAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)_timeAnimationForFaceView:(id)arg1 fromFrame:(id)arg2;
- (id)_createTritiumAnimationWithViewProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startAnimationWithTritiumVisible:(_Bool)arg1 animation:(unsigned int)arg2 viewProvider:(id)arg3 hideSensitiveUI:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)currentAnimationStateDescription;
- (float)_calculateReversibleDisplayAnimationProgressForAnimationProgress:(float)arg1 initialState:(float)arg2;
- (void)processStateMachineWithTritiumVisible:(_Bool)arg1 viewProvider:(id)arg2 fromFrame:(id)arg3 animation:(unsigned int)arg4 brightnessRamp:(CDUnknownBlockType)arg5 hideSensitiveUI:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
@property(readonly, nonatomic) unsigned int targetState;
- (void)finishPausedAnimationImmediately;
- (double)continueTapAnimationFromFrame:(id)arg1 viewProvider:(id)arg2 clockContentView:(id)arg3 sensitiveUIShieldView:(id)arg4 animation:(unsigned int)arg5 brightnessRamp:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setTritiumVisibleImmediately:(_Bool)arg1 viewProvider:(id)arg2 clockContentView:(id)arg3 sensitiveUIShieldView:(id)arg4;
- (double)setTritiumVisible:(_Bool)arg1 fromFrame:(id)arg2 viewProvider:(id)arg3 clockContentView:(id)arg4 sensitiveUIShieldView:(id)arg5 animation:(unsigned int)arg6 brightnessRamp:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;

@end

