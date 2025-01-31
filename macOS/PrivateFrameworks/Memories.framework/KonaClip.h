//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Memories/AltAspect-Protocol.h>
#import <Memories/KonaClipMiroAutoEditAdditions-Protocol.h>
#import <Memories/MiroClip-Protocol.h>
#import <Memories/MiroClip_Shim-Protocol.h>
#import <Memories/NSCopying-Protocol.h>
#import <Memories/SpeedRangeDelegate-Protocol.h>

@class AltClipCollection, ClipBackground, Movie, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, PHAsset, PVEffect, SpeedRanges, TitleDefinition, VideoMovie;

__attribute__((visibility("hidden")))
@interface KonaClip : NSObject <MiroClip, MiroClip_Shim, KonaClipMiroAutoEditAdditions, SpeedRangeDelegate, NSCopying, AltAspect>
{
    NSMutableDictionary *m_clipDict;
    BOOL placeholder;
    BOOL showActivity;
    BOOL transitionChanged;
    unsigned int _filterEffectSeed;
    int selectionStart;
    int selectionEnd;
    float _sourceStartTime;
    float _sourceDuration;
    TitleDefinition *_titleDefinition;
    NSString *_uuid;
    long long anchorItemIndex;
    SpeedRanges *_speedRanges;
    ClipBackground *_clipBackground;
    AltClipCollection *_altClips;
    double _altAspect;
    id _suggestion;
    id _freezeInfo;
    id _scene;
}

+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;
+ (BOOL)audioEnabledByDefault;
+ (id)clipFromPlist:(id)arg1;
+ (Class)classForClipType:(int)arg1;
+ (id)clip;
+ (id)clipWithAsset:(id)arg1;
@property(nonatomic) __weak id scene; // @synthesize scene=_scene;
@property(retain, nonatomic) id freezeInfo; // @synthesize freezeInfo=_freezeInfo;
@property(nonatomic) __weak id suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) double altAspect; // @synthesize altAspect=_altAspect;
@property(retain, nonatomic) AltClipCollection *altClips; // @synthesize altClips=_altClips;
@property(retain, nonatomic) ClipBackground *clipBackground; // @synthesize clipBackground=_clipBackground;
@property(nonatomic) float sourceDuration; // @synthesize sourceDuration=_sourceDuration;
@property(nonatomic) float sourceStartTime; // @synthesize sourceStartTime=_sourceStartTime;
@property(nonatomic) long long anchorItemIndex; // @synthesize anchorItemIndex;
@property(nonatomic) int selectionEnd; // @synthesize selectionEnd;
@property(nonatomic) int selectionStart; // @synthesize selectionStart;
@property(nonatomic) BOOL transitionChanged; // @synthesize transitionChanged;
@property(nonatomic) BOOL showActivity; // @synthesize showActivity;
@property(nonatomic) BOOL placeholder; // @synthesize placeholder;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int filterEffectSeed; // @synthesize filterEffectSeed=_filterEffectSeed;
@property(retain, nonatomic) TitleDefinition *titleDefinition; // @synthesize titleDefinition=_titleDefinition;
- (void).cxx_destruct;
@property(readonly, nonatomic) PVEffect *titleEffect;
@property(readonly, nonatomic) int rawSourceDuration;
@property(nonatomic) int maxDuration;
@property(retain, nonatomic) SpeedRanges *speedRanges; // @synthesize speedRanges=_speedRanges;
@property(nonatomic) float speed;
- (void)updateSourceCaches;
- (void)changedMapFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) int startOffset;
@property(nonatomic) int duration;
@property(nonatomic) int startTime;
- (void)didFinishTrimming;
@property(readonly, nonatomic) BOOL hasSelection;
- (void)clearSelection;
- (void)initializeFromURL:(id)arg1 asset:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (id)plistRepresentationFromProject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFilterEffectSeed;
@property(readonly, nonatomic) int titleDuration;
- (int)titleStartTimeForClipStartTime:(int)arg1;
@property(readonly, nonatomic) BOOL hasTitle;
@property(readonly, nonatomic) double aspectRatio;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(BOOL)arg2;
- (BOOL)isVideoOverlay;
- (BOOL)canBeDeleted;
- (BOOL)canBeDuplicated;
- (BOOL)isBackgroundAudio;
- (BOOL)isPrimary;
- (BOOL)isSpeedAdjustable;
- (BOOL)allowsTitle;
- (BOOL)isMultiUp;
- (BOOL)isPano;
- (BOOL)isBurst;
- (BOOL)isIris;
- (BOOL)hasPhotoCharacteristic;
- (BOOL)hasVisualCharacteristic;
- (BOOL)hasAudioCharacteristic;
- (BOOL)isFreezeFrame;
@property(readonly, nonatomic) float frameRate;
@property(readonly, nonatomic) int clipType;
- (void)_addDefaultKeys;
- (void)stampNewUUID;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)clipContentsEqual:(id)arg1;
- (id)deepCopyOntoClip:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sourceClips;
- (long long)specialTreatment;
- (long long)volume;
- (CDStruct_e83c9415)targetTimeRange;
- (CDStruct_e83c9415)sourceTimeRange;
- (id)identifier;
- (id)fileURL;
- (int)paddedMaxDur;
- (int)paddedMaxEnd;
- (int)paddedMinStart;
@property(readonly, nonatomic) int maxDur;
@property(readonly, nonatomic) int maxEnd;
@property(readonly, nonatomic) int minStart;
@property(readonly, nonatomic) VideoMovie *videoMovie;
@property(readonly, nonatomic) NSArray *multiUpContainedClips;
@property(readonly, nonatomic) BOOL isSlomo;
@property(readonly, nonatomic) struct CGSize naturalSizeWithTransform;
- (void)loadAVPlayerItemWithCompletionHander:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 networkAccessAllowed:(BOOL)arg3;
- (id)loadAVAsset;
@property(readonly, nonatomic) PHAsset *asset;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (void)validateEffectRange:(CDStruct_e83c9415)arg1 inProject:(id)arg2;
- (id)validationInformation;
@property(nonatomic) BOOL userEditing;
@property(retain, nonatomic) KonaClip *nextTransition;
@property(nonatomic) BOOL projectMovie;
@property(nonatomic) int desiredDuration;
@property(retain, nonatomic) PVEffect *filterEffect;
@property(nonatomic) int userEditedSize;
@property(nonatomic) int audioFadeOutDuration;
@property(nonatomic) int audioFadeInDuration;
@property(nonatomic) int audioEndOffset;
@property(nonatomic) int audioStartOffset;
@property(nonatomic) float translateY;
@property(nonatomic) float translateX;
@property(nonatomic) float scaleFactor;
@property(nonatomic) int freezeFrame;
@property(nonatomic) int precisionTrack;
@property(retain, nonatomic) KonaClip *precisionSourceClip;
@property(nonatomic) int anchorTargetOffset;
@property(nonatomic) int anchorLocalOffset;
@property(retain, nonatomic) KonaClip *anchorItem;
@property(retain, nonatomic) NSURL *movieURL;
@property(nonatomic) float audioVolume;
@property(nonatomic) int transitionEatRight;
@property(nonatomic) int transitionEatLeft;
@property(retain, nonatomic) NSString *name;
@property(retain, nonatomic) NSDictionary *movieMapLocation;
@property(nonatomic) BOOL audioEnabled;
@property(retain, nonatomic) NSString *audioArtist;
@property(retain, nonatomic) NSString *audioTitle;
@property(retain, nonatomic) NSURL *identifierURL;
@property(nonatomic) float rotation;
@property(retain, nonatomic) NSDate *creationDate;
@property(retain, nonatomic) Movie *movie;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

