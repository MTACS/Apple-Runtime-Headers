//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DDScannerResult, IMChat, IMMessage, IMPluginPayload, LPLinkMetadata, NSArray, NSAttributedString, NSData, NSMutableSet, NSString, NSURL;

@interface IMBalloonPluginDataSource : NSObject
{
    _Bool _payloadInShelf;
    _Bool _initialMessageIsFromMe;
    _Bool _isLast;
    _Bool _isShowingLatestMessageAsBreadcrumb;
    _Bool _hasInvalidatedSize;
    _Bool _parentChatHasAllUnknownRecipients;
    _Bool _showingLatestMessageAsBreadcrumb;
    IMChat *_chat;
    IMPluginPayload *_pluginPayload;
    NSURL *_url;
    DDScannerResult *_dataDetectedResult;
    NSArray *_attachmentGUIDs;
    NSURL *_URLToOpenOnTapAction;
    NSArray *_pendingAttachmentData;
    NSMutableSet *_temporaryAttachmentURLs;
    NSString *__imMessageGUID;
    NSString *_messageGUID;
    NSString *_sessionGUID;
    NSString *_bundleID;
    NSArray *_consumedPayloads;
    NSString *_guidOfLastMessageInSession;
    long long _messageIDOfLastMessageInSession;
}

+ (id)replaceHandleWithContactNameInString:(id)arg1 forAccount:(id)arg2 additionalHandles:(id)arg3;
+ (_Bool)supportsIndividualPreviewSummaries;
+ (id)individualPreviewSummaryForPluginPayload:(id)arg1;
+ (id)previewSummary;
+ (id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id *)arg3 previewAttachmentUTI:(id *)arg4;
+ (id)previewSummaryForPluginBundle:(id)arg1;
+ (id)unlocalizedPreviewSummaryForPluginBundle:(id)arg1 pluginDisplayName:(id)arg2;
+ (_Bool)supportsURL:(id)arg1;
@property(readonly, nonatomic) long long messageIDOfLastMessageInSession; // @synthesize messageIDOfLastMessageInSession=_messageIDOfLastMessageInSession;
@property(readonly, retain, nonatomic) NSString *guidOfLastMessageInSession; // @synthesize guidOfLastMessageInSession=_guidOfLastMessageInSession;
@property(readonly, nonatomic, getter=isShowingLatestMessageAsBreadcrumb) _Bool showingLatestMessageAsBreadcrumb; // @synthesize showingLatestMessageAsBreadcrumb=_showingLatestMessageAsBreadcrumb;
@property(nonatomic) _Bool parentChatHasAllUnknownRecipients; // @synthesize parentChatHasAllUnknownRecipients=_parentChatHasAllUnknownRecipients;
@property(retain, nonatomic) NSArray *consumedPayloads; // @synthesize consumedPayloads=_consumedPayloads;
@property(nonatomic) _Bool hasInvalidatedSize; // @synthesize hasInvalidatedSize=_hasInvalidatedSize;
@property(readonly, retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property(retain, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(nonatomic, setter=setShowingLatestMessageAsBreadcrumb:) _Bool isShowingLatestMessageAsBreadcrumb; // @synthesize isShowingLatestMessageAsBreadcrumb=_isShowingLatestMessageAsBreadcrumb;
@property(retain, nonatomic) NSString *_imMessageGUID; // @synthesize _imMessageGUID=__imMessageGUID;
@property(retain, nonatomic) NSMutableSet *temporaryAttachmentURLs; // @synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs;
@property(retain, nonatomic) NSArray *pendingAttachmentData; // @synthesize pendingAttachmentData=_pendingAttachmentData;
@property(nonatomic, setter=setLast:) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) _Bool initialMessageIsFromMe; // @synthesize initialMessageIsFromMe=_initialMessageIsFromMe;
@property(readonly, nonatomic) NSURL *URLToOpenOnTapAction; // @synthesize URLToOpenOnTapAction=_URLToOpenOnTapAction;
@property(retain, nonatomic) NSArray *attachmentGUIDs; // @synthesize attachmentGUIDs=_attachmentGUIDs;
@property(retain, nonatomic) DDScannerResult *dataDetectedResult; // @synthesize dataDetectedResult=_dataDetectedResult;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool payloadInShelf; // @synthesize payloadInShelf=_payloadInShelf;
@property(retain, nonatomic) IMPluginPayload *pluginPayload; // @synthesize pluginPayload=_pluginPayload;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
- (void).cxx_destruct;
- (id)description;
- (void)_reloadLatestUnconsumedBreadcrumb;
- (void)endShowingLastConsumedBreadcrumb;
- (void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1;
- (id)_replaceHandleWithContactNameInString:(id)arg1;
@property(readonly, nonatomic) LPLinkMetadata *richLinkMetadata;
- (void)datasourceWasMovedToNewGuid:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)individualPreviewAttachmentFileAndUTI:(id *)arg1;
- (id)_summaryText;
- (id)individualPreviewSummary;
- (void)stopPlayback;
- (void)playbackWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)playbackType;
- (void)markAsPlayed;
- (void)needsResize;
@property(readonly, nonatomic) _Bool supportsDynamicSize;
- (void)statusStringNeedsUpdate;
@property(readonly, nonatomic) _Bool wantsReplyFromContentView;
- (void)didTapStatusItem;
@property(readonly, retain, nonatomic) NSAttributedString *statusAttributedString;
@property(readonly, retain, nonatomic) NSString *statusString;
@property(readonly, nonatomic) _Bool wantsStatusItem;
- (void)payloadWillSendFromShelf;
- (void)payloadWillEnterShelf;
- (void)thumbnailURLWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)payloadDidChange;
- (void)pluginPayloadDidChange:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) _Bool isFromMe;
- (unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (void)_removeTemporaryAttachmentURLs;
- (void)_updateTemporaryAttachmentURLsForPluginPayload;
- (_Bool)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2;
- (void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (void)updatePayload:(id)arg1 attachments:(id)arg2;
- (void)updatePayload:(id)arg1;
- (void)sendPayload:(id)arg1 attachments:(id)arg2;
- (void)sendPayload:(id)arg1;
@property(readonly, nonatomic) IMMessage *imMessage;
@property(readonly, retain, nonatomic) NSData *messagePayloadDataForSending;
- (void)setPayload:(id)arg1 attachments:(id)arg2;
@property(retain, nonatomic) NSData *payload;
@property(readonly, nonatomic) NSArray *allPayloads;
- (id)initWithPluginPayload:(id)arg1;
- (id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4;

@end

