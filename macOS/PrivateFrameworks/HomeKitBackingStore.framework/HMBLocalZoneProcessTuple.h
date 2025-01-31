//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData, NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneProcessTuple : HMFObject
{
    HMBModel *_previous;
    HMBModel *_update;
    unsigned long long _recordRow;
    unsigned long long _itemRow;
    NSData *_externalID;
    NSData *_externalData;
    NSUUID *_modelSchema;
    NSDictionary *_encodedQueryableProperties;
}

@property(readonly, nonatomic) NSDictionary *encodedQueryableProperties; // @synthesize encodedQueryableProperties=_encodedQueryableProperties;
@property(readonly, nonatomic) NSUUID *modelSchema; // @synthesize modelSchema=_modelSchema;
@property(readonly, nonatomic) NSData *externalData; // @synthesize externalData=_externalData;
@property(readonly, nonatomic) NSData *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) unsigned long long itemRow; // @synthesize itemRow=_itemRow;
@property(nonatomic) unsigned long long recordRow; // @synthesize recordRow=_recordRow;
@property(readonly, nonatomic) HMBModel *update; // @synthesize update=_update;
@property(readonly, nonatomic) HMBModel *previous; // @synthesize previous=_previous;
- (void).cxx_destruct;
- (id)initWithPrevious:(id)arg1 update:(id)arg2 recordRow:(unsigned long long)arg3 itemRow:(unsigned long long)arg4 modelSchema:(id)arg5 externalID:(id)arg6 externalData:(id)arg7;

@end

