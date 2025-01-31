//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SBFCARenderer : NSObject
{
    NSXPCConnection *_rendererServiceConnection;
}

+ (_Bool)shouldUseXPCServiceForRendering;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_coerceImageIntoData:(id)arg1;
- (id)applyMaterialRecipe:(id)arg1 recipeName:(id)arg2 weighting:(double)arg3 downsampleFactor:(double)arg4;
- (id)treatWallpaperImage:(id)arg1 needsLuminanceTreatment:(_Bool)arg2 needsDimmingTreatment:(_Bool)arg3 downsampleFactor:(double)arg4;
- (id)_remoteObjectProxy;
- (void)_createConnection;

@end

