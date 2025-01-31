//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _requiresDebtCollectionNotices;
    _Bool _inGrace;
    _Bool _autoPayEnabled;
    NSDecimalNumber *_creditLimit;
    NSDecimalNumber *_availableCredit;
    NSDecimalNumber *_currentBalance;
    NSDecimalNumber *_rewardsBalance;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_remainingMinimumPayment;
    NSDate *_paymentDueDate;
    NSDate *_lastPaymentDate;
    long long _cyclesPastDue;
    unsigned long long _balanceStatus;
    PKCreditAccountBalanceSummary *_balanceSummary;
    NSDecimalNumber *_unpostedInterest;
    NSDate *_unpostedInterestTimestamp;
    NSDecimalNumber *_chargeOffPreventionAmount;
    NSDecimalNumber *_pastDueAmount;
    PKCreditAccountStatement *_currentStatement;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) PKCreditAccountStatement *currentStatement; // @synthesize currentStatement=_currentStatement;
@property(nonatomic) _Bool autoPayEnabled; // @synthesize autoPayEnabled=_autoPayEnabled;
@property(copy, nonatomic) NSDecimalNumber *pastDueAmount; // @synthesize pastDueAmount=_pastDueAmount;
@property(copy, nonatomic) NSDecimalNumber *chargeOffPreventionAmount; // @synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount;
@property(nonatomic) _Bool inGrace; // @synthesize inGrace=_inGrace;
@property(copy, nonatomic) NSDate *unpostedInterestTimestamp; // @synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp;
@property(copy, nonatomic) NSDecimalNumber *unpostedInterest; // @synthesize unpostedInterest=_unpostedInterest;
@property(nonatomic) _Bool requiresDebtCollectionNotices; // @synthesize requiresDebtCollectionNotices=_requiresDebtCollectionNotices;
@property(retain, nonatomic) PKCreditAccountBalanceSummary *balanceSummary; // @synthesize balanceSummary=_balanceSummary;
@property(nonatomic) unsigned long long balanceStatus; // @synthesize balanceStatus=_balanceStatus;
@property(nonatomic) long long cyclesPastDue; // @synthesize cyclesPastDue=_cyclesPastDue;
@property(copy, nonatomic) NSDate *lastPaymentDate; // @synthesize lastPaymentDate=_lastPaymentDate;
@property(copy, nonatomic) NSDate *paymentDueDate; // @synthesize paymentDueDate=_paymentDueDate;
@property(copy, nonatomic) NSDecimalNumber *remainingMinimumPayment; // @synthesize remainingMinimumPayment=_remainingMinimumPayment;
@property(copy, nonatomic) NSDecimalNumber *remainingStatementBalance; // @synthesize remainingStatementBalance=_remainingStatementBalance;
@property(copy, nonatomic) NSDecimalNumber *rewardsBalance; // @synthesize rewardsBalance=_rewardsBalance;
@property(copy, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(copy, nonatomic) NSDecimalNumber *availableCredit; // @synthesize availableCredit=_availableCredit;
@property(copy, nonatomic) NSDecimalNumber *creditLimit; // @synthesize creditLimit=_creditLimit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ingestExtendedAccountDetails:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

