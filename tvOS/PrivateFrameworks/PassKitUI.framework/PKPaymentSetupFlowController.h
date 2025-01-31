//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKSetupFlowControllerProtocol-Protocol.h>

@class NSString, PKPasscodeUpgradeFlowController, PKPaymentProvisioningController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowController : NSObject <PKSetupFlowControllerProtocol>
{
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long setupContext; // @synthesize setupContext=_setupContext;
@property(readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
- (void).cxx_destruct;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 allowsManualEntry:(_Bool)arg2;
- (void)nextViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPasscodeUpgradeOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)manualEntryPaymentSetupViewControllerForProduct:(id)arg1 allowsSelectingBank:(_Bool)arg2;
- (id)_paymentSetupViewControllerForAssociatedCredential:(id)arg1 product:(id)arg2 allowsManualEntry:(_Bool)arg3;
- (id)paymentSetupViewControllerForAssociatedCredentials:(id)arg1 product:(id)arg2 allowsManualEntry:(_Bool)arg3;
- (id)_defaultPaymentSetupViewControllerAllowingManualEntry:(_Bool)arg1;
- (id)intialPaymentSetupViewControllerForMode:(long long)arg1 allowsManualEntry:(_Bool)arg2;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

