//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2DatabaseRecordCount : PBCodable <NSCopying>
{
    unsigned int _schemaVersion;
    NSString *_tableName;
    struct {
        unsigned int schemaVersion:1;
    } _has;
}

@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(nonatomic) unsigned int schemaVersion; // @synthesize schemaVersion=_schemaVersion;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTableName;
@property(nonatomic) _Bool hasSchemaVersion;

@end

