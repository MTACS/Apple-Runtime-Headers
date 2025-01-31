//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBElasticAudioDataSource-Protocol.h>
#import <SpringBoard/SBElasticAudioVolumeViewControllerDelegate-Protocol.h>
#import <SpringBoard/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, SBElasticVolumeViewController;
@protocol SBVolumeHUDViewControllerDelegate;

@interface SBVolumeHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBElasticAudioDataSource, SBElasticAudioVolumeViewControllerDelegate>
{
    id <SBVolumeHUDViewControllerDelegate> _delegate;
    SBElasticVolumeViewController *_elasticAudioViewController;
}

@property(readonly, nonatomic) SBElasticVolumeViewController *elasticAudioViewController; // @synthesize elasticAudioViewController=_elasticAudioViewController;
@property(nonatomic) __weak id <SBVolumeHUDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)elasticVolumeViewControllerNeedsDismissal:(id)arg1;
- (_Bool)elasticAudioViewControllerShouldShowVolumeWarningForCurrentVolumeLevel:(id)arg1;
- (id)elasticAudioViewControllerActiveAudioRouteTypes:(id)arg1;
- (id)elasticAudioViewControllerActiveAudioCategory:(id)arg1;
- (_Bool)elasticAudioViewController:(id)arg1 updateCurrentVolumeToLevel:(float)arg2;
- (float)elasticAudioViewControllerCurrentVolume:(id)arg1;
- (unsigned long long)_volumeHUDPresentationEdge;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshAudioUI;
- (void)noteVolumeDidChange:(float)arg1;
- (void)noteVolumeWillDeltaStepForRepeatedPress;
- (void)noteVolumeDownWasHit:(_Bool)arg1;
- (void)noteVolumeUpWasHit:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

