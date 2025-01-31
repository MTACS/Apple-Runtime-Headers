//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFloatingApplicationLiveContentOverlayView-Protocol.h>

@class NSString, SBInlineAppExposeContainerViewController, UIView;

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView>
{
    SBInlineAppExposeContainerViewController *_inlineAppExposeContainerViewController;
}

@property(readonly, nonatomic) SBInlineAppExposeContainerViewController *inlineAppExposeContainerViewController; // @synthesize inlineAppExposeContainerViewController=_inlineAppExposeContainerViewController;
- (void).cxx_destruct;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setRendersAsynchronously:(_Bool)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (void)invalidate;
- (_Bool)rendersAsynchronously;
- (void)setAsynchronousRenderingDisabled:(_Bool)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(struct CGRect)arg2 interfaceOrientation:(long long)arg3;
- (id)contentViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

