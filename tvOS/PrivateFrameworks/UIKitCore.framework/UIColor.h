//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class CIColor, NSString;

@interface UIColor : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_systemColorName;
    NSString *_cachedStyleString;
}

+ (id)_apiColorNames;
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)colorNamed:(id)arg1;
+ (id)_webContentBackgroundColor;
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_systemSelectedColor;
+ (id)_externalBarBackgroundColor;
+ (id)_grayColorForFontSize:(double)arg1;
+ (id)_dimmingViewColor;
+ (id)_translucentPaperTextureColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_externalSystemGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_externalSystemWhiteColor;
+ (id)_systemMidGrayTintColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_barHairlineShadowColor;
+ (id)_systemDestructiveTintColor;
+ (id)_systemInteractionTintColor;
+ (id)systemDarkGrayTintColor;
+ (id)systemDarkMidGrayTintColor;
+ (id)systemDarkLightMidGrayTintColor;
+ (id)systemDarkLightGrayTintColor;
+ (id)systemDarkExtraLightGrayTintColor;
+ (id)systemGrayTintColor;
+ (id)systemMidGrayTintColor;
+ (id)systemLightMidGrayTintColor;
+ (id)systemLightGrayTintColor;
+ (id)systemExtraLightGrayTintColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)systemDarkGrayColor;
+ (id)systemDarkMidGrayColor;
+ (id)systemDarkLightMidGrayColor;
+ (id)systemDarkLightGrayColor;
+ (id)systemDarkExtraLightGrayColor;
+ (id)systemDarkPurpleColor;
+ (id)systemDarkPinkColor;
+ (id)systemDarkTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemDarkOrangeColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkGreenColor;
+ (id)systemDarkRedColor;
+ (id)systemBlackColor;
+ (id)systemLightMidGrayColor;
+ (id)systemLightGrayColor;
+ (id)systemExtraLightGrayColor;
+ (id)systemWhiteColor;
+ (id)systemMidGrayColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableGroupedSeparatorLightColor;
+ (id)keyboardFocusIndicatorColor;
+ (id)darkTextColor;
+ (id)lightTextColor;
+ (id)selectionGrabberColor;
+ (id)insertionPointColor;
+ (id)selectionHighlightColor;
+ (id)pinStripeColor;
+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)textFieldAtomBlueColor;
+ (id)__halfTransparentWhiteColor;
+ (id)__halfTransparentBlackColor;
+ (id)infoTextOverPinStripeTextColor;
+ (id)textFieldAtomPurpleColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellValue1BlueColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tableShadowColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableCellbackgroundColorCarPlay;
+ (id)tableCellBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)clearColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)lightGrayColor;
+ (id)darkGrayColor;
+ (id)blackColor;
+ (id)classFallbacksForKeyedArchiver;
+ (_Bool)supportsSecureCoding;
+ (id)_dynamicCatalogColorForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;
+ (id)_disabledColorForColor:(id)arg1;
+ (id)_accessibilityLightenedColorForColor:(id)arg1;
+ (id)_accessibilityDarkenedColorForColor:(id)arg1;
+ (id)__darkSystemColorForColor:(id)arg1;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithUnvalidatedName:(id)arg1;
+ (id)_systemColorWithName:(id)arg1;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)_dynamicColorWithColorsByTraitCollection:(id)arg1;
+ (id)colorWithDynamicProvider:(CDUnknownBlockType)arg1;
+ (id)tertiarySystemGroupedBackgroundColor;
+ (id)secondarySystemGroupedBackgroundColor;
+ (id)systemGroupedBackgroundColor;
+ (id)tertiarySystemBackgroundColor;
+ (id)secondarySystemBackgroundColor;
+ (id)systemBackgroundColor;
+ (id)opaqueSeparatorColor;
+ (id)separatorColor;
+ (id)placeholderTextColor;
+ (id)linkColor;
+ (id)quaternaryLabelColor;
+ (id)tertiaryLabelColor;
+ (id)secondaryLabelColor;
+ (id)labelColor;
+ (id)systemIndigoColor;
+ (id)systemTealColor;
+ (id)systemBrownColor;
+ (id)systemGray6Color;
+ (id)systemGray5Color;
+ (id)systemGray4Color;
+ (id)systemGray3Color;
+ (id)systemGray2Color;
+ (id)systemGrayColor;
+ (id)systemPurpleColor;
+ (id)systemPinkColor;
+ (id)systemYellowColor;
+ (id)systemOrangeColor;
+ (id)_systemBlueColor2;
+ (id)systemBlueColor;
+ (id)systemGreenColor;
+ (id)systemRedColor;
+ (id)_unfocusedCarSystemColor:(id)arg1;
+ (id)_focusedCarSystemColor:(id)arg1;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_carSystemFocusSecondaryColor;
+ (id)_carSystemFocusPrimaryColor;
+ (id)_carSystemFocusLabelColor;
+ (id)_carSystemFocusColor;
+ (id)_carSystemQuaternaryColor;
+ (id)_carSystemTertiaryColor;
+ (id)_carSystemSecondaryColor;
+ (id)_carSystemPrimaryColor;
+ (id)_windowBackgroundColor;
+ (id)_groupTableHeaderFooterTextColor;
+ (id)_plainTableHeaderFooterTextColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)tableSelectionColor;
+ (id)tableSeparatorLightColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)groupTableViewBackgroundColor;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableBackgroundColor;
+ (id)_markedTextBackgroundColor;
+ (id)_splitViewBorderColor;
+ (id)_textFieldDisabledBorderColor;
+ (id)_textFieldBorderColor;
+ (id)_textFieldDisabledBackgroundColor;
+ (id)_textFieldBackgroundColor;
+ (id)_systemGroupBackgroundCellColor;
+ (id)_systemGroupBackgroundColor;
+ (id)_systemBackgroundSectionCellColor;
+ (id)_systemBackgroundSectionColor;
+ (id)_contentBackgroundColor;
+ (id)_tertiarySystemGroupedBackgroundColor;
+ (id)_secondarySystemGroupedBackgroundColor;
+ (id)_systemGroupedBackgroundColor;
+ (id)_tertiarySystemBackgroundColor;
+ (id)_secondarySystemBackgroundColor;
+ (id)_systemBackgroundColor;
+ (id)_opaqueSeparatorColor;
+ (id)_separatorColor;
+ (id)_placeholderTextColor;
+ (id)_linkColor;
+ (id)_quaternaryLabelColor;
+ (id)_tertiaryLabelColor;
+ (id)_secondaryLabelColor;
+ (id)_labelColor;
+ (id)_systemGray6Color;
+ (id)_systemGray5Color;
+ (id)_systemGray4Color;
+ (id)_systemGray3Color;
+ (id)_systemGray2Color;
+ (id)_quaternaryFillColor;
+ (id)_tertiaryFillColor;
+ (id)_secondaryFillColor;
+ (id)_fillColor;
+ (id)_alertControllerDimmingViewColor;
+ (id)_controlVibrantBottomBackgroundColor;
+ (id)_controlVibrantTopBackgroundColor;
+ (id)_controlShadowColor;
+ (id)_controlHighlightColor;
+ (id)_controlForegroundColor;
+ (id)_searchBarBackgroundColor;
+ (id)_searchFieldPlaceholderTextClearButtonColor;
+ (id)_searchFieldDisabledBackgroundColor;
+ (id)quaternarySystemFillColor;
+ (id)tertiarySystemFillColor;
+ (id)secondarySystemFillColor;
+ (id)systemFillColor;
+ (id)_dynamicTestColor;
- (void).cxx_destruct;
- (id)_colorBlendedWithColors:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (double)_luminanceDifferenceFromColor:(id)arg1;
- (double)_luminance;
- (double)_colorDifferenceFromColor:(id)arg1;
- (_Bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;
- (id)_debugCatalogBundleIdentifier;
- (void)_setDebugName:(id)arg1;
- (id)_debugName;
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;
- (_Bool)_isDeepColor;
- (_Bool)isPatternColor;
- (id)styleString;
- (double)alphaComponent;
- (struct CGColor *)cgColor;
- (id)colorSpaceName;
- (_Bool)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)_getWhite:(double *)arg1 alpha:(double *)arg2;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) CIColor *CIColor;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)_backgroundColorIgnoringHighContrast;
@property(readonly, nonatomic, getter=_isDynamic) _Bool dynamic;
- (id)resolvedColorWithTraitCollection:(id)arg1;
- (id)initWithDynamicProvider:(CDUnknownBlockType)arg1;
- (id)_ui_swipeActionHighlightedColor;

@end

