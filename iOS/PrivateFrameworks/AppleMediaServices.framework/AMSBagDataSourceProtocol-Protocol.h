//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSBagKeyInfo, NSDate, NSString;

@protocol AMSBagDataSourceProtocol <NSObject>
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) NSDate *expirationDate;
- (NSString *)valueForURLVariable:(NSString *)arg1;
- (void)loadWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (AMSBagKeyInfo *)bagKeyInfoForKey:(NSString *)arg1;

@optional
@property(copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@end

