//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFSelectContactsAction : WFAction
{
}

- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)selectMultiple;
- (void)outputContacts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *contactPropertyIDs;

@end

