//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (BRCPathAdditions)
+ (id)br_pathForDirectory:(unsigned long long)arg1;
+ (id)br_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(BOOL)arg4;
+ (id)br_emptyFilenameAlternativeName;
+ (id)br_pathWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
+ (id)br_pathWithFileSystemRepresentation:(const char *)arg1;
- (id)br_pathRelativeToDirectory:(unsigned long long)arg1;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1 andPathExtension:(id *)arg2;
- (BOOL)br_isSideFaultName;
- (BOOL)br_isEqualToStringForHFS:(id)arg1 isCaseSensitive:(BOOL)arg2;
- (long long)br_compareToStringForHFS:(id)arg1 isCaseSensitive:(BOOL)arg2;
- (id)br_representableDirectoryName;
- (id)br_sideFaultName;
- (id)br_sideFaultPath;
- (id)br_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(BOOL)arg3;
- (id)brc_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(BOOL)arg3;
- (BOOL)br_nameIsRepresentableOnHFS;
- (id)br_realpath;
- (id)br_realpathKeepingLastSymlink;
- (const char *)br_fileSystemRepresentation;
- (BOOL)br_isAbsolutePath;
- (id)br_pathRelativeToPath:(id)arg1;
- (id)br_pathRelativeToPackageRoot;
- (id)br_pathOfPackageRoot;
- (BOOL)br_isPackageRoot;
- (BOOL)br_isInPackage;
- (BOOL)br_isExcludedWithMaximumDepth:(unsigned int)arg1;
- (BOOL)br_isExcludedButPreservedAtLogOutWithFilenames:(id)arg1 extensions:(id)arg2;
- (BOOL)br_isDocumentTooLargeForUpload:(BOOL)arg1 maxUploadDocumentSize:(long long)arg2;
- (id)br_displayFilenameWithExtensionHidden:(BOOL)arg1;
- (id)brc_stringByDeletingPathExtension;
- (id)br_pathExtension;
- (id)brc_libnotifyPerUserNotificationName;
- (id)brc_stringByBackslashEscapingCharactersInString:(id)arg1;
@end

