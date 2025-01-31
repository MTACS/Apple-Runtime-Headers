//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INCodableAttribute.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding>
{
    NSString *_typeName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;
- (void)setClassName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *className;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)valueType;
- (Class)_relationshipValueTransformerClass;
@property(readonly, nonatomic) NSValueTransformer *valueTransformer;
- (Class)resolutionResultClass;
- (Class)objectClass;

@end

