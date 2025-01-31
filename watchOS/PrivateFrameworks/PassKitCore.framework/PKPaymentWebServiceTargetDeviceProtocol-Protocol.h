//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSSet, NSString, PKAppleAccountInformation, PKApplePayTrustKeyRequest, PKOSVersionRequirement, PKPass, PKPassUpgradeRequest, PKPaymentPass, PKPaymentProductsActionRequest, PKPaymentWebService, PKTrustedDeviceEnrollmentInfo, PKVerificationChannel;

@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
- (unsigned int)secureElementOwnershipStateForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)claimSecureElementForCurrentUser;
- (void)paymentWebService:(PKPaymentWebService *)arg1 requestPassUpgrade:(PKPassUpgradeRequest *)arg2 pass:(PKPaymentPass *)arg3 completion:(void (^)(NSError *, PKPaymentPass *))arg4;
- (void)paymentWebService:(PKPaymentWebService *)arg1 validateTransferPreconditionsWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)downloadAllPaymentPassesForPaymentWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 validateAddPreconditionsWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (_Bool)paymentWebService:(PKPaymentWebService *)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(NSString *)arg2;
- (_Bool)paymentWebService:(PKPaymentWebService *)arg1 hasPassesOfType:(unsigned int)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setNewAuthRandom:(void (^)(_Bool))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(void (^)(_Bool, NSData *, NSData *))arg2;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (NSArray *)secureElementIdentifiers;
- (_Bool)supportsAutomaticPassPresentation;
- (NSString *)deviceRegion;
- (NSString *)bridgedClientInfo;
- (PKOSVersionRequirement *)deviceVersion;
- (NSString *)deviceClass;
- (NSString *)deviceName;
- (NSString *)deviceDescriptionForPaymentWebService:(PKPaymentWebService *)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(PKPaymentWebService *)arg1;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 filterVerificationChannels:(NSArray *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didRegisterWithRegionMap:(NSDictionary *)arg2 primaryRegionTopic:(NSString *)arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 deleteApplicationWithAID:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 provisioningDataWithCompletionHandler:(void (^)(PKPaymentDeviceProvisioningData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 signData:(NSData *)arg2 signatureEntanglementMode:(unsigned int)arg3 withCompletionHandler:(void (^)(NSData *, PKSecureElementSignatureInfo *, NSError *))arg4;
- (void)renewAppleAccountWithCompletionHandler:(void (^)(int, PKAppleAccountInformation *))arg1;
- (PKAppleAccountInformation *)appleAccountInformation;
- (void)paymentWebService:(PKPaymentWebService *)arg1 registrationDataWithCompletionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 configurationDataWithCompletionHandler:(void (^)(PKPaymentDeviceConfigurationData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)paymentWebServiceDidUpdateConfiguration:(PKPaymentWebService *)arg1;

@optional
- (void)paymentWebService:(PKPaymentWebService *)arg1 passOwnershipTokenWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 storePassOwnershipToken:(NSString *)arg2 withIdentifier:(NSString *)arg3;
- (void)performDeviceCheckInWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)performProductActionRequest:(PKPaymentProductsActionRequest *)arg1 completion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg2;
- (void)availableProductsWithCompletion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setDefaultPaymentPassUniqueIdentifier:(NSString *)arg2;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 updateAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(PKAccount *, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 deviceMetadataWithFields:(unsigned int)arg2 completion:(void (^)(PKPaymentDeviceMetadata *))arg3;
- (void)featureApplicationsForProvisioningWithCompletion:(void (^)(NSArray *))arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(void (^)(NSArray *, NSArray *))arg1;
- (NSSet *)supportedFeatureIdentifiersWithPaymentWebService:(PKPaymentWebService *)arg1;
- (_Bool)paymentWebServiceSupportsAccounts:(PKPaymentWebService *)arg1;
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 removePass:(PKPass *)arg2 withCompletionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandlerV2:(void (^)(PKPaymentPass *))arg3;
- (_Bool)supportsCredentialType:(int)arg1;
- (_Bool)supportsExpressMode:(NSString *)arg1;
- (_Bool)supportsExpressModeForExpressPassType:(int)arg1;
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(int)arg1;
- (_Bool)secureElementIsAvailable;
- (_Bool)felicaSecureElementIsAvailable;
- (void)paymentWebService:(PKPaymentWebService *)arg1 handlePotentialExpressPass:(PKPaymentPass *)arg2 withCompletionHandler:(void (^)(NSSet *))arg3;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 passesOfType:(unsigned int)arg2;
- (void)setMaximumPaymentCards:(unsigned int)arg1;
- (unsigned int)maximumPaymentCards;
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;
- (NSString *)cellularNetworkRegion;
- (void)deleteApplePayTrustKeyWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)createApplePayTrustKeyWithRequest:(PKApplePayTrustKeyRequest *)arg1 completion:(void (^)(PKApplePayTrustKey *, NSError *))arg2;
- (void)applePayTrustKeyForIdentifier:(NSString *)arg1 completion:(void (^)(PKApplePayTrustKey *))arg2;
- (void)signatureForAuthToken:(NSString *)arg1 webService:(PKPaymentWebService *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (PKTrustedDeviceEnrollmentInfo *)trustedDeviceEnrollmentInfoForWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 registrationDataWithAuthToken:(NSString *)arg2 completionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg3;
@end

