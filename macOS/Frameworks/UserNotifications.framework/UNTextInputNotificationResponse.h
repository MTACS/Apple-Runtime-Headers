//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNNotificationResponse.h>

#import <UserNotifications/BSXPCCoding-Protocol.h>

@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse <BSXPCCoding>
{
    NSString *_userText;
}

+ (BOOL)supportsSecureCoding;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 userText:(id)arg5;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
@property(readonly, copy) NSString *userText; // @synthesize userText=_userText;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

