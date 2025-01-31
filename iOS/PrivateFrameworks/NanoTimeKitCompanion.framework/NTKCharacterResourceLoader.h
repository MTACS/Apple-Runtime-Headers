//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, CLKUIMmapFile, NSBundle, NSMutableArray, NSMutableDictionary;
@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState;

@interface NTKCharacterResourceLoader : NSObject
{
    CLKDevice *_clkDevice;
    NSBundle *_bundle;
    id <MTLDevice> _mtlDevice;
    unsigned long long _clients;
    CLKUIMmapFile *_commonBankLatn;
    CLKUIMmapFile *_commonBankArab;
    CLKUIMmapFile *_commonBankDeva;
    CLKUIMmapFile *_minnieBank;
    CLKUIMmapFile *_mickeyBank;
    id <MTLRenderPipelineState> _renderPipelines[4];
    unsigned long long _viewMtlPixelFormat;
    NSMutableDictionary *_mapping;
    NSMutableArray *_array;
    NSMutableArray *_arrayByLocale[3];
    id <MTLBuffer> _mtlBuffer;
    unsigned long long _bufferOffsetBackground;
    unsigned long long _bufferOffsetBody;
    unsigned long long _bufferOffsetFoot;
    unsigned long long _bufferOffsetArm;
    unsigned long long _bufferOffsetHand;
    unsigned long long _bufferOffsetHead;
    unsigned long long _bufferOffsetSkirt;
    unsigned long long _bufferOffsetFlower;
}

+ (void)_deallocInstanceForDevice:(id)arg1;
+ (id)sharedInstanceForDevice:(id)arg1 withPixelFormat:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long bufferOffsetFlower; // @synthesize bufferOffsetFlower=_bufferOffsetFlower;
@property(readonly, nonatomic) unsigned long long bufferOffsetSkirt; // @synthesize bufferOffsetSkirt=_bufferOffsetSkirt;
@property(readonly, nonatomic) unsigned long long bufferOffsetHead; // @synthesize bufferOffsetHead=_bufferOffsetHead;
@property(readonly, nonatomic) unsigned long long bufferOffsetHand; // @synthesize bufferOffsetHand=_bufferOffsetHand;
@property(readonly, nonatomic) unsigned long long bufferOffsetArm; // @synthesize bufferOffsetArm=_bufferOffsetArm;
@property(readonly, nonatomic) unsigned long long bufferOffsetFoot; // @synthesize bufferOffsetFoot=_bufferOffsetFoot;
@property(readonly, nonatomic) unsigned long long bufferOffsetBody; // @synthesize bufferOffsetBody=_bufferOffsetBody;
@property(readonly, nonatomic) unsigned long long bufferOffsetBackground; // @synthesize bufferOffsetBackground=_bufferOffsetBackground;
@property(readonly, nonatomic) id <MTLBuffer> mtlBuffer; // @synthesize mtlBuffer=_mtlBuffer;
- (void).cxx_destruct;
- (id)getMTLTexture:(id)arg1;
- (id)textureWithName:(id)arg1;
- (id)textureWithName:(id)arg1 prefix:(id)arg2;
- (id)mtlTextureWithName:(id)arg1;
- (id)mtlTextureWithName:(id)arg1 prefix:(id)arg2;
- (void)_loadTextures;
- (void)localeChanged;
- (id)_loadBank:(id)arg1 toArrays:(unsigned long long)arg2 allowNewKeys:(_Bool)arg3;
- (id)getPipelineForProgramType:(unsigned long long)arg1;
- (void)_loadPrograms;
- (void)_setupPipelineForType:(unsigned long long)arg1 vertex:(id)arg2 fragment:(id)arg3 blending:(_Bool)arg4 inLibrary:(id)arg5;
- (void)_loadMTLBufferData;
- (void)removeClient;
- (void)addClient;
- (void)prime;
- (void)_asyncDeallocInstance;
- (void)dealloc;
- (id)initForDevice:(id)arg1 withPixelFormat:(unsigned long long)arg2;

@end

