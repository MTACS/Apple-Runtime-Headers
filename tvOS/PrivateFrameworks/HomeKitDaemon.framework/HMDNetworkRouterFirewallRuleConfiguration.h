//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDate, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>
{
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;
    NSDate *_lastModifiedTime;
    NSArray *_lanRules;
    NSArray *_wanRules;
}

+ (_Bool)__decodeRulesFromNetworkDeclarations:(struct NSDictionary *)arg1 key:(id)arg2 class:(Class)arg3 rules:(id *)arg4;
+ (_Bool)__decodeFullAccessFromNetworkDeclarations:(struct NSDictionary *)arg1 key:(id)arg2 fullAccess:(_Bool *)arg3;
+ (_Bool)__decodeNetworkDeclarationsFromJSONDictionary:(struct NSDictionary *)arg1 networkDeclarations:(struct NSDictionary **)arg2;
+ (id)logCategory;
@property(readonly, nonatomic) NSArray *wanRules; // @synthesize wanRules=_wanRules;
@property(readonly, nonatomic) NSArray *lanRules; // @synthesize lanRules=_lanRules;
@property(readonly, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
@property(readonly, nonatomic, getter=hasFullAccessToWAN) _Bool fullAccessWAN;
@property(readonly, nonatomic, getter=hasFullAccessToLAN) _Bool fullAccessLAN;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(struct NSDictionary *)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 lanRules:(id)arg3 wanRules:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

