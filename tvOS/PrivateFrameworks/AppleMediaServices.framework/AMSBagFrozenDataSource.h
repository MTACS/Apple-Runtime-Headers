//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagDataSourceProtocol-Protocol.h>

@class AMSBagKeySet, NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol>
{
    NSDate *_expirationDate;
    NSString *_profile;
    NSString *_profileVersion;
    AMSBagKeySet *_bagKeySet;
    NSArray *_cookies;
    NSDictionary *_data;
}

@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(readonly, nonatomic) AMSBagKeySet *bagKeySet; // @synthesize bagKeySet=_bagKeySet;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
- (id)valueForURLVariable:(id)arg1;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)bagKeyInfoForKey:(id)arg1;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

