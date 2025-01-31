//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineDerivativesCache : NSObject
{
    NSURL *_cacheMappingURL;
    _Bool _tryCreatingCacheFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_cacheURL;
    Class _derivativeGeneratorClass;
}

@property(retain, nonatomic) Class derivativeGeneratorClass; // @synthesize derivativeGeneratorClass=_derivativeGeneratorClass;
@property(readonly, copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (void).cxx_destruct;
- (void)generateDerivativesForChange:(id)arg1 derivativesFilter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_checkGeneratedResources:(id)arg1 error:(id *)arg2;
- (_Bool)_checkResource:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)_updateChange:(id *)arg1 fromOldChange:(id)arg2 withResources:(id)arg3;
- (_Bool)_isUnsupportedFormatError:(id)arg1;
- (id)cachedResourcesForReferenceResource:(id)arg1 adjustment:(id)arg2;
- (void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2 adjustment:(id)arg3;
- (id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2;
- (id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2;
- (id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2;
- (void)_createCacheFolderIfNecessary;
- (id)_folderNameForReferenceResource:(id)arg1 adjustment:(id)arg2;
- (id)_cacheKeyForReferenceResource:(id)arg1 adjustments:(id)arg2;
- (void)discardCache;
- (id)initWithCacheURL:(id)arg1;

@end

