//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ContentKit/WFApplicationContextProvider-Protocol.h>

@class NSString;
@protocol WFExtensionApplicationContextProviderDelegate;

@interface NSExtensionContext (WFApplicationContextProvider) <WFApplicationContextProvider>
@property(nonatomic) __weak id <WFExtensionApplicationContextProviderDelegate> extensionApplicationContextProviderDelegate;
- (id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
- (id)bundleForWFApplicationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) BOOL wfIdleTimerDisabled;
@end

