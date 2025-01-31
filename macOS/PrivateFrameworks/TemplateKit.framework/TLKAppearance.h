//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSString;

@interface TLKAppearance : NSObject
{
    BOOL _isDark;
    BOOL _isVibrant;
    unsigned long long _style;
    NSString *_name;
    NSColor *_backgroundColor;
    NSColor *_groupedBackgroundColor;
    NSColor *_platterColor;
    id _compositingFilter;
    double _accessibilityContrastColorBoost;
}

+ (id)colorWithRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3;
+ (void)disableAppearanceOverrideForView:(id)arg1;
+ (BOOL)viewHasOverriddenAppearance:(id)arg1;
+ (id)bestAppearanceForAppearance:(id)arg1;
+ (id)bestAppearanceForSystem;
+ (id)bestAppearanceForView:(id)arg1;
+ (id)appearanceWithStyle:(unsigned long long)arg1;
+ (id)allAppearances;
@property(readonly) double accessibilityContrastColorBoost; // @synthesize accessibilityContrastColorBoost=_accessibilityContrastColorBoost;
@property(readonly) id compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(readonly) NSColor *platterColor; // @synthesize platterColor=_platterColor;
@property(readonly) NSColor *groupedBackgroundColor; // @synthesize groupedBackgroundColor=_groupedBackgroundColor;
@property(readonly) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly) BOOL isVibrant; // @synthesize isVibrant=_isVibrant;
@property(readonly) BOOL isDark; // @synthesize isDark=_isDark;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)colorWithWhite:(unsigned long long)arg1;
- (id)textColorForColor:(long long)arg1;
- (void)overrideAppearanceForView:(id)arg1;
- (void)disableAppearanceForView:(id)arg1;
- (void)enableAppearanceForContainer:(id)arg1;
- (void)enableAppearanceForView:(id)arg1;
- (id)buttonColorForProminence:(unsigned long long)arg1;
@property(readonly) NSColor *quaternaryButtonColor;
@property(readonly) NSColor *tertiaryButtonColor;
@property(readonly) NSColor *secondaryButtonColor;
@property(readonly) NSColor *primaryButtonColor;
- (id)colorForProminence:(unsigned long long)arg1;
@property(readonly) NSColor *quaternaryColor;
@property(readonly) NSColor *tertiaryColor;
@property(readonly) NSColor *secondaryColor;
@property(readonly) NSColor *primaryColor;

@end

