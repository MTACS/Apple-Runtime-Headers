//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/NSCopying-Protocol.h>

@class NSManagedObjectID, NSNumber, NSString;

@interface STUIUser : NSObject <NSCopying>
{
    _Bool _screenTimeEnabled;
    _Bool _managed;
    _Bool _webUsageEnabled;
    _Bool _remoteUser;
    _Bool _hasAllowances;
    unsigned long long _source;
    NSString *_name;
    NSNumber *_dsid;
    NSString *_altDSID;
    unsigned long long _type;
    NSString *_passcode;
    NSManagedObjectID *_userObjectID;
}

+ (id)keyPathsForValuesAffectingGivenName;
+ (id)keyPathsForValuesAffectingHasPasscode;
@property(copy, nonatomic) NSManagedObjectID *userObjectID; // @synthesize userObjectID=_userObjectID;
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) _Bool hasAllowances; // @synthesize hasAllowances=_hasAllowances;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic, getter=isRemoteUser) _Bool remoteUser; // @synthesize remoteUser=_remoteUser;
@property(nonatomic, getter=isWebUsageEnabled) _Bool webUsageEnabled; // @synthesize webUsageEnabled=_webUsageEnabled;
@property(nonatomic, getter=isManaged) _Bool managed; // @synthesize managed=_managed;
@property(nonatomic, getter=isScreenTimeEnabled) _Bool screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *givenName;
@property(readonly, nonatomic) _Bool isChild;
@property(readonly, nonatomic) _Bool isParent;
@property(readonly, nonatomic) _Bool hasPasscode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUser:(id)arg1;

@end

