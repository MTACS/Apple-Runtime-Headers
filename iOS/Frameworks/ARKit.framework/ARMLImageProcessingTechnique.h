//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

#import <ARKit/ARTechniqueBusyState-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARMLImageProcessingTechnique : ARImageBasedTechnique <ARTechniqueBusyState>
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    struct os_unfair_lock_s _prepLock;
    void *_espressoContext;
    void *_espressoPlan;
    CDStruct_2bc666a5 _espressoNetwork;
    struct vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t>> _espressoOutputTensors;
    _Bool _hasBegunPrep;
    _Bool _failedToLoadNetwork;
    struct __CVPixelBufferPool *_bgraPixelBufferPool;
    NSString *_previous_network_configuration;
    int _lockedOrientation;
    _Bool _prepComplete;
    NSString *_networkFilePath;
    NSArray *_inputTensorNames;
    NSArray *_outputTensorNames;
    struct CGSize _networkInputScaleBeforeRotation;
}

+ (_Bool)isSupported;
@property(readonly, nonatomic) struct CGSize networkInputScaleBeforeRotation; // @synthesize networkInputScaleBeforeRotation=_networkInputScaleBeforeRotation;
@property(readonly, nonatomic) NSArray *outputTensorNames; // @synthesize outputTensorNames=_outputTensorNames;
@property(readonly, nonatomic) NSArray *inputTensorNames; // @synthesize inputTensorNames=_inputTensorNames;
@property(retain, nonatomic) NSString *networkFilePath; // @synthesize networkFilePath=_networkFilePath;
@property _Bool prepComplete; // @synthesize prepComplete=_prepComplete;
@property(readonly, nonatomic) _Bool failedToLoadNetwork; // @synthesize failedToLoadNetwork=_failedToLoadNetwork;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize)arg3;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endLoadingMLModelSignpost;
- (void)_startLoadingMLModelSignpost;
@property(readonly, nonatomic) _Bool isBusy;
- (long long)_getDeviceOrientation;
- (_Bool)preProcessNetworkInputImage:(struct __CVBuffer *)arg1;
- (id)createResultDataFromTensors:(CDStruct_cf098810 *)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize)arg6;
- (id)processEspressoTensor:(id)arg1;
- (id)processImageDataThroughNeuralNetwork:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize)arg3 rotationOfResultTensor:(long long)arg4;
- (CDStruct_b527887c)networkInputParams;
- (id)_resampleImage:(id)arg1 rotationOfResultTensor:(long long)arg2 networkInputSize:(struct CGSize)arg3;
- (void)_asynchronousProcessEspressoTensor:(id)arg1;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize)arg3 rotationOfResultTensor:(long long)arg4;
- (void)_asynchronousProcessDownSampledImage:(id)arg1;
- (id)processData:(id)arg1;
- (void)prepare;
- (long long)orientationForInitializingEspresso;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (long long)captureBehavior;
- (double)requiredTimeInterval;
- (void)changeEspressoConfig:(id)arg1;
- (void)networkModeDidChange:(id)arg1 toMode:(id)arg2;
- (void)loadMLWithPath:(id)arg1 networkMode:(id)arg2;
- (_Bool)isLoadedModelVersionCorrect:(id)arg1;
- (id)networkModesForOrientation:(long long)arg1;
- (long long)numberOfInputChannelsToExpectInNetwork;
- (void)lockOrientation:(long long)arg1;
- (id)defaultEngineName;
- (unsigned long long)espressoOutputTensorsSize;
- (CDStruct_cf098810 *)espressoOutputTensorsData;
- (int)defaultEngine;
- (void *)espressoPlan;
- (CDStruct_2bc666a5)espressoNetwork;
- (id)processingSemaphore;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1 inputTensorNames:(id)arg2 outputTensorNames:(id)arg3 networkInputScaleBeforeRotation:(struct CGSize)arg4 networkFilePath:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

