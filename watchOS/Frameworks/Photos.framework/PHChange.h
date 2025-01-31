//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectContext, NSMapTable, NSMutableDictionary, NSSet, PHPersistentChangeToken;
@protocol OS_dispatch_queue;

@interface PHChange : NSObject
{
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSDictionary *_changedAttributesByOID;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
    NSArray *_changedObjectIDsArray;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
    _Bool _unknownMergeEvent;
    NSMutableDictionary *_objectIDsByLocalIdentifier;
    NSManagedObjectContext *_context;
    NSDictionary *_deletedUuidsByObjectId;
    PHPersistentChangeToken *_changeToken;
}

+ (id)mergePersistedChanges:(id)arg1;
+ (id)handlerQueue;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 photoLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) PHPersistentChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) NSDictionary *deletedUuidsByObjectId; // @synthesize deletedUuidsByObjectId=_deletedUuidsByObjectId;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_formatEncodedDictionary:(id)arg1 withDecodeBlock:(CDUnknownBlockType)arg2;
- (id)_formatedDeletedUUidsByObjectId;
- (id)_pl_prettyDescriptionWithIndent:(int)arg1;
- (id)description;
- (id)changedRelationshipNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)changedRelationshipNamesForObject:(id)arg1;
- (id)_relationshipNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (id)changedPropertyNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)changedPropertyNamesForObject:(id)arg1;
- (id)_propertyNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (id)fetchUUIDMapForObjectIDs:(id)arg1 entityClass:(Class)arg2 context:(id)arg3;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1 context:(id)arg2;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1;
- (_Bool)containsChangesForEntityClass:(Class)arg1;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (_Bool)packedBadgeAttributesChangedForPHAssetOID:(id)arg1;
- (_Bool)favoriteStateChangedForPHAssetOID:(id)arg1;
- (_Bool)hiddenStateChangedForPHAssetOID:(id)arg1;
- (_Bool)trashedStateChangedForPHAssetOID:(id)arg1;
- (_Bool)contentOrThumbnailChangedForAsset:(id)arg1;
- (_Bool)contentOrThumbnailChangedForPHAssetOID:(id)arg1;
- (_Bool)keyFaceChangedForPersonOID:(id)arg1;
- (id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2;
- (_Bool)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2;
- (void)_prepareCachedValuesForEntity:(id)arg1;
@property(readonly, nonatomic) unsigned int totalChangeCount;
- (id)changedRelationshipsByOID;
- (id)changedAttributesByOID;
- (id)deletedObjectIDs;
- (id)updatedObjectIDs;
- (id)insertedObjectIDs;
@property(readonly, nonatomic) _Bool hasIncrementalChanges;
- (id)initWithInsertedObjectIDs:(id)arg1 updatedObjectIDs:(id)arg2 deletedObjectIDs:(id)arg3 deletedUuidsByObjectId:(id)arg4 changedAttributesByOID:(id)arg5 changedRelationshipsByOID:(id)arg6 unknownMergeEvent:(_Bool)arg7 changeToken:(id)arg8 managedObjectContext:(id)arg9;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(_Bool)arg2 changeToken:(id)arg3;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(_Bool)arg2;
- (id)init;
- (_Bool)highlightGroupRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1;
- (_Bool)momentRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1;
- (_Bool)personRelationshipChangedForFaceWithLocalIdentifier:(id)arg1;
- (_Bool)faceRelationshipChangedForPersonWithLocalIdentifier:(id)arg1;
- (_Bool)hasRelationshipChangesForLocalIdentifier:(id)arg1;

@end

