//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MPModelStoreBrowseMusicKitRequestOperation : MPStoreModelRequestOperation
{
}

- (id)radioGenresURLWithStoreBagDictionary:(id)arg1;
- (id)browseURLWithStoreBagDictionary:(id)arg1;
- (id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id *)arg3;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;

@end

