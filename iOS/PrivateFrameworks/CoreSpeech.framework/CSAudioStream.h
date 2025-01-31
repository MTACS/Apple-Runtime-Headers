//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>

@class CSAudioStreamRequest, NSString, NSUUID;
@protocol CSAudioStreamProviding, CSAudioStreamProvidingDelegate;

@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate>
{
    _Bool _scheduledFutureSample;
    _Bool _streaming;
    id <CSAudioStreamProvidingDelegate> _delegate;
    unsigned long long _lastForwardedSampleCount;
    NSString *_name;
    CSAudioStreamRequest *_streamRequest;
    NSString *_UUID;
    id <CSAudioStreamProviding> _streamProvider;
    NSUUID *_streamingUUID;
}

@property(retain) NSUUID *streamingUUID; // @synthesize streamingUUID=_streamingUUID;
@property _Bool streaming; // @synthesize streaming=_streaming;
@property(nonatomic) __weak id <CSAudioStreamProviding> streamProvider; // @synthesize streamProvider=_streamProvider;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) CSAudioStreamRequest *streamRequest; // @synthesize streamRequest=_streamRequest;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool scheduledFutureSample; // @synthesize scheduledFutureSample=_scheduledFutureSample;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (_Bool)isNarrowBand;
- (id)recordSettings;
- (_Bool)isStreaming;
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

