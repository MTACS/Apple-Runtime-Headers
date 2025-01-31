//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXAVRouteInfo, ATXActionCriteria, CSSearchableItemAttributeSet, INIntent, NSDictionary, NSString, NSUUID, NSUserActivity;

@interface ATXAction : NSObject <NSSecureCoding, NSCopying>
{
    NSUserActivity *_userActivity;
    unsigned long long _userActivityHash;
    NSString *_title;
    NSString *_subtitle;
    ATXActionCriteria *_criteria;
    _Bool _isFutureMedia;
    _Bool _isTVWhiteListedLongFormMedia;
    NSString *_bundleId;
    unsigned int _actionType;
    NSUUID *_actionUUID;
    NSString *_itemIdentifier;
    NSString *_heuristic;
    NSDictionary *_heuristicMetadata;
    INIntent *_intent;
    NSString *_userActivityString;
    CSSearchableItemAttributeSet *_contentAttributeSet;
    ATXAVRouteInfo *_routeInfo;
}

+ (_Bool)supportsSecureCoding;
+ (id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2;
+ (id)getNSUATypefromActivityType:(id)arg1;
+ (id)getDateFromUserActivityString:(id)arg1 forActionKey:(id)arg2;
+ (id)getActionKeyForBundleId:(id)arg1 actionType:(id)arg2;
+ (unsigned long long)_userActivityHashForUserInfoDict:(id)arg1 activityType:(id)arg2 webpageURL:(id)arg3;
+ (_Bool)_isTVIntent:(id)arg1 bundleId:(id)arg2;
+ (_Bool)_isTVWhiteListedLongFormMediaIntent:(id)arg1 bundleId:(id)arg2;
@property(readonly, nonatomic) ATXAVRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
@property(readonly, nonatomic) CSSearchableItemAttributeSet *contentAttributeSet; // @synthesize contentAttributeSet=_contentAttributeSet;
@property(readonly, nonatomic) NSString *userActivityString; // @synthesize userActivityString=_userActivityString;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) _Bool isTVWhiteListedLongFormMedia; // @synthesize isTVWhiteListedLongFormMedia=_isTVWhiteListedLongFormMedia;
@property(readonly, nonatomic) _Bool isFutureMedia; // @synthesize isFutureMedia=_isFutureMedia;
@property(readonly, nonatomic) NSDictionary *heuristicMetadata; // @synthesize heuristicMetadata=_heuristicMetadata;
@property(readonly, nonatomic) NSString *heuristic; // @synthesize heuristic=_heuristic;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSUUID *actionUUID; // @synthesize actionUUID=_actionUUID;
@property(readonly, nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)underlyingInteraction;
- (id)_spotlightContentType;
- (id)_bundleIdForDisplay;
- (id)predictionTypeStringForPET;
@property(readonly, nonatomic) NSUserActivity *userActivity;
- (void)setHeuristic:(id)arg1;
- (void)setCriteria:(id)arg1;
@property(readonly, nonatomic) ATXActionCriteria *criteria;
- (id)json;
- (id)copyWithParameterWhitelist:(id)arg1;
- (id)actionKey;
- (id)dateForAction;
- (id)actionSubtitle;
- (_Bool)hasActionTitle;
- (id)actionTitle;
- (id)actionDescription;
@property(readonly, nonatomic) _Bool isHeuristic;
- (id)description;
- (unsigned long long)userActivityHash;
- (unsigned int)hash;
- (_Bool)isEqualToAction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)actionWithRouteInfo:(id)arg1;
- (id)initWithActivity:(id)arg1 activityString:(id)arg2 itemIdentifier:(id)arg3 contentAttributeSet:(id)arg4 intent:(id)arg5 actionUUID:(id)arg6 bundleId:(id)arg7 type:(unsigned int)arg8 heuristic:(id)arg9 heuristicMetadata:(id)arg10 criteria:(id)arg11 isFutureMedia:(_Bool)arg12 routeInfo:(id)arg13 title:(id)arg14 subtitle:(id)arg15;
- (id)initWithNSUserActivityString:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 isFutureMedia:(_Bool)arg8 title:(id)arg9 subtitle:(id)arg10;
- (id)initWithNSUserActivity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 criteria:(id)arg8 isFutureMedia:(_Bool)arg9 title:(id)arg10 subtitle:(id)arg11;
- (id)initWithIntent:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 heuristic:(id)arg4 heuristicMetadata:(id)arg5 criteria:(id)arg6 isFutureMedia:(_Bool)arg7 title:(id)arg8 subtitle:(id)arg9;
- (id)init;
- (_Bool)isTVAction;

@end

