//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOCapturedState.h>

@class GEOApplicationAuditToken, NSData, NSDictionary, NSURL;

@interface GEODataRequestState : GEOCapturedState
{
    NSURL *_URL;
    GEOApplicationAuditToken *_auditToken;
    NSDictionary *_additionalHTTPHeaders;
    NSData *_bodyData;
    NSData *_cachedData;
    double _timeoutInterval;
    BOOL _HTTPMethod;
    CDStruct_d1a7ebee _kind;
    _Bool _HTTPShouldHandleCookies;
    unsigned long long _constraints;
}

+ (const char *)decoderType;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

