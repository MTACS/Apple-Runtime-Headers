//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewController.h>

@class SFCard;
@protocol SearchUICardViewDelegate;

@interface SearchUICardTableViewController : SearchUITableViewController
{
    id <SearchUICardViewDelegate> _cardViewDelegate;
    SFCard *_card;
}

@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
@property(nonatomic) __weak id <SearchUICardViewDelegate> cardViewDelegate; // @synthesize cardViewDelegate=_cardViewDelegate;
- (void).cxx_destruct;
- (void)showViewController:(id)arg1;
- (double)offScreenContentScrollDistance;
- (void)setShouldUseInsetRoundedSections:(_Bool)arg1;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;
- (void)setTableModel:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)init;

@end

