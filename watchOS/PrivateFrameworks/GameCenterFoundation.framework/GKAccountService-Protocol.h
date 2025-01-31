//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class NSString;

@protocol GKAccountService <NSObject>
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(NSString *)arg1;
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(void (^)(unsigned int, NSError *))arg1;
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned int)arg1;
- (oneway void)resetCredentialsWithHandler:(void (^)(NSError *))arg1;
- (oneway void)authenticationWasCancelled;
- (oneway void)generateIdentityVerificationSignatureWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(void (^)(GKAuthenticateResponse *, NSError *))arg1;
@end

