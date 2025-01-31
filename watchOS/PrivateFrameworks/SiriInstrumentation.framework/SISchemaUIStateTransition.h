//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriInstrumentation/NSSecureCoding-Protocol.h>
#import <SiriInstrumentation/SISchemaUIStateTransition-Protocol.h>

@class NSData, NSString;

@interface SISchemaUIStateTransition : PBCodable <SISchemaUIStateTransition, NSSecureCoding>
{
    int _currentState;
    int _previousState;
    int _siriPresentationType;
}

@property(nonatomic) int siriPresentationType; // @synthesize siriPresentationType=_siriPresentationType;
@property(nonatomic) int previousState; // @synthesize previousState=_previousState;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

