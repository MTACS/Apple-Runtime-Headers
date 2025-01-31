//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionDelegate-Protocol.h>

@class NSError, NSString;

@interface myDeli : NSObject <NSURLSessionDelegate>
{
    NSError *_errorResult;
    _Bool _receivedResponse;
    _Bool _hasCanceled;
}

@property _Bool hasCanceled; // @synthesize hasCanceled=_hasCanceled;
@property _Bool receivedResponse; // @synthesize receivedResponse=_receivedResponse;
@property(retain) NSError *someError; // @synthesize someError=_errorResult;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

