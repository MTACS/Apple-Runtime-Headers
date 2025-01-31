//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FCSubscriptionEntitlement : NSObject
{
    _Bool _newsAppPurchase;
    _Bool _isTrialPeriod;
    _Bool _isPurchaser;
    NSNumber *_appAdamID;
    NSString *_chargeCurrencyCode;
    NSNumber *_inAppAdamID;
}

@property(readonly, nonatomic) _Bool isPurchaser; // @synthesize isPurchaser=_isPurchaser;
@property(readonly, nonatomic) _Bool isTrialPeriod; // @synthesize isTrialPeriod=_isTrialPeriod;
@property(readonly, nonatomic, getter=isNewsAppPurchase) _Bool newsAppPurchase; // @synthesize newsAppPurchase=_newsAppPurchase;
@property(readonly, nonatomic) NSNumber *inAppAdamID; // @synthesize inAppAdamID=_inAppAdamID;
@property(readonly, nonatomic) NSString *chargeCurrencyCode; // @synthesize chargeCurrencyCode=_chargeCurrencyCode;
@property(readonly, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(_Bool)arg4 isTrailPeriod:(_Bool)arg5 isPurchaser:(_Bool)arg6;

@end

