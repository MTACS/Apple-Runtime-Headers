//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class _UIBarBackgroundAppearanceData;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout
{
    _Bool _backgroundsAreSame;
    _UIBarBackgroundAppearanceData *_backgroundData1;
    _UIBarBackgroundAppearanceData *_backgroundData2;
}

@property(retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2; // @synthesize backgroundData2=_backgroundData2;
@property(retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1; // @synthesize backgroundData1=_backgroundData1;
- (void).cxx_destruct;
- (void)describeInto:(id)arg1;
- (float)bg2ShadowAlpha;
- (id)bg2ShadowTint;
- (id)bg2ShadowImage;
- (id)bg2ShadowColor;
- (_Bool)bg2HasShadow;
- (int)bg2ImageMode;
- (id)bg2Image;
- (id)bg2Color;
- (id)bg2Effects;
- (float)bg2Alpha;
- (_Bool)bg2Enabled;
- (float)bg1ShadowAlpha;
- (id)bg1ShadowTint;
- (id)bg1ShadowImage;
- (id)bg1ShadowColor;
- (_Bool)bg1HasShadow;
- (int)bg1ImageMode;
- (id)bg1Image;
- (id)bg1Color;
- (id)bg1Effects;
- (float)bg1Alpha;
- (_Bool)shouldUseExplicitGeometry;
- (id)initWithLayout:(id)arg1;

@end

