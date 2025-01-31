//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClientMux;

@interface CoreTelephonyClient : NSObject
{
    id _delegate;
    struct queue _userQueue;
    CoreTelephonyClientMux *_mux;
}

+ (id)sharedMultiplexer;
@property(retain, nonatomic) CoreTelephonyClientMux *mux; // @synthesize mux=_mux;
@property(nonatomic) struct queue userQueue; // @synthesize userQueue=_userQueue;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ping:(CDUnknownBlockType)arg1;
- (id)synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)getActiveContexts:(id *)arg1;
- (void)getActiveContextsWithCallback:(CDUnknownBlockType)arg1;
- (id)getDescriptorsForDomain:(int)arg1 error:(id *)arg2;
- (void)getDescriptorsForDomain:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (int)getDualSimCapability:(id *)arg1;
- (id)getSimLessContexts:(id *)arg1;
- (void)getSimLessContextsWithCallback:(CDUnknownBlockType)arg1;
- (id)getSubscriptionInfoWithError:(id *)arg1;
- (void)getSubscriptionInfo:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 multiplexer:(id)arg2;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1;
- (unsigned int)private_getNATTKeepAliveOverCell:(id)arg1 error:(id *)arg2;
- (id)private_getDataStatus:(id)arg1 error:(id *)arg2;
- (id)private_getConnectionState:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (id)private_getActiveConnections:(id)arg1 error:(id *)arg2;
- (id)private_getConnectionAvailability:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (id)private_setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(_Bool)arg3;
- (id)getPreferredDataServiceDescriptorSync:(id *)arg1;
- (id)getPreferredDataSubscriptionContextSync:(id *)arg1;
- (void)getPreferredDataServiceDescriptor:(CDUnknownBlockType)arg1;
- (void)getPreferredDataSubscriptionContext:(CDUnknownBlockType)arg1;
- (id)getCurrentDataServiceDescriptorSync:(id *)arg1;
- (id)getCurrentDataSubscriptionContextSync:(id *)arg1;
- (void)getCurrentDataServiceDescriptor:(CDUnknownBlockType)arg1;
- (void)getCurrentDataSubscriptionContext:(CDUnknownBlockType)arg1;
- (void)isTetheringEditingSupported:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isTetheringEditingSupported:(id)arg1 error:(id *)arg2;
- (unsigned int)getNATTKeepAliveOverCellForPreferredDataContext:(id *)arg1;
- (unsigned int)getNATTKeepAliveOverCell:(id *)arg1;
- (unsigned int)getNATTKeepAliveOverCell:(id)arg1 error:(id *)arg2;
- (void)getNATTKeepAliveOverCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getInternetDataStatusSync:(id *)arg1;
- (void)getInternetDataStatus:(CDUnknownBlockType)arg1;
- (id)getDataStatus:(id)arg1 error:(id *)arg2;
- (void)getDataStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getInternetConnectionStateSync:(id *)arg1;
- (void)getInternetConnectionState:(CDUnknownBlockType)arg1;
- (id)getConnectionState:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (void)getConnectionState:(id)arg1 connectionType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getActiveConnections:(id)arg1 error:(id *)arg2;
- (void)getActiveConnections:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getInternetConnectionAvailabilitySync:(id *)arg1;
- (void)getInternetConnectionAvailability:(CDUnknownBlockType)arg1;
- (id)getConnectionAvailability:(id)arg1 connectionType:(int)arg2 error:(id *)arg3;
- (void)getConnectionAvailability:(id)arg1 connectionType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getPacketContextCount:(unsigned int *)arg1;
- (_Bool)getSupportDynamicDataSimSwitchSync:(id *)arg1;
- (_Bool)getSupportDynamicDataSimSwitchOnBBCallSync:(id *)arg1;
- (void)getSupportDynamicDataSimSwitch:(CDUnknownBlockType)arg1;
- (void)getSupportDynamicDataSimSwitchOnBBCall:(CDUnknownBlockType)arg1;
- (id)setSupportDynamicDataSimSwitch:(_Bool)arg1;
- (id)setSupportDynamicDataSimSwitchOnBBCall:(_Bool)arg1;
- (void)setSupportDynamicDataSimSwitch:(_Bool)arg1 forIccid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSupportDynamicDataSimSwitch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSupportDynamicDataSimSwitchOnBBCall:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)getInternationalDataAccessStatusSync:(id *)arg1;
- (void)getInternationalDataAccessStatus:(CDUnknownBlockType)arg1;
- (id)setInternationalDataAccessStatus:(_Bool)arg1;
- (void)setInternationalDataAccessStatus:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)resetAPNSettings;
- (void)resetAPNSettings:(CDUnknownBlockType)arg1;
- (id)setInternetActive:(_Bool)arg1;
- (void)setInternetActive:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(_Bool)arg3;
- (void)setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 error:(id *)arg3;
- (void)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyNormalEmergencyModeWithError:(id *)arg1;
- (void)copyNormalEmergencyMode:(CDUnknownBlockType)arg1;
- (id)copyEmergencyModeWithError:(id *)arg1;
- (void)copyEmergencyMode:(CDUnknownBlockType)arg1;
- (void)copyLocationAreaCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyPublicCellId:(id)arg1 error:(id *)arg2;
- (void)copyCellId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyCellInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshCellMonitor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getOperatorMultiPartyCallCountMaximum:(id)arg1 error:(id *)arg2;
- (void)getOperatorMultiPartyCallCountMaximum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getCallCapabilities:(id)arg1 error:(id *)arg2;
- (void)getCallCapabilities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowUserWarningWhenDialingCallOnContext:(id)arg1 error:(id *)arg2;
- (void)shouldShowUserWarningWhenDialingCallOnContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEmergencyNumberWithWhitelistIncluded:(id)arg1 number:(id)arg2 error:(id *)arg3;
- (void)isEmergencyNumberWithWhitelistIncluded:(id)arg1 number:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isEmergencyNumber:(id)arg1 number:(id)arg2 error:(id *)arg3;
- (void)isEmergencyNumber:(id)arg1 number:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getEmergencyTextNumbers:(id)arg1 error:(id *)arg2;
- (void)getEmergencyTextNumbers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSmscAddress:(id)arg1 error:(id *)arg2;
- (void)getSmscAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSmsReadyState:(id)arg1 error:(id *)arg2;
- (void)getSmsReadyState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearUserEnteredBillingEndDayOfMonth:(id)arg1 error:(id *)arg2;
- (void)clearUserEnteredBillingEndDayOfMonth:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserEnteredBillingEnd:(id)arg1 dayOfMonth:(id)arg2 error:(id *)arg3;
- (void)setUserEnteredBillingEnd:(id)arg1 dayOfMonth:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)userEnteredBillingEndDayOfMont:(id)arg1 error:(id *)arg2;
- (void)userEnteredBillingEndDayOfMont:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearUserEnteredMonthlyRoamingBudget:(id)arg1 error:(id *)arg2;
- (void)clearUserEnteredMonthlyRoamingBudget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserEntered:(id)arg1 monthlyRoamingBudget:(id)arg2 error:(id *)arg3;
- (void)setUserEntered:(id)arg1 monthlyRoamingBudget:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)userEnteredMonthlyRoamingBudget:(id)arg1 error:(id *)arg2;
- (void)userEnteredMonthlyRoamingBudget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearUserEnteredMonthlyBudget:(id)arg1 error:(id *)arg2;
- (void)clearUserEnteredMonthlyBudget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserEntered:(id)arg1 monthlyBudget:(id)arg2 error:(id *)arg3;
- (void)setUserEntered:(id)arg1 monthlyBudget:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)userEnteredMonthlyBudget:(id)arg1 error:(id *)arg2;
- (void)userEnteredMonthlyBudget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)billingCycleEndDatesForLastPeriods:(unsigned int)arg1 error:(id *)arg2;
- (void)dataUsageForLastPeriods:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyBundleIdentifier:(id)arg1 bundleType:(id)arg2 error:(id *)arg3;
- (void)copyBundleIdentifier:(id)arg1 bundleType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)copyBundleVersion:(id)arg1 bundleType:(id)arg2 error:(id *)arg3;
- (void)copyBundleVersion:(id)arg1 bundleType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 getAttachApnSettings:(id *)arg2;
- (void)context:(id)arg1 modifyAttachApnSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 modifyAttachApnSettings:(id)arg2;
- (_Bool)isAttachApnSettingAllowed:(id)arg1 error:(id *)arg2;
- (void)isAttachApnSettingAllowed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyCarrierBundleVersion:(id)arg1 error:(id *)arg2;
- (void)copyCarrierBundleVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyCarrierBookmarks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyCarrierBundleLocation:(id)arg1 error:(id *)arg2;
- (void)copyCarrierBundleLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)context:(id)arg1 getCarrierBundleValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 getCarrierBundleValue:(id)arg2 error:(id *)arg3;
- (id)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 error:(id *)arg4;
- (void)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkRadioBootHealth:(CDUnknownBlockType)arg1;
- (void)setVoLTEAudioCodec:(id)arg1 codecInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getUserDefaultVoiceSubscriptionContext:(id *)arg1;
- (void)refreshUserAuthToken:(id)arg1 error:(id *)arg2;
- (id)getUserAuthToken:(id)arg1 error:(id *)arg2;
- (void)authenticate:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)SIMUnlockProcedureDidComplete;
- (void)promptForSIMUnlock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateAuthenticationInfoUsingSim:(id)arg1 authParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateUICCAuthenticationInfo:(id)arg1 authParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setActiveUserDataSelection:(id)arg1 error:(id *)arg2;
- (void)setActiveUserDataSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDefaultVoice:(id)arg1 error:(id *)arg2;
- (void)setDefaultVoice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLabel:(id)arg1 label:(id)arg2 error:(id *)arg3;
- (void)setLabel:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)copyLabel:(id)arg1 error:(id *)arg2;
- (void)copyLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getShortLabel:(id)arg1 error:(id *)arg2;
- (void)getShortLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSimLabel:(id)arg1 error:(id *)arg2;
- (void)getSimLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getRemainingPUKAttemptCount:(id)arg1 error:(id *)arg2;
- (void)getRemainingPUKAttemptCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getRemainingPINAttemptCount:(id)arg1 error:(id *)arg2;
- (void)getRemainingPINAttemptCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 error:(id *)arg4;
- (void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 error:(id *)arg4;
- (void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unlockPIN:(id)arg1 pin:(id)arg2 error:(id *)arg3;
- (void)unlockPIN:(id)arg1 pin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveSIMLockValue:(id)arg1 enabled:(_Bool)arg2 pin:(id)arg3 error:(id *)arg4;
- (void)saveSIMLockValue:(id)arg1 enabled:(_Bool)arg2 pin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchSIMLockValue:(id)arg1 error:(id *)arg2;
- (void)fetchSIMLockValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyGid2:(id)arg1 error:(id *)arg2;
- (void)copyGid2:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyGid1:(id)arg1 error:(id *)arg2;
- (void)copyGid1:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileSubscriberNetworkCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileSubscriberNetworkCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyLastKnownMobileSubscriberCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyLastKnownMobileSubscriberCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getMobileSubscriberHomeCountryList:(id)arg1 error:(id *)arg2;
- (void)getMobileSubscriberHomeCountryList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)isEsimFor:(id)arg1 error:(id *)arg2;
- (id)copyMobileSubscriberIsoSubregionCode:(id)arg1 MNC:(id)arg2 error:(id *)arg3;
- (id)copyMobileSubscriberIsoCountryCode:(id)arg1 error:(id *)arg2;
- (id)copyMobileSubscriberCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileSubscriberCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)context:(id)arg1 evaluateMobileSubscriberIdentity:(id)arg2;
- (void)evaluateMobileSubscriberIdentity:(id)arg1 identity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 getEncryptedIdentity:(id)arg2 error:(id *)arg3;
- (void)createEncryptedIdentity:(id)arg1 identity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 error:(id *)arg3;
- (id)copyMobileSubscriberIdentity:(id)arg1 error:(id *)arg2;
- (void)copyMobileSubscriberIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copySIMIdentity:(id)arg1 error:(id *)arg2;
- (void)copySIMIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyFirmwareUpdateInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getTypeAllocationCode:(id)arg1 error:(id *)arg2;
- (id)getMobileEquipmentInfoFor:(id)arg1 error:(id *)arg2;
- (id)getMobileEquipmentInfo:(id *)arg1;
- (void)copyMobileEquipmentInfo:(CDUnknownBlockType)arg1;
- (id)getSIMTrayStatusOrError:(id *)arg1;
- (void)getSIMTrayStatus:(CDUnknownBlockType)arg1;
- (id)getSIMStatus:(id)arg1 error:(id *)arg2;
- (void)getSIMStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purchaseSweetgumPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSweetgumDataPlanMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshSweetgumAll:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshSweetgumApps:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSweetgumApps:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshSweetgumPlans:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSweetgumPlans:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshSweetgumUsage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSweetgumUsage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSweetgumUserConsent:(id)arg1 userConsent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getSweetgumUserConsentInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSweetgumCapabilities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transferRemotePlan:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getRemoteDeviceOfType:(unsigned int)arg1 withEID:(id)arg2 error:(id *)arg3;
- (void)getRemoteDeviceOfType:(unsigned int)arg1 withEID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getRemoteDevicesOfType:(unsigned int)arg1 error:(id *)arg2;
- (void)getRemoteDevicesOfType:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)context:(id)arg1 getPhoneNumberSignature:(id *)arg2;
- (void)context:(id)arg1 getPhoneNumberSignatureWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isPhoneNumberCredentialValid:(id)arg1 outError:(id *)arg2;
- (id)getPNRContext:(id)arg1 outError:(id *)arg2;
- (void)getPNRContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)issuePNRRequest:(id)arg1 pnrReqType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isPNRSupported:(id)arg1 outError:(id *)arg2;
- (void)isPNRSupported:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)context:(id)arg1 removePhoneServicesDevice:(id)arg2;
- (void)context:(id)arg1 removePhoneServicesDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 addPhoneServicesDevice:(id)arg2;
- (void)context:(id)arg1 addPhoneServicesDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)getPhoneServicesDeviceInfo:(id *)arg1;
- (void)getPhoneServicesDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)getPhoneServicesDeviceList:(id *)arg1;
- (void)getPhoneServicesDeviceListWithCompletion:(CDUnknownBlockType)arg1;
- (id)context:(id)arg1 recheckPhoneServicesAccountStatus:(id)arg2;
- (id)context:(id)arg1 getSystemCapabilities:(id *)arg2;
- (void)context:(id)arg1 getSystemCapabilitiesWithCompletion:(CDUnknownBlockType)arg2;
- (id)context:(id)arg1 setCapability:(id)arg2 enabled:(_Bool)arg3 with:(id)arg4;
- (void)context:(id)arg1 setCapability:(id)arg2 enabled:(_Bool)arg3 with:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)context:(id)arg1 getCapability:(id)arg2 status:(_Bool *)arg3 with:(id *)arg4;
- (void)context:(id)arg1 getCapability:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)context:(id)arg1 canSetCapability:(id)arg2 allowed:(_Bool *)arg3 with:(id *)arg4;
- (void)context:(id)arg1 canSetCapability:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getPublicSignalStrength:(id)arg1 error:(id *)arg2;
- (id)getDataMode:(id)arg1 error:(id *)arg2;
- (id)getSignalStrengthMeasurements:(id)arg1 error:(id *)arg2;
- (id)getEncryptionStatus:(id)arg1 error:(id *)arg2;
- (void)isNetworkReselectionNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyNetworkSelectionInfo:(id)arg1 error:(id *)arg2;
- (void)copyNetworkSelectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyNetworkSelectionState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyNetworkSelectionMode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)isNetworkSelectionMenuAvailable:(id)arg1 error:(id *)arg2;
- (void)isNetworkSelectionMenuAvailable:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyNetworkSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectNetwork:(id)arg1 network:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)automaticallySelectNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyNetworkList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNetworkList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSupportedDataRates:(id)arg1 error:(id *)arg2;
- (void)getSupportedDataRates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)getMaxDataRate:(id)arg1 error:(id *)arg2;
- (void)getMaxDataRate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)setMaxDataRate:(id)arg1 rate:(int)arg2;
- (void)setMaxDataRate:(id)arg1 rate:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)copyRegistrationIMSTransportInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getIMSRegistrationStatus:(id)arg1 error:(id *)arg2;
- (void)getIMSRegistrationStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyRegistrationAgentStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getRejectCauseCode:(id)arg1 error:(id *)arg2;
- (void)copyRejectCauseCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getEnhancedVoiceLinkQualityMetric:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceLinkQualityMetric:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSignalStrengthInfo:(id)arg1 error:(id *)arg2;
- (void)getSignalStrengthInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setBandInfo:(id)arg1 bands:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)copyBandInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRatSelection:(id)arg1 selection:(id)arg2 preferred:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getRatSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyAbbreviatedOperatorName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyWirelessTechnology:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyRadioAccessTechnology:(id)arg1 error:(id *)arg2;
- (void)copyRadioAccessTechnology:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getLocalizedOperatorName:(id)arg1 error:(id *)arg2;
- (void)copyLocalizedOperatorName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyOperatorName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyIsDataAttached:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyIsInHomeCountry:(id)arg1 error:(id *)arg2;
- (void)copyIsInHomeCountry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileNetworkCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileNetworkCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyLastKnownMobileCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyLastKnownMobileCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyMobileCountryCode:(id)arg1 error:(id *)arg2;
- (void)copyMobileCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyServingPlmn:(id)arg1 error:(id *)arg2;
- (void)copyServingPlmn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyRegistrationDisplayStatus:(id)arg1 error:(id *)arg2;
- (void)copyRegistrationDisplayStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyRegistrationStatus:(id)arg1 error:(id *)arg2;
- (void)copyRegistrationStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)renamePersonalWallet:(id)arg1 to:(id)arg2;
- (id)listPersonalWallets:(id *)arg1;
- (id)deletePersonalWallet:(id)arg1;
- (void)deletePersonalWallet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getConfiguredApns:(id)arg1 error:(id *)arg2;
- (void)getConfiguredApns:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetUIConfiguredApns:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getUIConfiguredApns:(id)arg1 error:(id *)arg2;
- (void)getUIConfiguredApns:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUIConfiguredApns:(id)arg1 apns:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)endPlanTransferForEndPoint:(unsigned int)arg1;
- (void)isAnyPlanOfTransferCapability:(unsigned int)arg1 availableForThisDeviceWithCompletion:(CDUnknownBlockType)arg2;
- (id)bootstrapPlanTransferForEndpoint:(unsigned int)arg1 usingMessageSession:(id)arg2;
- (id)bootstrapPlanTransferForEndpoint:(unsigned int)arg1;
- (_Bool)isAnyPlanTransferableFromThisDeviceOrError:(id *)arg1;
- (id)saveCallingLineIdRestrictionValue:(id)arg1 restrictionValue:(int)arg2;
- (void)saveCallingLineIdRestrictionValue:(id)arg1 restrictionValue:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)saveCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(_Bool)arg4 password:(id)arg5;
- (void)saveCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(_Bool)arg4 password:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)isUnconditionalCallForwardingActive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)saveCallForwardingValue:(id)arg1 value:(id)arg2;
- (void)saveCallForwardingValue:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)saveCallWaitingValue:(id)arg1 callClass:(int)arg2 enabled:(_Bool)arg3;
- (void)saveCallWaitingValue:(id)arg1 callClass:(int)arg2 enabled:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchCallingLineIdRestrictionValue:(id)arg1;
- (void)fetchCallingLineIdRestrictionValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchConnectedLineIdRestrictionValue:(id)arg1;
- (void)fetchConnectedLineIdRestrictionValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchCallingLinePresentationValue:(id)arg1;
- (void)fetchCallingLinePresentationValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchConnectedLinePresentationValue:(id)arg1;
- (void)fetchConnectedLinePresentationValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 password:(id)arg4;
- (void)fetchCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 password:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)fetchCallForwardingValue:(id)arg1 reason:(int)arg2 callClass:(int)arg3;
- (void)fetchCallForwardingValue:(id)arg1 reason:(int)arg2 callClass:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchCallWaitingValue:(id)arg1 callClass:(int)arg2;
- (void)fetchCallWaitingValue:(id)arg1 callClass:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)setVisualVoicemailState:(id)arg1 subscribed:(_Bool)arg2;
- (void)getVoicemailInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)setSaveDataMode:(id)arg1 enable:(_Bool)arg2;
- (_Bool)saveDataMode:(id)arg1 error:(id *)arg2;
- (id)getPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)getPhoneNumberWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)getPhonebookEntryCount:(id)arg1 error:(id *)arg2;
- (void)getPhonebookEntryCountWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPhonebookEntry:(id)arg1 atIndex:(int)arg2 error:(id *)arg3;
- (void)getPhonebookEntryWithCompletion:(id)arg1 atIndex:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchPhonebook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePhonebookEntry:(id)arg1 atIndex:(int)arg2 withContactName:(id)arg3 contactNumber:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)selectPhonebook:(id)arg1 forPhonebookName:(int)arg2 withPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)copyPriVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installPendingPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)plansPendingInstallWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteTransferPlansForEid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCurrentIMessageIccidsWithCompletion:(CDUnknownBlockType)arg1;
- (void)transferPlans:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferPlan:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getTransferPlansWithCompletion:(CDUnknownBlockType)arg1;
- (void)getTransferPlanListWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCameraScanInfoForCardData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)supportsPlanProvisioning:(id)arg1 carrierDescriptors:(id)arg2 smdpUrl:(id)arg3 iccidPrefix:(id)arg4;
- (void)addPlanWith:(id)arg1 appName:(id)arg2 appType:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addPlanWith:(id)arg1 request:(id)arg2 appName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

