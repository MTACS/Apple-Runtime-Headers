//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFCARendererImpl : NSObject
{
}

+ (id)dimmingTreatmentFilters;
+ (id)luminanceTreatmentFilters;
+ (id)_actuallyRenderImage:(struct CGImage *)arg1 requiresBGRA:(_Bool)arg2 downsampleFactor:(double)arg3 layerCustomizer:(CDUnknownBlockType)arg4;
+ (id)renderMaterialImage:(struct CGImage *)arg1 recipeName:(id)arg2 weighting:(double)arg3 downsampleFactor:(double)arg4;
+ (id)renderTreatedWallpaperImage:(struct CGImage *)arg1 needsLuminanceTreatment:(_Bool)arg2 needsDimmingTreatment:(_Bool)arg3 downsampleFactor:(double)arg4;

@end

