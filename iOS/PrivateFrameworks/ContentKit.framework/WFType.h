//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *typeDescription;
@property(readonly, nonatomic) NSString *string;
- (_Bool)isEqualToClass:(Class)arg1;
- (_Bool)isEqualToUTType:(struct __CFString *)arg1;
- (_Bool)isEqualToType:(id)arg1;
- (_Bool)conformsToClass:(Class)arg1;
- (_Bool)conformsToUTType:(struct __CFString *)arg1;
- (_Bool)conformsToTypes:(id)arg1;
- (_Bool)conformsToType:(id)arg1;

@end

