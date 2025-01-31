//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@class ARWorldMap;

@interface ARPositionalTrackingConfiguration : ARConfiguration
{
    _Bool _vioFusionEnabled;
    unsigned long long _planeDetection;
    ARWorldMap *_initialWorldMap;
}

+ (id)supportedVideoFormats;
+ (id)new;
+ (_Bool)isSupported;
@property(nonatomic, getter=isVIOFusionEnabled) _Bool vioFusionEnabled; // @synthesize vioFusionEnabled=_vioFusionEnabled;
@property(retain, nonatomic) ARWorldMap *initialWorldMap; // @synthesize initialWorldMap=_initialWorldMap;
@property(nonatomic) unsigned long long planeDetection; // @synthesize planeDetection=_planeDetection;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)worldTrackingOptions;
- (id)imageSensorSettings;
- (id)init;

@end

