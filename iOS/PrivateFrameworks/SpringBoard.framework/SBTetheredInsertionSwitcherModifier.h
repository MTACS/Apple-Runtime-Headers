//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray, NSUUID;

@interface SBTetheredInsertionSwitcherModifier : SBSwitcherModifier
{
    NSUUID *_tetheredInsertionID;
    unsigned long long _phase;
    _Bool _simulatingPreInsertionState;
    NSArray *_appLayoutsVisibleBeforeInsertion;
}

- (void).cxx_destruct;
- (void)_performBlockWhileSimulatingPreInsertionAppLayoutState:(CDUnknownBlockType)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (struct CGRect)switcherViewBounds;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)initWithTetheredInsertionID:(id)arg1;

@end

