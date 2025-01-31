//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMAccount.h>

#import <Email/EMReceivingAccountBuilder-Protocol.h>

@class EMDeliveryAccount, NSArray, NSString;

@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder>
{
    _Bool _sourceIsManaged;
    _Bool _shouldArchiveByDefault;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    EMDeliveryAccount *_deliveryAccount;
    NSArray *_emailAddresses;
    NSString *_statisticsKind;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *statisticsKind; // @synthesize statisticsKind=_statisticsKind;
@property(nonatomic) _Bool shouldArchiveByDefault; // @synthesize shouldArchiveByDefault=_shouldArchiveByDefault;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) EMDeliveryAccount *deliveryAccount; // @synthesize deliveryAccount=_deliveryAccount;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(CDUnknownBlockType)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

