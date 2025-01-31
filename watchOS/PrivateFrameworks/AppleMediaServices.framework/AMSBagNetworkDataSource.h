//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagDataSourceProtocol-Protocol.h>

@class AMSProcessInfo, AMSURLSession, AMSUniqueExecutionQueue, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>
{
    CDUnknownBlockType _dataSourceChangedHandler;
    NSString *_profile;
    NSString *_profileVersion;
    NSDictionary *_cachedData;
    NSObject<OS_dispatch_queue> *_cachedDataAccessQueue;
    NSString *_cachedStorefront;
    NSObject<OS_dispatch_queue> *_cachedStorefrontAccessQueue;
    AMSUniqueExecutionQueue *_loadDataQueue;
    NSObject<OS_dispatch_queue> *_processAccountStoreDidChangeNotificationQueue;
    AMSProcessInfo *_processInfo;
    AMSURLSession *_URLSession;
}

+ (id)_OSBuildTypeString;
+ (id)_deviceString;
+ (_Bool)_shouldReloadDataForSetStorefront:(id)arg1 bagData:(id)arg2;
+ (id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2;
+ (id)_requestStorefrontFromURLResponse:(id)arg1;
+ (id)_URLCookieNamesForProfile:(id)arg1;
+ (_Bool)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2;
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;
+ (id)_defaultURLCookieNames;
+ (_Bool)_shouldProcessAccountStoreDidChangeNotification:(id)arg1 withMediaType:(id)arg2;
+ (_Bool)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2;
+ (id)_currentStorefrontForAccountMediaType:(id)arg1;
+ (id)_accountForAccountMediaType:(id)arg1;
@property(retain, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue; // @synthesize processAccountStoreDidChangeNotificationQueue=_processAccountStoreDidChangeNotificationQueue;
@property(retain, nonatomic) AMSUniqueExecutionQueue *loadDataQueue; // @synthesize loadDataQueue=_loadDataQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cachedStorefrontAccessQueue; // @synthesize cachedStorefrontAccessQueue=_cachedStorefrontAccessQueue;
@property(retain, nonatomic) NSString *cachedStorefront; // @synthesize cachedStorefront=_cachedStorefront;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cachedDataAccessQueue; // @synthesize cachedDataAccessQueue=_cachedDataAccessQueue;
@property(retain, nonatomic) NSDictionary *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler; // @synthesize dataSourceChangedHandler=_dataSourceChangedHandler;
- (void).cxx_destruct;
- (id)_createURLWithCookieNames:(id)arg1 storefront:(id)arg2;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1;
- (id)_cookiesForNames:(id)arg1;
- (void)_updateCachedData:(id)arg1;
- (id)_loadDataWithAttempt:(unsigned int)arg1 error:(id *)arg2;
- (id)_processLoadDataResult:(id)arg1;
- (void)_invalidateCacheNotification:(id)arg1;
- (id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2;
- (id)_baseURLString;
- (void)_accountStoreDidChange:(id)arg1;
- (id)valueForURLVariable:(id)arg1;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)bagKeyInfoForKey:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) NSDate *expirationDate;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

