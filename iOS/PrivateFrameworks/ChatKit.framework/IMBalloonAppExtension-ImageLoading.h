//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMBalloonAppExtension.h>

@class NSString;

@interface IMBalloonAppExtension (ImageLoading)
- (id)__ck_breadcrumbImage;
- (id)__ck_statusImage;
- (id)__ck_browserImageForInterfaceStyle:(long long)arg1;
- (void)_generateIconsFirstTimeForInterfaceStyle:(long long)arg1;
- (id)cacheKeyForInterfaceStyle:(long long)arg1;
- (void)_checkForIconUpdates:(id)arg1 interfaceStyle:(long long)arg2;
- (id)_iconPathOnDisk:(id)arg1;
- (id)_generatePlaceholderImageForInterfaceStyle:(long long)arg1;
- (id)_generateCacheImageForInterfaceStyle:(long long)arg1;
- (void)_saveIconToURL:(id)arg1 toURL:(id)arg2;
- (id)_appIconFromFileURL:(id)arg1;
- (void)__ck_prefetchBrowserImageForInterfaceStyle:(long long)arg1;
- (id)placeholderImageForInterfaceStyle:(long long)arg1;
- (id)_adamID;
@property(readonly, nonatomic) NSString *containingBundleIdentifier;
@end

