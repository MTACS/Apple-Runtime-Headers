//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (Utilities)
+ (struct CGRect)ic_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
+ (struct UIImage *)ic_imageWithColor:(struct UIColor *)arg1 size:(struct CGSize)arg2;
+ (struct UIImage *)ic_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (id)ic_orientationMetadataFromImageOrientation:(long long)arg1;
+ (struct UIImage *)ic_imageWithData:(id)arg1;
+ (struct UIImage *)ic_imageWithCGImage:(struct CGImage *)arg1;
+ (struct UIImage *)ic_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (struct UIImage *)ic_orientedImageFromImage:(struct UIImage *)arg1 toOrientation:(long long)arg2;
+ (struct UIImage *)ic_orientedImageFromImage:(struct UIImage *)arg1 fromOrientation:(long long)arg2;
+ (struct UIImage *)ic_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;
+ (id)ic_UIImageFromCIImage:(id)arg1;
+ (struct UIImage *)ic_imageNamed:(id)arg1 withTint:(struct UIColor *)arg2 size:(struct CGSize)arg3;
+ (struct UIImage *)ic_imageNamed:(id)arg1 withTint:(struct UIColor *)arg2;
+ (struct UIImage *)ic_imageWithContentsOfURL:(id)arg1;
+ (id)ic_systemImageNamed:(id)arg1 fromFont:(id)arg2 scale:(long long)arg3;
+ (id)ic_systemImageNamed:(id)arg1 scale:(long long)arg2;
+ (id)ic_systemImageNamed:(id)arg1 fromFont:(id)arg2;
+ (id)ic_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;
+ (id)ic_systemImageNamed:(id)arg1 textStyle:(id)arg2;
+ (id)ic_largeSystemImageNamed:(id)arg1;
- (struct CGContext *)ic_newARGB8BitmapContextFromImage:(struct CGImage *)arg1;
- (struct CGRect)ic_cropRectZeroAlpha;
- (struct UIImage *)ic_decodeInBackground;
- (void)ic_decodeWithCompletion:(CDUnknownBlockType)arg1;
- (id)ic_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (id)ic_imageDataWithUTType:(id)arg1;
- (id)ic_PNGDataWithOrientation:(long long)arg1;
- (id)ic_PNGData;
- (id)ic_JPEGDataWithOrientation:(long long)arg1;
- (id)ic_JPEGData;
- (id)ic_horizontallyMirroredImage;
- (long long)ic_imageOrientation;
- (struct CGImage *)ic_CGImage;
- (struct UIImage *)ic_imageFromRect:(struct CGRect)arg1;
- (struct UIImage *)ic_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct UIImage *)ic_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage *)ic_scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage *)ic_imageWithTint:(struct UIColor *)arg1 size:(struct CGSize)arg2;
- (id)ic_imageWithTextStyle:(id)arg1 scale:(long long)arg2;
- (id)ic_imageWithTextStyle:(id)arg1;
- (id)ic_imageWithFont:(id)arg1 scale:(long long)arg2;
- (id)ic_imageWithScale:(long long)arg1;
- (id)ic_imageWithFont:(id)arg1;
@end

