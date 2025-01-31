//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttributeMetadata, INCodableAttributeRelationship, INCodableDescription, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface INCodableAttribute : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    NSMutableDictionary *_promptDialogsByType;
    BOOL _defaultAttribute;
    BOOL _supportsResolution;
    BOOL _supportsDynamicEnumeration;
    INCodableDescription *_internalCodableDescription;
    NSString *_typeString;
    long long _modifier;
    NSString *_propertyName;
    NSString *_displayName;
    NSString *_displayNameID;
    INCodableAttributeMetadata *_metadata;
    INCodableAttributeRelationship *_relationship;
    NSArray *_promptDialogs;
    NSArray *_unsupportedReasons;
    NSNumber *_displayPriorityRank;
    Class __relationshipValueTransformerClass;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) Class _relationshipValueTransformerClass; // @synthesize _relationshipValueTransformerClass=__relationshipValueTransformerClass;
@property(copy, nonatomic) NSNumber *displayPriorityRank; // @synthesize displayPriorityRank=_displayPriorityRank;
@property(copy, nonatomic, setter=_setUnsupportedReasons:) NSArray *unsupportedReasons; // @synthesize unsupportedReasons=_unsupportedReasons;
@property(copy, nonatomic, setter=_setPromptDialogs:) NSArray *promptDialogs; // @synthesize promptDialogs=_promptDialogs;
@property(retain, nonatomic) INCodableAttributeRelationship *relationship; // @synthesize relationship=_relationship;
@property(retain, nonatomic) INCodableAttributeMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL supportsDynamicEnumeration; // @synthesize supportsDynamicEnumeration=_supportsDynamicEnumeration;
@property(nonatomic) BOOL supportsResolution; // @synthesize supportsResolution=_supportsResolution;
@property(nonatomic, getter=isDefaultAttribute) BOOL defaultAttribute; // @synthesize defaultAttribute=_defaultAttribute;
@property(copy, nonatomic) NSString *displayNameID; // @synthesize displayNameID=_displayNameID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(nonatomic) long long modifier; // @synthesize modifier=_modifier;
@property(copy, nonatomic, setter=_setTypeString:) NSString *_typeString; // @synthesize _typeString;
@property(nonatomic, setter=_setCodableDescription:) __weak INCodableDescription *_codableDescription; // @synthesize _codableDescription=_internalCodableDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)keyPrefix;
- (id)promptDialogWithType:(unsigned long long)arg1;
- (id)localizedDisplayNameForLanguage:(id)arg1;
@property(readonly, copy) NSString *localizedDisplayName;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)unsupportedReasonWithIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class _unsafeObjectClass;
@property(readonly, nonatomic) Class resolutionResultClass;
@property(readonly, nonatomic) Class objectClass;
@property(readonly, nonatomic) long long valueType;
@property(readonly, nonatomic) SEL setter;
@property(readonly, nonatomic) SEL getter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

