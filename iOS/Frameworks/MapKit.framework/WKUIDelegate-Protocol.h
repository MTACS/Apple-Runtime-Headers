//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSArray, NSString, UIViewController, WKContextMenuElementInfo, WKFrameInfo, WKNavigationAction, WKPreviewElementInfo, WKWebView, WKWebViewConfiguration, WKWindowFeatures;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol WKUIDelegate <NSObject>

@optional
- (void)webView:(WKWebView *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)webView:(WKWebView *)arg1 contextMenuConfigurationForElement:(WKContextMenuElementInfo *)arg2 completionHandler:(void (^)(UIContextMenuConfiguration *))arg3;
- (void)webView:(WKWebView *)arg1 commitPreviewingViewController:(UIViewController *)arg2;
- (UIViewController *)webView:(WKWebView *)arg1 previewingViewControllerForElement:(WKPreviewElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (_Bool)webView:(WKWebView *)arg1 shouldPreviewElement:(WKPreviewElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WKFrameInfo *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (void)webView:(WKWebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(void))arg4;
- (void)webViewDidClose:(WKWebView *)arg1;
- (WKWebView *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
@end

