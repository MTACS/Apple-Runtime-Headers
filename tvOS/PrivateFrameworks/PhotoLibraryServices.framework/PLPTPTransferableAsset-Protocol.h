//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class CLLocation, NSDate, NSManagedObjectID, NSSet, NSString, NSURL;
@protocol PLPTPTransferableAdditionalAssetAttributes, PLPTPTransferableSidecarFile;

@protocol PLPTPTransferableAsset <NSObject>
@property(readonly, copy, nonatomic) NSString *pathForPenultimateFullsizeRenderVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForPenultimateFullsizeRenderImageFile;
@property(readonly, nonatomic) long long snowplowTrashedState;
@property(readonly, nonatomic) struct CGSize videoComplementSpatialOverCaptureSize;
@property(readonly, nonatomic) struct CGSize spatialOverCaptureSize;
@property(readonly, copy, nonatomic) NSString *pathForOriginalAdjustmentFile;
@property(readonly, copy, nonatomic) NSString *pathForVideoComplementSpatialOverCaptureContentFile;
@property(readonly, copy, nonatomic) NSString *pathForSpatialOverCaptureContentFile;
@property(readonly, copy, nonatomic) NSString *pathForFullsizeRenderVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForFullsizeRenderImageFile;
@property(readonly, copy, nonatomic) NSString *pathForAdjustmentFile;
@property(readonly, copy, nonatomic) NSString *pathForDiagnosticFile;
@property(readonly, retain, nonatomic) CLLocation *location;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic) short originalOrientation;
@property(readonly, nonatomic) long long originalHeight;
@property(readonly, nonatomic) long long originalWidth;
@property(readonly, nonatomic) int embeddedThumbnailOffset;
@property(readonly, copy, nonatomic) NSURL *mainFileURL;
@property(readonly, nonatomic) id <PLPTPTransferableSidecarFile> ptpPhotoIrisSidecar;
@property(readonly, copy, nonatomic) NSString *mediaGroupUUID;
@property(readonly, nonatomic) int avalanchePickType;
@property(readonly, copy, nonatomic) NSString *avalancheUUID;
@property(readonly, nonatomic) short kindSubtype;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool isPhotoIris;
@property(readonly, nonatomic) _Bool isAvalanchePhoto;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) _Bool isInFlight;
@property(readonly, retain, nonatomic) NSSet *ptpSidecarFiles;
@property(readonly, retain, nonatomic) id <PLPTPTransferableAdditionalAssetAttributes> ptpAdditionalAttributes;
@property(readonly, nonatomic) unsigned long long ptpCloudMasterOriginalFileSize;
@property(readonly, nonatomic) _Bool cloudPhotoLibraryEnabled;
@property(readonly, copy, nonatomic) NSString *pathForOriginalFile;
@property(readonly, nonatomic) unsigned long long originalFilesize;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(readonly, copy, nonatomic) NSDate *dateCreated;
@property(readonly, copy, nonatomic) NSString *originalFilename;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, nonatomic) short savedAssetType;
@property(readonly, retain, nonatomic) id uuid;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@end

