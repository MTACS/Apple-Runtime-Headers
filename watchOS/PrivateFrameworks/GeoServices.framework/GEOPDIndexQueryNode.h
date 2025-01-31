//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIndexQueryNode : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_field;
    NSMutableArray *_operands;
    NSString *_value;
    int _type;
    CDStruct_24aeab2f _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)operandType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)operandAtIndex:(unsigned int)arg1;
- (unsigned int)operandsCount;
- (void)_addNoFlagsOperand:(id)arg1;
- (void)addOperand:(id)arg1;
- (void)clearOperands;
@property(retain, nonatomic) NSMutableArray *operands;
- (void)_readOperands;
@property(retain, nonatomic) NSString *value;
@property(readonly, nonatomic) _Bool hasValue;
- (void)_readValue;
@property(retain, nonatomic) NSString *field;
@property(readonly, nonatomic) _Bool hasField;
- (void)_readField;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) int type;

@end

