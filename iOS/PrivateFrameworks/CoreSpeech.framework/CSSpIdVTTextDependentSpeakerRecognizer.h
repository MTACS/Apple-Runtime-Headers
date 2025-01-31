//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CSSpIdVTTextDependentSpeakerRecognizer : NSObject
{
    _Bool _tdPsrCanProcessRequest;
    float _lastRequestSatScore;
    NSString *_tdSATModelFilePath;
    long long _getSATVectorCount;
    NSData *_speakerVector;
}

+ (_Bool)psrTdAssetExistsAtResourcePath:(id)arg1;
@property(retain, nonatomic) NSData *speakerVector; // @synthesize speakerVector=_speakerVector;
@property(readonly, nonatomic) float lastRequestSatScore; // @synthesize lastRequestSatScore=_lastRequestSatScore;
@property(readonly, nonatomic) long long getSATVectorCount; // @synthesize getSATVectorCount=_getSATVectorCount;
@property(readonly, nonatomic) NSString *tdSATModelFilePath; // @synthesize tdSATModelFilePath=_tdSATModelFilePath;
@property(readonly, nonatomic) _Bool tdPsrCanProcessRequest; // @synthesize tdPsrCanProcessRequest=_tdPsrCanProcessRequest;
- (void).cxx_destruct;
- (void)logWithAudioFilepath:(id)arg1;
- (void)deleteVectorAtIndex:(int)arg1;
- (void)deleteExistingSATModel;
- (void)updateSAT;
- (float)satScore;
- (void)endAudio;
- (void)processAudio:(const short *)arg1 numSamples:(unsigned long long)arg2;
- (void)resetForNewRequest;
- (double)getCombinationWeight;
- (double)getThresholdSAT;
- (id)initWithResourcePath:(id)arg1 satDirectory:(id)arg2 assetHash:(id)arg3 shouldCreateModelDir:(_Bool)arg4 delegate:(id)arg5;

@end

