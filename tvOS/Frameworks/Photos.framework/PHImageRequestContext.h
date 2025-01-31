//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHCompositeMediaResult, PHImageRequest, PHImageRequestOptions, PHMediaResourceRequest;

@interface PHImageRequestContext : PHMediaRequestContext
{
    NSProgress *_progress;
    PHImageRequest *_initialRequest;
    PHImageRequest *_intermediateRequest;
    PHImageRequest *_finalRequest;
    PHMediaResourceRequest *_resourceRequest;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _firstNonFastResultWasObserved
    PHCompositeMediaResult *_delayedFinalInvalidDataResult;
    PHImageRequestOptions *_imageOptions;
}

+ (long long)type;
@property(readonly, nonatomic) PHImageRequestOptions *imageOptions; // @synthesize imageOptions=_imageOptions;
- (void).cxx_destruct;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)progresses;
- (CDUnknownBlockType)progressHandler;
- (_Bool)shouldReportProgress;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3 result:(id)arg4;
- (id)initialRequests;
- (_Bool)representsShareableHighQualityResource;
- (_Bool)isSynchronous;
- (_Bool)isNetworkAccessAllowed;
- (id)_produceIntermediateImageRequestForRequest:(id)arg1;
- (id)_produceFinalImageRequestForRequest:(id)arg1;
- (id)_lazyProgress;
- (id)_initialBehavior;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end

