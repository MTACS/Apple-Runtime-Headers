//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUUserItemManager-Protocol.h>

@class HFItem, HFUserItem, HMHome, HMUser, HUAccessorySettingsItemModule, NSArray, NSString;

@interface HUEditUserItemManager : HFItemManager <HUUserItemManager>
{
    HFItem *_localAccessItem;
    HFItem *_remoteAccessItem;
    HFItem *_allowEditingItem;
    HFItem *_camerasItem;
    HFItem *_pendingAccessoriesItem;
    HFItem *_personalRequestsItem;
    HFItem *_personalRequestsFooterItem;
    HFItem *_tvViewingProfilesItem;
    HUAccessorySettingsItemModule *_userSettingsItemModule;
    HMHome *_homeForUser;
    HFItem *_removeItem;
    NSArray *_sectionOrderArrayWhenViewingSelf;
    NSArray *_sectionOrderArrayWhenViewingOther;
}

@property(retain, nonatomic) NSArray *sectionOrderArrayWhenViewingOther; // @synthesize sectionOrderArrayWhenViewingOther=_sectionOrderArrayWhenViewingOther;
@property(retain, nonatomic) NSArray *sectionOrderArrayWhenViewingSelf; // @synthesize sectionOrderArrayWhenViewingSelf=_sectionOrderArrayWhenViewingSelf;
@property(retain, nonatomic) HFItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HMHome *homeForUser; // @synthesize homeForUser=_homeForUser;
@property(retain, nonatomic) HUAccessorySettingsItemModule *userSettingsItemModule; // @synthesize userSettingsItemModule=_userSettingsItemModule;
@property(retain, nonatomic) HFItem *tvViewingProfilesItem; // @synthesize tvViewingProfilesItem=_tvViewingProfilesItem;
@property(readonly, nonatomic) HFItem *personalRequestsFooterItem; // @synthesize personalRequestsFooterItem=_personalRequestsFooterItem;
@property(retain, nonatomic) HFItem *personalRequestsItem; // @synthesize personalRequestsItem=_personalRequestsItem;
@property(retain, nonatomic) HFItem *pendingAccessoriesItem; // @synthesize pendingAccessoriesItem=_pendingAccessoriesItem;
@property(retain, nonatomic) HFItem *camerasItem; // @synthesize camerasItem=_camerasItem;
@property(retain, nonatomic) HFItem *allowEditingItem; // @synthesize allowEditingItem=_allowEditingItem;
@property(retain, nonatomic) HFItem *remoteAccessItem; // @synthesize remoteAccessItem=_remoteAccessItem;
@property(retain, nonatomic) HFItem *localAccessItem; // @synthesize localAccessItem=_localAccessItem;
- (void).cxx_destruct;
- (_Bool)_isVoiceIDEnabled:(id)arg1;
- (_Bool)_isTVViewingProfilesEnabledForUser;
- (_Bool)_isPersonalRequestsEnabledForUser;
- (_Bool)_canModifyUserBeingEditedPermissions;
- (_Bool)_hasPendingAccessories;
- (_Bool)_hasTVViewingProfilesDevice;
- (_Bool)_hasPersonalRequestsDevice;
- (_Bool)_hasSupportedCameraWithRecording;
- (_Bool)_hasResidentDevice;
- (_Bool)_isUserBeingEditedTheDeviceUser;
- (_Bool)_isUserAdmin:(id)arg1;
- (_Bool)_isUserOwner:(id)arg1;
- (_Bool)_isEditingAllowedForUser:(id)arg1;
- (_Bool)_isRemoteAccessAllowedForUser:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_homeFuture;
- (id)reuseIdentifierForFooterViewInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) HMUser *userBeingEdited;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HFUserItem *sourceItem; // @dynamic sourceItem;
@property(readonly) Class superclass;

@end

