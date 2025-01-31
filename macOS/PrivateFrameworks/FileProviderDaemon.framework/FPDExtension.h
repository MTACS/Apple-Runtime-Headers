//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProviderDaemon/FPDProvider.h>

#import <FileProviderDaemon/FPDPushMessageDelegate-Protocol.h>

@class NSExtension, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate>
{
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_presentersQueue;
    NSObject<OS_dispatch_queue> *_sharedSessionQueue;
}

+ (id)instanceWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedSessionQueue; // @synthesize sharedSessionQueue=_sharedSessionQueue;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *presentersQueue; // @synthesize presentersQueue=_presentersQueue;
- (void).cxx_destruct;
- (void)_test_callFileProviderManagerAPIs:(CDUnknownBlockType)arg1;
- (void)writeCheckReportTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enumerateMaterializedSetForDomain:(id)arg1 syncAnchor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)customPushTopics;
- (void)didReceiveMessage:(id)arg1;
- (void)reindexAllSearchableItemsForRequest:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSUUID *uuid;
- (id)asAppExtensionBackedProvider;
- (BOOL)isAppExtensionReachable;
- (BOOL)isEqual:(id)arg1;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

