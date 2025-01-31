//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLPTPTransferableAdditionalAssetAttributes-Protocol.h>

@class CLLocation, NSData, NSDate, NSManagedObject, NSNumber, NSSet, NSString, PLAssetDescription, PLEditedIPTCAttributes, PLManagedAsset, PLSceneprint, PLUnmanagedAdjustment;

@interface PLAdditionalAssetAttributes : PLManagedObject <PLPTPTransferableAdditionalAssetAttributes>
{
    CLLocation *__cachedShiftedLocation;
}

+ (id)entityName;
+ (id)listOfSyncedProperties;
+ (void)fromExtraDurationData:(id)arg1 getStillDisplayTime:(CDStruct_198678f7 *)arg2 videoDuration:(CDStruct_198678f7 *)arg3;
+ (id)newExtraDurationDataFromStillDisplayTime:(CDStruct_198678f7)arg1 videoDuration:(CDStruct_198678f7)arg2;
+ (id)descriptionForDestinationAssetCopyState:(short)arg1;
@property(retain, nonatomic, setter=_setCachedShiftedLocation:) CLLocation *_cachedShiftedLocation; // @synthesize _cachedShiftedLocation=__cachedShiftedLocation;
- (void).cxx_destruct;
@property(nonatomic) BOOL shiftedLocationIsValid; // @dynamic shiftedLocationIsValid;
@property(retain, nonatomic) CLLocation *shiftedLocation;
- (void)willSave;
- (void)truncatedOriginalCheckChangedValues:(id)arg1;
- (BOOL)isUserInterfaceChange;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
@property(retain, nonatomic) NSString *longDescription;
@property(retain, nonatomic) NSData *mediaMetadataData;
- (void)resetCloudRecoveryState;
- (BOOL)hasCloudRecoveryStateFlagSet:(unsigned long long)arg1;
- (void)removeCloudRecoveryStateFlag:(unsigned long long)arg1;
- (void)setCloudRecoveryStateFlag:(unsigned long long)arg1;
- (BOOL)hasConsistentCloudState;
- (void)setSceneprintWithData:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *adjustedFingerPrint; // @dynamic adjustedFingerPrint;
@property(nonatomic) BOOL allowedForAnalysis; // @dynamic allowedForAnalysis;
@property(retain, nonatomic) NSDate *alternateImportImageDate; // @dynamic alternateImportImageDate;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) PLAssetDescription *assetDescription; // @dynamic assetDescription;
@property(nonatomic) short cameraCaptureDevice; // @dynamic cameraCaptureDevice;
@property(nonatomic) int cloudAvalanchePickType; // @dynamic cloudAvalanchePickType;
@property(nonatomic) long long cloudGroupingState; // @dynamic cloudGroupingState;
@property(nonatomic) short cloudKindSubtype; // @dynamic cloudKindSubtype;
@property(nonatomic) unsigned long long cloudRecoveryState; // @dynamic cloudRecoveryState;
@property(nonatomic) short cloudStateRecoveryAttemptsCount; // @dynamic cloudStateRecoveryAttemptsCount;
@property(retain, nonatomic) NSString *creatorBundleID; // @dynamic creatorBundleID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) short destinationAssetCopyState; // @dynamic destinationAssetCopyState;
@property(retain, nonatomic) NSData *distanceIdentity; // @dynamic distanceIdentity;
@property(retain, nonatomic) PLEditedIPTCAttributes *editedIPTCAttributes; // @dynamic editedIPTCAttributes;
@property(retain, nonatomic) NSString *editorBundleID; // @dynamic editorBundleID;
@property(retain, nonatomic) NSNumber *embeddedThumbnailHeight; // @dynamic embeddedThumbnailHeight;
@property(retain, nonatomic) NSNumber *embeddedThumbnailLength; // @dynamic embeddedThumbnailLength;
@property(retain, nonatomic) NSNumber *embeddedThumbnailOffset; // @dynamic embeddedThumbnailOffset;
@property(retain, nonatomic) NSNumber *embeddedThumbnailWidth; // @dynamic embeddedThumbnailWidth;
@property(retain, nonatomic) NSString *exifTimestampString; // @dynamic exifTimestampString;
@property(retain, nonatomic) NSData *faceRegions; // @dynamic faceRegions;
@property(readonly) unsigned long long hash;
@property(nonatomic) short importedBy; // @dynamic importedBy;
@property(retain, nonatomic) NSNumber *inferredTimeZoneOffset; // @dynamic inferredTimeZoneOffset;
@property(retain, nonatomic) NSSet *keywords; // @dynamic keywords;
@property(retain, nonatomic) NSDate *lastUploadAttemptDate; // @dynamic lastUploadAttemptDate;
@property(retain, nonatomic) NSNumber *locationHash; // @dynamic locationHash;
@property(copy, nonatomic) NSString *masterFingerPrint; // @dynamic masterFingerPrint;
@property(retain, nonatomic) NSManagedObject *mediaMetadata; // @dynamic mediaMetadata;
@property(retain, nonatomic) NSString *mediaMetadataType; // @dynamic mediaMetadataType;
@property(retain, nonatomic) NSString *montage; // @dynamic montage;
@property(retain, nonatomic) id originalAssetsUUID; // @dynamic originalAssetsUUID;
@property(retain, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(retain, nonatomic) NSNumber *originalFilesize; // @dynamic originalFilesize;
@property(retain, nonatomic) NSData *originalHash; // @dynamic originalHash;
@property(retain, nonatomic) NSNumber *originalHeight; // @dynamic originalHeight;
@property(retain, nonatomic) NSNumber *originalOrientation; // @dynamic originalOrientation;
@property(retain, nonatomic) NSNumber *originalResourceChoice; // @dynamic originalResourceChoice;
@property(retain, nonatomic) NSNumber *originalWidth; // @dynamic originalWidth;
@property(copy, nonatomic) NSString *originatingAssetIdentifier; // @dynamic originatingAssetIdentifier;
@property(nonatomic) long long pendingPlayCount; // @dynamic pendingPlayCount;
@property(nonatomic) long long pendingShareCount; // @dynamic pendingShareCount;
@property(nonatomic) long long pendingViewCount; // @dynamic pendingViewCount;
@property(retain, nonatomic) NSSet *personReferences; // @dynamic personReferences;
@property(retain, nonatomic) NSString *photoStreamTagId; // @dynamic photoStreamTagId;
@property(retain, nonatomic) NSData *placeAnnotationData; // @dynamic placeAnnotationData;
@property(nonatomic) long long playCount; // @dynamic playCount;
@property(nonatomic) long long ptpTrashedState; // @dynamic ptpTrashedState;
@property(retain, nonatomic) NSString *publicGlobalUUID; // @dynamic publicGlobalUUID;
@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property(retain, nonatomic) NSNumber *reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property(retain, nonatomic) NSDate *sceneAnalysisTimestamp; // @dynamic sceneAnalysisTimestamp;
@property(nonatomic) short sceneAnalysisVersion; // @dynamic sceneAnalysisVersion;
@property(retain, nonatomic) NSSet *sceneClassifications; // @dynamic sceneClassifications;
@property(retain, nonatomic) PLSceneprint *sceneprint; // @dynamic sceneprint;
@property(nonatomic) long long shareCount; // @dynamic shareCount;
@property(copy, nonatomic) NSString *shareOriginator; // @dynamic shareOriginator;
@property(nonatomic) short shareType; // @dynamic shareType;
@property(retain, nonatomic) NSData *shiftedLocationData; // @dynamic shiftedLocationData;
@property(copy, nonatomic) NSString *snowdayIdentifier; // @dynamic snowdayIdentifier;
@property(copy, nonatomic) NSString *snowdaySnowplowIdentifier; // @dynamic snowdaySnowplowIdentifier;
@property(copy, nonatomic) NSString *snowplowGroupUUID; // @dynamic snowplowGroupUUID;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *timeZoneName; // @dynamic timeZoneName;
@property(retain, nonatomic) NSNumber *timeZoneOffset; // @dynamic timeZoneOffset;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) PLUnmanagedAdjustment *unmanagedAdjustment; // @dynamic unmanagedAdjustment;
@property(retain, nonatomic) NSNumber *uploadAttempts; // @dynamic uploadAttempts;
@property(nonatomic) unsigned long long variationSuggestionStates; // @dynamic variationSuggestionStates;
@property(nonatomic) int videoCpDisplayTimescale; // @dynamic videoCpDisplayTimescale;
@property(nonatomic) long long videoCpDisplayValue; // @dynamic videoCpDisplayValue;
@property(nonatomic) int videoCpDurationTimescale; // @dynamic videoCpDurationTimescale;
@property(nonatomic) long long viewCount; // @dynamic viewCount;

@end

