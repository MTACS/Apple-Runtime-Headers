//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVKeyPathDependencyManager, AVPlayer, FigBaseCALayer, FigSubtitleCALayer, FigVideoContainerLayer, NSDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerLayerInternal : NSObject
{
    NSObject<OS_dispatch_queue> *serialQueue;
    _Bool isPresentationLayer;
    struct OpaqueFigSimpleMutex *isReadyForDisplayMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    AVKeyPathDependencyManager *dependencyManager;
    AVPlayer *player;
    NSString *videoGravity;
    NSDictionary *pixelBufferAttributes;
    _Bool lanczosDownscalingEnabled;
    int lanczosDownscalingFactor;
    FigBaseCALayer *maskLayer;
    FigVideoContainerLayer *videoLayer;
    FigSubtitleCALayer *subtitleLayer;
    FigBaseCALayer *closedCaptionLayer;
    _Bool isForScrubbingOnly;
    _Bool isPartOfForegroundScene;
    _Bool isReadyForDisplay;
    AVPlayer *playerBeingObserved;
    NSSet *KVOInvokers;
    struct CGSize latestAppliedPresentationSize;
}

@end

