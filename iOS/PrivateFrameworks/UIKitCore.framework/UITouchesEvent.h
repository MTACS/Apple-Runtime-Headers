//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UITouchesEvent : UIEvent
{
    NSMutableSet *_allTouchesMutable;
    NSSet *_allTouchesImmutableCached;
    struct __CFDictionary *_keyedTouches;
    struct __CFDictionary *_keyedTouchesByWindow;
    struct __CFDictionary *_gestureRecognizersByWindow;
    NSMapTable *_latentSystemGestureWindows;
    struct __CFDictionary *_coalescedTouches;
    struct __CFDictionary *_finalTouches;
    _Bool _isCallingEventObservers;
    NSMutableSet *_exclusiveTouchWindows;
    long long _singleAllowableExternalTouchPathIndex;
}

@property(nonatomic) long long singleAllowableExternalTouchPathIndex; // @synthesize singleAllowableExternalTouchPathIndex=_singleAllowableExternalTouchPathIndex;
- (void).cxx_destruct;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)predictedTouchesForTouch:(id)arg1;
- (id)coalescedTouchesForTouch:(id)arg1;
- (id)_rawCoalescedTouchesForTouch:(id)arg1;
- (id)_lastPendingCoalescedTouchForIndex:(long long)arg1 hidEvent:(struct __IOHIDEvent *)arg2;
- (void)_moveCoalescedTouchesFromHidEvent:(struct __IOHIDEvent *)arg1 toHidEvent:(struct __IOHIDEvent *)arg2;
- (void)_addCoalescedTouch:(id)arg1 forIndex:(long long)arg2 hidEvent:(struct __IOHIDEvent *)arg3;
- (struct __CFDictionary *)_coalescedTouchesForHidEvent:(struct __IOHIDEvent *)arg1;
- (id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1;
- (void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2;
- (double)_initialTouchTimestampForWindow:(id)arg1;
@property(readonly, nonatomic) double _initialTouchTimestamp;
- (id)description;
- (id)_cloneEvent;
- (long long)_modifierFlags;
- (void)_moveTouchesFromView:(id)arg1 toView:(id)arg2;
- (id)_exclusiveTouchWindows;
- (id)_firstTouchForView:(id)arg1;
- (id)_viewsForWindow:(id)arg1;
- (void)_invalidateGestureRecognizerForWindowCache;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_windows;
- (void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3;
- (id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (id)_touchesForView:(id)arg1 withPhase:(long long)arg2;
- (void)_clearTouches;
- (void)_removeTouchesForWindow:(id)arg1;
- (void)_removeTouchesForKey:(id)arg1;
- (id)_touchesForWindow:(id)arg1;
- (id)_touchesForKey:(id)arg1;
- (void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)_removeTouch:(id)arg1;
- (void)_clearViewForTouch:(id)arg1;
- (void)_addTouch:(id)arg1 forDelayedDelivery:(_Bool)arg2;
- (void)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2;
- (_Bool)_anyInterestedGestureRecognizersForTouchInView:(id)arg1;
- (void)_collectGestureRecognizersForView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (id)_allTouches;
- (id)allTouches;
- (struct CGPoint)_digitizerLocation;
- (void)dealloc;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (id)_init;
- (long long)type;

@end

