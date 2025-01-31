//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCelestialRiseTransitSet, NSDate;

__attribute__((visibility("hidden")))
@interface GEOAlmanacRiseTransitSet : NSObject
{
    GEOCelestialRiseTransitSet *_celestialRiseTransitSet;
    unsigned int _firstEventType;
    unsigned int _lastEventType;
}

- (void).cxx_destruct;
- (_Bool)isCompatibleWith:(id)arg1;
- (int)compareToDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastEventDate;
@property(readonly, nonatomic) NSDate *firstEventDate;
@property(readonly, nonatomic) unsigned int lastEventType;
@property(readonly, nonatomic) unsigned int firstEventType;
- (void)_calculateFirstAndLastEvents;
@property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet;
@property(readonly, nonatomic) NSDate *set;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *rise;
- (id)initWith:(id)arg1;

@end

