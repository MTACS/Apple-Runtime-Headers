//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INPersonExport-Protocol.h>
#import <Intents/INSpeakable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSMutableCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@interface INPerson : NSObject <INCacheableContainer, INCodableAttributeRelationComparing, INKeyImageProducing, INImageProxyInjecting, INSpeakable, INPersonExport, NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSString *_displayName;
    NSPersonNameComponents *_nameComponents;
    NSString *_userInput;
    NSArray *_aliases;
    int _suggestionType;
    NSArray *_alternatives;
    _Bool _isMe;
    NSString *_sourceAppBundleIdentifier;
    INPersonHandle *_personHandle;
    INImage *_image;
    NSString *_contactIdentifier;
    NSString *_customIdentifier;
    NSString *_relationship;
}

+ (id)expectedCNContactKeys;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
@property(copy, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property(copy, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property(copy, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) INImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy, nonatomic) INPersonHandle *personHandle; // @synthesize personHandle=_personHandle;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *alternativeSiriMatches;
- (id)_dictionaryRepresentation;
- (id)initWithContact:(id)arg1;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(int)arg10 isMe:(_Bool)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13;
- (id)_sourceAppBundleIdentifier;
- (id)_aliases;
- (id)_userInput;
- (id)_displayName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *handle;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(_Bool)arg7;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *userURIString;
@property(readonly, copy, nonatomic) NSString *userIdentifier;
@property(readonly, copy, nonatomic) NSString *userName;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)descriptionAtIndent:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(int)arg8;
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned int)arg2;
- (int)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_intents_indexingRepresentation;
- (id)spokenPhrases;
@property(readonly, copy, nonatomic) NSArray *siriMatches;
@property(readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property(readonly, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *pronunciationHint;
@property(readonly, nonatomic) NSString *spokenPhrase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

