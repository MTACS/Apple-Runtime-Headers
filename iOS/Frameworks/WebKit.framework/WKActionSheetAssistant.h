//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/DDDetectionControllerInteractionDelegate-Protocol.h>
#import <WebKit/WKActionSheetDelegate-Protocol.h>

@class NSString;
@protocol WKActionSheetAssistantDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate>
{
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> _delegate;
    struct RetainPtr<WKActionSheet> _interactionSheet;
    RetainPtr_5a40b48a _elementInfo;
    Optional_2b0652bb _positionInformation;
    struct WeakObjCPtr<UIView> _view;
    _Bool _needsLinkIndicator;
    _Bool _isPresentingDDUserInterface;
    _Bool _hasPendingActionSheet;
}

@property(nonatomic) _Bool needsLinkIndicator; // @synthesize needsLinkIndicator=_needsLinkIndicator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanupSheet;
- (void)showDataDetectorsSheet;
- (void)showLinkSheet;
- (RetainPtr_c682c8da)defaultActionsForImageSheet:(id)arg1;
- (RetainPtr_c682c8da)defaultActionsForLinkSheet:(id)arg1;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (_Bool)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (long long)_presentationStyleForPositionInfo:(const struct InteractionInformationAtPosition *)arg1 elementInfo:(id)arg2;
- (void)showImageSheet;
- (void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(_Bool)arg3;
- (Optional_2b0652bb)currentPositionInformation;
- (id)currentAvailableActionTitles;
- (void)interactionDidStartWithPositionInformation:(const struct InteractionInformationAtPosition *)arg1;
- (_Bool)isShowingSheet;
- (void)updateSheetPosition;
- (_Bool)presentSheet;
- (void)updatePositionInformation;
- (struct CGRect)presentationRectInHostViewForSheet;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (struct CGRect)presentationRectForIndicatedElement;
- (struct CGRect)presentationRectForElementUsingClosestIndicatedRect;
- (id)_elementActionForDDAction:(id)arg1;
- (id)hostViewForSheet;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (id)superviewForSheet;
- (_Bool)synchronouslyRetrievePositionInformation;
- (void)dealloc;
- (id)initWithView:(id)arg1;
@property(nonatomic) __weak id <WKActionSheetAssistantDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

