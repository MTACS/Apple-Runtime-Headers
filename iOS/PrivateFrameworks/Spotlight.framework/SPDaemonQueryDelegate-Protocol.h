//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Spotlight/NSObject-Protocol.h>

@class NSArray, NSData, NSError, NSString, SPDaemonQueryToken, SPResultSet;

@protocol SPDaemonQueryDelegate <NSObject>
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 gotResultSet:(SPResultSet *)arg2 replace:(_Bool)arg3 complete:(_Bool)arg4 finished:(_Bool)arg5 delayed:(_Bool)arg6 delayedTopHit:(_Bool)arg7 unchanged:(_Bool)arg8 blendingDuration:(double)arg9 geoEntityString:(NSString *)arg10 supportedAppScopes:(NSArray *)arg11;
- (void)searchDaemonLocalSuggestionsData:(NSData *)arg1;
- (void)searchDaemonSuggestionsArray:(NSArray *)arg1;
- (void)searchDaemonRankingLog:(NSString *)arg1;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 encounteredError:(NSError *)arg2;
@end

