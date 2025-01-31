//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXRequestWithSharedLinkHeader.h>

@class NSString;

@interface BOXFileUnshareRequest : BOXRequestWithSharedLinkHeader
{
    NSString *_matchingEtag;
    NSString *_fileID;
}

@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *matchingEtag; // @synthesize matchingEtag=_matchingEtag;
- (void).cxx_destruct;
- (struct NSString *)itemTypeForSharedLink;
- (id)itemIDForSharedLink;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1;

@end

