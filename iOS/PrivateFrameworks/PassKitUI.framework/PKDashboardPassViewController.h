//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKDashboardViewController.h>

#import <PassKitUI/BKOperationDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class BKPresenceDetectOperation, NSObject, NSString, PKPass, PKPaymentPass, UIButton, _PKUIKVisibilityBackdropView;
@protocol OS_dispatch_source, PKDashboardPassViewControllerDelegate><PKDashboardDelegate;

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, BKOperationDelegate>
{
    _Bool _fingerPresent;
    BKPresenceDetectOperation *_fingerDetectionOperation;
    NSObject<OS_dispatch_source> *_fingerTimer;
    _Bool _invalidated;
    CDStruct_973bafd3 _foregroundActiveState;
    unsigned char _visibility;
    _Bool _footerVisible;
    PKPaymentPass *_frontmostPaymentPass;
    _PKUIKVisibilityBackdropView *_footerBackground;
    struct CGSize _defaultPasscodeButtonSize;
    UIButton *_passcodeButton;
    PKPass *_frontmostPass;
}

@property(retain, nonatomic) PKPass *frontmostPass; // @synthesize frontmostPass=_frontmostPass;
- (void).cxx_destruct;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)operation:(id)arg1 presenceStateChanged:(_Bool)arg2;
- (void)_passcodeTapped:(id)arg1;
- (void)_updatePasscodeButtonTitle;
- (void)_createFooter;
- (void)_updateFooterAnimated:(_Bool)arg1;
- (void)_updateFingerDetection;
- (void)_visibilityDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)invalidate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PKDashboardPassViewControllerDelegate><PKDashboardDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

