//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSProgressReporting-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSProgress, NSString, PHAsset;

@interface PHResourceDownloadRequest : NSObject <NSProgressReporting>
{
    NSMutableDictionary *_progressByRequestIdentifier;
    CDUnknownBlockType _downloadCompletionHandler;
    _Bool __downloadCancelled;
    PHAsset *_asset;
    int _requestType;
    NSProgress *_progress;
    CDUnknownBlockType _progressChangeHandler;
    NSArray *__assetResources;
    NSMutableArray *__activeAssetResourcesRequest;
    double _progressFraction;
}

+ (id)resourceInfoForAsset:(id)arg1 requestType:(int)arg2 error:(id *)arg3;
+ (id)indexesForAssetsWithoutThumbnails:(id)arg1 requestType:(int)arg2;
+ (id)indexesForAssetsRequiringDownload:(id)arg1 requestType:(int)arg2 options:(id)arg3;
+ (id)indexesForAssetsRequiringDownload:(id)arg1 requestType:(int)arg2;
+ (id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 includeAllAssetResources:(_Bool)arg3 fulfillOnDemandResources:(_Bool)arg4 error:(id *)arg5;
+ (id)utiKeysForURLKeys;
+ (id)resourceInfoKeysForCPLResourceTypesForVideos;
+ (id)resourceInfoKeysForCPLResourceTypesForPhotos;
+ (id)singularResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 useOriginalResources:(_Bool)arg4 knownUnsupported:(_Bool)arg5 error:(id *)arg6;
+ (id)originalsAndFullSizeResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (_Bool)setValuesInDictionary:(id)arg1 fromDictionary:(id)arg2 keysToCopy:(id)arg3;
+ (id)_resourcesToShareForAsset:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)_resourcesToShareForAsset:(id)arg1 error:(id *)arg2;
+ (id)_fetchableResourcesForAsset:(id)arg1 includeDerivatives:(_Bool)arg2;
+ (id)fetchResourcesToShareForAsset:(id)arg1 requestOptions:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSMutableArray *_activeAssetResourcesRequest; // @synthesize _activeAssetResourcesRequest=__activeAssetResourcesRequest;
@property(retain, nonatomic, setter=_setAssetResources:) NSArray *_assetResources; // @synthesize _assetResources=__assetResources;
@property(nonatomic, getter=_isDownloadCancelled, setter=_setDownloadCancelled:) _Bool _downloadCancelled; // @synthesize _downloadCancelled=__downloadCancelled;
@property(copy, nonatomic) CDUnknownBlockType progressChangeHandler; // @synthesize progressChangeHandler=_progressChangeHandler;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic, setter=_setProgressFraction:) double progressFraction; // @synthesize progressFraction=_progressFraction;
@property(readonly) int requestType; // @synthesize requestType=_requestType;
@property(readonly) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (_Bool)isDownloadingRequiredForOptions:(id)arg1 resourceInfo:(id *)arg2;
- (void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(_Bool)arg3;
- (void)cancelDownloadRequest;
- (void)_cancelActiveAssetResourceRequests;
- (void)_didFinishDownloadWithSuccess:(_Bool)arg1 resourceInfo:(id)arg2 error:(id)arg3;
- (void)_simulateFetchResourcesWithDuration:(double)arg1 success:(_Bool)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2;
- (void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForEditingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)downloadRequiredResourcesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchIsDownloadRequiredWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAsset:(id)arg1 requestType:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

