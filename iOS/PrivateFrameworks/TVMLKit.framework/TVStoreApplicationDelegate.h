//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <TVMLKit/TVApplicationControllerDelegate-Protocol.h>
#import <TVMLKit/UIApplicationDelegate-Protocol.h>

@class BKSProcessAssertion, IKURLBagCache, NSDictionary, NSString, NSURL, TVApplicationController, TVStoreApplicationSetupHelper, UIWindow;

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>
{
    TVStoreApplicationSetupHelper *_setupHelper;
    NSDictionary *_launchOptions;
    NSURL *_launchOpenURL;
    NSDictionary *_launchOpenURLOptions;
    BKSProcessAssertion *_launchAssertion;
    _Bool _shouldTerminateOnEnterBackground;
    _Bool _headLess;
    _Bool _overrideOrientation;
    UIWindow *_window;
    TVApplicationController *_appController;
    IKURLBagCache *_bagCache;
}

@property(nonatomic) _Bool overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(readonly, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property(readonly, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;
- (void)_controllerDidDisplay:(id)arg1;
- (void)_loadWithBootURL:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_launchApp;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)updateIdleModeVisualEffectsStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool supportsIdleModeVisualEffects;
- (void)reload;
- (void)didShowViewController;
- (void)setupWithBootURL:(id)arg1;
- (id)offlineJSURL;
- (id)appLocalBootURL;
- (id)bootURL;
- (id)cachedBagPath;
- (id)_bagBootURL;
- (id)bagBootURLKey;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

