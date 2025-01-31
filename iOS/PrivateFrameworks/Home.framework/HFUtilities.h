//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFUtilities : NSObject
{
}

+ (id)demoModeDirectoryURL;
+ (id)wallpaperURL;
+ (id)sharedApplicationSupportDirectoryURL;
+ (id)sharedLibraryDirectoryURL;
+ (id)sharedUserDirectoryURL;
+ (id)documentsDirectoryURL;
+ (id)cachesDirectoryURL;
+ (id)applicationSupportDirectoryURL;
+ (id)libraryDirectoryURL;
+ (id)uniqueHomeKitNameForName:(id)arg1 allNames:(id)arg2;
+ (id)sanitizeUserEnteredHomeKitName:(id)arg1;
+ (id)sanitizeAutoGeneratedHomeKitName:(id)arg1;
+ (id)deviceAirDropIdentifier;
+ (_Bool)isInAirplaneMode;
+ (void)acceptCameraFeedbackConsent;
+ (_Bool)hasAcceptedCameraFeedbackEmployeeConsent;
+ (_Bool)cameraFeedbackSupported;
+ (_Bool)shouldShowReachabilityErrors;
+ (_Bool)shouldSuppressAllErrorsForDemo;
+ (_Bool)isPressDemoModeEnabled;
+ (_Bool)supportsBeingCurrentLocationDevice;
+ (_Bool)supportsAddAccessory;
+ (_Bool)isAMac;
+ (_Bool)useWLANInsteadOfWiFi;
+ (_Bool)isHorseman;
+ (_Bool)isInternalTest;
+ (_Bool)isInternalInstall;
+ (CDUnknownBlockType)comparatorWithSortedObjects:(id)arg1;
+ (CDUnknownBlockType)comparatorWithSortedClasses:(id)arg1 secondaryComparator:(CDUnknownBlockType)arg2;

@end

