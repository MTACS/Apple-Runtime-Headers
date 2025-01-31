//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSFileProviderItem_Private-Protocol.h>

@class CSSearchableItem, CSSearchableItemAttributeSet, NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL;
@protocol NSFileProviderItemFlags;

__attribute__((visibility("hidden")))
@interface _CSSearchableItemAdapter : NSObject <NSFileProviderItem_Private>
{
    CSSearchableItem *_item;
}

+ (id)fp_queryFetchAttributes;
@property(readonly, nonatomic) CSSearchableItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
@property(readonly, copy) NSString *fp_cloudContainerIdentifier;
@property(readonly) BOOL fp_isContainerPristine;
@property(readonly) BOOL fp_isContainer;
- (id)fp_appContainerBundleIdentifier;
- (id)sharingCurrentUserPermissions;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
- (BOOL)isDataless;
- (BOOL)isRecursivelyDownloaded;
@property(readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
- (id)formerIdentifier;
@property(readonly, copy) NSString *fp_parentDomainIdentifier;
- (BOOL)isInPinnedFolder;
- (BOOL)isPinned;
@property(readonly, nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, nonatomic, getter=isUploading) BOOL uploading;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property(readonly, nonatomic) NSData *versionIdentifier;
@property(readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property(readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, copy, nonatomic) NSData *tagData;
- (id)tags;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, copy) NSURL *fileURL;
@property(readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property(readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property(readonly, nonatomic) NSString *preformattedOwnerName;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property(readonly, nonatomic, getter=isShared) BOOL shared;
@property(readonly, copy, nonatomic) NSNumber *favoriteRank;
- (id)containerSubitemCount;
- (id)sharingCurrentUserRole;
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property(readonly, copy) NSString *providerIdentifier;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
@property(readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet;
- (id)initWithSearchableItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property(readonly, nonatomic) NSDictionary *extendedAttributes;
@property(readonly, copy) NSString *fileSystemFilename;
@property(readonly, nonatomic) id <NSFileProviderItemFlags> flags;
@property(readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHidden) BOOL hidden;
@property(readonly, copy) NSString *sharingPermissions;
@property(readonly) Class superclass;

@end

