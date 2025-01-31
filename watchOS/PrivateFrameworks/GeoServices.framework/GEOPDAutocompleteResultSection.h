//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
    NSString *_name;
    int _numVisibleResults;
    int _suggestionType;
    int _type;
    _Bool _enforceServerResultsOrder;
    _Bool _shouldInterleaveClientResults;
    struct {
        unsigned int has_numVisibleResults:1;
        unsigned int has_suggestionType:1;
        unsigned int has_type:1;
        unsigned int has_enforceServerResultsOrder:1;
        unsigned int has_shouldInterleaveClientResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entries:1;
        unsigned int read_name:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entries:1;
        unsigned int wrote_name:1;
        unsigned int wrote_numVisibleResults:1;
        unsigned int wrote_suggestionType:1;
        unsigned int wrote_type:1;
        unsigned int wrote_enforceServerResultsOrder:1;
        unsigned int wrote_shouldInterleaveClientResults:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)entriesType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEnforceServerResultsOrder;
@property(nonatomic) _Bool enforceServerResultsOrder;
@property(nonatomic) _Bool hasShouldInterleaveClientResults;
@property(nonatomic) _Bool shouldInterleaveClientResults;
@property(nonatomic) _Bool hasNumVisibleResults;
@property(nonatomic) int numVisibleResults;
- (int)StringAsSuggestionType:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSuggestionType;
@property(nonatomic) int suggestionType;
- (id)entriesAtIndex:(unsigned int)arg1;
- (unsigned int)entriesCount;
- (void)_addNoFlagsEntries:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
@property(retain, nonatomic) NSMutableArray *entries;
- (void)_readEntries;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end

