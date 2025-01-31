//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResultSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_resolvedItems;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayName;
    int _searchResultSectionCellType;
    int _searchResultSectionType;
    struct {
        unsigned int has_searchResultSectionCellType:1;
        unsigned int has_searchResultSectionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_resolvedItems:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_resolvedItems:1;
        unsigned int wrote_sectionHeaderDisplayName:1;
        unsigned int wrote_sectionSubHeaderDisplayName:1;
        unsigned int wrote_searchResultSectionCellType:1;
        unsigned int wrote_searchResultSectionType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)resolvedItemType;
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
- (int)StringAsSearchResultSectionCellType:(id)arg1;
- (id)searchResultSectionCellTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchResultSectionCellType;
@property(nonatomic) int searchResultSectionCellType;
@property(retain, nonatomic) NSString *sectionSubHeaderDisplayName;
@property(readonly, nonatomic) BOOL hasSectionSubHeaderDisplayName;
- (void)_readSectionSubHeaderDisplayName;
- (int)StringAsSearchResultSectionType:(id)arg1;
- (id)searchResultSectionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchResultSectionType;
@property(nonatomic) int searchResultSectionType;
- (id)resolvedItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolvedItemsCount;
- (void)_addNoFlagsResolvedItem:(id)arg1;
- (void)addResolvedItem:(id)arg1;
- (void)clearResolvedItems;
@property(retain, nonatomic) NSMutableArray *resolvedItems;
- (void)_readResolvedItems;
@property(retain, nonatomic) NSString *sectionHeaderDisplayName;
@property(readonly, nonatomic) BOOL hasSectionHeaderDisplayName;
- (void)_readSectionHeaderDisplayName;

@end

