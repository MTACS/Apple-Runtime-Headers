//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MSPQueryDelegate-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsShortcutStorage-Protocol.h>

@class MSPPinnedPlacesQuery, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsMSPShortcutStorage : NSObject <MSPQueryDelegate, MapsSuggestionsShortcutStorage>
{
    CDUnknownBlockType _changeHandler;
    MSPPinnedPlacesQuery *_query;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) MSPPinnedPlacesQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (_Bool)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)removeShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)addOrUpdateShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

