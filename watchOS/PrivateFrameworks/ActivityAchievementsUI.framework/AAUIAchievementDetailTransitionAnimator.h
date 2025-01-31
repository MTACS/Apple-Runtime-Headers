//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIView, UIViewController;
@protocol AnimatorDetailViewController;

@interface AAUIAchievementDetailTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _shouldPlayFlipInAnimation;
    _Bool _shouldDismissGracefullyForTextSizeChange;
    _Bool _reduceMotion;
    UIViewController *_presentingViewController;
    id <AnimatorDetailViewController> _detailViewController;
    UIView *_conversionView;
    CDUnknownBlockType _presentBlock;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _completionBlock;
    struct CGPoint _initialBadgeCenter;
    struct CGPoint _finalBadgeCenter;
    struct CGRect _initialBadgeFrame;
    struct CGRect _finalBadgeFrame;
    struct CGAffineTransform _initialBadgeTransform;
    struct CGAffineTransform _finalBadgeTransform;
    struct CGAffineTransform _finalPresentingVCTransform;
}

@property(nonatomic) _Bool reduceMotion; // @synthesize reduceMotion=_reduceMotion;
@property(nonatomic) _Bool shouldDismissGracefullyForTextSizeChange; // @synthesize shouldDismissGracefullyForTextSizeChange=_shouldDismissGracefullyForTextSizeChange;
@property(nonatomic) _Bool shouldPlayFlipInAnimation; // @synthesize shouldPlayFlipInAnimation=_shouldPlayFlipInAnimation;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType presentBlock; // @synthesize presentBlock=_presentBlock;
@property(nonatomic) struct CGAffineTransform finalPresentingVCTransform; // @synthesize finalPresentingVCTransform=_finalPresentingVCTransform;
@property(nonatomic) struct CGRect finalBadgeFrame; // @synthesize finalBadgeFrame=_finalBadgeFrame;
@property(nonatomic) struct CGAffineTransform finalBadgeTransform; // @synthesize finalBadgeTransform=_finalBadgeTransform;
@property(nonatomic) struct CGAffineTransform initialBadgeTransform; // @synthesize initialBadgeTransform=_initialBadgeTransform;
@property(nonatomic) struct CGPoint finalBadgeCenter; // @synthesize finalBadgeCenter=_finalBadgeCenter;
@property(nonatomic) struct CGPoint initialBadgeCenter; // @synthesize initialBadgeCenter=_initialBadgeCenter;
@property(nonatomic) struct CGRect initialBadgeFrame; // @synthesize initialBadgeFrame=_initialBadgeFrame;
@property(retain, nonatomic) UIView *conversionView; // @synthesize conversionView=_conversionView;
@property(retain, nonatomic) id <AnimatorDetailViewController> detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)animateDismissalWithContext:(id)arg1;
- (void)reducedMotionAnimateDismissalWithContext:(id)arg1;
- (void)animatePresentationWithContext:(id)arg1;
- (void)reducedMotionAnimatePresentationWithContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)prepareForAnimationsWithContext:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)isPresentingWithContext:(id)arg1;
- (void)textSizeDidChange:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 detailViewController:(id)arg2 shouldPlayFlipInAnimation:(_Bool)arg3 initialBadgeFrame:(struct CGRect)arg4 conversionView:(id)arg5 presentAlongsideBlock:(CDUnknownBlockType)arg6 dismissAlongsideBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

