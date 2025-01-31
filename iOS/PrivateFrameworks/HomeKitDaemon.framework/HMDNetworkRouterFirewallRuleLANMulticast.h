//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN
{
    unsigned short _port;
    HMFNetAddress *_ipAddress;
}

+ (id)createWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ruleDictionary:(struct NSDictionary *)arg8;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, nonatomic) HMFNetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (struct NSDictionary *)prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9;

@end

