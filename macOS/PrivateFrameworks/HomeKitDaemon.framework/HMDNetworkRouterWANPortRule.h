//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDNetworkRouterWANRule-Protocol.h>
#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterIPAddress, HMDNetworkRouterProtocol, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterWANPortRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterProtocol *_protocol;
    NSString *_hostDNSName;
    HMDNetworkRouterIPAddress *_hostIPStart;
    HMDNetworkRouterIPAddress *_hostIPEnd;
    HMDTLVUnsignedNumberValue *_hostPortStart;
    HMDTLVUnsignedNumberValue *_hostPortEnd;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)ruleFromFirewallRuleWan:(id)arg1;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *hostPortEnd; // @synthesize hostPortEnd=_hostPortEnd;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *hostPortStart; // @synthesize hostPortStart=_hostPortStart;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd; // @synthesize hostIPEnd=_hostIPEnd;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart; // @synthesize hostIPStart=_hostIPStart;
@property(retain, nonatomic) NSString *hostDNSName; // @synthesize hostDNSName=_hostDNSName;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithProtocol:(id)arg1 hostDNSName:(id)arg2 hostIPStart:(id)arg3 hostIPEnd:(id)arg4 hostPortStart:(id)arg5 hostPortEnd:(id)arg6;
- (id)init;
- (void)addTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

