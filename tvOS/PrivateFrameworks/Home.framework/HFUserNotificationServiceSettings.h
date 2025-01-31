//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSPredicate;

@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _notificationsEnabled;
    _Bool _doorbellNotificationsEnabled;
    _Bool _smartDetectionNotificationsEnabled;
    NSPredicate *_notificationCondition;
    NSPredicate *_smartCameraNotificationCondition;
}

+ (id)combinedConditionForBulletinBoardNotifications:(id)arg1;
@property(retain, nonatomic) NSPredicate *smartCameraNotificationCondition; // @synthesize smartCameraNotificationCondition=_smartCameraNotificationCondition;
@property(retain, nonatomic) NSPredicate *notificationCondition; // @synthesize notificationCondition=_notificationCondition;
@property(nonatomic, getter=areSmartDetectionNotificationsEnabled) _Bool smartDetectionNotificationsEnabled; // @synthesize smartDetectionNotificationsEnabled=_smartDetectionNotificationsEnabled;
@property(nonatomic, getter=areDoorbellNotificationsEnabled) _Bool doorbellNotificationsEnabled; // @synthesize doorbellNotificationsEnabled=_doorbellNotificationsEnabled;
@property(nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)applySettingsToBulletinBoardNotifications:(id)arg1;
- (id)initWithNotificationsEnabled:(_Bool)arg1 condition:(id)arg2 smartCameraNotificationCondition:(id)arg3;
- (id)initWithBulletinBoardNotifications:(id)arg1;

@end

