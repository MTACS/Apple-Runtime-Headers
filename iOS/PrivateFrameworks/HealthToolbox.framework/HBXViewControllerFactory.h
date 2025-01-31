//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HBXUnitSupport, HKHealthChartFactory, WDProfile;

@interface HBXViewControllerFactory : NSObject
{
    WDProfile *_profile;
    HBXUnitSupport *_unitSupport;
    HKHealthChartFactory *_chartFactory;
}

+ (id)sharedInstance;
@property(retain, nonatomic) HKHealthChartFactory *chartFactory; // @synthesize chartFactory=_chartFactory;
@property(retain, nonatomic) HBXUnitSupport *unitSupport; // @synthesize unitSupport=_unitSupport;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)unitStringForType:(id)arg1;
- (void)fetchUserDefaultForKey:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)localizedUnitDisplayNameForDisplayType:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forType:(id)arg2;
- (id)preferredUnitForType:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1;
- (id)localizedDisplayNameForUnit:(id)arg1;
- (id)createHKUnitPreferenceController;
- (void)createAndStartExportForViewController:(id)arg1;
- (id)createAddDataViewController:(id)arg1 with:(id)arg2;
- (id)createDataSourcesTableViewController:(id)arg1;
- (id)createListViewController:(id)arg1;
- (id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)arg1;
- (id)createUnitPreferencesController:(id)arg1;
- (id)createDetailViewControllerForType:(id)arg1 displayDate:(id)arg2;
- (id)createDetailViewControllerForType:(id)arg1;
- (id)createActivityChart:(id)arg1;
- (id)createInteractiveChartForType:(id)arg1 secondaryTypeIdentifier:(id)arg2 displayDateInterval:(id)arg3;
- (id)createInteractiveChartForType:(id)arg1 secondaryTypeIdentifier:(id)arg2 displayDate:(id)arg3;
- (id)createChartForTypeIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 minimumSize:(struct CGSize)arg4 disableXAxis:(_Bool)arg5;
- (id)createDeletedSourceMessageViewControllerForSource:(id)arg1;
- (id)createDeviceSourcesViewControllerUsingInsetStyling:(_Bool)arg1;
- (id)createAppSourcesViewControllerUsingInsetStyling:(_Bool)arg1;
- (id)createSourcesViewControllerUsingInsetStyling:(_Bool)arg1;
- (id)createBuddyViewController;
- (id)createFavoritesController;
- (id)createProfileViewController;
- (id)createActivityViewController;
- (id)createHeartRoomViewControllerWithDisplayDate:(id)arg1;
- (id)notificationManager;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end

