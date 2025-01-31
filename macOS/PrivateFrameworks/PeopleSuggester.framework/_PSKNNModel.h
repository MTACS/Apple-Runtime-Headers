//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _CDInteractionCache, _CDInteractionStore, _PSContactResolver;
@protocol _DKKnowledgeQuerying;

@interface _PSKNNModel : NSObject
{
    unsigned long long _k;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _CDInteractionStore *_interactionStore;
    _PSContactResolver *_contactResolver;
    NSArray *_filterBundleIds;
    _CDInteractionCache *_messageInteractionCache;
    _CDInteractionCache *_shareInteractionCache;
}

@property(retain, nonatomic) _CDInteractionCache *shareInteractionCache; // @synthesize shareInteractionCache=_shareInteractionCache;
@property(retain, nonatomic) _CDInteractionCache *messageInteractionCache; // @synthesize messageInteractionCache=_messageInteractionCache;
@property(readonly, nonatomic) NSArray *filterBundleIds; // @synthesize filterBundleIds=_filterBundleIds;
@property(readonly, nonatomic) _PSContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, nonatomic) unsigned long long k; // @synthesize k=_k;
- (void).cxx_destruct;
- (id)extractNearestNeighborsForMapsQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(BOOL)arg3;
- (id)featuresFromMapsFeedbackEvents:(id)arg1;
- (id)rankedMapsShareEtaSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (unsigned long long)indexToInsertNeighbor:(id)arg1 array:(id)arg2;
- (id)neighborsFromTrainingData:(id)arg1 k:(unsigned long long)arg2 queryPoint:(id)arg3;
- (id)sliceStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ofArray:(id)arg3;
- (id)featuresFromInteractionsSplitRecipients:(id)arg1;
- (id)featuresFromInteractions:(id)arg1;
- (id)rankedLabelsFromInteractionsSingleRecipientArray:(id)arg1 andDistances:(id)arg2 freqOnly:(BOOL)arg3 contactsOnly:(BOOL)arg4;
- (id)rankedLabelsFromInteractionsMaintainRecipientsArray:(id)arg1 andDistances:(id)arg2 freqOnly:(BOOL)arg3;
- (id)extractNearestNeighborLabelsForQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(BOOL)arg3 rankerType:(long long)arg4 contactsOnly:(BOOL)arg5;
- (id)mergedSuggestionsFromShares:(id)arg1 andInteractions:(id)arg2;
- (id)featureVectorFromPredictionDate:(id)arg1 bundleId:(id)arg2;
- (id)targetBundleIdsForFilterBundlesIds:(id)arg1;
- (id)filterShareInteractions:(id)arg1 minimumOccurences:(unsigned long long)arg2;
- (id)splitShareLabels:(id)arg1 suggestionDate:(id)arg2 contextBundleId:(id)arg3;
- (id)interactionLabelsForQueryResult:(id)arg1 queryPoint:(id)arg2 rankerType:(long long)arg3 frequencyOnly:(BOOL)arg4 contactsOnly:(BOOL)arg5;
- (id)suggestionProxiesWithPredictionContext:(id)arg1;
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactsOnly:(BOOL)arg3 interactions:(id)arg4 contactIdsCurrentlyInStore:(id)arg5;
- (id)normalizedStringFromString:(id)arg1;
- (id)rankedNameSuggestionsWithPredictionContext:(id)arg1 forName:(id)arg2;
- (id)rankedMessagesZkwSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 maxSuggestions:(unsigned long long)arg3 frequencyOnly:(BOOL)arg4 interactions:(id)arg5;
- (id)rankedZkwSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)candidatePropertyFromCandidates:(id)arg1;
- (id)indexesOfObjectsWithKey:(id)arg1 withValues:(id)arg2 inArray:(id)arg3;
- (long long)suggestionExists:(id)arg1 withValue:(id)arg2 inArray:(id)arg3;
- (id)filterSuggestionsFrom:(id)arg1 byFilteringOutSeedRecipients:(id)arg2;
- (id)rankedMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 candidates:(id)arg3;
- (id)rankedAutocompleteSuggestionsWithPredictionContext:(id)arg1 candidates:(id)arg2;
- (id)initWithK:(unsigned long long)arg1 interactionStore:(id)arg2 filterByBundleIds:(id)arg3 knowledgeStore:(id)arg4 contactResolver:(id)arg5 messageInteractionCache:(id)arg6 shareInteractionCache:(id)arg7;

@end

