//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSAddition, NSDictionary, NSURL, QLThumbnailVersion;

@interface QLThumbnailAddition : NSObject
{
    NSURL *_additionURL;
    long long _additionURLSandboxToken;
    NSDictionary *_metadata;
    GSAddition *_addition;
    NSDictionary *_thumbnailDataDictionary;
    QLThumbnailVersion *_thumbnailVersion;
}

+ (void)noteCloudDocsDownloadedFileAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(_Bool)arg2 atURL:(id)arg3 error:(id *)arg4;
+ (_Bool)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id *)arg3;
+ (_Bool)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id *)arg3;
+ (void)downloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)downloadOrGenerateThumbnailAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)downloadOrGenerateThumbnailAtURL:(id)arg1;
+ (void)generateThumbnailIfPossibleAtLogicalURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id *)arg2;
+ (_Bool)removeAdditionsOnURL:(id)arg1 error:(id *)arg2;
+ (_Bool)_removedAdditionsOnURL:(id)arg1;
+ (_Bool)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (_Bool)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
+ (_Bool)_removeAdditionsOnURLDirectly:(id)arg1 error:(id *)arg2;
+ (_Bool)associateImage:(struct CGImage *)arg1 metadata:(id)arg2 automaticallyGenerated:(_Bool)arg3 withURL:(id)arg4 error:(id *)arg5;
+ (id)metadataForGeneratedThumbnailForURL:(id)arg1 maximumDimension:(double)arg2;
+ (_Bool)imageContainsAlpha:(struct CGImage *)arg1;
+ (_Bool)imageContainsAlphaForOtherImages:(struct CGImage *)arg1;
+ (_Bool)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id *)arg4;
+ (_Bool)hasThumbnailOnImmutableDocumentAtURL:(id)arg1;
+ (_Bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(_Bool)arg3 atURL:(id)arg4 error:(id *)arg5;
+ (id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameForThumbnailInImageSource:(struct CGImageSource *)arg1;
+ (id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1;
+ (_Bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id *)arg4;
+ (_Bool)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id *)arg2;
+ (_Bool)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id *)arg4;
+ (_Bool)_hitAdditionsOnURL:(id)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)_hitAdditionsOnURLUsingDaemon:(id)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
+ (id)additionCreationInfo;
+ (unsigned long long)sizeOfAdditionsPresentOnURL:(id)arg1;
+ (_Bool)removeExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id *)arg4;
+ (_Bool)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char *)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id *)arg5;
+ (id)plistInExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id *)arg4;
@property long long additionURLSandboxToken; // @synthesize additionURLSandboxToken=_additionURLSandboxToken;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSDictionary *thumbnailDataDictionary; // @synthesize thumbnailDataDictionary=_thumbnailDataDictionary;
@property(retain) NSURL *additionURL; // @synthesize additionURL=_additionURL;
- (void).cxx_destruct;
@property(readonly) unsigned long long additionSize;
- (id)allImageURLs;
@property(readonly) GSAddition *genStoreAddition;
- (id)thumbnailsDictionaryWithError:(id *)arg1;
- (struct CGImage *)thumbnailWithMaximumDimension:(double)arg1 contentRect:(struct CGRect *)arg2 properties:(id *)arg3;
@property(readonly) QLThumbnailVersion *thumbnailVersion;
- (id)initWithAdditionsPresentOnURL:(id)arg1 includingExtendedAttributes:(_Bool)arg2 error:(id *)arg3;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id *)arg2;
- (_Bool)_initWithXattrsPresentOnURL:(id)arg1 error:(id *)arg2;
- (_Bool)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
- (_Bool)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id *)arg2;
- (id)thumbnailDataForKey:(id)arg1;
- (id)thumbnailURLForKey:(id)arg1;
- (_Bool)shouldBeInvalidatedByThumbnailVersion:(id)arg1;
- (void)dealloc;

@end

