//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFHomeKitDispatcher, NAFuture, NSURL;

@interface HFURLComponents : NSObject
{
    NSURL *_URL;
    HFHomeKitDispatcher *_homeKitDispatcher;
}

+ (id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3;
+ (id)_URLComponentsForDestination:(unsigned long long)arg1;
+ (_Bool)isHomeAppURL:(id)arg1;
+ (id)symptomFromURL:(id)arg1 accessory:(id)arg2;
+ (id)fixSymptomURLForAccessoryWithUUID:(id)arg1 symptom:(id)arg2;
+ (id)fixSymptomURLForAccessory:(id)arg1 symptom:(id)arg2;
+ (id)musicLoginURL;
+ (id)locationPrivacyURL;
+ (id)musicPrivacyURL;
+ (id)siriPrivacyURL;
+ (id)aboutResidentDeviceURL;
@property(readonly, nonatomic) HFHomeKitDispatcher *homeKitDispatcher; // @synthesize homeKitDispatcher=_homeKitDispatcher;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)_homeKitIdentifier;
- (id)valueForParameter:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NAFuture *homeKitObjectFuture; // @dynamic homeKitObjectFuture;
@property(readonly, nonatomic) unsigned long long secondaryDestination;
@property(readonly, nonatomic) unsigned long long destination; // @dynamic destination;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

