//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICAttachmentModelUI-Protocol.h>
#import <NotesShared/QLPreviewItem-Protocol.h>

@class ICAttachment, NSString, NSURL;

@interface ICAttachmentModel : NSObject <ICAttachmentModelUI, QLPreviewItem>
{
    _Bool _previewGenerationOperationCancelled;
    _Bool _mergeableDataDirty;
    ICAttachment *_attachment;
}

+ (void)deletePreviewItemHardLinkURLs;
+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
@property(nonatomic, getter=isMergeableDataDirty) _Bool mergeableDataDirty; // @synthesize mergeableDataDirty=_mergeableDataDirty;
@property(readonly, nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
@property _Bool previewGenerationOperationCancelled; // @synthesize previewGenerationOperationCancelled=_previewGenerationOperationCancelled;
- (void).cxx_destruct;
- (id)mergeableDataForCopying;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)providerFileTypes;
- (id)providerDataTypes;
- (id)dataForQuickLook;
@property(readonly, nonatomic) _Bool supportsQuickLook;
@property(readonly, nonatomic) NSString *previewItemTitle;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1 withFileName:(id)arg2;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (id)generateTemporaryURLWithExtension:(id)arg1;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)titleForSubAttachment:(id)arg1;
- (id)hardLinkFolderPath;
- (_Bool)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (void)noteWillAddOrRemovePassword;
- (id)localizedFallbackSubtitleMac;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackTitle;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)addLocation;
- (void)updateFileBasedAttributes;
- (_Bool)isReadyToPresent;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
- (void)willMarkAttachmentForDeletion;
- (void)undeleteSubAttachments;
- (void)deleteSubAttachments;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(_Bool)arg1;
- (_Bool)shouldCropImage;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (_Bool)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (short)sectionForSubAttachments;
- (void)updateAttachmentSize;
- (void)attachmentIsDeallocating:(id)arg1;
- (void)attachmentDidRefresh:(_Bool)arg1;
- (void)attachmentWillRefresh:(_Bool)arg1;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentAwakeFromFetch;
- (id)attachmentModelType;
- (id)additionalIndexableTextContentInNote;
- (id)standaloneTitleForNote;
- (_Bool)providesStandaloneTitleForNote;
- (id)textContentInNote;
- (void)regenerateTextContentInNote;
- (_Bool)providesTextContentInNote;
- (id)searchableTextContentInNote;
- (id)searchableTextContentForLocation;
- (id)searchableTextContent;
@property(readonly, nonatomic) _Bool canSaveURLWithOtherAttachments;
@property(readonly, nonatomic) _Bool canSaveURL;
@property(readonly, nonatomic) NSURL *saveURL;
@property(readonly, nonatomic) _Bool canMarkup;
@property(readonly, nonatomic) _Bool showThumbnailInNoteList;
@property(readonly, nonatomic) _Bool hasThumbnailImage;
@property(readonly, nonatomic) NSString *hardLinkVersion;
@property(readonly, nonatomic) NSString *previewImageTypeUTI;
@property(readonly, nonatomic) _Bool supportsImageClassification;
@property(readonly, nonatomic) _Bool supportsOCR;
@property(readonly, nonatomic) _Bool requiresPostProcessing;
@property(readonly, nonatomic) _Bool needsFullSizePreview;
@property(readonly, nonatomic) _Bool preferLocalPreviewImages;
@property(readonly, nonatomic) _Bool previewsSupportMultipleAppearances;
@property(readonly, nonatomic) _Bool hasPreviews;
- (void)writeMergeableData;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (_Bool)shouldShowInContentInfoText;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

