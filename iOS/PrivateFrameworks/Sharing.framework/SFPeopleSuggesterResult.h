//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding>
{
    unsigned int _flags;
    NSString *_contactID;
    NSArray *_handles;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

