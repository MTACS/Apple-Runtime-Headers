//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoDCFObject.h>

@class PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject
{
    PLPhotoDCIMDirectory *_dcimDirectory;
    struct __CFDictionary *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
    _Bool _considerInvalidFileGroups;
}

+ (id)fileGroupRequiredEmptyExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (void)initializeFileGroupPrefixAndExtensions;
@property _Bool considerInvalidFileGroups; // @synthesize considerInvalidFileGroups=_considerInvalidFileGroups;
- (void).cxx_destruct;
- (void)setWriteIsPending:(_Bool)arg1;
- (void)removeFileGroup:(id)arg1;
- (id)nextAvailableVideoFileGroupWithExtension:(id)arg1;
- (id)nextAvailableFileGroup;
- (id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2;
- (id)fileGroups;
- (_Bool)isEntensionValid:(id)arg1;
- (void)ensureDirectoryExists;
- (id)fullPath;
- (_Bool)canAddVideo;
- (_Bool)canAddImage;
- (_Bool)_canAddItemWithPrefix:(id)arg1;
- (_Bool)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2;
- (_Bool)canAddFileGroupWithGroupNumber:(int)arg1;
- (unsigned int)_calculateBaseDirectoryValue;
- (id)dcimDirectory;
- (void)dealloc;
- (id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3;
- (id)_lastUsedFileGroupUserInfoKey;

@end

