//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXRequest.h>

@class NSString;

@interface BOXCollaborationRemoveRequest : BOXRequest
{
    NSString *_collaborationID;
}

@property(readonly, nonatomic) NSString *collaborationID; // @synthesize collaborationID=_collaborationID;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithCollaborationID:(id)arg1;

@end

