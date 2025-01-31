//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsNetworkRequester-Protocol.h>

@class NSString;

@interface MapsSuggestionsNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>
{
}

- (_Bool)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(struct NSArray *)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)composedWaypointForAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)resolveMapItemHandleData:(struct NSData *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)searchString:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardGeocodeAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardGeocodePostalAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

