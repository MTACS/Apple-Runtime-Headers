//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFOAuth2SessionManager.h>

#import <WorkflowKit/WFOAuth2ProviderSessionManager-Protocol.h>
#import <WorkflowKit/WFOAuth2RevocableSessionManager-Protocol.h>

@class NSString;

@interface WFBoxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>
{
}

- (void)revokeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;
- (id)appAuthorizationSessionWithAppName:(id)arg1 redirectURI:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

