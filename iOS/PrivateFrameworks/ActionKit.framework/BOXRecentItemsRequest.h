//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXRequest.h>

@class NSArray, NSString;

@interface BOXRecentItemsRequest : BOXRequest
{
    _Bool _requestAllItemFields;
    NSString *_metadataTemplateKey;
    NSString *_metadataScope;
    NSArray *_fieldsToExclude;
    long long _limit;
    NSString *_nextMarker;
    NSString *_listType;
}

@property(retain, nonatomic) NSString *listType; // @synthesize listType=_listType;
@property(retain, nonatomic) NSString *nextMarker; // @synthesize nextMarker=_nextMarker;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSArray *fieldsToExclude; // @synthesize fieldsToExclude=_fieldsToExclude;
@property(copy, nonatomic) NSString *metadataScope; // @synthesize metadataScope=_metadataScope;
@property(copy, nonatomic) NSString *metadataTemplateKey; // @synthesize metadataTemplateKey=_metadataTemplateKey;
@property(nonatomic) _Bool requestAllItemFields; // @synthesize requestAllItemFields=_requestAllItemFields;
- (void).cxx_destruct;
- (void)performRequestWithCached:(CDUnknownBlockType)arg1 refreshed:(CDUnknownBlockType)arg2;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)init;

@end

