//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXRequestWithSharedLinkHeader.h>

@class NSDate, NSString, NSURL;

@interface BOXBookmarkUpdateRequest : BOXRequestWithSharedLinkHeader
{
    _Bool _sharedLinkPermissionCanDownload;
    _Bool _sharedLinkPermissionCanPreview;
    _Bool _requestAllBookmarkFields;
    _Bool _shouldUseSharedLinkCanDownload;
    _Bool _shouldUseSharedLinkCanPreview;
    NSString *_bookmarkID;
    NSURL *_URL;
    NSString *_bookmarkName;
    NSString *_bookmarkDescription;
    NSString *_parentID;
    struct NSString *_sharedLinkAccessLevel;
    NSDate *_sharedLinkExpirationDate;
    NSString *_matchingEtag;
    NSString *_associateID;
    NSString *_requestDirectoryPath;
}

@property(nonatomic) _Bool shouldUseSharedLinkCanPreview; // @synthesize shouldUseSharedLinkCanPreview=_shouldUseSharedLinkCanPreview;
@property(nonatomic) _Bool shouldUseSharedLinkCanDownload; // @synthesize shouldUseSharedLinkCanDownload=_shouldUseSharedLinkCanDownload;
@property(retain, nonatomic) NSString *requestDirectoryPath; // @synthesize requestDirectoryPath=_requestDirectoryPath;
@property(retain, nonatomic) NSString *associateID; // @synthesize associateID=_associateID;
@property(nonatomic) _Bool requestAllBookmarkFields; // @synthesize requestAllBookmarkFields=_requestAllBookmarkFields;
@property(retain, nonatomic) NSString *matchingEtag; // @synthesize matchingEtag=_matchingEtag;
@property(nonatomic) _Bool sharedLinkPermissionCanPreview; // @synthesize sharedLinkPermissionCanPreview=_sharedLinkPermissionCanPreview;
@property(nonatomic) _Bool sharedLinkPermissionCanDownload; // @synthesize sharedLinkPermissionCanDownload=_sharedLinkPermissionCanDownload;
@property(retain, nonatomic) NSDate *sharedLinkExpirationDate; // @synthesize sharedLinkExpirationDate=_sharedLinkExpirationDate;
@property(retain, nonatomic) NSString *sharedLinkAccessLevel; // @synthesize sharedLinkAccessLevel=_sharedLinkAccessLevel;
@property(retain, nonatomic) NSString *parentID; // @synthesize parentID=_parentID;
@property(retain, nonatomic) NSString *bookmarkDescription; // @synthesize bookmarkDescription=_bookmarkDescription;
@property(retain, nonatomic) NSString *bookmarkName; // @synthesize bookmarkName=_bookmarkName;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *bookmarkID; // @synthesize bookmarkID=_bookmarkID;
- (void).cxx_destruct;
- (_Bool)shouldPerformBackgroundOperation;
- (struct NSString *)itemTypeForSharedLink;
- (id)itemIDForSharedLink;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithBookmarkID:(id)arg1;

@end

