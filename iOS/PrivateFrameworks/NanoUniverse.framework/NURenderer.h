//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;
@protocol MTLDevice;

@interface NURenderer : NSObject
{
    id <MTLDevice> _mtlDevice;
    NSBundle *_bundle;
    struct NURendererResources _resources;
    unsigned long long _viewMtlPixelFormat;
    struct _NUGeometryRange _octahedronGeomRange;
    struct _NUGeometryRange _quadGeomRange;
}

+ (void)_deallocInstance;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)_initPrograms;
- (void)_createPipelineForProgramType:(unsigned long long)arg1 fromLibrary:(id)arg2;
- (void)renderWithScene:(id)arg1 viewport:(struct NUViewport)arg2 resources:(id)arg3 encoder:(id)arg4;
-     // Error parsing type: v48@0:8@16r^{NURendererState={NUViewport=iiii}QQf{_NUGeometryRange=ii}{_NUGeometryRange=ii}(float4x4=[16f][4[4f]][4])(float4x4=[16f][4[4f]][4])(float4x4=[16f][4[4f]][4])}24@32@40, name: drawSpriteWithEncoder:state:spheroid:resources:
-     // Error parsing type: v48@0:8@16r^{NURendererState={NUViewport=iiii}QQf{_NUGeometryRange=ii}{_NUGeometryRange=ii}(float4x4=[16f][4[4f]][4])(float4x4=[16f][4[4f]][4])(float4x4=[16f][4[4f]][4])}24@32@40, name: draw3DWithEncoder:state:spheroid:resources:
- (void)bindAssetArt:(unsigned long long)arg1 withEncoder:(id)arg2 resources:(id)arg3 toSlot:(unsigned long long)arg4;
- (void)_initHemi;
- (void)_initDepthStencilState;
- (void)dealloc;
- (id)initWithPixelFormat:(unsigned long long)arg1;

@end

