//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareKit/NSMenuDelegate-Protocol.h>
#import <ShareKit/NSPopoverDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMenu, NSMutableArray, NSOperationQueue, NSSharingServicePicker, NSString, NSUUID, SHKSharingService, SHKSharingServicePickerMenuLatencyMetric;
@protocol OS_dispatch_source, SHKMenuControllerDelegate;

@interface SHKSharingServicePicker : NSObject <NSPopoverDelegate, NSMenuDelegate>
{
    id <SHKMenuControllerDelegate> _delegate;
    NSSharingServicePicker *_nsSharingServicePicker;
    NSArray *_items;
    BOOL _itemsReady;
    NSMenu *_menu;
    NSMenu *_testMenu;
    NSOperationQueue *_serviceItemProviderOperationQueue;
    NSArray *_serviceItemProviderOperations;
    NSMutableArray *_sharingServices;
    NSObject<OS_dispatch_source> *_fetchingKeepTimer;
    BOOL _menuAvailable;
    BOOL _hasActionServices;
    BOOL _menuItemsComplete;
    NSArray *_applicationServices;
    NSArray *_excludedSharingServiceNames;
    NSDictionary *_info;
    long long _style;
    long long _completedProviderCount;
    NSUUID *_currentMenuItemsQueryID;
    NSArray *_menuItems;
    SHKSharingServicePickerMenuLatencyMetric *_menuLatencyMetric;
    SHKSharingService *_selectedSharingService;
    long long _totalProviderCount;
}

+ (void)incrementUseCount;
+ (unsigned long long)useCount;
@property(nonatomic) long long totalProviderCount; // @synthesize totalProviderCount=_totalProviderCount;
@property(retain) SHKSharingService *selectedSharingService; // @synthesize selectedSharingService=_selectedSharingService;
@property(retain) SHKSharingServicePickerMenuLatencyMetric *menuLatencyMetric; // @synthesize menuLatencyMetric=_menuLatencyMetric;
@property BOOL menuItemsComplete; // @synthesize menuItemsComplete=_menuItemsComplete;
@property(retain) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property BOOL hasActionServices; // @synthesize hasActionServices=_hasActionServices;
@property(retain) NSUUID *currentMenuItemsQueryID; // @synthesize currentMenuItemsQueryID=_currentMenuItemsQueryID;
@property(nonatomic) long long completedProviderCount; // @synthesize completedProviderCount=_completedProviderCount;
@property long long style; // @synthesize style=_style;
@property(retain) NSDictionary *info; // @synthesize info=_info;
@property(copy) NSArray *excludedSharingServiceNames; // @synthesize excludedSharingServiceNames=_excludedSharingServiceNames;
@property(copy) NSArray *applicationServices; // @synthesize applicationServices=_applicationServices;
@property(retain, nonatomic) NSArray *serviceItemProviderOperations; // @synthesize serviceItemProviderOperations=_serviceItemProviderOperations;
@property(retain, nonatomic) NSOperationQueue *serviceItemProviderOperationQueue; // @synthesize serviceItemProviderOperationQueue=_serviceItemProviderOperationQueue;
@property __weak NSSharingServicePicker *nsSharingServicePicker; // @synthesize nsSharingServicePicker=_nsSharingServicePicker;
@property __weak id <SHKMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)worksWhenModal;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)handlePickerQueryWithID:(id)arg1 completedWithMenuItems:(id)arg2 sharingServices:(id)arg3;
- (struct CGPoint)menuLocationForRect:(struct CGRect)arg1 view:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)handleMenuItemsAvailable;
- (void)startFetchingKeepTimer;
- (void)ensureFetchingKeepTimerStopped;
- (void)handleFetchingKeepTimerFired;
- (void)setupMenuLatencyMeasurement;
- (void)cleanUpMenu;
- (void)_shareServiceSelected:(id)arg1;
- (void)ensureNSSharingServicePickerIsSet;
- (id)menu;
- (void)menuWithCompletion:(CDUnknownBlockType)arg1;
- (void)openAppExtensionsPrefpane;
- (void)_populateNSMenu;
- (id)pickerMenuItemsForShareExtensions:(id)arg1 actionExtensions:(id)arg2 menuItemServices:(id *)arg3 enforceOnMainQueue:(BOOL)arg4;
- (void)queryPickerMenuItemsAndServicesWithCompletion:(CDUnknownBlockType)arg1;
- (id)orderAndGroupActionServices:(id)arg1;
- (id)sharingMenuItemsForShareServices:(id)arg1 menuItemsServices:(id *)arg2 enforceOnMainQueue:(BOOL)arg3;
- (id)newPickerMenu;
- (id)collapsedSharingMenuItemWithSubmenu:(id)arg1;
- (id)moreMenuItem;
- (id)fetchingMenuItem;
- (id)applicationServicesWithType:(long long)arg1;
- (id)menuItemFromService:(id)arg1;
- (id)menuItemFromService:(id)arg1 includeImage:(BOOL)arg2;
- (id)_delimiterAttributes;
- (id)_subtitleAttributes;
- (id)_titleAttributes;
- (id)userMenuImage;
- (id)tintedImageWithSize:(struct CGSize)arg1 fraction:(double)arg2 fromImage:(id)arg3;
- (id)moreButtonTouchBarImage;
- (id)moreButtonImage;
- (id)emptyMenuImage;
- (id)_alternateItemIdentifierFromRepresentedObject:(id)arg1;
- (id)_serviceFromRepresentedObject:(id)arg1;
- (id)_representedObjectForService:(id)arg1 alternateItemIdentifier:(id)arg2 touchBarImage:(id)arg3;
- (void)notifyDidChooseSharingService:(id)arg1;
- (void)_handleItemsReady;
- (void)_performSharingService:(id)arg1;
- (id)_subjectForSharingService:(id)arg1;
- (id)_placeholderItems;
- (id)_itemsForSharingService:(id)arg1;
- (id)_shareServicesWithMask:(unsigned long long)arg1;
- (id)pickerServicesForServices:(id)arg1 withMask:(unsigned long long)arg2 enforceOnMainQueue:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_queueBackgroundOperations;
@property(retain) NSArray *items;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

