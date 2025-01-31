//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/QLPreviewControllerDataSource-Protocol.h>

@class NSArray, NSLock, NSMutableArray, WFCoercionOptions;

@interface WFContentCollection : NSObject <QLPreviewControllerDataSource, NSCopying, NSSecureCoding>
{
    WFCoercionOptions *_defaultCoercionOptions;
    NSMutableArray *_mutableItems;
    NSLock *_itemWriteLock;
}

+ (_Bool)supportsSecureCoding;
+ (id)collectionWithItems:(id)arg1;
+ (void)generateCollectionFromDragItems:(id)arg1 allowedItemClasses:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)generateCollectionFromPasteboard:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getContentItemsForPasteboardItems:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSLock *itemWriteLock; // @synthesize itemWriteLock=_itemWriteLock;
@property(retain, nonatomic) NSMutableArray *mutableItems; // @synthesize mutableItems=_mutableItems;
@property(retain, nonatomic) WFCoercionOptions *defaultCoercionOptions; // @synthesize defaultCoercionOptions=_defaultCoercionOptions;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)generateCollectionByCoercingToItemClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateCollectionByCoercingToItemClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isCoercibleToItemClasses:(id)arg1;
- (_Bool)isCoercibleToItemClass:(Class)arg1;
- (void)getFileRepresentations:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)getObjectRepresentations:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)getStringRepresentations:(CDUnknownBlockType)arg1;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1;
- (void)generateCollectionByEvaluatingQuery:(id)arg1 forContentItemClass:(Class)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)collectionByFilteringToItemClass:(Class)arg1 excludedItems:(id *)arg2;
- (id)collectionByFilteringItemsWithBlock:(CDUnknownBlockType)arg1 excludedItems:(id *)arg2;
- (void)generateCollectionByCoercingToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)effectiveCoercionOptionsForRequest:(id)arg1;
- (void)performCoercion:(id)arg1;
- (_Bool)canPerformCoercion:(id)arg1;
- (void)getFileRepresentation:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)getObjectRepresentation:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)enumerateFileRepresentations:(CDUnknownBlockType)arg1 forType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enumerateObjectRepresentations:(CDUnknownBlockType)arg1 forClass:(Class)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addFile:(id)arg1;
- (void)addObject:(id)arg1 named:(id)arg2;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) long long numberOfItems;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1 defaultCoercionOptions:(id)arg2;
- (id)initWithDefaultCoercionOptions:(id)arg1;
- (id)init;
- (id)minimalExtensionItems;
- (id)extensionItems;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)generatePreviewControllerDataSource:(CDUnknownBlockType)arg1;
- (void)copyToPasteboard:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

