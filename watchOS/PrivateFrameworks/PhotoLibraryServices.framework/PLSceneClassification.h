//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject
{
}

+ (id)PLJunkSceneClassificationIDForLabel:(id)arg1;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 assetUUID:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4;
- (id)debugLogDescription;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(nonatomic) double confidence; // @dynamic confidence;
@property(nonatomic) unsigned int sceneIdentifier; // @dynamic sceneIdentifier;

@end

