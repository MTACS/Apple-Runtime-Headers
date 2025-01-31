//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
- (void).cxx_destruct;
- (id)dictationSLSEnabledLanguages;
- (void)afPreferencesChanged:(id)arg1;
- (id)languageCode;
- (id)manualEndpointingThreshold;
- (_Bool)ignoreServerManualEndpointingThreshold;
- (_Bool)suppressDictationOptIn;
- (_Bool)dictationIsEnabled;
- (id)initSingleton;

@end

