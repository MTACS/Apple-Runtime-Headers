//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBAssistantObserver-Protocol.h>

@class NSString;

@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver>
{
}

- (void)updateInterfaceOrientationWithRequestedOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)assistantDidAppear:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

