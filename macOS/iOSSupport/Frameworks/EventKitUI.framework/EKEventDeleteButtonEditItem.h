//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@class UITableViewCell;

@interface EKEventDeleteButtonEditItem : EKEventEditItem
{
    UITableViewCell *_cell;
    id _deleteButtonTarget;
    SEL _deleteButtonAction;
}

- (void).cxx_destruct;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;

@end

