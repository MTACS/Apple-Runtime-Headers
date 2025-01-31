//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INInteractionExport-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CSSearchableItem, INImage, INIntent, INIntentResponse, NSDate, NSDateInterval, NSString, NSUUID, SAUISnippet;

@interface INInteraction : NSObject <INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying>
{
    INIntent *_intent;
    INIntentResponse *_intentResponse;
    BOOL _donatedBySiri;
    SAUISnippet *_snippet;
    NSUUID *_contextExtensionUUID;
    long long _intentHandlingStatus;
    long long _direction;
    NSDateInterval *_dateInterval;
    NSString *_identifier;
    NSString *_groupIdentifier;
}

+ (unsigned long long)_searchableItemVersion;
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteAllInteractionsWithCompletion:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(copy) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property long long direction; // @synthesize direction=_direction;
@property long long intentHandlingStatus; // @synthesize intentHandlingStatus=_intentHandlingStatus;
@property(copy, setter=_setIntentResponse:) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(copy, setter=_setIntent:) INIntent *intent; // @synthesize intent=_intent;
@property(copy, setter=_setContextExtensionUUID:) NSUUID *_contextExtensionUUID; // @synthesize _contextExtensionUUID;
@property(nonatomic, setter=_setDonatedBySiri:) BOOL _donatedBySiri; // @synthesize _donatedBySiri;
@property(retain, setter=_setSnippet:) SAUISnippet *_snippet; // @synthesize _snippet;
- (void).cxx_destruct;
- (id)parameterValueForParameter:(id)arg1;
@property(readonly) unsigned long long _indexingHash;
- (id)_searchableItemIncludingData:(BOOL)arg1;
@property(readonly, copy) CSSearchableItem *_searchableItem;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_donateInteractionWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donateInteractionWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithIntent:(id)arg1 response:(id)arg2;
- (id)_init;
@property(copy, nonatomic) NSString *domainIdentifier;
@property(nonatomic) double duration;
@property(retain, nonatomic) NSDate *date;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

