//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding>
{
    _Bool _supportsSystemDrag;
    unsigned int _sessionIdentifier;
    int _processIdentifier;
    NSString *_sceneIdentifier;
    CDStruct_4c969caf _auditToken;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(nonatomic) _Bool supportsSystemDrag; // @synthesize supportsSystemDrag=_supportsSystemDrag;
@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

