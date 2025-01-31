//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICMusicSubscriptionStatus, NSDate, NSDictionary;

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _finalResponse;
    _Bool _needsReload;
    ICMusicSubscriptionStatus *_subscriptionStatus;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

