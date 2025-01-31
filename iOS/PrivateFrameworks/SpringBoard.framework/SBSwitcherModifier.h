//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBChainableModifier.h>

#import <SpringBoard/SBSwitcherContextProviding-Protocol.h>
#import <SpringBoard/SBSwitcherQueryProviding-Protocol.h>

@class NSString;

@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherQueryProviding, SBSwitcherContextProviding>
{
    long long _state;
}

+ (id)queryProtocol;
+ (id)contextProtocol;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)_forwardEventToChildren:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleAppExposeEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleMedusaSettingsChangedEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

