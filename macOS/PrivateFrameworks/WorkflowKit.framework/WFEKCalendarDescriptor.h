//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allCalendars;
    NSString *_calendarTitle;
    NSString *_calendarIdentifier;
    NSNumber *_calendarRGBAValue;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *calendarRGBAValue; // @synthesize calendarRGBAValue=_calendarRGBAValue;
@property(readonly, copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, copy, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property(readonly, nonatomic) BOOL allCalendars; // @synthesize allCalendars=_allCalendars;
- (void).cxx_destruct;
- (id)matchingCalendarsFromArray:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 rgbaValue:(id)arg3;
- (id)initWithAllCalendars;

@end

