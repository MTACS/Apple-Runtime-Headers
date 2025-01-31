//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <Preferences/PSKeyboardNavigationSearchResultsController-Protocol.h>

@class NSArray, NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>
{
    NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *_delegate;
    NSArray *_results;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    _SUIKSearchResultsUpdateOperation *_updateOperation;
}

@property(retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation; // @synthesize updateOperation=_updateOperation;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_selectAndScrollToIndexPath:(id)arg1;
- (void)showSelectedSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectNextSearchResult;
- (void)searchQueryCompleted;
- (void)searchQueryFoundItems:(id)arg1;
- (void)searchQueryStarted;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (float)iconWidth;
- (void)viewDidLoad;
- (id)init;

@end

