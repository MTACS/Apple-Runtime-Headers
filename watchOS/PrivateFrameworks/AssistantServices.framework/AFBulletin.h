//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class BBBulletin, NSArray, NSDate, NSString;

@interface AFBulletin : NSObject <NSSecureCoding>
{
    _Bool _availableOnLockScreen;
    _Bool _supportsSpokenNotification;
    _Bool _read;
    _Bool _allDay;
    _Bool _previewRestricted;
    NSString *_displayName;
    BBBulletin *_bbBulletin;
    NSString *_bulletinID;
    NSString *_recordID;
    NSDate *_date;
    NSDate *_endDate;
    NSString *_message;
    NSString *_modalAlertContentMessage;
    NSDate *_recencyDate;
    NSString *_sectionID;
    int _sectionSubtype;
    NSString *_subtitle;
    NSString *_timeZone;
    NSString *_title;
    NSArray *_intentIDs;
    NSString *_publisherBulletinID;
    NSString *_threadID;
    NSString *_internalID;
}

+ (_Bool)supportsSecureCoding;
+ (id)internalIDForBBBulletinID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *internalID; // @synthesize internalID=_internalID;
@property(readonly, copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) _Bool previewRestricted; // @synthesize previewRestricted=_previewRestricted;
@property(readonly, copy, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(readonly, copy, nonatomic) NSArray *intentIDs; // @synthesize intentIDs=_intentIDs;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) int sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(readonly, copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, copy, nonatomic) NSDate *recencyDate; // @synthesize recencyDate=_recencyDate;
@property(readonly, copy, nonatomic) NSString *modalAlertContentMessage; // @synthesize modalAlertContentMessage=_modalAlertContentMessage;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(readonly, nonatomic) BBBulletin *bbBulletin; // @synthesize bbBulletin=_bbBulletin;
@property(nonatomic, getter=isRead) _Bool read; // @synthesize read=_read;
@property(nonatomic) _Bool supportsSpokenNotification; // @synthesize supportsSpokenNotification=_supportsSpokenNotification;
@property(nonatomic) _Bool availableOnLockScreen; // @synthesize availableOnLockScreen=_availableOnLockScreen;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNotification:(id)arg1 fromSourceApp:(id)arg2;
- (void)setBulletin:(id)arg1;
- (id)_displayNameForBulletin:(id)arg1;

@end

