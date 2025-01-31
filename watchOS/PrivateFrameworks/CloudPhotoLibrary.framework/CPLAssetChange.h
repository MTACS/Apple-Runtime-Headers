//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class CLLocation, CPLAdjustments, CPLFaceAnalysisReference, CPLPlaceAnnotation, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface CPLAssetChange : CPLItemChange
{
    NSDictionary *_resourcePerResourceType;
    _Bool _favorite;
    _Bool _hidden;
    NSString *_masterIdentifier;
    NSDate *_lastSharedDate;
    NSDate *_addedDate;
    NSDate *_assetDate;
    NSArray *_resources;
    NSString *_caption;
    NSString *_extendedDescription;
    int _orientation;
    int _duration;
    CLLocation *_location;
    NSArray *_keywords;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    NSString *_timeZoneName;
    NSNumber *_timeZoneOffset;
    NSString *_momentIdentifier;
    NSString *_momentName;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    unsigned int _burstFlags;
    NSString *_burstIdentifier;
    NSString *_mediaGroupIdentifier;
    int _videoComplementDurationValue;
    int _videoComplementDurationTimescale;
    int _videoComplementImageDisplayValue;
    int _videoComplementImageDisplayTimescale;
    unsigned int _videoComplementVisibilityState;
    unsigned int _assetSubtype;
    unsigned int _assetHDRType;
    CPLAdjustments *_adjustments;
    unsigned int _originalChoice;
    NSArray *_people;
    int _facesVersion;
    NSString *_facesAdjustmentsFingerprint;
    CPLPlaceAnnotation *_placeAnnotation;
    NSData *_facesData;
    long long _customRenderedValue;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
}

+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned int)arg1;
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned int)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)serverSupportsVision;
@property(copy, nonatomic) NSData *facesData; // @synthesize facesData=_facesData;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) CPLPlaceAnnotation *placeAnnotation; // @synthesize placeAnnotation=_placeAnnotation;
@property(copy, nonatomic) NSString *facesAdjustmentsFingerprint; // @synthesize facesAdjustmentsFingerprint=_facesAdjustmentsFingerprint;
@property(nonatomic) int facesVersion; // @synthesize facesVersion=_facesVersion;
@property(copy, nonatomic) NSArray *people; // @synthesize people=_people;
@property(nonatomic) long long customRenderedValue; // @synthesize customRenderedValue=_customRenderedValue;
@property(nonatomic) unsigned int originalChoice; // @synthesize originalChoice=_originalChoice;
@property(retain, nonatomic) CPLAdjustments *adjustments; // @synthesize adjustments=_adjustments;
@property(nonatomic) unsigned int assetHDRType; // @synthesize assetHDRType=_assetHDRType;
@property(nonatomic) unsigned int assetSubtype; // @synthesize assetSubtype=_assetSubtype;
@property(nonatomic) unsigned int videoComplementVisibilityState; // @synthesize videoComplementVisibilityState=_videoComplementVisibilityState;
@property(nonatomic) int videoComplementImageDisplayTimescale; // @synthesize videoComplementImageDisplayTimescale=_videoComplementImageDisplayTimescale;
@property(nonatomic) int videoComplementImageDisplayValue; // @synthesize videoComplementImageDisplayValue=_videoComplementImageDisplayValue;
@property(nonatomic) int videoComplementDurationTimescale; // @synthesize videoComplementDurationTimescale=_videoComplementDurationTimescale;
@property(nonatomic) int videoComplementDurationValue; // @synthesize videoComplementDurationValue=_videoComplementDurationValue;
@property(copy, nonatomic) NSString *mediaGroupIdentifier; // @synthesize mediaGroupIdentifier=_mediaGroupIdentifier;
@property(copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(nonatomic) unsigned int burstFlags; // @synthesize burstFlags=_burstFlags;
@property(copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(copy, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(copy, nonatomic) NSString *momentName; // @synthesize momentName=_momentName;
@property(copy, nonatomic) NSString *momentIdentifier; // @synthesize momentIdentifier=_momentIdentifier;
@property(copy, nonatomic) NSNumber *timeZoneOffset; // @synthesize timeZoneOffset=_timeZoneOffset;
@property(copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(copy, nonatomic) NSString *extendedDescription; // @synthesize extendedDescription=_extendedDescription;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSDate *assetDate; // @synthesize assetDate=_assetDate;
@property(copy, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(copy, nonatomic) NSDate *lastSharedDate; // @synthesize lastSharedDate=_lastSharedDate;
@property(copy, nonatomic) NSString *masterIdentifier; // @synthesize masterIdentifier=_masterIdentifier;
- (void).cxx_destruct;
- (_Bool)isAssetChange;
- (id)scopeIdentifiersForQuarantine;
- (unsigned int)fullChangeTypeForFullRecord;
- (_Bool)_canLowerQuota;
@property(copy, nonatomic) CPLFaceAnalysisReference *faces;
- (_Bool)validateChangeWithError:(id *)arg1;
- (_Bool)validateFullRecord;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (_Bool)supportsDeletion;
- (_Bool)supportsResources;
- (id)allRelatedScopedIdentifiers;
- (int)dequeueOrder;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (id)resourceForType:(unsigned int)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (void)setMasterScopedIdentifier:(id)arg1;
- (id)masterScopedIdentifier;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (id)propertiesDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)scopedIdentifiersForMapping;
- (_Bool)validateRecordForTracker:(id)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end

