//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface MSVSegmentedCodingPackage : NSObject
{
    _Bool _needsInfoDictionaryUpdate;
    NSURL *_packageURL;
    Class _archivedClass;
    NSMutableDictionary *_segmentEncoderMap;
    NSMutableDictionary *_infoDictionary;
}

+ (id)packageTypeIdentifier;
@property(retain, nonatomic) NSMutableDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(retain, nonatomic) NSMutableDictionary *segmentEncoderMap; // @synthesize segmentEncoderMap=_segmentEncoderMap;
@property(retain, nonatomic) Class archivedClass; // @synthesize archivedClass=_archivedClass;
@property(copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
- (void).cxx_destruct;
- (_Bool)deleteWithError:(id *)arg1;
- (_Bool)saveWithError:(id *)arg1;
@property(readonly, nonatomic) NSDictionary *allVersions;
- (id)decoders;
- (id)encoderForSegment:(id)arg1 version:(int)arg2;
- (_Bool)writeWithError:(id *)arg1;
- (void)setNeedsInfoDictionaryUpdate;
- (void)reset;
- (id)coderTypeForSegment:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

