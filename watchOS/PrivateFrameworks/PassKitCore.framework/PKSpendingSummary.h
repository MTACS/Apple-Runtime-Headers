//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, PKCurrencyAmount, PKPaymentTransactionGroup;

@interface PKSpendingSummary : NSObject <NSSecureCoding>
{
    _Bool _isLoading;
    unsigned int _summaryType;
    unsigned int _summaryUnit;
    NSDate *_startDate;
    NSDate *_endDate;
    PKCurrencyAmount *_totalSpending;
    NSArray *_orderedSpendingCategories;
    NSArray *_orderedSpendingPerMerchants;
    PKCurrencyAmount *_previousTotalSpending;
    PKCurrencyAmount *_previousMaxAmount;
    PKPaymentTransactionGroup *_rewards;
    PKPaymentTransactionGroup *_interest;
    PKPaymentTransactionGroup *_refunds;
    NSArray *_spendingsPerCalendarUnit;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *spendingsPerCalendarUnit; // @synthesize spendingsPerCalendarUnit=_spendingsPerCalendarUnit;
@property(retain, nonatomic) PKPaymentTransactionGroup *refunds; // @synthesize refunds=_refunds;
@property(retain, nonatomic) PKPaymentTransactionGroup *interest; // @synthesize interest=_interest;
@property(retain, nonatomic) PKPaymentTransactionGroup *rewards; // @synthesize rewards=_rewards;
@property(retain, nonatomic) PKCurrencyAmount *previousMaxAmount; // @synthesize previousMaxAmount=_previousMaxAmount;
@property(retain, nonatomic) PKCurrencyAmount *previousTotalSpending; // @synthesize previousTotalSpending=_previousTotalSpending;
@property(copy, nonatomic) NSArray *orderedSpendingPerMerchants; // @synthesize orderedSpendingPerMerchants=_orderedSpendingPerMerchants;
@property(copy, nonatomic) NSArray *orderedSpendingCategories; // @synthesize orderedSpendingCategories=_orderedSpendingCategories;
@property(retain, nonatomic) PKCurrencyAmount *totalSpending; // @synthesize totalSpending=_totalSpending;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned int summaryUnit; // @synthesize summaryUnit=_summaryUnit;
@property(nonatomic) unsigned int summaryType; // @synthesize summaryType=_summaryType;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

