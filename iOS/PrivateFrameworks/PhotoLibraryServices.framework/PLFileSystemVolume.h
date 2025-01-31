//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString, NSURL;

@interface PLFileSystemVolume : PLManagedObject
{
    NSURL *_url;
}

+ (id)volumeForObjectUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForVolumeUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForURL:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityName;
- (void).cxx_destruct;
- (id)predictedURL;
- (void)_unregisterWithVolumeManager;
- (void)_registerWithVolumeManager;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, nonatomic) _Bool isOffline;
@property(copy, nonatomic) NSURL *url;
- (_Bool)supportsCloudUpload;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *volumeUuidString; // @dynamic volumeUuidString;

@end

