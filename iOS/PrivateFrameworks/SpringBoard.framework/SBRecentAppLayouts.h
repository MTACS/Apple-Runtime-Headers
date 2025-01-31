//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationRestrictionObserver-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, SBAppSwitcherDefaults, SBApplicationController, SBIconController, SBRecentAppLayoutsPersister;
@protocol BSInvalidatable, SBRecentAppLayoutsDelegate;

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver>
{
    NSMutableArray *_allRecents;
    NSMutableArray *_unhiddenRecents;
    NSDictionary *_allRecentsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentsForBundleIdentifiers;
    NSDictionary *_allRecentDisplayItemsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentDisplayItemsForBundleIdentifiers;
    NSMutableSet *_appsAllowedWhileHidden;
    SBAppSwitcherDefaults *_defaults;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBRecentAppLayoutsPersister *_persister;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    id <SBRecentAppLayoutsDelegate> _delegate;
}

@property(nonatomic) __weak id <SBRecentAppLayoutsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_migrateDisplayItemIfNeeded:(id)arg1;
- (_Bool)_isApplicationSupported:(id)arg1;
- (void)_installedApplicationsDidChange:(id)arg1;
- (void)_iconVisibilityDidChange:(id)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)_filterRestrictedUnsupportedAndInvalidAppsFromRecents;
- (id)_changeDescriptionForFilteringRestrictedUnsupportedAndInvalidAppsFromAppLayouts:(id)arg1;
- (void)_filterRestrictedOrUnsupportedAppsFromRecents;
- (id)_changeDescriptionForFilteringRestrictedOrUnsupportedAppsFromAppLayouts:(id)arg1;
- (_Bool)_isDisplayItemRestrictedOrUnsupported:(id)arg1;
- (void)_disallowAppFromAppearingWhileHidden:(id)arg1;
- (void)_allowAppToAppearWhileHidden:(id)arg1;
- (void)_loadPPTAppsIntoModel;
- (void)_addAllAppsToModel;
- (_Bool)_loadStashedModelAtPath:(id)arg1;
- (_Bool)_stashModelToPath:(id)arg1;
- (void)_setUpStashedModelSettingsOutlets;
- (_Bool)_isExistingSceneIdentifierValidForClaimedMultiwindowSupportInDisplayItem:(id)arg1;
- (void)_validateAndUpdateRecents:(id)arg1;
- (id)_displayItemLayoutRolesFromLegacyPrefsForLoadedDisplayItems:(id)arg1;
- (id)_recentDisplayItemsFromLegacyPrefs;
- (id)_recentsFromPrefs;
- (void)_saveRecents;
- (id)_legacyAppLayoutsForDisplayItems:(id)arg1 layoutRolesMapping:(id)arg2;
- (id)_legacyAppLayoutForItem:(id)arg1 layoutRole:(long long)arg2;
- (void)hide:(id)arg1;
- (void)removeAppLayouts:(id)arg1;
- (void)remove:(id)arg1;
- (void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2;
- (void)addToFront:(id)arg1;
- (id)_changeDescriptionForFilteringAppLayouts:(id)arg1 withDisplayItemTest:(CDUnknownBlockType)arg2;
- (void)_setRecents:(id)arg1 notifyForChangeDescription:(id)arg2;
- (void)_persistSynchronously;
- (void)_persistSoon;
- (id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(_Bool)arg2;
- (id)recentsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(_Bool)arg2;
- (id)recentsIncludingHiddenAppLayouts:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 persister:(id)arg2 iconController:(id)arg3 applicationController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

