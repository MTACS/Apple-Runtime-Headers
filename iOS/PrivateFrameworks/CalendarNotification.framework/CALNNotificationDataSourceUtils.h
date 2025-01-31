//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CALNNotificationDataSourceUtils : NSObject
{
}

+ (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (void)hideCalendarFromNotificationCenter:(id)arg1 inEventStore:(id)arg2;
+ (void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withDataAccessExpressConnection:(id)arg3 accept:(_Bool)arg4;
+ (id)calendarWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (id)notificationReferenceOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;
+ (id)sourceClientIdentifierForNotification:(id)arg1;
+ (id)objectIDWithSourceClientIdentifier:(id)arg1;

@end

