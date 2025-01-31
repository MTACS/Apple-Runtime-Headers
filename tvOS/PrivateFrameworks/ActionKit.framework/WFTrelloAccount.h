//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount
{
    NSString *_token;
    NSString *_email;
}

+ (id)localizedServiceName;
+ (id)serviceID;
+ (id)accountWithToken:(id)arg1;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;
- (_Bool)isValid;

@end

