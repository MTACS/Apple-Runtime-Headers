//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (UIDocumentPicker)
+ (id)ui_incomingDirectory:(_Bool)arg1;
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)ui_cloudDocsContainerURL;
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)mapsURLWithQuery:(id)arg1;
- (id)ui_URLByResolvingSymlinksAndCopyingSecurityScope;
- (id)ui_downloadOperationForActivity:(id)arg1;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (void)ui_scheduleForCleanup;
- (id)ui_bookmarkForExportWithError:(id *)arg1;
- (_Bool)ui_isContentManaged;
- (void)ui_setIsContentManaged:(_Bool)arg1;
- (_Bool)ui_isUnfulfilledPromiseURL;
- (_Bool)ui_canOpenInPlace;
- (void)ui_setIsFileProviderURL:(_Bool)arg1;
- (_Bool)ui_isFileProviderURL;
- (_Bool)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (_Bool)ui_hasReadSandboxExtended;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id *)arg1;
- (id)ui_issueReadSandboxExtensionWithError:(id *)arg1;
- (_Bool)isHTTPOrHTTPSURL;
- (_Bool)isJavaScriptURL;
- (_Bool)isAccountURL;
- (_Bool)isWebcalURL;
- (_Bool)isSpringboardHandledURL;
- (id)searchResultIdentifier;
- (id)searchResultDomain;
- (id)radarWebURL;
- (id)phobosURL;
- (void)_domain:(id *)arg1 subdomain:(id *)arg2;
- (_Bool)isInternalUIKitURL;
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;
- (id)_NSItemProviderArchive_customArchiveDictionary;
@property(copy, nonatomic, setter=_setTitle:) NSString *_title;
@end

