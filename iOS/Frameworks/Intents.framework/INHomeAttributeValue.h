//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INHomeAttributeValue : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _boolValue;
    long long _type;
    double _doubleValue;
    long long _integerValue;
    NSString *_stringValue;
    long long _limitValue;
    long long _unit;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) long long limitValue; // @synthesize limitValue=_limitValue;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(readonly, nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(readonly, nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 boolValue:(_Bool)arg2 doubleValue:(double)arg3 integerValue:(long long)arg4 stringValue:(id)arg5 limitValue:(long long)arg6 unit:(long long)arg7;
- (id)initWithLimitValue:(long long)arg1;
- (id)initWithStringValue:(id)arg1 unit:(long long)arg2;
- (id)initWithIntegerValue:(long long)arg1 unit:(long long)arg2;
- (id)initWithDoubleValue:(double)arg1 unit:(long long)arg2;
- (id)initWithBoolValue:(_Bool)arg1;

@end

