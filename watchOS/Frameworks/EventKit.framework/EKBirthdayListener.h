//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/CalContactsProviderDelegate-Protocol.h>

@class CalLimitingQueue;
@protocol OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate>
{
    CalLimitingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    _Bool _needsReset;
}

+ (id)eventStoreProvider;
+ (id)sharedListener;
- (void).cxx_destruct;
- (void)reset;
- (void)contactsReset;
- (void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3;
- (void)resetAllBirthdaysInStore:(id)arg1;
- (void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3;
- (void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4;
- (id)allContactsWithBirthdays;
- (id)birthdayCalendarsCreateIfNeeded:(_Bool)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(_Bool)arg5;
- (void)disableBirthdayCalendarsInStore:(id)arg1;
- (void)disableBirthdayCalendars;
- (id)birthdayCalendarsInStore:(id)arg1;
- (void)_localeChanged;
- (void)addBirthdayCalendars;
- (_Bool)areBirthdaysEnabled;
- (id)eventStore;
- (id)initSingleton;

@end

