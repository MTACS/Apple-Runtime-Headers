//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSString;

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor>
{
    _Bool _shouldForceLTR;
    NSString *_imageIdentifier;
    NSString *_formattedTemperature;
    long long _heatingCoolingMode;
    long long _targetHeatingCoolingMode;
}

@property(readonly, nonatomic) long long targetHeatingCoolingMode; // @synthesize targetHeatingCoolingMode=_targetHeatingCoolingMode;
@property(readonly, nonatomic) long long heatingCoolingMode; // @synthesize heatingCoolingMode=_heatingCoolingMode;
@property(readonly, nonatomic) NSString *formattedTemperature; // @synthesize formattedTemperature=_formattedTemperature;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) _Bool shouldForceLTR; // @synthesize shouldForceLTR=_shouldForceLTR;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3 imageIdentifier:(id)arg4;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

