//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@class FBDisplayLayoutTransition, NSString, SBUIAnimationController;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBUIAnimationController *_animation;
    FBDisplayLayoutTransition *_layoutTransition;
}

- (void).cxx_destruct;
- (void)_performStandardPresentationAnimated:(_Bool)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)_willBegin;
- (void)_didComplete;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

