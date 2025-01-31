//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WFRemoteServerPermissionEntry : NSObject <NSSecureCoding>
{
    NSString *_host;
    NSNumber *_authorized;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isAuthorized) NSNumber *authorized; // @synthesize authorized=_authorized;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)entryBySettingAuthorized:(_Bool)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithHost:(id)arg1 authorized:(id)arg2;

@end

