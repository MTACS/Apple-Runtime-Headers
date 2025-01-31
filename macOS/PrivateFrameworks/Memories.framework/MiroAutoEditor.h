//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MiroMemory, MovieController, NSDate, NSOperationQueue, Project;
@protocol MiroSequence;

__attribute__((visibility("hidden")))
@interface MiroAutoEditor : NSObject
{
    BOOL _shouldBuildMovieController;
    BOOL _shouldSave;
    BOOL _topLevelCancel;
    float _downloadProgress;
    float _progress;
    int _downloadPolicy;
    MiroMemory *_memory;
    Project *_project;
    long long _remainingAssetsToDownload;
    MovieController *_movieController;
    id _observer;
    CDUnknownBlockType _downloadCompleted;
    NSDate *_prepareStartedTime;
    NSDate *_tapStartedTime;
    double _autoEditStartedTimePPT;
    double _autoEditFinishedTimePPT;
    double _uiDidLoadTimePPT;
    double _uiDidAppearTimePPT;
    double _playbackStartedTimePPT;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstanceForPregenerate;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property double playbackStartedTimePPT; // @synthesize playbackStartedTimePPT=_playbackStartedTimePPT;
@property double uiDidAppearTimePPT; // @synthesize uiDidAppearTimePPT=_uiDidAppearTimePPT;
@property double uiDidLoadTimePPT; // @synthesize uiDidLoadTimePPT=_uiDidLoadTimePPT;
@property double autoEditFinishedTimePPT; // @synthesize autoEditFinishedTimePPT=_autoEditFinishedTimePPT;
@property double autoEditStartedTimePPT; // @synthesize autoEditStartedTimePPT=_autoEditStartedTimePPT;
@property(retain) NSDate *tapStartedTime; // @synthesize tapStartedTime=_tapStartedTime;
@property(retain) NSDate *prepareStartedTime; // @synthesize prepareStartedTime=_prepareStartedTime;
@property(copy, nonatomic) CDUnknownBlockType downloadCompleted; // @synthesize downloadCompleted=_downloadCompleted;
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
@property BOOL topLevelCancel; // @synthesize topLevelCancel=_topLevelCancel;
@property int downloadPolicy; // @synthesize downloadPolicy=_downloadPolicy;
@property BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property(retain) MovieController *movieController; // @synthesize movieController=_movieController;
@property BOOL shouldBuildMovieController; // @synthesize shouldBuildMovieController=_shouldBuildMovieController;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property long long remainingAssetsToDownload; // @synthesize remainingAssetsToDownload=_remainingAssetsToDownload;
@property(retain) Project *project; // @synthesize project=_project;
@property(retain, nonatomic) MiroMemory *memory; // @synthesize memory=_memory;
- (void).cxx_destruct;
- (void)updateMovieController:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)updateDownloadProgress:(float)arg1;
- (BOOL)shouldNotifyProgress;
- (void)updateRemainingAssetsToDownload:(long long)arg1;
- (void)updateProject:(id)arg1;
- (void)_downloadSongForPregenrateWithMemory:(id)arg1;
- (void)_autoEditMemory:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_cancel;
- (void)logFreeze:(id)arg1 message:(id)arg2;
- (void)fetchAndPrintAssets:(id)arg1 andMemory:(id)arg2;
- (void)_logMemoryStuff:(id)arg1;
- (void)pregenerateMemory:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isAutoEditing;
- (BOOL)isBusy;
- (void)cancelAutoEdit;
- (void)performPersist;
- (void)performAutoEditWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performAutoEdit;
@property(retain) id <MiroSequence> sequence;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMemory:(id)arg1 shouldBuildMovieController:(BOOL)arg2;
- (id)initForPregenerate;

@end

