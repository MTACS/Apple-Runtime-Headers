//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXRequestWithSharedLinkHeader.h>

@class NSString;

@interface BOXFileCopyRequest : BOXRequestWithSharedLinkHeader
{
    BOOL _requestAllFileFields;
    NSString *_fileID;
    NSString *_destinationFolderID;
    NSString *_fileName;
}

@property(nonatomic) BOOL requestAllFileFields; // @synthesize requestAllFileFields=_requestAllFileFields;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *destinationFolderID; // @synthesize destinationFolderID=_destinationFolderID;
@property(readonly, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;
- (struct NSString *)itemTypeForSharedLink;
- (id)itemIDForSharedLink;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1 destinationFolderID:(id)arg2;

@end

