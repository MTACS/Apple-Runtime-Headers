//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFNamingComponents : NSObject
{
    BOOL _isAccessory;
    BOOL _isService;
    BOOL _isChildService;
    BOOL _isServiceGroup;
    BOOL _isMediaContainer;
    BOOL _isTelevision;
    BOOL _allowsEmptyNameTextField;
    BOOL _allowsNullResettableName;
    id _homeKitObject;
    NSString *_name;
}

+ (id)namingComponentFromHomeKitObject:(id)arg1;
+ (id)namingComponentFromMediaSystem:(id)arg1;
+ (id)namingComponentFromAccessory:(id)arg1;
+ (id)namingComponentFromServiceGroup:(id)arg1;
+ (id)namingComponentFromService:(id)arg1;
@property(nonatomic) BOOL allowsNullResettableName; // @synthesize allowsNullResettableName=_allowsNullResettableName;
@property(nonatomic) BOOL allowsEmptyNameTextField; // @synthesize allowsEmptyNameTextField=_allowsEmptyNameTextField;
@property(nonatomic) BOOL isTelevision; // @synthesize isTelevision=_isTelevision;
@property(nonatomic) BOOL isMediaContainer; // @synthesize isMediaContainer=_isMediaContainer;
@property(nonatomic) BOOL isServiceGroup; // @synthesize isServiceGroup=_isServiceGroup;
@property(nonatomic) BOOL isChildService; // @synthesize isChildService=_isChildService;
@property(nonatomic) BOOL isService; // @synthesize isService=_isService;
@property(nonatomic) BOOL isAccessory; // @synthesize isAccessory=_isAccessory;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id homeKitObject; // @synthesize homeKitObject=_homeKitObject;
- (void).cxx_destruct;
- (id)categoryName;
- (id)configuredName;
@property(readonly, nonatomic) NSString *defaultName;
- (id)roomName;
- (id)commitableNameForString:(id)arg1;
- (id)homeKitSafeStringForString:(id)arg1;
@property(readonly, nonatomic) NSString *textFieldDisplayText;
@property(readonly, nonatomic) NSString *placeholderText;
- (id)description;
- (id)initWithHomeKitObject:(id)arg1;

@end

