//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSURL, PHAdjustmentData;

@interface PHContentEditingOutput : NSObject <NSSecureCoding>
{
    PHAdjustmentData *_adjustmentData;
    long long _baseVersion;
    BOOL _isSubstandardRender;
    BOOL _loopingLivePhoto;
    BOOL _isAsyncAdjustment;
    BOOL _isSwappingFullSizeRenderWithAlternateRender;
    NSURL *_renderedContentURL;
    NSNumber *_originalResourceChoice;
    long long _fullSizeRenderWidth;
    long long _fullSizeRenderHeight;
    NSData *_penultimateRenderedJPEGData;
    NSURL *_penultimateRenderedVideoContentURL;
    NSURL *_renderedVideoPosterURL;
    NSURL *_renderedVideoComplementContentURL;
    NSURL *_penultimateRenderedVideoComplementContentURL;
    NSURL *_editorBundleURL;
    long long _mediaType;
    NSURL *_renderedPreviewContentURL;
    NSNumber *_playbackVariation;
    NSNumber *_videoDuration;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)maximumAdjustmentDataLength;
+ (id)renderURLWithExtensionForMediaType:(long long)arg1;
+ (id)outputForFlippingFullSizeRenderWithContentEditingInput:(id)arg1 error:(id *)arg2;
@property(nonatomic) BOOL isSwappingFullSizeRenderWithAlternateRender; // @synthesize isSwappingFullSizeRenderWithAlternateRender=_isSwappingFullSizeRenderWithAlternateRender;
@property(retain, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSNumber *playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property(nonatomic) BOOL isAsyncAdjustment; // @synthesize isAsyncAdjustment=_isAsyncAdjustment;
@property(retain, nonatomic) NSURL *renderedPreviewContentURL; // @synthesize renderedPreviewContentURL=_renderedPreviewContentURL;
@property(readonly, getter=isLoopingLivePhoto) BOOL loopingLivePhoto; // @synthesize loopingLivePhoto=_loopingLivePhoto;
@property(readonly) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain) NSURL *editorBundleURL; // @synthesize editorBundleURL=_editorBundleURL;
@property(copy) NSURL *penultimateRenderedVideoComplementContentURL; // @synthesize penultimateRenderedVideoComplementContentURL=_penultimateRenderedVideoComplementContentURL;
@property(copy) NSURL *renderedVideoComplementContentURL; // @synthesize renderedVideoComplementContentURL=_renderedVideoComplementContentURL;
@property(copy) NSURL *renderedVideoPosterURL; // @synthesize renderedVideoPosterURL=_renderedVideoPosterURL;
@property(copy) NSURL *penultimateRenderedVideoContentURL; // @synthesize penultimateRenderedVideoContentURL=_penultimateRenderedVideoContentURL;
@property(retain) NSData *penultimateRenderedJPEGData; // @synthesize penultimateRenderedJPEGData=_penultimateRenderedJPEGData;
@property(nonatomic) long long fullSizeRenderHeight; // @synthesize fullSizeRenderHeight=_fullSizeRenderHeight;
@property(nonatomic) long long fullSizeRenderWidth; // @synthesize fullSizeRenderWidth=_fullSizeRenderWidth;
@property(nonatomic) BOOL isSubstandardRender; // @synthesize isSubstandardRender=_isSubstandardRender;
@property(retain, nonatomic) NSNumber *originalResourceChoice; // @synthesize originalResourceChoice=_originalResourceChoice;
@property(copy) NSURL *renderedContentURL; // @synthesize renderedContentURL=_renderedContentURL;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setupRequiredRenderedContentURLsWithEditingInput:(id)arg1 options:(id)arg2;
- (BOOL)isOnlyChangingOriginalChoice;
- (id)assetAdjustmentsWithEditorBundleID:(id)arg1;
- (void)setRenderedJPEGData:(id)arg1;
@property long long baseVersion;
@property(retain) PHAdjustmentData *adjustmentData;
- (void)clearRenderedContentURL;
- (id)renderURLWithExtensionForMediaType:(long long)arg1;
- (id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2;
- (id)initWithPlaceholderForCreatedAsset:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1 withOptions:(id)arg2;
- (id)initWithContentEditingInput:(id)arg1;

@end

