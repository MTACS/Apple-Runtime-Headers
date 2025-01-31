//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosPlayer/ISBasePlayerOutput-Protocol.h>
#import <PhotosPlayer/ISChangeObserver-Protocol.h>

@class ISBasePlayer, ISPlayerOutputContent, ISVideoPlayerUIView, ISWrappedAVAudioSession, NSObject, NSString, UIImage, UIImageView;
@protocol ISBasePlayerUIViewChangeObserver, OS_dispatch_queue;

@interface ISBasePlayerUIView : UIView <ISChangeObserver, ISBasePlayerOutput>
{
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    ISPlayerOutputContent *_content;
    struct {
        char didChangeWithAnimationDuration;
    } _changeObserverRespondsTo;
    ISBasePlayer *_player;
    UIView *_customPhotoView;
    UIImage *_overrideImage;
    UIImageView *__photoView;
    ISVideoPlayerUIView *__videoView;
    UIView *__containerView;
    ISWrappedAVAudioSession *_wrappedAudioSession;
    id <ISBasePlayerUIViewChangeObserver> __changeObserver;
    struct CGPoint _scaleAnchorOffset;
    struct CGRect _contentsRect;
}

+ (Class)playerClass;
@property(nonatomic, setter=_setChangeObserver:) __weak id <ISBasePlayerUIViewChangeObserver> _changeObserver; // @synthesize _changeObserver=__changeObserver;
@property(retain, nonatomic, setter=_setWrappedAudioSession:) ISWrappedAVAudioSession *wrappedAudioSession; // @synthesize wrappedAudioSession=_wrappedAudioSession;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(readonly, nonatomic) ISVideoPlayerUIView *_videoView; // @synthesize _videoView=__videoView;
@property(readonly, nonatomic) UIImageView *_photoView; // @synthesize _photoView=__photoView;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(retain, nonatomic) UIImage *overrideImage; // @synthesize overrideImage=_overrideImage;
@property(retain, nonatomic) UIView *customPhotoView; // @synthesize customPhotoView=_customPhotoView;
@property(nonatomic) struct CGPoint scaleAnchorOffset; // @synthesize scaleAnchorOffset=_scaleAnchorOffset;
@property(retain, nonatomic) ISBasePlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updatePhotoView;
- (void)contentDidChange;
@property(readonly, nonatomic, getter=isDisplayingPhoto) BOOL displayingPhoto;
- (id)generateSnapshotImage;
- (void)setContent:(id)arg1;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_signalChange:(unsigned long long)arg1 withAnimationDuration:(double)arg2;
- (void)_updatePlayerAudioSession;
- (void)playerDidChange;
- (void)_performCommonInitialization;
- (void)audioSessionDidChange;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

