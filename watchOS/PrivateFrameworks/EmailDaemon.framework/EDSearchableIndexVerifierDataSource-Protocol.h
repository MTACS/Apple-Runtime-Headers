//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EDSearchableIndex, EDSearchableIndexVerifier, NSDictionary;

@protocol EDSearchableIndexVerifierDataSource <NSObject>
- (EDSearchableIndex *)searchableIndexForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;
- (NSDictionary *)dataSamplesForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1 searchableIndex:(EDSearchableIndex *)arg2;
@end

