//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, INCodableLocalizationTable, NSString;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding>
{
    NSString *_name;
    NSString *_placeholder;
    NSString *_placeholderID;
    INCodableAttribute *_codableAttribute;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) __weak INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
@property(copy, nonatomic) NSString *placeholderID; // @synthesize placeholderID=_placeholderID;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)keyPrefix;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_localizedDialogTokensForLanguage:(id)arg1;
- (id)localizedPlaceholderForLanguage:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedPlaceholder;
@property(readonly, copy, nonatomic) INCodableLocalizationTable *_localizationTable;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 codableAttribute:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

