//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PLMutablePTPAsset;
@protocol PLFileManager, PLPTPConversionSupport, PLPTPTransferableAsset;

@interface PLPTPAssetBuilder : NSObject
{
    id <PLPTPConversionSupport> _conversionSupport;
    id <PLPTPTransferableAsset> _asset;
    id <PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    PLMutablePTPAsset *_currentPtpAsset;
    PLMutablePTPAsset *_commonPtpAsset;
    PLMutablePTPAsset *_originalPtpAsset;
    NSArray *_sidecarPtpAssets;
    PLMutablePTPAsset *_diagnosticPtpAsset;
    PLMutablePTPAsset *_adjustmentPtpAsset;
    PLMutablePTPAsset *_fullSizeRenderImagePtpAsset;
    PLMutablePTPAsset *_fullSizeRenderVideoPtpAsset;
    NSMutableArray *_convertedAssets;
    BOOL _irisSidecarRequiresFormatConversion;
}

+ (BOOL)_shouldIncludeDiagnosticFile;
+ (id)pictureTransferProtocolAssetsForAsset:(id)arg1 withConversionSupport:(id)arg2;
- (void).cxx_destruct;
- (void)_buildFullSizeRenderVideoAsset;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildAdjustmentAsset;
- (void)_buildDiagnosticAsset;
- (id)_assetForSidecar:(id)arg1 sidecarPath:(id)arg2 irisSidecarPath:(id)arg3;
- (void)_buildSidecarAssets;
- (void)_buildDeletedFlag;
- (void)_buildRelatedUUID;
- (void)_buildTimelapse;
- (void)_buildSlowMo;
- (void)_buildBurst;
- (BOOL)_hasIrisSidecarFile;
- (void)_buildGroupUUID;
- (void)_buildGPSInformation;
- (void)_durationOfTheAsset;
- (void)_buildModificationAndCreationDate;
- (void)_buildPhotoKey;
- (void)_buildOrientation;
- (void)_buildThumbnailDimensions;
- (void)_buildImageDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildOriginatingAssetID;
- (void)_buildFileSize;
- (void)_buildExifAvailable;
- (BOOL)_buildDirectoryPathAndFilename;
- (BOOL)_suppressPtpInfo;
- (void)_updateOriginalAssetFormatConversionFromVideoComplement;
- (void)_updateAsset:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateAssetForTranscodeChoice:(id)arg1 withConversionResult:(id)arg2;
- (void)updateAssetForFormatConversion:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4;
- (BOOL)_buildOriginalAsset;
- (void)_buildCommonAsset;
- (void)updateSiblingAssetTypesOnMutablePTPAssets:(id)arg1;
- (id)pictureTransferProtocolAssets;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 fileManager:(id)arg3;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2;

@end

