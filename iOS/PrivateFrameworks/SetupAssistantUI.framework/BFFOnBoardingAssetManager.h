//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BFFOnBoardingAssetManager : NSObject
{
}

+ (long long)currentAssetDeviceClass;
+ (_Bool)shouldUseWorldwideAssetForPreferredLanguages:(id)arg1 language:(id)arg2 feature:(long long)arg3;
+ (_Bool)shouldUseWorldwideAssetForLanguage:(id)arg1 feature:(long long)arg2;
+ (_Bool)hasWorldwideAsset:(long long)arg1;
+ (id)appropriateAvailableLanguageForPreferredLanguages:(id)arg1 regionCode:(id)arg2;
+ (id)appropriateAvailableLanguageForCurrentLanguage;
+ (id)sharedManager;
- (id)featureKey;
- (id)placeholderImageNameForFeature:(long long)arg1 language:(id)arg2;
- (id)placeholderImageNameForFeature:(long long)arg1;
- (id)placeholderImageForFeature:(long long)arg1;
- (void)purgeAssets:(id)arg1;
- (void)purgeMovieForFeature:(long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeFeatureMoviesExceptLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeFeatureMoviesWithCompletion:(CDUnknownBlockType)arg1;
- (id)movieURLForAsset:(id)arg1;
- (void)downloadAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)assetTypeForCurrentDevice;
- (id)assetFeatureValueForFeature:(long long)arg1;
- (void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrieveMovieForFeature:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

