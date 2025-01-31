//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/BOXMultipartFormData-Protocol.h>

@class BOXMultipartBodyStream, NSMutableURLRequest, NSString;

@interface BOXStreamingMultipartFormData : NSObject <BOXMultipartFormData>
{
    NSMutableURLRequest *_request;
    unsigned long long _stringEncoding;
    NSString *_boundary;
    BOXMultipartBodyStream *_bodyStream;
}

@property(retain, nonatomic) BOXMultipartBodyStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)getBodyStream;
- (id)requestByFinalizingMultipartFormData;
- (void)throttleBandwidthWithPacketSize:(unsigned long long)arg1 delay:(double)arg2;
- (void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
- (void)appendPartWithFormData:(id)arg1 name:(id)arg2;
- (void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5;
- (BOOL)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id *)arg5;
- (BOOL)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned long long)arg2 boundary:(id)arg3;
- (id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned long long)arg2;

@end

