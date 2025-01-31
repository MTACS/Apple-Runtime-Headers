//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, MAAssetQuery, NSString;

@interface MobileAssetUpdater : NSObject
{
    MAAsset *_asset;
    MAAssetQuery *_query;
    NSString *_assetType;
    NSString *_overrideFile;
    NSString *_purgeOverrideFile;
    BOOL _assetDownloaded;
    BOOL _requireAssetMetadata;
    BOOL _overrideApplied;
    CDUnknownBlockType _logger;
}

@property(copy) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property BOOL requireAssetMetadata; // @synthesize requireAssetMetadata=_requireAssetMetadata;
@property(readonly) BOOL overrideApplied; // @synthesize overrideApplied=_overrideApplied;
@property(readonly) BOOL assetDownloaded; // @synthesize assetDownloaded=_assetDownloaded;
@property(retain) NSString *purgeOverrideFile; // @synthesize purgeOverrideFile=_purgeOverrideFile;
@property(retain) NSString *overrideFile; // @synthesize overrideFile=_overrideFile;
@property(retain) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain) MAAssetQuery *query; // @synthesize query=_query;
@property(retain) MAAsset *asset; // @synthesize asset=_asset;
- (void)log:(int)arg1 format:(id)arg2;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;
- (id)assetWithMaxVersion:(id)arg1;
- (id)queryPredicate;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (void)doneWithAsset;
- (void)downloadComplete:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)downloadAsset:(CDUnknownBlockType)arg1;
@property(readonly) BOOL assetAvailable;
- (id)filterFoundAssets:(id)arg1;
- (BOOL)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3;
- (void)queryComplete:(id)arg1 remote:(BOOL)arg2 status:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)findAsset:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAssetType:(id)arg1;

@end

