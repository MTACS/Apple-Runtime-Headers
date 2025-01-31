//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMViewControllerMetricsDelegate-Protocol.h>
#import <InAppMessages/IAMWebMessageControllerDelegate-Protocol.h>

@class IAMWebMessageController, ICInAppMessageEntry, NSString, NSURL;
@protocol IAMWebMessagePresentationCoordinatorDelegate;

@interface IAMWebMessagePresentationCoordinator : NSObject <IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate>
{
    NSURL *_webArchiveURL;
    _Bool _isPresenting;
    id <IAMWebMessagePresentationCoordinatorDelegate> _delegate;
    IAMWebMessageController *_webMessageController;
    ICInAppMessageEntry *_webMessageEntry;
}

@property(retain, nonatomic) ICInAppMessageEntry *webMessageEntry; // @synthesize webMessageEntry=_webMessageEntry;
@property(retain, nonatomic) IAMWebMessageController *webMessageController; // @synthesize webMessageController=_webMessageController;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak id <IAMWebMessagePresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewController:(id)arg1 didReportDismissalAction:(long long)arg2;
- (void)webMessageControllerWebViewDidRequestAction:(id)arg1 actionConfiguration:(id)arg2;
- (void)webMessageControllerWebViewDidRequestOpenURL:(id)arg1 url:(id)arg2;
- (void)webMessageControllerWebViewDidReportEvent:(id)arg1 event:(id)arg2;
- (void)webMessageControllerWebViewDidRequestClose:(id)arg1;
- (void)_handleWebMessageClose;
- (_Bool)present;
- (void)load;
- (id)presentingViewController;
- (id)initWithWebMessageEntry:(id)arg1 webArchiveURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

