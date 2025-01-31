//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartToneAdjustmentController : PIAdjustmentController
{
    struct {
        double exposure;
        double contrast;
        double brightness;
        double shadows;
        double highlights;
        double black;
        double rawHighlights;
        double localLight;
    } _smartSettings;
}

+ (id)statisticsKey;
+ (id)inputRawHighlightsKey;
+ (id)inputLocalLightKey;
+ (id)inputBlackKey;
+ (id)inputHighlightsKey;
+ (id)inputShadowsKey;
+ (id)inputBrightnessKey;
+ (id)inputContrastKey;
+ (id)inputExposureKey;
+ (id)offsetShadowsKey;
+ (id)offsetLocalLightKey;
+ (id)offsetHighlightsKey;
+ (id)offsetExposureKey;
+ (id)offsetContrastKey;
+ (id)offsetBrightnessKey;
+ (id)offsetBlackKey;
+ (id)attributeLightMapHeightKey;
+ (id)attributeLightMapWidthKey;
+ (id)attributeLightMapKey;
+ (id)attributeLocalLightKey;
+ (id)attributeBlackPointKey;
+ (id)attributeShadowsKey;
+ (id)attributeHighlightsKey;
+ (id)attributeExposureKey;
+ (id)attributeContrastKey;
+ (id)attributeBrightnessKey;
+ (id)inputLightKey;
@property(nonatomic) double offsetShadows;
@property(nonatomic) double offsetLocalLight;
@property(nonatomic) double offsetHighlights;
@property(nonatomic) double offsetExposure;
@property(nonatomic) double offsetContrast;
@property(nonatomic) double offsetBrightness;
@property(nonatomic) double offsetBlack;
@property(copy, nonatomic) NSDictionary *statistics;
- (double)inputRawHighlights;
- (void)setInputRawHighlights:(double)arg1;
- (double)inputLocalLight;
- (void)setInputLocalLight:(double)arg1;
- (double)inputBlack;
- (void)setInputBlack:(double)arg1;
- (double)inputHighlights;
- (void)setInputHighlights:(double)arg1;
- (double)inputShadows;
- (void)setInputShadows:(double)arg1;
- (double)inputContrast;
- (void)setInputContrast:(double)arg1;
- (double)inputBrightness;
- (void)setInputBrightness:(double)arg1;
- (double)inputExposure;
- (void)setInputExposure:(double)arg1;
@property(nonatomic) double inputLight;
- (id)computedSettings;
- (void)_updateSettingsWithInputLight:(double)arg1;
- (id)initWithAdjustment:(id)arg1;

@end

