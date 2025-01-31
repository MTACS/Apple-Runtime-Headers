//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKBasePhotosFaceView.h>

#import <NanoTimeKit/NTKPhotosReaderDelegate-Protocol.h>

@class NSMutableArray, NSString, NTKCachedPhoto, NTKPhotoAnalysis, NTKPhotosReader, UIColor, UITapGestureRecognizer, UIView, _NTKPhotoIndexGenerator;

@interface NTKPhotosFaceView : NTKBasePhotosFaceView <NTKPhotosReaderDelegate>
{
    unsigned int _isContentLoaded:1;
    unsigned int _isTimetravelScrubbing:1;
    unsigned int _isAnalysisOperationInProgress:1;
    unsigned int _inPhotoTransition:1;
    unsigned int _isPreloadingNextPhotoOnSleep:1;
    NTKPhotosReader *_reader;
    _NTKPhotoIndexGenerator *_generator;
    unsigned int _currentContent;
    unsigned long long _currentAnalysisOperationID;
    UITapGestureRecognizer *_singleTapGesture;
    UIView *_photoTransitionSnapshotView;
    UIView *_photoTransitionCornerView;
    unsigned int _queuedTransitionCount;
    unsigned int _preloadGeneration;
    unsigned int _numberOfPhotos;
    CDUnknownBlockType _enqueuePreloadedPhotoCompletion;
    NSMutableArray *_preloaded;
    NSMutableArray *_toload;
    unsigned int _deviceSizeClass;
    UIColor *_currentForegroundColor;
    UIView *_currentPosterViewSnapshot;
    NTKCachedPhoto *_nextCachedPhoto;
    NTKPhotoAnalysis *_nextAnalysis;
    UIColor *_nextForegroundColor;
    UIView *_nextPosterViewSnapshot;
    _Bool _isInactiveViewUsedForBurnInTesting;
    NTKCachedPhoto *_presentedPhoto;
}

@property(retain, nonatomic) NTKCachedPhoto *presentedPhoto; // @synthesize presentedPhoto=_presentedPhoto;
- (void).cxx_destruct;
- (id)_synchronousAnalysisForCachedPhoto:(id)arg1;
- (void)tritium_didTransitionToTritiumOff;
- (void)_setTritiumOffProgress:(float)arg1;
- (void)tritium_willTransitionToTritiumOffFromFrameSpecifier:(id)arg1;
- (void)tritium_didTransitionToTritiumOn;
- (void)_setTritiumOnProgress:(float)arg1;
- (void)tritium_willTransitionToTritiumOn;
- (void)tritium_synchronizeWithActiveFaceView:(id)arg1;
- (void)tritium_applyBurnInStudyFakeActiveState;
- (void)tritium_willSnapshotForBurnInStudy;
- (void)tritium_setupForBurnInStudy;
- (void)tritium_prepareForTransitionToTritiumOnAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)tritium_createFaceAnimator;
- (id)_createAndCachePhotoAnalysisForKey:(id)arg1 dateAlignment:(unsigned int)arg2 image:(id)arg3;
- (id)_cachedAnalysisForKey:(id)arg1;
- (id)_analysisCacheKeyFor:(id)arg1;
- (id)_analysisForAlignment:(unsigned int)arg1;
- (void)_updateImageToBlur;
- (void)_updateReader:(_Bool)arg1;
- (void)_updateContents:(_Bool)arg1;
- (void)_operationIsDone;
- (_Bool)_canOperationProceed:(unsigned long long)arg1;
- (void)_updateDateAttributesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDateAttributesAnimated:(_Bool)arg1;
- (void)_resetTapAnimationState;
- (void)handleScreenBlanked;
- (void)_handleSingleTap:(id)arg1;
- (void)_animationStart;
- (void)_animationFinished:(_Bool)arg1;
- (void)_nextPhotoAnimated:(_Bool)arg1 method:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_nextPhotoReadyAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearPreloaded;
- (void)_startBackgroundRefill;
- (id)_dequeueToLoadIfMatchingGeneration:(unsigned int)arg1;
- (_Bool)_enqueuePreloadedPhoto:(id)arg1 ifMatchingGeneration:(unsigned int)arg2;
- (void)_displayCachedPhoto:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldAnimationContinue:(_Bool)arg1;
- (void)setNoPhotosViewVisible:(_Bool)arg1;
- (void)readerDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_preloadNextPhoto;
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (float)_backgroundImageAlphaForEditMode:(int)arg1;
- (float)_timeLabelAlphaForEditMode:(int)arg1;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (void)_configureForEditMode:(int)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_applyFrozen;
- (id)initWithFaceStyle:(int)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

