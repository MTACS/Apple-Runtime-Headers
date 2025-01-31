//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSData, NSString, SBFColorBoxes, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView
{
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
    _Bool _needsWallpaperDimmingTreatment;
    UIImage *_displayedImage;
    UIImage *_sampleImage;
    NSData *_displayedImageHashData;
    NSString *_displayedImageHashString;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
+ (_Bool)_canDownscaleSampleImage;
+ (_Bool)_canCacheImages;
@property(copy, nonatomic) NSString *displayedImageHashString; // @synthesize displayedImageHashString=_displayedImageHashString;
@property(copy, nonatomic) NSData *displayedImageHashData; // @synthesize displayedImageHashData=_displayedImageHashData;
@property(retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage; // @synthesize sampleImage=_sampleImage;
@property(retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage; // @synthesize displayedImage=_displayedImage;
- (void).cxx_destruct;
@property(retain, nonatomic) SBFColorBoxes *colorBoxes;
- (void)_updateColorBoxesWithKey:(id)arg1 image:(id)arg2;
- (id)_createColorBoxes;
- (id)_wallpaperImageForAnalysis;
- (struct CGSize)_imageSize;
- (float)_zoomScale;
- (void)_displayImage:(id)arg1;
- (void)_setUpStaticImageContentView:(id)arg1;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (double)_contrastInContentViewRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrast;
- (_Bool)imageRequiresLuminanceTreatment;
- (void)setContentsRect:(struct CGRect)arg1;
- (_Bool)hasContentOutsideVisibleBounds;
- (id)snapshotImage;
- (id)_computeAverageColor;
- (id)wallpaperImage;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)preheatImageData;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (id)cacheUniqueIdentifier;
- (void)_generateImageForImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 downsampleFactor:(double)arg4 needsDimmingTreatment:(_Bool)arg5 generationHandler:(CDUnknownBlockType)arg6;
- (void)_setupWallpaperImageFromConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (long long)wallpaperType;

@end

