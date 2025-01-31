//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SAObjects/AceObject-Protocol.h>

@class NSData, NSMutableDictionary, NSNumber, NSString;

@interface AceObject : NSObject <AceObject>
{
    NSNumber *_deserializationDuration;
    NSNumber *_mutatingCommand;
    NSString *_aceId;
    NSString *_refId;
    NSNumber *_usefulnessScore;
    NSData *_plistData;
    NSMutableDictionary *_dict;
}

+ (id)_filteredDictionaryForKeySet:(struct __CFSet *)arg1 plistData:(id)arg2;
+ (id)aceObjectWithPlistData:(id)arg1;
+ (id)dictionaryWithAceObjectDictionary:(id)arg1;
+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)_newAceObjectWithMutableDictionary:(id)arg1;
+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(readonly, nonatomic) NSData *plistData; // @synthesize plistData=_plistData;
@property(copy, nonatomic) NSNumber *usefulnessScore; // @synthesize usefulnessScore=_usefulnessScore;
@property(copy, nonatomic) NSString *refId; // @synthesize refId=_refId;
@property(copy, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)deserializationDuration;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5;
@property(readonly, copy) NSString *description;
- (id)fullDescription;
- (id)_descriptionHint;
- (_Bool)_isDeserialized;
- (id)_serializedData;
- (id)forceEagerDeserialization;
- (_Bool)hasArrayForPropertyForKey:(id)arg1;
- (id)topLevelPropertyForKey:(id)arg1;
- (id)propertyForKeyWithoutDeserializing:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool mutatingCommand;
- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;
- (id)properties;
- (id)dictionary;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)_dict;
- (void)_deserializeFromPlistData;
- (id)_initWithMutableDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 usefulnessScore:(id)arg4 mutatingCommand:(id)arg5;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

