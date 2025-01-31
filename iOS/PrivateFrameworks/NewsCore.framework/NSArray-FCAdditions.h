//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <NewsCore/FCOrderedCollectionAdditions-Protocol.h>

@interface NSArray (FCAdditions) <FCOrderedCollectionAdditions>
+ (void)fc_walkArray:(id)arg1 andArray:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)fc_generatedArrayWithCount:(unsigned long long)arg1 generator:(CDUnknownBlockType)arg2;
+ (id)fc_array:(CDUnknownBlockType)arg1;
+ (id)fc_arrayByAddingUniqueObjectsFromArray:(id)arg1 toArray:(id)arg2;
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2 inRelativeOrder:(unsigned long long)arg3;
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2;
- (_Bool)fc_isEqualToArray:(id)arg1;
- (_Bool)fc_isEqualToArray:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)fc_rotateElementsFromTheIndexOfSelectedItem:(unsigned long long)arg1;
- (id)fc_sortedArrayStartingWithElementsSatisfying:(CDUnknownBlockType)arg1 sortedBy:(CDUnknownBlockType)arg2;
- (void)fc_enumerateIslandsOfCommonValuesForKeyBlock:(CDUnknownBlockType)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)fc_splitArrayWithTest:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
- (struct _NSRange)fc_expandIndex:(unsigned long long)arg1 toIncludeAdjacentObjectsPassingTest:(CDUnknownBlockType)arg2;
- (id)fc_uniqueByValueBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)fc_uniqueCount;
- (id)fc_arrayByReversingObjects;
- (double)fc_reduceArrayWithDouble:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)fc_reduceArrayWithInitial:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)fc_visitSubarraysWithMaxCount:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)fc_subarrayWithPercentToEnd:(double)arg1;
- (id)fc_subarrayWithPercentFromBeginning:(double)arg1;
- (void)fc_subarrayWithCount:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;
- (id)fc_safeSubarrayWithCountFromBack:(unsigned long long)arg1;
- (id)fc_safeSubarrayWithCountFromFront:(unsigned long long)arg1;
- (id)fc_safeObjectAtIndex:(unsigned long long)arg1;
- (id)fc_arrayByMergingAdjacentObjectsWithMergePolicy:(CDUnknownBlockType)arg1 mergeBlock:(CDUnknownBlockType)arg2;
- (id)fc_subarrayToIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange *)arg3;
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange *)arg3;
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 withMaxCount:(unsigned long long)arg3 range:(struct _NSRange *)arg4;
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 inclusive:(_Bool)arg3;
- (id)fc_subarrayFromCount:(unsigned long long)arg1;
- (id)fc_subarrayWithMaxCount:(unsigned long long)arg1;
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 inclusive:(_Bool)arg2;
- (id)fc_subarrayUpToIndex:(unsigned long long)arg1 inclusive:(_Bool)arg2;
- (id)fc_subarrayUpToCountInclusive:(unsigned long long)arg1;
- (id)fc_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)fc_arrayByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_indexesOfObjectsIdenticalTo:(id)arg1;
- (unsigned long long)fc_indexOfFirstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (id)fc_arraysByPartitioningWithBudget:(id)arg1 indicesOfOverBudgetObjects:(id *)arg2 appraiser:(CDUnknownBlockType)arg3 accumulator:(CDUnknownBlockType)arg4 comparator:(CDUnknownBlockType)arg5;
- (id)fc_arraysByPartitioningOnObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_arraysByExcisingRange:(struct _NSRange)arg1;
- (id)fc_arrayByReplacingObjectsInRange:(struct _NSRange)arg1 withObject:(id)arg2;
- (id)fc_arrayByRemovingObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_arrayByRemovingObjectsAtIndexes:(id)arg1;
- (id)fc_arrayByRemovingObjectsInRange:(struct _NSRange)arg1;
- (id)fc_arrayByRemovingFirstObject;
- (id)fc_arrayByReplacingObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)fc_arrayByReplacingObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (id)fc_arrayByRemovingObjectsInArray:(id)arg1;
- (id)fc_arrayByRemovingObjectIdenticalTo:(id)arg1;
- (id)fc_arrayByRemovingObject:(id)arg1;
- (id)fc_arrayByFlattening;
- (unsigned long long)fc_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_arrayOfObjectsFailingTest:(CDUnknownBlockType)arg1;
- (id)fc_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_setOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_setByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_arrayByTransformingWithBlockWithIndex:(CDUnknownBlockType)arg1;
- (_Bool)fc_allObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)fc_containsObjectsWithValue:(id)arg1 forKey:(id)arg2;
- (_Bool)fc_containsObjectsAtBack:(id)arg1;
- (_Bool)fc_containsObjectsAtFront:(id)arg1;
- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_randomObject;
- (id)fc_firstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (id)fc_firstObjectFromIndex:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_onlyObject;
- (id)fc_dictionaryOfTransformedSortedObjectsWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)fc_dictionaryOfSortedObjectsWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryWithValueBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryWithKeySelector:(SEL)arg1 valueSelector:(SEL)arg2;
- (id)fc_dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)fc_dictionaryWithKeySelector:(SEL)arg1;
- (id)fc_randomlyMergeWithArray:(id)arg1;
- (void)fc_enumerateSideBySideWithArray:(id)arg1 reverse:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (_Bool)fc_isSortedUsingComparator:(CDUnknownBlockType)arg1;
- (void)fc_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)fc_enumerateObjectsInReverse:(_Bool)arg1 usingSkipAheadBlock:(CDUnknownBlockType)arg2;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(CDUnknownBlockType)arg1;
@end

