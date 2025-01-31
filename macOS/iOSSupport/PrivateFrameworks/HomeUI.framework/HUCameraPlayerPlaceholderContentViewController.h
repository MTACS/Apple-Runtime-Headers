//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/HFPosterFrameImageObserver-Protocol.h>

@class HFCameraPlaybackEngine, HMCameraClip, HMCameraClipManager, NSString, UIImageView;

@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver, HFPosterFrameImageObserver>
{
    BOOL _cameraPlayerHasContentToShow;
    HFCameraPlaybackEngine *_playbackEngine;
    UIImageView *_placeholderImageView;
    HMCameraClip *_lastRequestedClip;
}

@property(retain, nonatomic) HMCameraClip *lastRequestedClip; // @synthesize lastRequestedClip=_lastRequestedClip;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic) __weak HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(nonatomic) BOOL cameraPlayerHasContentToShow; // @synthesize cameraPlayerHasContentToShow=_cameraPlayerHasContentToShow;
- (void).cxx_destruct;
- (void)manager:(id)arg1 didUpdateImage:(id)arg2 withTimeOffset:(double)arg3 fromClip:(id)arg4;
- (BOOL)_shouldHidePlaceholderContentForCurrentAccessMode;
- (void)_animateState:(BOOL)arg1 placeholderImage:(id)arg2;
- (void)_updateStateAnimated:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_updatePlaceholderContentAnimated:(BOOL)arg1;
- (void)hu_reloadData;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)viewDidLoad;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) HMCameraClipManager *clipManager;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

