//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSMutableCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, UNNotificationIcon, UNNotificationSound;

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_attachments;
    NSNumber *_badge;
    NSString *_body;
    NSString *_categoryIdentifier;
    NSDate *_date;
    NSString *_defaultActionTitle;
    NSURL *_defaultActionURL;
    NSDate *_expirationDate;
    NSString *_header;
    NSString *_launchImageName;
    NSArray *_peopleIdentifiers;
    _Bool _shouldHideDate;
    _Bool _shouldHideTime;
    _Bool _shouldIgnoreDoNotDisturb;
    _Bool _shouldIgnoreDowntime;
    _Bool _shouldSuppressScreenLightUp;
    _Bool _shouldPreventNotificationDismissalAfterDefaultAction;
    _Bool _shouldAuthenticateDefaultAction;
    _Bool _shouldBackgroundDefaultAction;
    _Bool _shouldSuppressDefaultAction;
    _Bool _shouldSuppressSyncDismissalWhenRemoved;
    _Bool _shouldUseRequestIdentifierForDismissalSync;
    _Bool _shouldPreemptPresentedNotification;
    _Bool _shouldPreemptSTAR;
    UNNotificationSound *_sound;
    NSString *_accessoryImageName;
    NSString *_subtitle;
    NSString *_threadIdentifier;
    NSString *_title;
    NSSet *_topicIdentifiers;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
    NSString *_targetContentIdentifier;
    NSDictionary *_userInfo;
    UNNotificationIcon *_icon;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *targetContentIdentifier; // @synthesize targetContentIdentifier=_targetContentIdentifier;
@property(readonly, nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(readonly, copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy, nonatomic) UNNotificationSound *sound; // @synthesize sound=_sound;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(readonly, copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_safeStringForString:(id)arg1 debug:(_Bool)arg2;
- (id)_descriptionForDebug:(_Bool)arg1;
- (id)debugDescription;
- (id)description;
@property(readonly, copy, nonatomic) NSSet *topicIdentifiers; // @synthesize topicIdentifiers=_topicIdentifiers;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) _Bool shouldPreemptSTAR; // @synthesize shouldPreemptSTAR=_shouldPreemptSTAR;
@property(readonly, nonatomic) _Bool shouldPreemptPresentedNotification; // @synthesize shouldPreemptPresentedNotification=_shouldPreemptPresentedNotification;
@property(readonly, nonatomic) _Bool shouldUseRequestIdentifierForDismissalSync; // @synthesize shouldUseRequestIdentifierForDismissalSync=_shouldUseRequestIdentifierForDismissalSync;
@property(readonly, nonatomic) _Bool shouldSuppressSyncDismissalWhenRemoved; // @synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved;
@property(readonly, nonatomic) _Bool shouldSuppressScreenLightUp; // @synthesize shouldSuppressScreenLightUp=_shouldSuppressScreenLightUp;
@property(readonly, nonatomic) _Bool shouldSuppressDefaultAction; // @synthesize shouldSuppressDefaultAction=_shouldSuppressDefaultAction;
@property(readonly, nonatomic) _Bool shouldPreventNotificationDismissalAfterDefaultAction; // @synthesize shouldPreventNotificationDismissalAfterDefaultAction=_shouldPreventNotificationDismissalAfterDefaultAction;
@property(readonly, nonatomic) _Bool shouldBackgroundDefaultAction; // @synthesize shouldBackgroundDefaultAction=_shouldBackgroundDefaultAction;
@property(readonly, nonatomic) _Bool shouldAuthenticateDefaultAction; // @synthesize shouldAuthenticateDefaultAction=_shouldAuthenticateDefaultAction;
@property(readonly, nonatomic) _Bool shouldIgnoreDowntime; // @synthesize shouldIgnoreDowntime=_shouldIgnoreDowntime;
@property(readonly, nonatomic) _Bool shouldIgnoreDoNotDisturb; // @synthesize shouldIgnoreDoNotDisturb=_shouldIgnoreDoNotDisturb;
@property(readonly, nonatomic) _Bool shouldHideTime; // @synthesize shouldHideTime=_shouldHideTime;
@property(readonly, nonatomic) _Bool shouldHideDate; // @synthesize shouldHideDate=_shouldHideDate;
@property(readonly, copy, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(readonly, copy, nonatomic) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(readonly, copy, nonatomic) UNNotificationIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *accessoryImageName; // @synthesize accessoryImageName=_accessoryImageName;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, nonatomic) _Bool hasDefaultAction;
@property(readonly, copy, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(readonly, copy, nonatomic) NSString *defaultActionTitle; // @synthesize defaultActionTitle=_defaultActionTitle;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithAccessoryImageName:(id)arg1 attachments:(id)arg2 badge:(id)arg3 body:(id)arg4 categoryIdentifier:(id)arg5 date:(id)arg6 icon:(id)arg7 defaultActionTitle:(id)arg8 defaultActionURL:(id)arg9 expirationDate:(id)arg10 header:(id)arg11 launchImageName:(id)arg12 peopleIdentifiers:(id)arg13 shouldHideDate:(_Bool)arg14 shouldHideTime:(_Bool)arg15 shouldIgnoreDoNotDisturb:(_Bool)arg16 shouldIgnoreDowntime:(_Bool)arg17 shouldSuppressScreenLightUp:(_Bool)arg18 shouldAuthenticateDefaultAction:(_Bool)arg19 shouldBackgroundDefaultAction:(_Bool)arg20 shouldPreventNotificationDismissalAfterDefaultAction:(_Bool)arg21 shouldSuppressDefaultAction:(_Bool)arg22 shouldSuppressSyncDismissalWhenRemoved:(_Bool)arg23 shouldUseRequestIdentifierForDismissalSync:(_Bool)arg24 shouldPreemptPresentedNotification:(_Bool)arg25 shouldPreemptSTAR:(_Bool)arg26 sound:(id)arg27 subtitle:(id)arg28 threadIdentifier:(id)arg29 title:(id)arg30 topicIdentifiers:(id)arg31 summaryArgument:(id)arg32 summaryArgumentCount:(unsigned long long)arg33 targetContentIdentifier:(id)arg34 userInfo:(id)arg35;

@end

