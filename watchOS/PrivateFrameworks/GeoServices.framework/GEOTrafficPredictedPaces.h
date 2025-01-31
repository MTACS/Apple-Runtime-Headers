//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficPredictedPaces : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_30d0674c _readerMark;
    CDStruct_084d6ede _encodedPaces;
    CDStruct_084d6ede _secondsInFutures;
    struct {
        unsigned int read_encodedPaces:1;
        unsigned int read_secondsInFutures:1;
        unsigned int wrote_encodedPaces:1;
        unsigned int wrote_secondsInFutures:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
- (void)setEncodedPaces:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)encodedPaceAtIndex:(unsigned int)arg1;
- (void)_addNoFlagsEncodedPace:(unsigned int)arg1;
- (void)addEncodedPace:(unsigned int)arg1;
- (void)clearEncodedPaces;
@property(readonly, nonatomic) unsigned int *encodedPaces;
@property(readonly, nonatomic) unsigned int encodedPacesCount;
- (void)_readEncodedPaces;
- (void)setSecondsInFutures:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)secondsInFutureAtIndex:(unsigned int)arg1;
- (void)_addNoFlagsSecondsInFuture:(unsigned int)arg1;
- (void)addSecondsInFuture:(unsigned int)arg1;
- (void)clearSecondsInFutures;
@property(readonly, nonatomic) unsigned int *secondsInFutures;
@property(readonly, nonatomic) unsigned int secondsInFuturesCount;
- (void)_readSecondsInFutures;
- (void)dealloc;

@end

