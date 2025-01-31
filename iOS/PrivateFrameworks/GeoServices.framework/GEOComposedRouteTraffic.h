//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSUUID;

@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding>
{
    NSUUID *_routeID;
    NSArray *_trafficIncidents;
    NSArray *_trafficIncidentOffsets;
    NSData *_trafficColors;
    NSData *_trafficColorOffsets;
    NSArray *_enrouteNotices;
}

+ (id)trafficForGEORoute:(id)arg1 routeInitializerData:(id)arg2 route:(id)arg3;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *enrouteNotices; // @synthesize enrouteNotices=_enrouteNotices;
@property(readonly, nonatomic) NSArray *trafficIncidentOffsets; // @synthesize trafficIncidentOffsets=_trafficIncidentOffsets;
@property(readonly, nonatomic) NSArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(readonly, nonatomic) NSUUID *routeID; // @synthesize routeID=_routeID;
- (void).cxx_destruct;
- (id)_colorStringForIndex:(unsigned long long)arg1;
- (id)description;
- (id)enrouteNoticeWithIdentifier:(id)arg1;
- (void)createTrafficIncidentsForRoute:(id)arg1 initializerData:(id)arg2;
- (void)setEnrouteNotices:(id)arg1;
- (void)setTrafficColorOffsets:(id)arg1;
- (void)setTrafficColors:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
@property(readonly, nonatomic) unsigned int *trafficColors;
- (id)initWithRouteID:(id)arg1;

@end

