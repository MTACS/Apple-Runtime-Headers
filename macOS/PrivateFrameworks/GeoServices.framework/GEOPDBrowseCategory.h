//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategory : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_displayString;
    NSString *_popularDisplayToken;
    NSString *_shortDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_subCategorys;
    NSData *_suggestionEntryMetadata;
    int _displayMode;
    int _sortOrder;
    int _subCategoryType;
    BOOL _isSubCategorySameAsTopLevel;
    struct {
        unsigned int has_displayMode:1;
        unsigned int has_sortOrder:1;
        unsigned int has_subCategoryType:1;
        unsigned int has_isSubCategorySameAsTopLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayString:1;
        unsigned int read_popularDisplayToken:1;
        unsigned int read_shortDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_subCategorys:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayString:1;
        unsigned int wrote_popularDisplayToken:1;
        unsigned int wrote_shortDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_subCategorys:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_displayMode:1;
        unsigned int wrote_sortOrder:1;
        unsigned int wrote_subCategoryType:1;
        unsigned int wrote_isSubCategorySameAsTopLevel:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)subCategoryType;
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
@property(nonatomic) BOOL hasIsSubCategorySameAsTopLevel;
@property(nonatomic) BOOL isSubCategorySameAsTopLevel;
- (int)StringAsSubCategoryType:(id)arg1;
- (id)subCategoryTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSubCategoryType;
@property(nonatomic) int subCategoryType;
- (int)StringAsDisplayMode:(id)arg1;
- (id)displayModeAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayMode;
@property(nonatomic) int displayMode;
- (int)StringAsSortOrder:(id)arg1;
- (id)sortOrderAsString:(int)arg1;
@property(nonatomic) BOOL hasSortOrder;
@property(nonatomic) int sortOrder;
@property(retain, nonatomic) NSString *popularDisplayToken;
@property(readonly, nonatomic) BOOL hasPopularDisplayToken;
- (void)_readPopularDisplayToken;
@property(retain, nonatomic) NSString *shortDisplayString;
@property(readonly, nonatomic) BOOL hasShortDisplayString;
- (void)_readShortDisplayString;
- (id)subCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)subCategorysCount;
- (void)_addNoFlagsSubCategory:(id)arg1;
- (void)addSubCategory:(id)arg1;
- (void)clearSubCategorys;
@property(retain, nonatomic) NSMutableArray *subCategorys;
- (void)_readSubCategorys;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
- (void)_readStyleAttributes;
@property(retain, nonatomic) NSString *displayString;
@property(readonly, nonatomic) BOOL hasDisplayString;
- (void)_readDisplayString;
@property(retain, nonatomic) NSData *suggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
- (void)_readSuggestionEntryMetadata;

@end

