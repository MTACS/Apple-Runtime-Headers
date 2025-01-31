//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFSiriUserInterface-Protocol.h>
#import <WorkflowKit/WFWorkflowControllerDelegate-Protocol.h>

@class INIntentResponse, NSArray, NSProgress, NSString, WFWorkflow, WFWorkflowController;
@protocol WFLWorkflowControllerDelegate;

@interface WFLWorkflowController : NSObject <WFWorkflowControllerDelegate, WFSiriUserInterface>
{
    NSArray *_airPlayRouteIDs;
    id <WFLWorkflowControllerDelegate> _delegate;
    int _executionContext;
    WFWorkflowController *_controller;
    INIntentResponse *_lastIntentResponse;
}

@property(retain, nonatomic) INIntentResponse *lastIntentResponse; // @synthesize lastIntentResponse=_lastIntentResponse;
@property(readonly, nonatomic) WFWorkflowController *controller; // @synthesize controller=_controller;
@property(nonatomic) int executionContext; // @synthesize executionContext=_executionContext;
@property(nonatomic) __weak id <WFLWorkflowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *airPlayRouteIDs; // @synthesize airPlayRouteIDs=_airPlayRouteIDs;
- (void).cxx_destruct;
- (void)configureIntent:(id)arg1;
- (_Bool)executeIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)speakText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openInteractionInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showInteractionIfNeeded:(id)arg1 requiringConfirmation:(_Bool)arg2 requiringAuthentication:(_Bool)arg3 executionStage:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (void)presentAlert:(id)arg1;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)workflowControllerWillRun:(id)arg1;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)runWithInput:(id)arg1;
@property(readonly, nonatomic) WFWorkflow *workflow;
@property(readonly, nonatomic) NSProgress *progress;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithWorkflow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

