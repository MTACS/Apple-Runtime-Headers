//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface VUIOpenURLHandler : NSObject
{
    _Bool _openedByDeeplink;
    CDUnknownBlockType _completionHandler;
    NSURL *_deferredOpenURL;
    CDUnknownBlockType _deferredOpenURLCompletion;
}

+ (void)_handleDeeplinkAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_getIDfromURLQueryParameters:(id)arg1 idKeyName:(id)arg2;
+ (void)_insertPageBehindTop:(id)arg1 viewController:(id)arg2 clearStack:(_Bool)arg3;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType deferredOpenURLCompletion; // @synthesize deferredOpenURLCompletion=_deferredOpenURLCompletion;
@property(retain, nonatomic) NSURL *deferredOpenURL; // @synthesize deferredOpenURL=_deferredOpenURL;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool openedByDeeplink; // @synthesize openedByDeeplink=_openedByDeeplink;
- (void).cxx_destruct;
- (void)_fetchLocalMediaWithAdamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processLocalLibraryLink:(id)arg1 playbackInitiationDate:(id)arg2 openURLCompletionDate:(id)arg3;
- (void)_handleOpenURLRouterDataSource:(id)arg1 appContext:(id)arg2 clearStack:(_Bool)arg3 startDate:(id)arg4;
- (void)handleDeferredURLWithAppContext:(id)arg1;
- (void)saveDeferredURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processEntityWithContextData:(id)arg1 appContext:(id)arg2;
- (void)parseURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

