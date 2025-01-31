//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationManagerObserver-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEOETARoute, GEORouteAttributes, GEORoutePreloader, MNActiveRouteInfo, NSArray, NSMutableArray, NSString;

@interface MNRouteManager : NSObject <MNLocationManagerObserver>
{
    MNActiveRouteInfo *_currentRouteInfo;
    NSMutableArray *_alternateRoutes;
    NSArray *_allRoutes;
    NSArray *_contingencyRouteSegments;
    NSArray *_previewRoutes;
    unsigned int _selectedRouteIndex;
    GEORouteAttributes *_routeAttributes;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    NSString *_requestingAppIdentifier;
    GEOComposedWaypoint *_originalDestination;
    MNActiveRouteInfo *_originalRouteInfo;
    GEORoutePreloader *_preloader;
    NSString *_tileLoaderClientIdentifier;
    GEOComposedRoute *_originalRoute;
}

@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) GEOComposedWaypoint *originalDestination; // @synthesize originalDestination=_originalDestination;
@property(readonly, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(readonly, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(readonly, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(nonatomic) unsigned int selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(readonly, nonatomic) NSArray *previewRoutes; // @synthesize previewRoutes=_previewRoutes;
@property(readonly, nonatomic) NSArray *contingencyRouteSegments; // @synthesize contingencyRouteSegments=_contingencyRouteSegments;
@property(readonly, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property(readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo; // @synthesize currentRouteInfo=_currentRouteInfo;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_createContingencyRoutesForResponse:(id)arg1;
- (void)_updatePreloaderForRoute:(id)arg1;
- (void)_clearPreloader;
- (void)clearCurrentRoute;
- (void)updateWithAlternateRoutes:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned int)arg2 request:(id)arg3 response:(id)arg4;
- (void)updateWithStartNavigationDetails:(id)arg1;
- (void)updateWithPreviewRoutes:(id)arg1 selectedRouteIndex:(unsigned int)arg2;
- (void)updateWithInitialDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 waypoints:(id)arg3;
- (void)close;
- (void)open;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *allRoutes;
@property(readonly, nonatomic) GEOETARoute *etaRoute;
@property(readonly, nonatomic) GEOComposedRoute *currentRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

