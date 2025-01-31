//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKTransitDeparturesCellDelegate-Protocol.h>
#import <MapKit/MKTransitDeparturesDataProviderDelegate-Protocol.h>
#import <MapKit/UITableViewDataSource-Protocol.h>
#import <MapKit/UITableViewDelegate-Protocol.h>
#import <MapKit/_MKTransitConnectionCellDelegate-Protocol.h>

@class MKArtworkDataSourceCache, MKMapItem, MKTransitDeparturesDataProvider, NSMapTable, NSMutableDictionary, NSString, UITableView;
@protocol MKTransitDeparturesDataSourceHosting, _MKInfoCardAnalyticsDelegate;

@interface MKTransitDeparturesDataSource : NSObject <_MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKTransitDeparturesDataProviderDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMapTable *_cachedSectionHeaders;
    NSMapTable *_cachedSectionFooters;
    NSMutableDictionary *_cachedMaxImageWidths;
    NSMutableDictionary *_cachedColumnCenteringWidths;
    _Bool _isTransitioningSize;
    struct CGSize _newSize;
    _Bool _animatingRowInsertion;
    struct CGRect _lastMaxWidthBounds;
    _Bool _showingIncidents;
    _Bool _limitInteraction;
    _Bool _allowTransitLineSelection;
    _Bool _supportSystemSectionCollapsing;
    MKMapItem *_mapItem;
    MKArtworkDataSourceCache *_artworkCache;
    id <MKTransitDeparturesDataSourceHosting> _host;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    MKTransitDeparturesDataProvider *_dataProvider;
}

@property(readonly, nonatomic) MKTransitDeparturesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic, getter=supportsSystemSectionCollapsing) _Bool supportSystemSectionCollapsing; // @synthesize supportSystemSectionCollapsing=_supportSystemSectionCollapsing;
@property(nonatomic, getter=allowsTransitLineSelection) _Bool allowTransitLineSelection; // @synthesize allowTransitLineSelection=_allowTransitLineSelection;
@property(nonatomic, getter=hasLimitedInteraction) _Bool limitInteraction; // @synthesize limitInteraction=_limitInteraction;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <MKTransitDeparturesDataSourceHosting> host; // @synthesize host=_host;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (long long)_departureSequenceFrequencyTypeForAllDeparturesSections;
- (int)_transitCategoryForSequence:(id)arg1;
- (int)transitCategoryForFrequencyType:(long long)arg1;
- (int)_transitCategoryForSection:(long long)arg1;
- (int)currentTransitCategory;
- (id)possibleActions;
- (void)recordIncidentsShowing:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)_sectionHeaderButtonPressed:(id)arg1;
- (double)_heightForFooterInSection:(long long)arg1;
- (id)_viewForFooterInSection:(long long)arg1;
- (id)_headerTextForSection:(long long)arg1;
- (id)_viewForHeaderInSection:(long long)arg1;
- (_Bool)sectionHasFooter:(long long)arg1;
- (_Bool)sectionHasHeader:(long long)arg1;
- (void)didTransition;
- (void)willTransitionToSize:(struct CGSize)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1 outIsNewLine:(_Bool *)arg2 outNextLineIsSame:(_Bool *)arg3;
- (id)_departureSequenceForIndexPath:(id)arg1;
- (id)_indexPathWithHeader:(id)arg1;
- (id)_indexPathWithoutHeader:(id)arg1;
- (void)_showIncidentDetails;
- (id)_incidentCellForRow:(long long)arg1 inSection:(long long)arg2;
- (void)infoButtonSelectedInConnectionCell:(id)arg1;
- (id)_connectionCellForRow:(long long)arg1;
- (id)_messageCellForSection:(long long)arg1;
- (void)_setDisclosureArrowExpanded:(_Bool)arg1 inSystemCellAtIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_toggleHiddenSystemInSection:(long long)arg1 animated:(_Bool)arg2;
- (id)_systemCellForSection:(long long)arg1;
- (void)incidentButtonSelectedInDeparturesCell:(id)arg1;
- (void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_departuresCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)_existingCellAtIndexPath:(id)arg1;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (double)_maxImageWidthForSection:(long long)arg1;
- (id)_imageForLine:(id)arg1 inSection:(long long)arg2;
- (id)_imageForLine:(id)arg1;
- (id)_imageForLine:(id)arg1 size:(long long)arg2;
- (long long)_lineImageSizeForSystem:(id)arg1;
- (long long)_lineImageSizeForSection:(long long)arg1;
- (_Bool)_isCompressedWidthTraits:(id)arg1;
- (_Bool)_isCompressed;
- (id)_imageWithArtworkDataSource:(id)arg1;
- (id)_smallerImageWithArtworkDataSource:(id)arg1;
@property(readonly, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
- (id)imageForTransitLine:(id)arg1;
- (id)_pagingPromptForSection:(long long)arg1;
- (_Bool)_shouldPageSection:(long long)arg1;
- (void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2;
- (void)transitDeparturesDataProviderDidReload:(id)arg1;
- (void)transitDeparturesDataProviderDidUpdateDepartures:(id)arg1;
- (void)transitDeparturesDataProviderWillUpdateDepartures:(id)arg1;
- (id)traitsForTransitDeparturesDataProvider:(id)arg1;
- (void)reloadData;
- (void)reloadSections;
- (void)invalidateLayout;
- (_Bool)allowsSystemSectionCollapsing;
@property(nonatomic, getter=isActive) _Bool active;
- (id)initWithTableView:(id)arg1 mapItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

