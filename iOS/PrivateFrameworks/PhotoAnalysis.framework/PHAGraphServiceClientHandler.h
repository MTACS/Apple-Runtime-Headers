//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>
#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>

@class NSString, PFDispatchQueue, PGManager, PHAServiceClientHandler;

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling>
{
    PHAServiceClientHandler *_serviceClientHandler;
    PGManager *_pgGraphManager;
    PFDispatchQueue *_requestQueue;
    unsigned long long _requestCount;
}

- (void).cxx_destruct;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (id)currentlyUnavailableError;
- (void)operationDidFinish:(id)arg1;
- (void)operationWillStart:(id)arg1;
- (void)handleOperation:(id)arg1;
- (void)_endGraphOperation;
- (void)_beginGraphOperation;
- (_Bool)wantsGraphUpdateNotifications;
- (_Bool)wantsLiveGraphUpdates;
- (id)phaGraphManager;
- (id)initWithServiceClientHandler:(id)arg1;
- (id)libraryTemporarilyUnavailableError;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)generateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(_Bool)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

