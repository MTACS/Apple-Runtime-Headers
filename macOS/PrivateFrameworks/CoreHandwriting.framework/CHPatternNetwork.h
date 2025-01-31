//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CHPatternNetwork : NSObject
{
    struct Network *_network;
    NSDictionary *_symbols;
    NSDictionary *_startNodes;
    NSDictionary *_startCursorForContentTypes;
}

+ (id)cursorByAdvancingWithSymbol:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)cursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(BOOL)arg3;
+ (id)patternToSymbolMap;
+ (id)contentTypesToPatternsMapping;
- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)advanceCursor:(id)arg1 withSymbol:(unsigned long long)arg2;
- (unsigned long long)stateTypeForNodeIndex:(unsigned long long)arg1;

@end

