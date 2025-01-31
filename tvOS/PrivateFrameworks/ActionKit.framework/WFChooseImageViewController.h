//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ActionKit/WFImageContentItemCellDelegate-Protocol.h>

@class NSMutableSet, NSString, WFContentCollection;
@protocol WFChooseImageViewControllerDelegate;

@interface WFChooseImageViewController : UITableViewController <WFImageContentItemCellDelegate>
{
    long long _itemsPerRow;
    NSMutableSet *_selectedItems;
    struct CGRect _lastFrame;
    id <WFChooseImageViewControllerDelegate> _delegate;
    unsigned long long _minimumNumberOfItems;
    unsigned long long _maximumNumberOfItems;
    WFContentCollection *_collection;
}

@property(nonatomic) long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
@property(readonly, nonatomic) WFContentCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) unsigned long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(nonatomic) unsigned long long minimumNumberOfItems; // @synthesize minimumNumberOfItems=_minimumNumberOfItems;
@property(nonatomic) __weak id <WFChooseImageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cell:(id)arg1 didSelectImageViewAtIndex:(unsigned long long)arg2;
- (void)done;
- (void)cancel;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollection:(id)arg1 selectedIndexes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

