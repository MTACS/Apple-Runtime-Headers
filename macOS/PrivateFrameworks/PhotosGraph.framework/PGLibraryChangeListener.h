//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGLibraryChangeProducer-Protocol.h>
#import <PhotosGraph/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSCountedSet, NSHashTable, NSMapTable, NSMutableOrderedSet, NSString, PGLibraryChangeListenerStateStore, PHPersistentChangeToken, PHPhotoLibrary;
@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;

@interface PGLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver, PGLibraryChangeProducer>
{
    NSObject<OS_dispatch_queue> *_changeObservationQueue;
    NSString *_clientIdentifier;
    PHPhotoLibrary *_photoLibrary;
    PGLibraryChangeListenerStateStore *_stateStore;
    NSHashTable *_changeConsumers;
    NSMutableOrderedSet *_outstandingChangeTokens;
    NSMapTable *_outstandingChangeTokensByConsumer;
    NSCountedSet *_outstandingChangeTokenCounts;
    unsigned long long _outstandingTokensHighWaterMark;
    unsigned long long _outstandingTokensLowWaterMark;
    unsigned long long _maximumNumberOfMutationsToFetch;
    unsigned long long _mode;
    PHPersistentChangeToken *_lastReadToken;
    id <PGGraphUpdateHealthRecording> _updateHealthRecorder;
}

@property(readonly, nonatomic) id <PGGraphUpdateHealthRecording> updateHealthRecorder; // @synthesize updateHealthRecorder=_updateHealthRecorder;
@property(retain, nonatomic) PHPersistentChangeToken *lastReadToken; // @synthesize lastReadToken=_lastReadToken;
@property unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned long long maximumNumberOfMutationsToFetch; // @synthesize maximumNumberOfMutationsToFetch=_maximumNumberOfMutationsToFetch;
@property(readonly, nonatomic) unsigned long long outstandingTokensLowWaterMark; // @synthesize outstandingTokensLowWaterMark=_outstandingTokensLowWaterMark;
@property(readonly, nonatomic) unsigned long long outstandingTokensHighWaterMark; // @synthesize outstandingTokensHighWaterMark=_outstandingTokensHighWaterMark;
@property(readonly, nonatomic) NSCountedSet *outstandingChangeTokenCounts; // @synthesize outstandingChangeTokenCounts=_outstandingChangeTokenCounts;
@property(readonly, nonatomic) NSMapTable *outstandingChangeTokensByConsumer; // @synthesize outstandingChangeTokensByConsumer=_outstandingChangeTokensByConsumer;
@property(readonly, nonatomic) NSMutableOrderedSet *outstandingChangeTokens; // @synthesize outstandingChangeTokens=_outstandingChangeTokens;
@property(readonly, nonatomic) NSHashTable *changeConsumers; // @synthesize changeConsumers=_changeConsumers;
@property(readonly, nonatomic) PGLibraryChangeListenerStateStore *stateStore; // @synthesize stateStore=_stateStore;
@property(readonly, nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (BOOL)_distributeChangesInFetchResult:(id)arg1;
- (void)_clearConsumerTokenState;
- (id)_consumer:(id)arg1 withChangeTokens:(id)arg2 processedChangeTokens:(id)arg3 consumedTokens:(BOOL)arg4;
- (void)consumer:(id)arg1 didIgnoreChangeTokens:(id)arg2;
- (void)consumer:(id)arg1 didConsumeChangeTokens:(id)arg2;
- (void)_notifyConsumersWithChangesFromFromChangeToken:(id)arg1;
@property(readonly, nonatomic) PHPersistentChangeToken *currentToken;
- (void)photoLibraryDidChange:(id)arg1;
- (void)persistToken:(id)arg1;
- (void)unregisterChangeConsumer:(id)arg1;
- (void)registerChangeConsumer:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (id)initWithPhotoLibrary:(id)arg1 clientIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

