//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SBAppExposeSwitcherModifierEvent, SBGestureSwitcherModifierEvent, SBInlineTransitionSwitcherModifierEvent, SBInsertionSwitcherModifierEvent, SBMainTransitionSwitcherModifierEvent, SBReduceMotionChangedSwitcherModifierEvent, SBSwitcherModifier, SBSwitcherModifierEvent, SBTransitionSwitcherModifierEvent;
@protocol SBFluidSwitcherScrollProviding;

@protocol SBFluidSwitcherModifierProviding
- (SBSwitcherModifier<SBFluidSwitcherScrollProviding> *)newMultitaskingModifierFromMultitaskingModifier:(SBSwitcherModifier<SBFluidSwitcherScrollProviding> *)arg1;
- (SBSwitcherModifier *)lowEndHardwareModifier;
- (SBSwitcherModifier *)insertionModifierForInsertionEvent:(SBInsertionSwitcherModifierEvent *)arg1;
- (SBSwitcherModifier *)appExposeModifierForAppExposeEvent:(SBAppExposeSwitcherModifierEvent *)arg1;
- (SBSwitcherModifier *)reduceMotionModifierForReduceMotionChangedEvent:(SBReduceMotionChangedSwitcherModifierEvent *)arg1;
- (SBSwitcherModifier *)transitionModifierForInlineTransitionEvent:(SBInlineTransitionSwitcherModifierEvent *)arg1;
- (SBSwitcherModifier *)transitionModifierForMainTransitionEvent:(SBMainTransitionSwitcherModifierEvent *)arg1;
- (SBSwitcherModifier *)gestureModifierForGestureEvent:(SBGestureSwitcherModifierEvent *)arg1;
- (SBSwitcherModifier<SBFluidSwitcherScrollProviding> *)multitaskingModifierForEvent:(SBSwitcherModifierEvent *)arg1;
- (SBSwitcherModifier *)floorModifierForTransitionEvent:(SBTransitionSwitcherModifierEvent *)arg1;
@end

