//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone
{
    NSDictionary *_orderedDisplayItemPlacements;
}

+ (struct CGSize)smallPillSize;
+ (struct CGSize)pillSize;
+ (id)pillFont;
+ (id)normalFont;
+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets)edgeInsets;
+ (double)regionSpacing;
+ (double)height;
+ (_Bool)wantsExpandedLeadingPlacements;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (void).cxx_destruct;
- (id)_backgroundActivityDetailRemovalAnimation;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)updateDataForBackgroundActivity:(id)arg1;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (void)itemCreated:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;

@end

