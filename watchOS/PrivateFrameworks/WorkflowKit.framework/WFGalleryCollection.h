//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSMutableCopying-Protocol.h>
#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSArray, NSString;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, NSMutableCopying>
{
    CKRecordID *_identifier;
    NSString *_name;
    NSString *_collectionDescription;
    NSArray *_workflows;
    NSString *_language;
    CKRecordID *_base;
}

+ (id)properties;
+ (id)recordType;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSArray *workflows; // @synthesize workflows=_workflows;
@property(readonly, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)referenceActionForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

