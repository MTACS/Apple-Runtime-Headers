//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKitUI/NPKPassView.h>

#import <NanoPassKitUI/NPKPassAccessoryViewControllerDelegate-Protocol.h>
#import <NanoPassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NPKPassDetailView, NPKPassHeaderView, NPKUIAssertion, NSString, PKPaymentService, PUICButton, UIImageView, UILabel, UIView;
@protocol NPKStandardPassViewDelegate;

@interface NPKStandardPassView : NPKPassView <NPKPassAccessoryViewControllerDelegate, PKPaymentServiceDelegate>
{
    _Bool _showNotificationNub;
    _Bool _addBufferAtBottomOfPass;
    _Bool _isTransitioningToListView;
    _Bool _useBarcodeBackground;
    id <NPKStandardPassViewDelegate> _standardPassViewDelegate;
    UIImageView *_backgroundView;
    UIImageView *_eventTicketBackgroundView;
    UIImageView *_logoImageView;
    UILabel *_logoTextLabel;
    UIView *_logoBackgroundView;
    UIView *_contactlessSymbolView;
    UIView *_contactlessSymbolViewBackgroundView;
    NPKPassHeaderView *_headerView;
    NPKPassDetailView *_passDetailView;
    UIImageView *_footerImageView;
    UIImageView *_barcodeView;
    UIImageView *_passholderImageView;
    UIView *_barcodeBackground;
    UILabel *_expiredTextView;
    NPKUIAssertion *_barcodeAssertion;
    PUICButton *_accessoryButton;
    PKPaymentService *_paymentService;
}

+ (id)stretchableBackgroundImageWithColor:(id)arg1 nubColor:(id)arg2;
+ (id)stretchableBackgroundImageWithColor:(id)arg1;
@property(retain, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property(retain, nonatomic) PUICButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) NPKUIAssertion *barcodeAssertion; // @synthesize barcodeAssertion=_barcodeAssertion;
@property(retain, nonatomic) UILabel *expiredTextView; // @synthesize expiredTextView=_expiredTextView;
@property(nonatomic) _Bool useBarcodeBackground; // @synthesize useBarcodeBackground=_useBarcodeBackground;
@property(retain, nonatomic) UIView *barcodeBackground; // @synthesize barcodeBackground=_barcodeBackground;
@property(retain, nonatomic) UIImageView *passholderImageView; // @synthesize passholderImageView=_passholderImageView;
@property(retain, nonatomic) UIImageView *barcodeView; // @synthesize barcodeView=_barcodeView;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
@property(retain, nonatomic) NPKPassDetailView *passDetailView; // @synthesize passDetailView=_passDetailView;
@property(retain, nonatomic) NPKPassHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contactlessSymbolViewBackgroundView; // @synthesize contactlessSymbolViewBackgroundView=_contactlessSymbolViewBackgroundView;
@property(retain, nonatomic) UIView *contactlessSymbolView; // @synthesize contactlessSymbolView=_contactlessSymbolView;
@property(retain, nonatomic) UIView *logoBackgroundView; // @synthesize logoBackgroundView=_logoBackgroundView;
@property(retain, nonatomic) UILabel *logoTextLabel; // @synthesize logoTextLabel=_logoTextLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *eventTicketBackgroundView; // @synthesize eventTicketBackgroundView=_eventTicketBackgroundView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <NPKStandardPassViewDelegate> standardPassViewDelegate; // @synthesize standardPassViewDelegate=_standardPassViewDelegate;
@property(nonatomic) _Bool isTransitioningToListView; // @synthesize isTransitioningToListView=_isTransitioningToListView;
@property(nonatomic) _Bool addBufferAtBottomOfPass; // @synthesize addBufferAtBottomOfPass=_addBufferAtBottomOfPass;
@property(nonatomic) _Bool showNotificationNub; // @synthesize showNotificationNub=_showNotificationNub;
- (void).cxx_destruct;
- (void)_transitionFromBarcodeDisplay:(id)arg1;
- (float)_logoHeight;
- (float)_logoBackgroundHeight;
- (float)_passholder_image_padding_below;
- (float)_passholder_image_padding_above;
- (float)_passholder_image_diameter;
- (void)invalidateAssertions;
- (void)_removeEventTicketBackground;
- (void)_addEventTicketBackground;
- (void)_loadPassDetailView;
- (void)_refreshBalancesOnEnterForeground:(id)arg1;
- (void)_setBalances:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)passAccessoryViewControllerDidDismiss:(id)arg1;
- (void)passAccessoryViewController:(id)arg1 hideStatusBar:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_accessoryButtonTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)handleTapAtPoint:(struct CGPoint)arg1 andScrollWithBehavior:(int *)arg2 toOffset:(struct CGPoint *)arg3;
@property(readonly) float barcodeYOffset;
- (void)passContentScrollingBegan;
- (void)passContentScrollingAnimationEndedWithOffset:(struct CGPoint)arg1;
- (void)passContentScrolledToOffset:(struct CGPoint *)arg1 animated:(_Bool)arg2;
- (void)updateUI;
- (void)_setBorderVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUseBarcodeBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPass:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

