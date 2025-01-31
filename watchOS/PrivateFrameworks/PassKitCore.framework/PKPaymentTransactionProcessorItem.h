//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentTransaction;

@interface PKPaymentTransactionProcessorItem : NSObject
{
    struct os_unfair_lock_s _transactionLock;
    _Bool _foundOptimalLocation;
    _Bool _useBackgroundLocation;
    PKPaymentTransaction *_paymentTransaction;
    PKPaymentApplication *_paymentApplication;
    NSString *_passUniqueIdentifier;
}

@property(nonatomic) _Bool useBackgroundLocation; // @synthesize useBackgroundLocation=_useBackgroundLocation;
@property(nonatomic) _Bool foundOptimalLocation; // @synthesize foundOptimalLocation=_foundOptimalLocation;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)init;

@end

