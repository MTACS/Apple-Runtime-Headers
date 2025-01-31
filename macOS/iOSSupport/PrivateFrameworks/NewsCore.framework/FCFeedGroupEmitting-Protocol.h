//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupInsertionDescriptor-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCFeedGroupEmittingContext, FCFeedGroupEmittingCursor, FCFeedGroupEmittingOperation, NSSet, NSString;
@protocol FCCoreConfiguration, FCFeedGroupOutlining;

@protocol FCFeedGroupEmitting <FCFeedGroupInsertionDescriptor, NSObject>
+ (NSString *)groupEmitterIdentifier;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (FCFeedGroupEmittingOperation *)operationToEmitGroupWithContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;
- (BOOL)wantsToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;

@optional
@property(readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property(readonly, nonatomic) BOOL requiresHeavyweightContent;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly, nonatomic) BOOL emitsSingleRefreshSessionGroups;
@property(readonly, nonatomic) BOOL emitsSingletonGroups;
- (NSString *)backingChannelTagIDWithConfiguration:(id <FCCoreConfiguration>)arg1;
- (BOOL)canMergeHeadlinesFromGroup:(id <FCFeedGroupOutlining>)arg1 intoGroup:(id <FCFeedGroupOutlining>)arg2;
- (BOOL)canMergeGroupsUnconditionally;
- (BOOL)supportsPagination;
- (BOOL)canDeferEmittingGroupInContext:(FCFeedGroupEmittingContext *)arg1;
@end

