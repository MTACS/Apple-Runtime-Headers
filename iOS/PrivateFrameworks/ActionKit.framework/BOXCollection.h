//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXModel.h>

@class NSNumber, NSString;

@interface BOXCollection : BOXModel
{
    NSString *_name;
    NSString *_collectionType;
    NSNumber *_collectionRank;
}

@property(retain, nonatomic) NSNumber *collectionRank; // @synthesize collectionRank=_collectionRank;
@property(retain, nonatomic) NSString *collectionType; // @synthesize collectionType=_collectionType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end

