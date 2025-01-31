//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <ContentKit/DCImage-Protocol.h>

@class NSData;

@interface UIImage (WFAnimatedImage) <DCImage>
+ (id)wf_animatedImageWithContentsOfFile:(id)arg1;
+ (id)wf_animatedImageWithData:(id)arg1 scale:(double)arg2;
+ (id)wf_animatedImageWithData:(id)arg1;
+ (id)wf_imageWithColor:(id)arg1;
+ (BOOL)imageSizeIndicatesScreenshot:(struct CGSize)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 cgImagePropertyOrientation:(unsigned int)arg3;
- (id)wf_tintedImageWithColor:(id)arg1;
@property(readonly, nonatomic) BOOL isScreenshot;
@property(readonly, nonatomic) NSData *PNGRepresentation;
@property(readonly, nonatomic) unsigned int cgImagePropertyOrientation;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 cgImagePropertyOrientation:(unsigned int)arg3;
@end

