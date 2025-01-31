//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMService.h>

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeContainedObject-Protocol.h>
#import <Home/HFHomeStatusVisible-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFRoomContextProviding-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFServiceNameComponents, HFUserNotificationServiceSettings, HMCharacteristic, HMHome, HMRoom, NSDate, NSString, NSUUID;

@interface HMService (HFDebugging) <HFStateDumpBuildable, HFFavoritable, HFHomeStatusVisible, HFHomeContainedObject, HFRoomContextProviding, HFUserNotificationServiceSettingsProviding, HFReorderableHomeKitObject>
+ (id)hf_allRequiredCharacteristicTypesForStandardServices;
+ (id)hf_requiredCharacteristicTypesForDisplayMetadataWithServiceType:(id)arg1;
+ (id)hf_sensorCharacteristicTypeForServiceType:(id)arg1;
+ (id)hf_descriptionForServiceSubtype:(id)arg1;
+ (id)hf_defaultServiceSubtypeForServiceType:(id)arg1;
+ (id)_hf_allowedChildServicesTypeMap;
+ (CDUnknownBlockType)hf_serviceComparator;
+ (id)hf_roomsForServices:(id)arg1;
+ (id)hf_standardServiceTypes;
+ (id)hf_standardServices;
+ (id)hf_programmableSwitchServiceTypes;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_requiredCharacteristicTypesForDisplayMetadata;
- (_Bool)hf_canGroupWithService:(id)arg1;
- (id)hf_effectiveServiceSubtype;
- (id)hf_parentService;
- (_Bool)_hf_isDirectlyOrIndirectlyLinkedToService:(id)arg1;
- (id)hf_childServices;
- (id)hf_childServicesOfType:(id)arg1;
- (_Bool)hf_isTelevision;
- (_Bool)hf_isVisible;
- (_Bool)hf_isLegacyService;
- (_Bool)hf_isInGroup;
- (_Bool)hf_supportsGroups;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_shiftedIconDescriptor;
- (id)hf_iconDescriptor;
- (id)hf_effectiveServiceType;
- (id)hf_serviceDescriptor;
- (id)hf_characteristicOfType:(id)arg1;
- (id)_hf_firstLinkedServiceOfType:(id)arg1;
@property(readonly, nonatomic) HMCharacteristic *hf_labelNamespaceCharacteristic;
@property(readonly, nonatomic) HMCharacteristic *hf_labelIndexCharacteristic;
@property(readonly, nonatomic) unsigned long long hf_fallbackProgrammableSwitchIndex;
@property(readonly, nonatomic) _Bool hf_isProgrammableSwitch;
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_supportsHomeStatus;
@property(readonly, nonatomic) __weak HMHome *home;
- (_Bool)hf_isValidObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
- (id)hf_updateUserNotificationSettings:(id)arg1;
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

