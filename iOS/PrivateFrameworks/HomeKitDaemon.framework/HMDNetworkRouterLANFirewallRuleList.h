//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterLANFirewallRuleList : NSObject <NSCopying, HMDTLVProtocol>
{
    NSMutableArray *_multicastBridgingRule;
    NSMutableArray *_staticPortRule;
    NSMutableArray *_dynamicPortRule;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *dynamicPortRule; // @synthesize dynamicPortRule=_dynamicPortRule;
@property(retain, nonatomic) NSMutableArray *staticPortRule; // @synthesize staticPortRule=_staticPortRule;
@property(retain, nonatomic) NSMutableArray *multicastBridgingRule; // @synthesize multicastBridgingRule=_multicastBridgingRule;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithMulticastBridgingRule:(id)arg1 staticPortRule:(id)arg2 dynamicPortRule:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

