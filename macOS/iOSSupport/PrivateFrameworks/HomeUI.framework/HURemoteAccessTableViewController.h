//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@class HFUserItem, HURemoteAccessItemManager, NSString;

@interface HURemoteAccessTableViewController : HUItemTableViewController <HUSwitchCellDelegate>
{
    HFUserItem *_userItem;
    HURemoteAccessItemManager *_remoteAccessItemManager;
}

@property(readonly, copy, nonatomic) HURemoteAccessItemManager *remoteAccessItemManager; // @synthesize remoteAccessItemManager=_remoteAccessItemManager;
@property(readonly, copy, nonatomic) HFUserItem *userItem; // @synthesize userItem=_userItem;
- (void).cxx_destruct;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)userHandle;
- (void)viewDidLoad;
- (id)initWithItem:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

