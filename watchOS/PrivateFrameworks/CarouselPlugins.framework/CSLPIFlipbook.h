//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselPlugins/CSLPIFlipbookUpdateDelegate-Protocol.h>
#import <CarouselPlugins/CSLPISystemSleepObserverDelegate-Protocol.h>
#import <CarouselPlugins/CSLSFlipbookFrameCoordinator-Protocol.h>

@class CADisplayFlipBook, CSLPIFlipbookFrameStore, CSLPIFlipbookUpdate, CSLPISystemSleepObserver, CSLPITimer, NSString, NSUserDefaults, UIViewController, _UIWatchFlipbookRootWindow;
@protocol CSLSAOTViewController, OS_dispatch_queue;

@interface CSLPIFlipbook : NSObject <CSLPISystemSleepObserverDelegate, CSLPIFlipbookUpdateDelegate, CSLSFlipbookFrameCoordinator>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    UIViewController<CSLSAOTViewController> *_aotViewController;
    unsigned long long _frameCount;
    CSLPIFlipbookFrameStore *_flipbookFrames;
    CADisplayFlipBook *_flipbook;
    CSLPITimer *_updateFlipbookTimer;
    CSLPIFlipbookUpdate *_update;
    NSUserDefaults *_observedDefaults;
    unsigned int _frameCapacity;
    _Bool _isStealthed;
    _Bool _flipbookWillBeActive;
    _Bool _willSleep;
    _UIWatchFlipbookRootWindow *_offscreenWindow;
    CSLPISystemSleepObserver *_systemSleepObserver;
}

- (void).cxx_destruct;
- (void)systemSleepObserverWillPowerOn:(id)arg1;
- (void)systemSleepObserver:(id)arg1 willSleepWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)withLock_updateShouldAdvanceToNextMinute:(id)arg1;
- (_Bool)updateShouldAdvanceToNextMinute:(id)arg1;
- (void)onWorkQueue_performNextUpdateToTargetFlipbookSize:(unsigned int)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)systemSleepObserver:(id)arg1 canSleep:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateDidAdvanceToNextMinute:(id)arg1 wasInitialFrame:(_Bool)arg2;
- (void)didEndUpdate:(id)arg1 wasActive:(_Bool)arg2 didCompleteAnimationFrames:(_Bool)arg3 notifyObserversBlock:(CDUnknownBlockType)arg4;
- (void)didStartUpdate:(id)arg1;
- (void)_withLock_invalidateFramesOnOrAfterPresentationTime:(id)arg1 forReason:(int)arg2 reasonStr:(id)arg3;
- (void)invalidateFramesOnOrAfterPresentationTime:(id)arg1 forReason:(id)arg2;
- (id)frameSpecifierOnScreenAtPresentationTime:(id)arg1;
- (_Bool)onWorkQueue_hasRoomForAnotherMinute;
- (void)onWorkQueue_flipbookTimerFired;
- (void)generateFrameForUpdate:(id)arg1 frameSpecifiers:(id)arg2 index:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)generateNextAnimationFramesForUpdate:(id)arg1 frameSpecifiers:(id)arg2;
- (void)generateNextAnimationFramesForUpdate:(id)arg1;
- (void)generationCompleteForUpdate:(id)arg1 didCompleteAnimationFrames:(_Bool)arg2;
- (_Bool)isCurrentUpdate:(id)arg1;
- (void)updateOffscreenWindowRotation;
- (void)deviceOrientationChanged;
- (void)withLock_endUpdate:(id)arg1 didCompleteAnimationFrames:(_Bool)arg2;
- (void)endPresentationForReason:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginPresentationForReason:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginPresentationWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIViewController<CSLSAOTViewController> *AOTViewController;
- (void)dealloc;
- (id)initWithFrameCapacity:(unsigned int)arg1 aotViewController:(id)arg2 invalidationDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

