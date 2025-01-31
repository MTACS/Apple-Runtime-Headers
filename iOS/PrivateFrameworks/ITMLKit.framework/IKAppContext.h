//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppCacheDelegate-Protocol.h>
#import <ITMLKit/IKJSInspectorControllerDelegate-Protocol.h>
#import <ITMLKit/ISURLOperationDelegate-Protocol.h>

@class IKAppCache, IKAppReloadContext, IKJSApplication, IKJSArrayBufferStore, IKJSFoundation, IKJSInspectorController, IKJSViewModelService, IKJSWeakMap, IKViewElementRegistry, JSContext, NSError, NSMutableArray, NSNumber, NSString, NSThread, NSURL;
@protocol IKAppContextDelegate, IKAppScriptFallbackHandler, IKApplication, OS_dispatch_source;

@interface IKAppContext : NSObject <ISURLOperationDelegate, IKAppCacheDelegate, IKJSInspectorControllerDelegate>
{
    NSThread *_validThread;
    IKJSArrayBufferStore *_arrayBufferStore;
    struct __CFRunLoop *_jsThreadRunLoop;
    struct __CFRunLoopSource *_jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
    _Bool _respondsToTraitCollection;
    _Bool _isAirplaneModeEnabled;
    struct {
        _Bool respondsToHighlightViewForOneElement;
        _Bool respondsToHighlightViewsForManyElements;
        _Bool respondsToCancelHighlightForAppContext;
        _Bool respondsToDidInspectElementModeChanged;
    } _delegateFlags;
    _Bool _isValid;
    _Bool _remoteInspectionEnabled;
    _Bool _mescalPrimeEnabledForXHRRequests;
    _Bool _trusted;
    _Bool _canAccessPendingQueue;
    _Bool _running;
    _Bool _privileged;
    _Bool _appUsesDefaultStyleSheets;
    id <IKApplication> _app;
    unsigned long long _mode;
    id <IKAppContextDelegate> _delegate;
    id <IKAppScriptFallbackHandler> _appScriptFallbackHandler;
    double _appScriptTimeoutInterval;
    JSContext *_jsContext;
    IKAppCache *_appCache;
    NSString *_nextJSChecksum;
    NSMutableArray *_onStartQueue;
    NSString *_responseScript;
    NSError *_responseError;
    IKAppReloadContext *_reloadContext;
    NSMutableArray *_pendingQueue;
    NSURL *_resolvedBootURL;
    NSMutableArray *_postEvaluationBlocks;
    IKJSApplication *_jsApp;
    IKJSFoundation *_jsFoundation;
    IKJSWeakMap *_jsWeakMap;
    IKJSViewModelService *_jsViewModelService;
    IKViewElementRegistry *_viewElementRegistry;
    IKJSInspectorController *_webInspectorController;
}

+ (_Bool)isInFactoryMode;
+ (void)registerPrivateProtocols:(id)arg1 forClass:(Class)arg2;
+ (id)currentAppContext;
@property(retain, nonatomic) IKJSInspectorController *webInspectorController; // @synthesize webInspectorController=_webInspectorController;
@property(readonly, nonatomic) _Bool appUsesDefaultStyleSheets; // @synthesize appUsesDefaultStyleSheets=_appUsesDefaultStyleSheets;
@property(readonly, nonatomic) IKViewElementRegistry *viewElementRegistry; // @synthesize viewElementRegistry=_viewElementRegistry;
@property(nonatomic, getter=isPrivileged) _Bool privileged; // @synthesize privileged=_privileged;
@property(retain, nonatomic) IKJSViewModelService *jsViewModelService; // @synthesize jsViewModelService=_jsViewModelService;
@property(retain, nonatomic) IKJSWeakMap *jsWeakMap; // @synthesize jsWeakMap=_jsWeakMap;
@property(retain, nonatomic) IKJSFoundation *jsFoundation; // @synthesize jsFoundation=_jsFoundation;
@property(retain, nonatomic) IKJSApplication *jsApp; // @synthesize jsApp=_jsApp;
@property(retain, nonatomic) NSMutableArray *postEvaluationBlocks; // @synthesize postEvaluationBlocks=_postEvaluationBlocks;
@property(readonly, copy, nonatomic) NSURL *resolvedBootURL; // @synthesize resolvedBootURL=_resolvedBootURL;
@property(retain, nonatomic) NSMutableArray *pendingQueue; // @synthesize pendingQueue=_pendingQueue;
@property(getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) IKAppReloadContext *reloadContext; // @synthesize reloadContext=_reloadContext;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(copy, nonatomic) NSString *responseScript; // @synthesize responseScript=_responseScript;
@property(nonatomic) _Bool canAccessPendingQueue; // @synthesize canAccessPendingQueue=_canAccessPendingQueue;
@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
@property(readonly, nonatomic) NSMutableArray *onStartQueue; // @synthesize onStartQueue=_onStartQueue;
@property(copy, nonatomic) NSString *nextJSChecksum; // @synthesize nextJSChecksum=_nextJSChecksum;
@property(readonly, nonatomic) IKAppCache *appCache; // @synthesize appCache=_appCache;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(nonatomic) double appScriptTimeoutInterval; // @synthesize appScriptTimeoutInterval=_appScriptTimeoutInterval;
@property(retain, nonatomic) id <IKAppScriptFallbackHandler> appScriptFallbackHandler; // @synthesize appScriptFallbackHandler=_appScriptFallbackHandler;
@property(nonatomic) _Bool mescalPrimeEnabledForXHRRequests; // @synthesize mescalPrimeEnabledForXHRRequests=_mescalPrimeEnabledForXHRRequests;
@property(nonatomic) _Bool remoteInspectionEnabled; // @synthesize remoteInspectionEnabled=_remoteInspectionEnabled;
@property _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) __weak id <IKAppContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) __weak id <IKApplication> app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)_networkPropertiesChanged:(id)arg1;
- (void)handleCacheUpdate;
- (void)appCache:(id)arg1 didUpdateWithChecksum:(id)arg2;
- (void)unregisterLoaderWithIdentifier:(id)arg1;
- (id)registerLoaderWithIdentifier:(id)arg1;
- (void)inspectElement:(id)arg1;
- (_Bool)isInspectElementModeEnabled;
- (void)inspectElementModeChanged:(_Bool)arg1;
- (_Bool)cancelHighlightView;
- (_Bool)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (_Bool)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (id)_appTraitCollection;
- (void)contextDidStartWithJS:(id)arg1 options:(id)arg2;
- (void)contextDidFailWithError:(id)arg1;
- (void)contextDidStopWithOptions:(id)arg1;
- (void)_drainOnStartQueue;
- (void)_enqueueOnStartOrExecute:(CDUnknownBlockType)arg1;
- (id)_preferredLaunchURL;
- (void)_dispatchError:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_doEvaluate:(CDUnknownBlockType)arg1;
- (void)_invalidateJSThread;
- (void)_evaluate:(CDUnknownBlockType)arg1;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_jsThreadMain;
- (void)_stopAndReload:(_Bool)arg1;
- (void)_addStopRecordToPendingQueueWithReload:(_Bool)arg1;
- (void)_startWithScript:(id)arg1 scriptUrl:(id)arg2 wasLoadedFromFallback:(_Bool)arg3;
- (void)_startWithURL:(id)arg1 urlTrusted:(_Bool)arg2;
- (_Bool)_prepareStartWithURL:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)handleReloadWithUrgencyType:(unsigned long long)arg1 minInterval:(double)arg2 data:(id)arg3;
- (_Bool)validateDOMDocument:(id)arg1 error:(id *)arg2;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)addPostEvaluateBlock:(CDUnknownBlockType)arg1;
- (void)evaluateDelegateBlockSync:(CDUnknownBlockType)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)reload;
- (void)appTraitCollectionChanged:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)resumeWithOptions:(id)arg1;
- (void)suspendWithOptions:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 cache:(_Bool)arg3 delegate:(id)arg4;
@property(readonly, nonatomic) IKJSArrayBufferStore *arrayBufferStore;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1 addPrivateInterfaces:(_Bool)arg2;
- (void)exitAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (void)evaluateFoundationJS;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

