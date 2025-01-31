//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/WKNavigationDelegate-Protocol.h>

@class AKServerRequestConfiguration, AKURLRequestApprover, NSString;
@protocol AKIDPHandlerDelegate;

@interface AKIDPHandler : NSObject <WKNavigationDelegate>
{
    AKURLRequestApprover *_redirectApprover;
    AKServerRequestConfiguration *_configuration;
    id <AKIDPHandlerDelegate> _delegate;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak id <AKIDPHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKServerRequestConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_completeFlowWithError:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)_samlJavaScriptQuery;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)_safeAcsDictionaryFromResult:(id)arg1;
- (void)cancel;
- (id)initWithConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

