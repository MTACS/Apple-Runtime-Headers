//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSArray, NSDictionary, NSString;

@interface BKSLocalDefaults : BSAbstractDefaultDomain
{
}

- (void)migrateDefaultsIfNecessary;
- (void)_bindAndRegisterDefaults;
- (id)init;

// Remaining properties
@property(nonatomic) float ALSDelayOnUnlock; // @dynamic ALSDelayOnUnlock;
@property(nonatomic, getter=isALSEnabled) _Bool ALSEnabled; // @dynamic ALSEnabled;
@property(nonatomic) long long ALSEpoch; // @dynamic ALSEpoch;
@property(retain, nonatomic) NSDictionary *ALSUserPreferences; // @dynamic ALSUserPreferences;
@property(nonatomic) int brightnessCurve; // @dynamic brightnessCurve;
@property(nonatomic, getter=isDigitizerSignpostsEnabled) _Bool digitizerSignpostsEnabled; // @dynamic digitizerSignpostsEnabled;
@property(nonatomic) _Bool digitizerVisualizeHitTestRegions; // @dynamic digitizerVisualizeHitTestRegions;
@property(nonatomic) _Bool digitizerVisualizeTouches; // @dynamic digitizerVisualizeTouches;
@property(nonatomic) _Bool disableCAOverscan; // @dynamic disableCAOverscan;
@property(nonatomic) _Bool disableCAScaling; // @dynamic disableCAScaling;
@property(nonatomic) _Bool disableCAYUV; // @dynamic disableCAYUV;
@property(nonatomic) _Bool disableCloneMirroring; // @dynamic disableCloneMirroring;
@property(nonatomic) _Bool disableStudyLogBTKeyboardEventLogging; // @dynamic disableStudyLogBTKeyboardEventLogging;
@property(nonatomic) _Bool disableStudyLogBTKeyboardEventRedirection; // @dynamic disableStudyLogBTKeyboardEventRedirection;
@property(nonatomic) _Bool disableStudyLogButtonLogging; // @dynamic disableStudyLogButtonLogging;
@property(nonatomic) _Bool disableStudyLogHomeButtonLogging; // @dynamic disableStudyLogHomeButtonLogging;
@property(nonatomic) _Bool disableStudyLogVolumeKeyLogging; // @dynamic disableStudyLogVolumeKeyLogging;
@property(nonatomic, getter=isDitheringEnabled) _Bool ditheringEnabled; // @dynamic ditheringEnabled;
@property(nonatomic) float fenceArbiterTimeoutInterval; // @dynamic fenceArbiterTimeoutInterval;
@property(nonatomic) _Bool forceCloneMirroring; // @dynamic forceCloneMirroring;
@property(nonatomic) __weak NSString *forceMirroredOrientation; // @dynamic forceMirroredOrientation;
@property(nonatomic) _Bool hideAppleLogoOnLaunch; // @dynamic hideAppleLogoOnLaunch;
@property(nonatomic) _Bool ignoreAccelerometerAndOrientationEvents; // @dynamic ignoreAccelerometerAndOrientationEvents;
@property(nonatomic) _Bool ignoreTetheringPreferences; // @dynamic ignoreTetheringPreferences;
@property(nonatomic) __weak NSArray *loggingTypesEnabled; // @dynamic loggingTypesEnabled;
@property(nonatomic) _Bool showBuildNumber; // @dynamic showBuildNumber;
@property(nonatomic) _Bool simulatePhoneButton; // @dynamic simulatePhoneButton;
@property(nonatomic, getter=isSteveNoteOverscanEnabled) _Bool steveNoteOverscanEnabled; // @dynamic steveNoteOverscanEnabled;
@property(nonatomic, getter=isSteveNoteRotationEnabled) _Bool steveNoteRotationEnabled; // @dynamic steveNoteRotationEnabled;

@end

