//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBPair, _INPBString;

@protocol _INPBIntentMetadata <NSObject>
+ (Class)parameterImagesType;
@property(readonly, nonatomic) _Bool hasUserUtterance;
@property(retain, nonatomic) _INPBString *userUtterance;
@property(nonatomic) _Bool hasUserConfirmationRequired;
@property(nonatomic) _Bool userConfirmationRequired;
@property(nonatomic) _Bool hasTriggerMethod;
@property(nonatomic) int triggerMethod;
@property(readonly, nonatomic) _Bool hasSuggestedInvocationPhrase;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase;
@property(readonly, nonatomic) unsigned int parameterImagesCount;
@property(copy, nonatomic) NSArray *parameterImages;
@property(readonly, nonatomic) _Bool hasOriginatingDeviceRapportMediaSystemId;
@property(copy, nonatomic) NSString *originatingDeviceRapportMediaSystemId;
@property(readonly, nonatomic) _Bool hasOriginatingDeviceRapportEffectiveId;
@property(copy, nonatomic) NSString *originatingDeviceRapportEffectiveId;
@property(readonly, nonatomic) _Bool hasOriginatingDeviceIdsIdentifier;
@property(copy, nonatomic) NSString *originatingDeviceIdsIdentifier;
@property(nonatomic) _Bool hasIsPrimaryDisplayDisabled;
@property(nonatomic) _Bool isPrimaryDisplayDisabled;
@property(nonatomic) _Bool hasIsOwnedByCurrentUser;
@property(nonatomic) _Bool isOwnedByCurrentUser;
@property(readonly, nonatomic) _Bool hasIntentId;
@property(copy, nonatomic) NSString *intentId;
@property(readonly, nonatomic) _Bool hasIntentDescription;
@property(copy, nonatomic) NSString *intentDescription;
@property(nonatomic) _Bool hasIdiom;
@property(nonatomic) int idiom;
@property(nonatomic) _Bool hasConfirmed;
@property(nonatomic) _Bool confirmed;
@property(nonatomic) _Bool hasBackgroundLaunch;
@property(nonatomic) _Bool backgroundLaunch;
@property(readonly, nonatomic) _Bool hasSystemUIExtensionBundleId;
@property(copy, nonatomic) NSString *systemUIExtensionBundleId;
@property(readonly, nonatomic) _Bool hasSystemExtensionBundleId;
@property(copy, nonatomic) NSString *systemExtensionBundleId;
@property(readonly, nonatomic) unsigned int requiredEntitlementsCount;
@property(readonly, nonatomic) int *requiredEntitlements;
@property(readonly, nonatomic) _Bool hasNanoLaunchId;
@property(copy, nonatomic) NSString *nanoLaunchId;
@property(readonly, nonatomic) _Bool hasLaunchId;
@property(copy, nonatomic) NSString *launchId;
@property(nonatomic) _Bool hasIntentCategory;
@property(nonatomic) int intentCategory;
@property(nonatomic) _Bool hasExecutionContext;
@property(nonatomic) int executionContext;
@property(readonly, nonatomic) _Bool hasDefaultImageValue;
@property(retain, nonatomic) _INPBImageValue *defaultImageValue;
@property(readonly, nonatomic) _Bool hasCategoryVerb;
@property(copy, nonatomic) NSString *categoryVerb;
- (int)StringAsTriggerMethod:(NSString *)arg1;
- (NSString *)triggerMethodAsString:(int)arg1;
- (_INPBPair *)parameterImagesAtIndex:(unsigned int)arg1;
- (void)addParameterImages:(_INPBPair *)arg1;
- (void)clearParameterImages;
- (int)StringAsIdiom:(NSString *)arg1;
- (NSString *)idiomAsString:(int)arg1;
- (int)StringAsRequiredEntitlements:(NSString *)arg1;
- (NSString *)requiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned int)arg2;
- (int)requiredEntitlementAtIndex:(unsigned int)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
- (int)StringAsIntentCategory:(NSString *)arg1;
- (NSString *)intentCategoryAsString:(int)arg1;
- (int)StringAsExecutionContext:(NSString *)arg1;
- (NSString *)executionContextAsString:(int)arg1;
@end

