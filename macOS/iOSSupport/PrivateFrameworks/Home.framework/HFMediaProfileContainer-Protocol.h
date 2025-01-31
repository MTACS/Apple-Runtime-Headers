//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFAccessoryVendor-Protocol.h>
#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeKitSettingsVendor-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFRoomContextProviding-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFSymptomFixableObject-Protocol.h>
#import <Home/HFSymptomsHandlerVendor-Protocol.h>
#import <Home/HFSymptomsVendor-Protocol.h>
#import <Home/HMMediaObject-Protocol.h>

@class ACAccount, HFServiceNameComponents, HMAccessory, HMMediaSession, NAFuture, NSSet, NSString;
@protocol HFMediaValueSource;

@protocol HFMediaProfileContainer <HMMediaObject, HFHomeKitSettingsVendor, HFAccessoryVendor, HFStateDumpBuildable, HFReorderableHomeKitObject, HFFavoritable, HFRoomContextProviding, HFSymptomsVendor, HFSymptomsHandlerVendor, HFSymptomFixableObject>
@property(readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, copy, nonatomic) NSString *hf_categoryLocalizedDescription;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, nonatomic) BOOL hf_showsAudioSettings;
@property(readonly, nonatomic) BOOL hf_supportsMediaSystem;
@property(readonly, nonatomic) BOOL hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) BOOL hf_isReachable;
@property(readonly, nonatomic) BOOL hf_isAppleMusicReachable;
@property(readonly, nonatomic) BOOL hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) BOOL hf_isCurrentAccessory;
@property(readonly, copy, nonatomic) HMMediaSession *mediaSession;
- (NSString *)hf_idsDeviceIdentifierWithError:(id *)arg1;
- (NAFuture *)hf_fetchLog:(NSString *)arg1 timeout:(double)arg2;
- (NAFuture *)hf_fetchLogListWithTimeout:(double)arg1;
- (ACAccount *)hf_appleMusicCurrentLoggedInAccount;
- (NSString *)hf_appleMusicCurrentLoggedInAccountDSID;
@end

