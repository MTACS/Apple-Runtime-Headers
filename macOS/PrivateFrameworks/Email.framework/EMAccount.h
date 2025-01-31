//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMObject.h>

@class NSString;

@interface EMAccount : EMObject
{
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
}

+ (BOOL)supportsSecureCoding;
+ (id)sortDescriptorForNameAscending:(BOOL)arg1;
+ (id)predicateForDeliveryAccounts;
+ (id)predicateForReceivingAccounts;
@property(readonly, copy) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)ef_publicDescription;

@end

