//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, _SFSettingsAlertItem;
@protocol _SFBrowserContentController;

@interface _SFPageFormatMenuController : NSObject
{
    _SFSettingsAlertItem *_readerAlertItem;
    id <_SFBrowserContentController> _browserContentController;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak id <_SFBrowserContentController> browserContentController; // @synthesize browserContentController=_browserContentController;
- (void).cxx_destruct;
- (id)_sitePreferencesAlertItem;
- (id)_contentBlockersToggleAlertItem;
- (_Bool)_canHideToolbar;
- (_Bool)_canToggleContentBlockers;
- (id)_readerFontAlertItem;
- (id)_readerThemeAlertItem;
- (id)_readerTextSizeAlertItem;
- (id)_pageZoomAlertItem;
- (id)_fullScreenAlertItem;
- (id)_desktopMobileToggleAlertItem;
- (id)_readerAlertItem;
- (void)_readerAvailabilityDidChange:(id)arg1;
- (void)presentMenuFromViewController:(id)arg1 withSourceInfo:(id)arg2;
- (id)initWithBrowserContentController:(id)arg1;

@end

