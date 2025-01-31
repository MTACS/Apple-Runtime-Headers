//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONamedField, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEONamedFieldValue : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    GEONamedField *_mapValue;
    NSString *_stringValue;
    BOOL _boolValue;
    struct {
        unsigned int has_doubleValue:1;
        unsigned int has_intValue:1;
        unsigned int has_boolValue:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapValue:1;
        unsigned int read_stringValue:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_doubleValue:1;
        unsigned int wrote_intValue:1;
        unsigned int wrote_mapValue:1;
        unsigned int wrote_stringValue:1;
        unsigned int wrote_boolValue:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEONamedField *mapValue;
@property(readonly, nonatomic) BOOL hasMapValue;
- (void)_readMapValue;
@property(nonatomic) BOOL hasBoolValue;
@property(nonatomic) BOOL boolValue;
@property(nonatomic) BOOL hasIntValue;
@property(nonatomic) long long intValue;
@property(retain, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) BOOL hasStringValue;
- (void)_readStringValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) double doubleValue;

@end

