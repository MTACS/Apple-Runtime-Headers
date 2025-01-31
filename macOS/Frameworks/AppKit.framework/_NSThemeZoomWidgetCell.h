//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/_NSThemeWidgetCell.h>

#import <AppKit/NSMenuDelegate-Protocol.h>

@class NSMenu, NSString, NSTrackingArea, NSWindow;

__attribute__((visibility("hidden")))
@interface _NSThemeZoomWidgetCell : _NSThemeWidgetCell <NSMenuDelegate>
{
    BOOL _performedHandoff;
    BOOL _stoppedTracking;
    BOOL _eligibleForHandoff;
    struct CGPoint _mouseLocation;
    BOOL _trackingMouse;
    BOOL _trackingPopupMenu;
    BOOL _isMouseInside;
    NSWindow *_trackedWindow;
    NSMenu *_contextMenu;
    NSTrackingArea *_exitTrackingArea;
}

@property(retain) NSTrackingArea *exitTrackingArea; // @synthesize exitTrackingArea=_exitTrackingArea;
@property(retain) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property __weak NSWindow *trackedWindow; // @synthesize trackedWindow=_trackedWindow;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accessibilityActionNames;
- (BOOL)accessibilityPerformShowMenu;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)performHandoff:(id)arg1;
- (void)_setTemporaryMouseOutsideLeftGroup:(BOOL)arg1 ofView:(id)arg2;
- (void)showMenu:(id)arg1;
- (void)performClick:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)stopTrackingForDismissal;
- (void)startTrackingForDismissal;
- (void)handleStopTrackingHoverEvent:(id)arg1;
- (void)stopTrackingHover;
- (void)startTrackingHover;
- (void)removeHoverObservers;
- (void)addHoverObservers;
- (void)flagsChanged;
- (BOOL)wantsMenu;
- (BOOL)wantsHoverTracking;
- (void)_setMouseTrackingInRect:(struct CGRect)arg1 ofView:(id)arg2;
- (int)menuOption;
- (BOOL)_hasRolloverContentArt;
- (BOOL)isZoomButton;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)_hitTestForTrackMouseEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

