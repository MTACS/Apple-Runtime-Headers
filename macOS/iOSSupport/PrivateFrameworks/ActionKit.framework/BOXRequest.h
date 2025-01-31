//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFFileStorageServiceOperation-Protocol.h>

@class BOXAPIOperation, BOXAPIQueueManager, NSString, NSURLRequest;
@protocol BOXContentCacheClientProtocol;

@interface BOXRequest : NSObject <WFFileStorageServiceOperation>
{
    NSString *_baseURL;
    NSString *_uploadBaseURL;
    NSString *_userAgentPrefix;
    NSString *_SDKIdentifier;
    NSString *_SDKVersion;
    id <BOXContentCacheClientProtocol> _cacheClient;
    BOXAPIQueueManager *_queueManager;
    BOXAPIOperation *_operation;
}

+ (BOOL)shouldRemoveCachedResponseForError:(id)arg1;
+ (id)itemsWithJSON:(id)arg1;
+ (id)itemWithJSON:(id)arg1;
@property(retain, nonatomic) BOXAPIOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) BOXAPIQueueManager *queueManager; // @synthesize queueManager=_queueManager;
@property(nonatomic) id <BOXContentCacheClientProtocol> cacheClient; // @synthesize cacheClient=_cacheClient;
@property(retain, nonatomic) NSString *SDKVersion; // @synthesize SDKVersion=_SDKVersion;
@property(retain, nonatomic) NSString *SDKIdentifier; // @synthesize SDKIdentifier=_SDKIdentifier;
@property(retain, nonatomic) NSString *userAgentPrefix; // @synthesize userAgentPrefix=_userAgentPrefix;
@property(retain, nonatomic) NSString *uploadBaseURL; // @synthesize uploadBaseURL=_uploadBaseURL;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)nonEmptyFilename:(id)arg1;
- (id)userAgent;
- (id)deviceModelName;
- (id)fullCollaborationFieldsParameterString;
- (id)fullUserFieldsParameterString;
- (id)fullCommentFieldsParameterString;
- (id)fullItemFieldsParameterStringExcludingFields:(id)arg1;
- (id)fullItemFieldsParameterString;
- (id)fullBookmarkFieldsParameterString;
- (id)fullBookmarkFieldsArray;
- (id)fullFileFieldsParameterString;
- (id)fullFileFieldsArray;
- (id)fullFolderFieldsParameterString;
- (id)fullFolderFieldsArray;
- (id)authOperationWithURL:(id)arg1 HTTPMethod:(struct NSString *)arg2 bodyDictionary:(id)arg3 JSONSuccessBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)dataStreamOperationWithURL:(id)arg1 HTTPMethod:(struct NSString *)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)headOperationWithURL:(id)arg1 HTTPMethod:(struct NSString *)arg2 queryStringParameters:(id)arg3 bodyDictionary:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)dataOperationWithURL:(id)arg1 HTTPMethod:(struct NSString *)arg2 queryStringParameters:(id)arg3 bodyDictionary:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 associateId:(id)arg7;
- (id)dataOperationWithURL:(id)arg1 HTTPMethod:(struct NSString *)arg2 queryStringParameters:(id)arg3 bodyDictionary:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)JSONPatchOperationWithURL:(id)arg1 HTTPMethod:(struct NSString *)arg2 queryStringParameters:(id)arg3 bodyArray:(id)arg4 JSONSuccessBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)JSONOperationWithURL:(id)arg1 HTTPMethod:(struct NSString *)arg2 queryStringParameters:(id)arg3 bodyDictionary:(id)arg4 JSONSuccessBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)uploadURLWithResource:(id)arg1 ID:(id)arg2 subresource:(id)arg3;
- (id)URLWithResource:(id)arg1 ID:(id)arg2 subresource:(id)arg3 subID:(id)arg4;
- (id)URLWithResource:(id)arg1 ID:(id)arg2 subresource:(id)arg3 subID:(id)arg4 baseURL:(id)arg5;
- (void)prepareOperation;
- (id)createOperation;
- (void)cancel;
- (void)performRequest;
@property(readonly, nonatomic) NSURLRequest *urlRequest;
- (id)URLWithBaseURL:(id)arg1 resource:(id)arg2 ID:(id)arg3 subresource:(id)arg4 scope:(id)arg5 template:(id)arg6;
- (id)URLWithResource:(id)arg1 ID:(id)arg2 subresource:(id)arg3 scope:(id)arg4 template:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

