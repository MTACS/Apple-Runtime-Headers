//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOComposedRouteStepTransitInstructionMerging-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_primaryText;
    GEOFormattedString *_secondaryText;
    _Bool _hideWhenListCollapsed;
    struct {
        unsigned int has_hideWhenListCollapsed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_primaryText:1;
        unsigned int read_secondaryText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_primaryText:1;
        unsigned int wrote_secondaryText:1;
        unsigned int wrote_hideWhenListCollapsed:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasHideWhenListCollapsed;
@property(nonatomic) _Bool hideWhenListCollapsed;
@property(retain, nonatomic) GEOFormattedString *secondaryText;
@property(readonly, nonatomic) _Bool hasSecondaryText;
- (void)_readSecondaryText;
@property(retain, nonatomic) GEOFormattedString *primaryText;
@property(readonly, nonatomic) _Bool hasPrimaryText;
- (void)_readPrimaryText;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

