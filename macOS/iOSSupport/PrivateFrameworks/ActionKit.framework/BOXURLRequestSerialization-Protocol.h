//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/NSObject-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSURLRequest;

@protocol BOXURLRequestSerialization <NSObject, NSSecureCoding, NSCopying>
- (NSURLRequest *)requestBySerializingRequest:(NSURLRequest *)arg1 withParameters:(id)arg2 error:(id *)arg3;
@end

