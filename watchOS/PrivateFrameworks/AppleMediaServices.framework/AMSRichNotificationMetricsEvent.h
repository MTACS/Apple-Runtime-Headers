//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSRichNotificationMetricsEvent : AMSMetricsEvent
{
}

+ (id)_centerForBundleId:(id)arg1;
+ (id)eventFromNotificationCenterSettings:(id)arg1;
+ (id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2;
@property(nonatomic) _Bool postedSuccessfully;
@property(retain, nonatomic) NSString *errorDescription;
- (id)initWithTopic:(id)arg1 settings:(id)arg2;

@end

