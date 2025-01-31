//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class INCExtensionConnection, INIntent;
@protocol WFIntentExecutorDelegate;

@interface WFIntentExecutor : NSObject
{
    WFIntentExecutor *_strongSelf;
    _Bool _forceExecutionOnPhone;
    _Bool _skipResolveAndConfirm;
    INCExtensionConnection *_connection;
    id <WFIntentExecutorDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic) _Bool skipResolveAndConfirm; // @synthesize skipResolveAndConfirm=_skipResolveAndConfirm;
@property(nonatomic) _Bool forceExecutionOnPhone; // @synthesize forceExecutionOnPhone=_forceExecutionOnPhone;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <WFIntentExecutorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) INCExtensionConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)autoreleaseSelf;
- (void)retainSelf;
- (void)showConfirmationForInteraction:(id)arg1 confirmationRequired:(_Bool)arg2 authenticationRequired:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)continueInApp;
- (void)finish;
- (void)failWithError:(id)arg1;
- (void)finishWithInteraction:(id)arg1;
- (void)finishWithInteraction:(id)arg1 error:(id)arg2;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromExtensionError:(id)arg1;
- (void)cancel;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)startConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureConnection;
- (void)getDynamicOptionsForParameterNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) INIntent *intent;
- (id)initWithIntent:(id)arg1 donateInteraction:(_Bool)arg2 groupIdentifier:(id)arg3;

@end

