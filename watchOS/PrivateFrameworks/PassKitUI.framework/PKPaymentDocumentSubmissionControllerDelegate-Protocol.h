//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentDocumentSubmissionController, UIViewController;

@protocol PKPaymentDocumentSubmissionControllerDelegate <NSObject>
- (void)captureController:(PKPaymentDocumentSubmissionController *)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)captureController:(PKPaymentDocumentSubmissionController *)arg1 requestsPushViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)captureController:(PKPaymentDocumentSubmissionController *)arg1 requestsPresentViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)captureController:(PKPaymentDocumentSubmissionController *)arg1 didChangeStateTo:(int)arg2;
- (void)captureController:(PKPaymentDocumentSubmissionController *)arg1 showLoading:(_Bool)arg2;
@end

