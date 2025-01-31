//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXRequestWithSharedLinkHeader.h>

@class NSString;

@interface BOXFileDeleteRequest : BOXRequestWithSharedLinkHeader
{
    BOOL _isTrashed;
    NSString *_associateId;
    NSString *_requestDirectoryPath;
    NSString *_fileID;
    NSString *_matchingEtag;
}

@property(nonatomic) BOOL isTrashed; // @synthesize isTrashed=_isTrashed;
@property(retain, nonatomic) NSString *matchingEtag; // @synthesize matchingEtag=_matchingEtag;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(copy, nonatomic) NSString *requestDirectoryPath; // @synthesize requestDirectoryPath=_requestDirectoryPath;
@property(retain, nonatomic) NSString *associateId; // @synthesize associateId=_associateId;
- (void).cxx_destruct;
- (BOOL)shouldPerformBackgroundOperation;
- (struct NSString *)itemTypeForSharedLink;
- (id)itemIDForSharedLink;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1 isTrashed:(BOOL)arg2 associateId:(id)arg3;
- (id)initWithFileID:(id)arg1 isTrashed:(BOOL)arg2;
- (id)initWithFileID:(id)arg1;

@end

