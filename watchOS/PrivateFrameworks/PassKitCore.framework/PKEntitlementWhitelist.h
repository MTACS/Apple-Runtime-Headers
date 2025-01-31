//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PKEntitlementWhitelist : NSObject
{
    _Bool _passesAllAccess;
    _Bool _passesAddSilently;
    _Bool _passPresentationSuppression;
    _Bool _paymentAllAccess;
    _Bool _paymentConfiguration;
    _Bool _paymentPresentation;
    _Bool _applePayTrustAllAccess;
    _Bool _inAppPayments;
    _Bool _inAppPaymentsPrivate;
    _Bool _webPayments;
    _Bool _winterpegPayments;
    _Bool _cardOnFilePayments;
    _Bool _AMPCardEnrollment;
    _Bool _trustedDeviceEnrollmentInfo;
    _Bool _peerPaymentAllAccess;
    _Bool _featuresAllAccess;
    _Bool _supportsDisbursements;
    _Bool _addSilently;
    NSString *_applicationID;
    NSString *_developerTeamID;
    NSArray *_merchantIdentifiers;
    NSArray *_teamIDs;
    NSArray *_passTypeIDs;
    int _processIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property _Bool addSilently; // @synthesize addSilently=_addSilently;
@property(copy) NSArray *passTypeIDs; // @synthesize passTypeIDs=_passTypeIDs;
@property(copy) NSArray *teamIDs; // @synthesize teamIDs=_teamIDs;
@property(readonly, copy) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly, copy) NSString *developerTeamID; // @synthesize developerTeamID=_developerTeamID;
@property(readonly, copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly) _Bool supportsDisbursements; // @synthesize supportsDisbursements=_supportsDisbursements;
@property(readonly) _Bool featuresAllAccess; // @synthesize featuresAllAccess=_featuresAllAccess;
@property(readonly) _Bool peerPaymentAllAccess; // @synthesize peerPaymentAllAccess=_peerPaymentAllAccess;
@property(readonly) _Bool trustedDeviceEnrollmentInfo; // @synthesize trustedDeviceEnrollmentInfo=_trustedDeviceEnrollmentInfo;
@property(readonly) _Bool AMPCardEnrollment; // @synthesize AMPCardEnrollment=_AMPCardEnrollment;
@property(readonly) _Bool cardOnFilePayments; // @synthesize cardOnFilePayments=_cardOnFilePayments;
@property(readonly) _Bool winterpegPayments; // @synthesize winterpegPayments=_winterpegPayments;
@property(readonly) _Bool webPayments; // @synthesize webPayments=_webPayments;
@property(readonly) _Bool inAppPaymentsPrivate; // @synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate;
@property(readonly) _Bool inAppPayments; // @synthesize inAppPayments=_inAppPayments;
@property(readonly) _Bool applePayTrustAllAccess; // @synthesize applePayTrustAllAccess=_applePayTrustAllAccess;
@property(readonly) _Bool paymentPresentation; // @synthesize paymentPresentation=_paymentPresentation;
@property(readonly) _Bool paymentConfiguration; // @synthesize paymentConfiguration=_paymentConfiguration;
@property(readonly) _Bool paymentAllAccess; // @synthesize paymentAllAccess=_paymentAllAccess;
@property(readonly) _Bool passPresentationSuppression; // @synthesize passPresentationSuppression=_passPresentationSuppression;
@property(readonly) _Bool passesAddSilently; // @synthesize passesAddSilently=_passesAddSilently;
@property(readonly) _Bool passesAllAccess; // @synthesize passesAllAccess=_passesAllAccess;
- (void).cxx_destruct;
- (void)_probeEntitlementsWithConnection:(id)arg1;
- (id)_stringValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (id)_arrayValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (_Bool)_boolValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (void *)_copyValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (_Bool)isEntitledForMerchantSession:(id)arg1;
- (_Bool)isEntitledForPaymentRequest:(id)arg1;
- (_Bool)supportsWebPayments;
@property(readonly) _Bool allAccess;
- (id)initWithConnection:(id)arg1;

@end

