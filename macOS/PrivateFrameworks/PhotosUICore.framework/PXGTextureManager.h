//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGTextureProviderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSIndexSet, NSMapTable, NSMutableDictionary, NSMutableSet, PXGTextureManagerPreheatingStrategy, PXGViewEnvironment;
@protocol OS_dispatch_queue, PXGMutableSpriteTexture, PXGTextureConverter, PXGTextureManagerDelegate;

@interface PXGTextureManager : NSObject <PXGTextureProviderDelegate>
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_processQueue;
    NSObject<OS_dispatch_queue> *_deallocationsQueue;
    struct os_unfair_lock_s _lookupLock;
    NSMapTable *_lookupLock_textureByKeyByPresentationType[3];
    struct unordered_map<int, PXGRequestDetails, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, PXGRequestDetails>>> _lookupLock_requestDetailsByRequestID;
    NSHashTable *_spriteTexturesInUse;
    NSDictionary *_textureConverterByPresentationType;
    id <PXGTextureConverter> _atlasTextureConverter;
    int _atlasPresentationType;
    BOOL _didSwitchTextureConverter;
    NSMutableDictionary *_textureProviderByMediaKind;
    NSMapTable *_textureProvidersDisplayLinkRegistrationState;
    struct unordered_map<int, unsigned int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, unsigned int>>> _spriteIndexByRequestID;
    NSIndexSet *_loadedSpriteIndexes;
    CDStruct_875be80f *_streamInfoBySpriteIndex;
    unsigned long long _streamInfoBySpriteIndexCount;
    unsigned long long _streamInfoBySpriteIndexCapacity;
    // Error parsing type: AC, name: _isPerformingUpdateFromRequestQueue
    unsigned long long _requestQueue_pendingSetNeedsUpdate;
    id <PXGMutableSpriteTexture> _emptyTexture;
    NSMutableSet *_placeholderTextures;
    id <PXGTextureManagerDelegate> _delegate;
    PXGTextureManagerPreheatingStrategy *_preheatingStrategy;
    PXGViewEnvironment *_viewEnvironment;
    NSDictionary *_texturesByPresentationType;
    NSArray *_textureAtlasManagers;
    long long _streamCount;
}

@property(readonly, nonatomic) long long streamCount; // @synthesize streamCount=_streamCount;
@property(retain) NSArray *textureAtlasManagers; // @synthesize textureAtlasManagers=_textureAtlasManagers;
@property(readonly, nonatomic) NSDictionary *texturesByPresentationType; // @synthesize texturesByPresentationType=_texturesByPresentationType;
@property(retain, nonatomic) PXGViewEnvironment *viewEnvironment; // @synthesize viewEnvironment=_viewEnvironment;
@property(retain, nonatomic) PXGTextureManagerPreheatingStrategy *preheatingStrategy; // @synthesize preheatingStrategy=_preheatingStrategy;
@property(nonatomic) __weak id <PXGTextureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1;
- (void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(id)arg1 didProvidePixelBuffer:(struct __CVBuffer *)arg2 orientationTransform:(struct CGAffineTransform)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(id)arg1 didProvideCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2;
- (BOOL)_getRequestDetails:(out CDStruct_fcaf9308 *)arg1 forRequestID:(int)arg2;
- (void)_processPixelBuffer:(struct __CVBuffer *)arg1 orientationTransform:(struct CGAffineTransform)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 forRequestID:(int)arg5 deliveryOrder:(unsigned int)arg6;
- (id)_createTextureForCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4;
- (void)_processCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 requestID:(int)arg5 deliveryOrder:(unsigned int)arg6;
- (void)_handleProvidedSpriteTexture:(id)arg1 fromTextureProvider:(id)arg2 requestID:(int)arg3 deliveryOrder:(unsigned int)arg4;
- (id)_textureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
- (id)_storeTexture:(id)arg1 forPayload:(id)arg2;
- (id)_storeTexture:(id)arg1 forPixelBuffer:(struct __CVBuffer *)arg2;
- (id)_storeTexture:(id)arg1 forCGImage:(struct CGImage *)arg2;
- (id)_storeTexture:(id)arg1 forKey:(id)arg2;
- (id)_existingTextureForPayload:(id)arg1 presentationType:(int)arg2;
- (id)_existingTextureForPixelBuffer:(struct __CVBuffer *)arg1 presentationType:(int)arg2;
- (id)_existingTextureForCGImage:(struct CGImage *)arg1 presentationType:(int)arg2;
- (id)_existingTextureForKey:(id)arg1 presentationType:(int)arg2;
- (void)_clearTexturesForPresentationType:(int)arg1;
- (void)simulateTextureLoad;
- (BOOL)streamUpdatedTexturesForDisplayLinkIfNeeded:(id)arg1;
- (struct CGImage *)textureSnapshotForSpriteIndex:(unsigned int)arg1;
- (void)_enumerateSpriteTextures:(CDUnknownBlockType)arg1;
- (long long)_processTextureProviderResults;
- (void)_lookupLock_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 textureProvider:(id)arg2 mediaKind:(int)arg3 presentationType:(int)arg4 isAppearing:(BOOL)arg5 layout:(id)arg6 leafSpriteIndexRange:(struct _PXGSpriteIndexRange)arg7 sprites:(CDStruct_92550dd7)arg8 textureStreamInfos:(CDStruct_875be80f *)arg9;
- (void)_blockOnThumbnailsIfNeededWithGeometries:(CDStruct_ac168a83 *)arg1 visibleRect:(struct CGRect)arg2 interactionState:(CDStruct_efb11229)arg3 fences:(id)arg4;
- (void)streamTexturesForSpritesInDataStore:(id)arg1 presentationDataStore:(id)arg2 changeDetails:(id)arg3 layout:(id)arg4 interactionState:(CDStruct_efb11229)arg5;
- (void)_resizeStorageIfNeededForSpriteCount:(long long)arg1;
- (void)_requestQueue_scheduleUpdateIfAllowed;
- (void)_requestQueue_setNeedsUpdate;
- (void)_setNeedsUpdate;
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;
- (id)_textureConverterForPresentationType:(int)arg1;
- (void)registerTextureConverter:(id)arg1 forPresentationType:(int)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

