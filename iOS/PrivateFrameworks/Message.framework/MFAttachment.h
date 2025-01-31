//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFAttachmentManager, MFAttachmentPlaceholder, MFMailDropMetadata, MFMimePart, NSString, NSURL;
@protocol MFDataConsumer;

@interface MFAttachment : NSObject
{
    MFAttachmentManager *_attachmentManager;
    MFAttachmentPlaceholder *_placeholder;
    _Bool _isAutoArchive;
    _Bool _wantsCompletionBlockOffMainThread;
    NSURL *_url;
    MFMimePart *_part;
    NSString *_disposition;
    CDUnknownBlockType _fetchCompletionBlock;
    id <MFDataConsumer> _customConsumer;
    struct CGSize _imageDimensions;
}

+ (_Bool)isSinglePagePDF:(id)arg1;
@property(nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(nonatomic) _Bool wantsCompletionBlockOffMainThread; // @synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread;
@property(retain, nonatomic) id <MFDataConsumer> customConsumer; // @synthesize customConsumer=_customConsumer;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property(retain, nonatomic) MFAttachmentPlaceholder *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly) _Bool isAutoArchive; // @synthesize isAutoArchive=_isAutoArchive;
@property(copy, nonatomic) NSString *disposition; // @synthesize disposition=_disposition;
@property(retain, nonatomic) MFMimePart *part; // @synthesize part=_part;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)contentTypeConformsToIWork;
- (_Bool)contentTypeConformsToPassbook;
- (_Bool)contentTypeConformsToMarkup;
- (_Bool)contentTypeConformsToProvisionment;
- (_Bool)contentTypeConformsToEventICS;
- (_Bool)contentTypeConformsToEventVCS;
- (_Bool)contentTypeConformsToEvent;
- (_Bool)contentTypeConformsToVCard;
- (_Bool)conformsToType:(id)arg1;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)readFromDisk;
- (void)writeToDiskWithData:(id)arg1;
- (unsigned long long)sizeOnDisk;
- (id)fileAttributes;
- (_Bool)isCached;
@property(nonatomic) unsigned long long encodedFileSize;
@property(nonatomic) unsigned long long decodedFileSize;
- (_Bool)isSinglePagePDFFile;
- (_Bool)_isSinglePagePDFFileFetchLocalData:(_Bool)arg1;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(copy) NSString *contentID;
- (id)attachmentContentTypeForFileName:(id)arg1;
@property(readonly) NSString *fileUTType;
- (id)_fileUTTypeForFileName:(id)arg1;
@property(readonly) NSString *path; // @dynamic path;
@property(copy, nonatomic) NSString *remoteImageFileName;
@property(copy, nonatomic) NSString *fileName; // @dynamic fileName;
- (id)fileNameByStrippingZipIfNeeded:(_Bool)arg1;
- (_Bool)isPDFFile;
@property(readonly, nonatomic) _Bool isMediaFile;
@property(readonly, nonatomic) _Bool isVideoFile;
@property(readonly, nonatomic) _Bool isImageFile;
@property(readonly, nonatomic) _Bool isRFC822;
@property(readonly) _Bool isContainedInCompose;
@property(readonly) _Bool isContainedInRFC822;
@property(readonly) NSString *inferredMimeType;
@property(readonly) _Bool shouldAutoDownload;
@property(readonly) _Bool isDataAvailableLocally;
- (id)_dataProvider;
- (_Bool)hasCalendarMetadata;
@property(retain, nonatomic) NSString *icsRepresentation;
@property(retain, nonatomic) NSString *meetingStorePersistentID;
@property(retain, nonatomic) NSString *eventID;
@property(readonly, nonatomic) _Bool isCalendarFile;
- (_Bool)isAvailable;
- (id)filterICSData:(id)arg1;
- (id)filterVCSData:(id)arg1;
- (id)filterData:(id)arg1;
- (id)fileURL;
- (id)newDownloadProgress;
@property(retain, nonatomic) MFMailDropMetadata *mailDropMetadata; // @dynamic mailDropMetadata;
@property _Bool isPlaceholder; // @dynamic isPlaceholder;
- (id)fetchPlaceholderData;
- (_Bool)isMailDropPhotoArchive;
- (_Bool)isMailDrop;
- (id)fileWrapperUsingFetchedLocalData;
- (id)fetchDataToURL:(id *)arg1;
- (id)fetchDataSynchronously:(id *)arg1 stripPrivateMetadata:(_Bool)arg2;
- (id)fetchDataSynchronously:(id *)arg1;
- (id)fetchLocalData:(id *)arg1 stripPrivateMetadata:(_Bool)arg2;
- (id)fetchLocalData;
- (id)fetchData;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;

@end

