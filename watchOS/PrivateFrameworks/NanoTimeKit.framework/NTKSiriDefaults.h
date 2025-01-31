//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKit/NTKFaceCollectionObserver-Protocol.h>

@class NSSet, NSString, NTKFaceCollection;

@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver>
{
    NTKFaceCollection *_faceCollection;
    _Bool _hasMigratedDisabledDataSources;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool hasMigratedDisabledDataSources; // @synthesize hasMigratedDisabledDataSources=_hasMigratedDisabledDataSources;
- (void).cxx_destruct;
- (void)_fetchNewFaceCollection;
- (void)_thirdPartyDataSourcesDidChange;
- (void)_disabledDataSourcesDidChange;
- (void)_synchronizeDefaultsForKeys:(id)arg1;
- (id)_domainAccesor;
- (void)_activeDeviceDidChange:(id)arg1;
- (void)faceCollectionDidLoad:(id)arg1;
@property(retain, nonatomic) NSSet *disabledDataSources;
- (_Bool)hasMigratedDataSources;
@property(retain, nonatomic) NSSet *watchThirdPartyDataSources;
@property(retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property(nonatomic) _Bool watchHasMigratedAvailableDataSources;
- (void)migrateIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

