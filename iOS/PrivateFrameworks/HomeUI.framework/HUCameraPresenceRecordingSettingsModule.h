//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUExpandableItemModule.h>

#import <HomeUI/HUCameraSettingsModule-Protocol.h>
#import <HomeUI/ICQUpgradeFlowManagerDelegate-Protocol.h>

@class HFItem, HFStaticItemProvider, HUCameraUsageOptionItemProvider, NSArray, NSSet, NSString, UIViewController;

@interface HUCameraPresenceRecordingSettingsModule : HUExpandableItemModule <ICQUpgradeFlowManagerDelegate, HUCameraSettingsModule>
{
    _Bool _didCompleteCloudUpgradeOffer;
    NSSet *_itemProviders;
    HFItem *_showOptionsItem;
    NSSet *_cameraProfiles;
    unsigned long long _presenceEventType;
    UIViewController *_presentingViewController;
    HUCameraUsageOptionItemProvider *_recordingSettingItemProvider;
    HFStaticItemProvider *_itemProvider;
    UIViewController *_viewController;
    NSArray *_optionItems;
}

@property(nonatomic) _Bool didCompleteCloudUpgradeOffer; // @synthesize didCompleteCloudUpgradeOffer=_didCompleteCloudUpgradeOffer;
@property(retain, nonatomic) NSArray *optionItems; // @synthesize optionItems=_optionItems;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) HFStaticItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(retain, nonatomic) HUCameraUsageOptionItemProvider *recordingSettingItemProvider; // @synthesize recordingSettingItemProvider=_recordingSettingItemProvider;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) unsigned long long presenceEventType; // @synthesize presenceEventType=_presenceEventType;
@property(readonly, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
- (id)showOptionsItem;
- (void).cxx_destruct;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_buildItemProvider;
- (id)itemProviders;
- (id)didSelectItem:(id)arg1;
- (id)_titleString;
- (void)_dispatchUpdateForCameraProfile:(id)arg1;
- (void)presentMissingSupportedHubAlert;
- (void)presentInsufficientPrivilegesAlert;
- (void)presentCloudUpgradeFlowWithCameraCount:(unsigned long long)arg1;
- (id)updateStreamingSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long accessModeSetting;
- (_Bool)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 presenceEventType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long displayStyle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

