//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSSet;

@interface AMSAcknowledgePrivacyTask : AMSTask
{
    ACAccount *_account;
    NSSet *_privacyIdentifiers;
}

+ (id)_storePrivacyIdentifiers;
+ (id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned int)arg2;
+ (unsigned int)_contentVersionForPrivacyIdentifier:(id)arg1;
+ (_Bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (_Bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1;
@property(copy, nonatomic) NSSet *privacyIdentifiers; // @synthesize privacyIdentifiers=_privacyIdentifiers;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifier:(id)arg1;

@end

