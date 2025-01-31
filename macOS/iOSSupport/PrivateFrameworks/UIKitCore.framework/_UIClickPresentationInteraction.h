//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Private-Protocol.h>
#import <UIKitCore/_UIClickInteractionDelegateInternal-Protocol.h>
#import <UIKitCore/_UIDragInteractionPresentationDelegate-Protocol.h>

@class NSMutableArray, NSString, UIDragInteraction, UIGestureRecognizer, UIView, _UIClickInteraction, _UIClickPresentation, _UIRelationshipGestureRecognizer, _UIStateMachine;
@protocol UIInteractionEffect, _UIClickPresentationAssisting, _UIClickPresentationInteractionDelegate;

@interface _UIClickPresentationInteraction : NSObject <_UIClickInteractionDelegateInternal, UIInteraction_Private, UIGestureRecognizerDelegate, _UIDragInteractionPresentationDelegate, UIInteraction>
{
    struct {
        char shouldBegin;
        char previewForHighlightingAtLocation;
        char shouldPresent;
        char ended;
        char asyncShouldBegin;
        char shouldAllowRapidRestart;
        char shouldAllowDragAfterDismiss;
        char previewForCancellingDragItem;
        char willAnimateDragCancelWithAnimator;
        char dragSessionDidEndForItems;
        char interactionEffectForTargetedPreview;
        char endedForPresentation;
    } _delegateImplements;
    BOOL _unableToClick;
    long long _statsPresentation;
    BOOL _allowSimultaneousRecognition;
    id <_UIClickPresentationInteractionDelegate> _delegate;
    UIView *_view;
    id <UIInteractionEffect> _interactionEffect;
    NSMutableArray *_stateBreadCrumbs;
    _UIStateMachine *_stateMachine;
    _UIClickInteraction *_previewClickInteraction;
    _UIRelationshipGestureRecognizer *_exclusionRelationshipGestureRecognizer;
    _UIRelationshipGestureRecognizer *_failureRelationshipGestureRecognizer;
    id <_UIClickPresentationAssisting> _presentationAssistant;
    _UIClickPresentation *_pendingPresentation;
    UIDragInteraction *_latentAssociatedDragInteraction;
    UIDragInteraction *_associatedDragInteraction;
    NSString *_debugIdentifier;
    NSString *_presentationTypeDebugString;
    struct CGPoint _initialLocation;
}

@property(copy, nonatomic) NSString *presentationTypeDebugString; // @synthesize presentationTypeDebugString=_presentationTypeDebugString;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(nonatomic) __weak UIDragInteraction *associatedDragInteraction; // @synthesize associatedDragInteraction=_associatedDragInteraction;
@property(retain, nonatomic) UIDragInteraction *latentAssociatedDragInteraction; // @synthesize latentAssociatedDragInteraction=_latentAssociatedDragInteraction;
@property(nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(retain, nonatomic) _UIClickPresentation *pendingPresentation; // @synthesize pendingPresentation=_pendingPresentation;
@property(retain, nonatomic) id <_UIClickPresentationAssisting> presentationAssistant; // @synthesize presentationAssistant=_presentationAssistant;
@property(retain, nonatomic) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer; // @synthesize failureRelationshipGestureRecognizer=_failureRelationshipGestureRecognizer;
@property(retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer; // @synthesize exclusionRelationshipGestureRecognizer=_exclusionRelationshipGestureRecognizer;
@property(retain, nonatomic) _UIClickInteraction *previewClickInteraction; // @synthesize previewClickInteraction=_previewClickInteraction;
@property(retain, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) BOOL allowSimultaneousRecognition; // @synthesize allowSimultaneousRecognition=_allowSimultaneousRecognition;
@property(readonly, nonatomic) NSMutableArray *stateBreadCrumbs; // @synthesize stateBreadCrumbs=_stateBreadCrumbs;
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak id <_UIClickPresentationInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dragInteractionPresentation:(id)arg1 sessionDidEnd:(id)arg2 withoutBeginning:(BOOL)arg3;
- (void)_dragInteractionPresentation:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)_dragInteractionPresentation:(id)arg1 previewForCancellingItem:(id)arg2 defaultPreview:(id)arg3 proposedPreview:(id)arg4;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)_supportsRapidRestart;
- (BOOL)_isControlledByCC;
- (void)_endInteractionEffectIfNeeded;
- (id)_clickDriverTouch;
- (void)_prepareInteractionEffect;
- (void)_endInteractionWithContext:(id)arg1;
- (void)_endInteractionDidComplete:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelWithReason:(unsigned long long)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setDelegate:(id)arg1;
- (void)_handleDidTransitionToPossibleFromState:(unsigned long long)arg1 context:(id)arg2;
- (unsigned long long)_handleTransitionToPossibleByEndingWithContext:(id)arg1;
- (void)_handleDidTransitionToPreview;
- (unsigned long long)_handleTransitionToPreview;
- (void)_handleDidTransitionToHighlight;
- (unsigned long long)_handleTransitionToHighlight;
- (void)_handleDidTransitionToActive;
- (unsigned long long)_handleTransitionToActive;
- (BOOL)_isPaused;
- (unsigned long long)_currentState;
- (BOOL)_isActive;
- (void)_prepareStateMachine;
- (void)_beginDragIfPossibleWithTouch:(id)arg1 previewProvider:(CDUnknownBlockType)arg2 fenceHandler:(CDUnknownBlockType)arg3;
- (void)_attemptDragLiftAtLocation:(struct CGPoint)arg1 useDefaultLiftAnimation:(BOOL)arg2;
- (id)_clickDragDriver;
- (void)_associateWithActiveDragInteraction;
- (void)_clickInteractionDidUpdateDriver:(id)arg1;
- (unsigned long long)_clickInteractionDefaultDriverType:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidClickDown:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (void)_clickInteraction:(id)arg1 shouldBegin:(CDUnknownBlockType)arg2;
- (void)_performPresentation;
- (BOOL)_canPerformPresentation;
- (void)_performPreviewPresentation;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)_delegate_interactionEndedWithContext:(id)arg1;
- (BOOL)_delegate_shouldAllowDragAfterDismiss;
@property(readonly, nonatomic, getter=_reachedForceThreshold) BOOL reachedForceThreshold;
- (struct CGPoint)locationInView:(id)arg1;
- (void)beginDragWithTouch:(id)arg1 previewProvider:(CDUnknownBlockType)arg2 fenceHandler:(CDUnknownBlockType)arg3;
- (void)endPanInteraction;
- (void)beginPanInteraction;
- (void)cancelInteraction;
- (void)present;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

