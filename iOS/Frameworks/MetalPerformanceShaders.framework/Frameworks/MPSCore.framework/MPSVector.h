//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface MPSVector : NSObject
{
    // Error parsing type: ^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>=A^{MTLLibraryNode}}[2[2[2{atomic<void *>=A^v}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]{atomic<void *>=A^v}Ii{MPSGPUInfo=b8b8b8b16b4b20}[106{atomic<MPSLibrary *>=A^{MPSLibrary}}]}, name: _device
    unsigned long long _length;
    unsigned long long _vectors;
    unsigned long long _vectorBytes;
    unsigned long long _offset;
    unsigned int _dataType;
    // Error parsing type: {MPSAutoBuffer="_buffer"{atomic<void *>="__a_"A^v}"_requestedSize"Q"_device"@"<MTLDevice>""_cache"@"MPSCommandBufferImageCache""_resourceSize"{?="size"Q"align"Q}}, name: _buffer
}

@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long vectorBytes; // @synthesize vectorBytes=_vectorBytes;
@property(readonly, nonatomic) unsigned long long vectors; // @synthesize vectors=_vectors;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)resourceSize;
- (void)synchronizeOnCommandBuffer:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> data;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initWithBuffer:(id)arg1 length:(unsigned long long)arg2 dataType:(unsigned int)arg3;
-     // Error parsing type: @32@0:8@16^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>=A^{MTLLibraryNode}}[2[2[2{atomic<void *>=A^v}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]{atomic<void *>=A^v}Ii{MPSGPUInfo=b8b8b8b16b4b20}[106{atomic<MPSLibrary *>=A^{MPSLibrary}}]}24, name: initPrivateWithDescriptor:device:
- (id)init;
@property(readonly, retain, nonatomic) id <MTLDevice> device;

@end

