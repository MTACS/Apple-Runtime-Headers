//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class CSSearchableItem, EFInvocationToken, EFSandboxedURLWrapper, EMListUnsubscribeCommand, EMMessage, EMSecurityInformation, NSArray, NSString, NSURL;
@protocol EMContentItem, _EMDistantContentRepresentation;

@interface EMContentRepresentation : NSObject <NSSecureCoding, EFLoggable, EFPubliclyDescribable>
{
    EFInvocationToken *_invocable;
    _Bool _claimedScopedResource;
    _Bool _hasMoreContent;
    id <EMContentItem> _contentItem;
    NSURL *_publicMessageURL;
    NSArray *_replyToList;
    EMMessage *_contentMessage;
    NSArray *_relatedContentItems;
    EMSecurityInformation *_securityInformation;
    CSSearchableItem *_searchableItem;
    EMListUnsubscribeCommand *_unsubscribeCommand;
    EFSandboxedURLWrapper *_urlWrapper;
    id <_EMDistantContentRepresentation> _distantContentRepresentation;
    CDUnknownBlockType _requestMoreContentBlock;
    long long _remainingByteCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)temporaryURLWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 pathExtension:(id)arg4 cleanupInvocable:(id *)arg5 error:(id *)arg6;
+ (id)distantContentRepresentationInterface;
+ (id)log;
@property(copy, nonatomic) CDUnknownBlockType requestMoreContentBlock; // @synthesize requestMoreContentBlock=_requestMoreContentBlock;
@property(retain, nonatomic) id <_EMDistantContentRepresentation> distantContentRepresentation; // @synthesize distantContentRepresentation=_distantContentRepresentation;
@property(retain, nonatomic) EFSandboxedURLWrapper *urlWrapper; // @synthesize urlWrapper=_urlWrapper;
@property(nonatomic) long long remainingByteCount; // @synthesize remainingByteCount=_remainingByteCount;
@property(nonatomic) _Bool hasMoreContent; // @synthesize hasMoreContent=_hasMoreContent;
@property(retain, nonatomic) EMListUnsubscribeCommand *unsubscribeCommand; // @synthesize unsubscribeCommand=_unsubscribeCommand;
@property(retain, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
@property(retain, nonatomic) EMSecurityInformation *securityInformation; // @synthesize securityInformation=_securityInformation;
@property(copy, nonatomic) NSArray *relatedContentItems; // @synthesize relatedContentItems=_relatedContentItems;
@property(retain, nonatomic) EMMessage *contentMessage; // @synthesize contentMessage=_contentMessage;
@property(copy, nonatomic) NSArray *replyToList; // @synthesize replyToList=_replyToList;
@property(retain, nonatomic) NSURL *publicMessageURL; // @synthesize publicMessageURL=_publicMessageURL;
@property(nonatomic) __weak id <EMContentItem> contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (void)mergeUpdatedRepresentation:(id)arg1;
- (id)requestAdditionalContentWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_distantLoaderBlockForContentItem:(id)arg1;
- (void)invalidate;
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContentMessage:(id)arg1;
- (id)initWithData:(id)arg1 clientIdentifier:(id)arg2 extension:(id)arg3 relatedItems:(id)arg4 securityInformation:(id)arg5;
- (id)initWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 extension:(id)arg4 relatedItems:(id)arg5 securityInformation:(id)arg6;
- (id)initWithContentURL:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3;
- (id)_initWithSandboxedURLWrapper:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3;
- (id)_initWithRelatedItems:(id)arg1 securityInformation:(id)arg2;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

