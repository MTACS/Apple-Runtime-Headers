//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject
{
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
    _Bool _useSecureContainer;
    _Bool _disableDeviceToDeviceEncryption;
    NSString *_accountIdentifier;
}

+ (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;
+ (id)sharedAccess;
+ (int)containerEnvironmentForAccessEnvironment:(int)arg1;
+ (int)defaultEnvironment;
+ (_Bool)hasCloudKitEntitlement;
+ (_Bool)useLongLivedOperations;
@property(nonatomic) _Bool disableDeviceToDeviceEncryption; // @synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool useSecureContainer; // @synthesize useSecureContainer=_useSecureContainer;
- (void).cxx_destruct;
- (id)description;
- (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;
- (void)fetchAccountStatus:(CDUnknownBlockType)arg1;
- (void)fetchAccountIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (id)containerWithZoneWidePCS:(_Bool)arg1;
- (id)initWithEnvironment:(int)arg1 createContainers:(_Bool)arg2;
- (id)initWithEnvironment:(int)arg1;

@end

