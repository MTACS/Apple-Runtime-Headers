//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContainerDiff : NSObject
{
    NSArray *_updates;
}

+ (id)diffContainer:(id)arg1 to:(id)arg2;
@property(retain, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (void).cxx_destruct;
- (id)initWithUpdates:(id)arg1;

@end

