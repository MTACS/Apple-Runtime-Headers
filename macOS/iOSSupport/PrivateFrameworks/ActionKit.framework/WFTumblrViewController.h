//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ActionKit/WKNavigationDelegate-Protocol.h>

@class NSString, TMTumblrAuthenticator, WKWebView;
@protocol WFTumblrViewControllerDelegate;

@interface WFTumblrViewController : UIViewController <WKNavigationDelegate>
{
    WKWebView *_webView;
    id <WFTumblrViewControllerDelegate> _delegate;
    TMTumblrAuthenticator *_authenticator;
}

@property(retain, nonatomic) TMTumblrAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) __weak id <WFTumblrViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)cancel;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithOAuthConsumerKey:(id)arg1 OAuthConsumerSecret:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

