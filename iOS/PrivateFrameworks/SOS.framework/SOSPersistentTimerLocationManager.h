//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SOS/CLLocationManagerDelegate-Protocol.h>

@class CLAssertion, CLLocation, CLLocationManager, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue, SOSPersistentTimerLocationManagerDelegate;

@interface SOSPersistentTimerLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationUpdateStartQueue;
    PCPersistentTimer *_locationUpdateTimer;
    PCPersistentTimer *_requestLocationsTimer;
    double _ti;
    PCPersistentTimer *_initalRequestTimer;
    _Bool _requestingLocation;
    id <SOSPersistentTimerLocationManagerDelegate> _delegate;
    CLAssertion *_forceEnableLocationAssertion;
    CLLocation *_lastLocation;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) CLAssertion *forceEnableLocationAssertion; // @synthesize forceEnableLocationAssertion=_forceEnableLocationAssertion;
@property(nonatomic, getter=isRequestingLocation) _Bool requestingLocation; // @synthesize requestingLocation=_requestingLocation;
@property __weak id <SOSPersistentTimerLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)shouldStopRequestingLocationAfterCallback;
- (void)_sosPersistentTimerLocationManagerTic:(id)arg1;
- (void)_sosPersistentTimerInitialRequest:(id)arg1;
- (_Bool)isValid;
- (void)invalidateInitialTimer;
- (void)invalidateTimer;
- (void)fireAndStartTimertWithTimeInterval:(double)arg1;
- (void)_startTimer;
- (void)stopRequestingLocationUpdates;
- (void)invalidateRequestLocationsTimer;
- (void)_requestLocationsTimeout:(id)arg1;
- (void)requestLocation;
- (void)warmUpLocationRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

