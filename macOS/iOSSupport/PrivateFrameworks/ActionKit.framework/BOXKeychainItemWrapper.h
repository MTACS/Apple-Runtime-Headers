//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BOXKeychainItemWrapper : NSObject
{
    BOOL _isBackupDisabled;
    NSMutableDictionary *_keychainItemData;
    NSMutableDictionary *_genericPasswordQuery;
    NSString *_identifier;
    NSString *_accessGroup;
}

+ (id)keychainServiceIdentifier;
@property(nonatomic) BOOL isBackupDisabled; // @synthesize isBackupDisabled=_isBackupDisabled;
@property(retain, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery=_genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData=_keychainItemData;
- (id)defaultKeychainItemDataDictionaryWithIdentifier:(id)arg1 accessGroup:(id)arg2;
- (void)writeToKeychain;
- (void)overwriteKeychainItem;
- (id)secItemFormatToDictionary:(id)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (void)resetKeychainItem;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;

@end

