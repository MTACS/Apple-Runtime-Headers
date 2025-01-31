//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BOXURLSessionCacheClientDelegate;

@interface BOXURLSessionCacheClient : NSObject
{
    id <BOXURLSessionCacheClientDelegate> _delegate;
    NSString *_cacheDir;
}

@property(copy, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(nonatomic) __weak id <BOXURLSessionCacheClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)stringToUnsignedInteger:(id)arg1;
- (id)backgroundSessionIdAndSessionTaskIdForUserId:(id)arg1 associateId:(id)arg2 error:(id *)arg3;
- (id)parseBackgroundSessionIdAndSessionTaskIdFileName:(id)arg1;
- (id)fileNameGivenBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2;
- (id)dirPathOfUserId:(id)arg1;
- (id)dirPathOfUsers;
- (id)filePathOfUserSessionTaskGivenUserId:(id)arg1 associateId:(id)arg2 backgroundSessionId:(id)arg3 sessionTaskId:(unsigned long long)arg4;
- (id)dirPathOfSessionTaskFileGivenUserId:(id)arg1 associateId:(id)arg2;
- (id)dirPathOfSessionTaskGivenUserId:(id)arg1 associateId:(id)arg2;
- (id)dirPathOfExtensionSessions;
- (id)dirPathOfSessionTaskWithBackgroundSessionId:(id)arg1;
- (id)dirPathOfSessionTaskWithBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2;
- (_Bool)createFile:(id)arg1 error:(id *)arg2;
- (_Bool)deleteDirectory:(id)arg1 error:(id *)arg2;
- (_Bool)createDirectory:(id)arg1 error:(id *)arg2;
- (id)filePathOfUserInfoForBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 userId:(id)arg3 associateId:(id)arg4;
- (_Bool)createDirForBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)createFileForUserId:(id)arg1 associateId:(id)arg2 backgroundSessionId:(id)arg3 sessionTaskId:(unsigned long long)arg4 error:(id *)arg5;
- (id)backgroundSessionIdsFromExtensionsWithError:(id *)arg1;
- (id)filePathOfExtensionBackgrounSessionId:(id)arg1;
- (_Bool)cacheBackgroundSessionIdFromExtension:(id)arg1 error:(id *)arg2;
- (_Bool)cleanUpExtensionBackgrounSessionIdIfExists:(id)arg1 error:(id *)arg2;
- (_Bool)cacheAndAttemptToEncryptData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)filePathForBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (_Bool)cacheBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 data:(id)arg3 type:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)cacheBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 userId:(id)arg3 associateId:(id)arg4 error:(id *)arg5;
- (_Bool)cleanUpOnGoingCachedInfoOfBackgroundSessionId:(id)arg1 error:(id *)arg2;
- (id)associateIdsForUserId:(id)arg1 error:(id *)arg2;
- (id)associateIdToBackgroundSessionIdAndSessionTaskIdsForUserId:(id)arg1 error:(id *)arg2;
- (_Bool)cleanUpForUserIdIfEmpty:(id)arg1 error:(id *)arg2;
- (_Bool)cleanUpOnGoingSessionTaskOfUserId:(id)arg1 associateId:(id)arg2 error:(id *)arg3;
- (_Bool)deleteCachedInfoForUserId:(id)arg1 associateId:(id)arg2 error:(id *)arg3;
- (id)unencryptedDataAtFilePath:(id)arg1;
- (id)userIdAndAssociateIdForBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2;
- (_Bool)resumeCompletedDownloadSessionTaskForUserId:(id)arg1 associateId:(id)arg2 error:(id *)arg3;
- (id)resumeDataForUserId:(id)arg1 associateId:(id)arg2;
- (id)responseDataForBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2;
- (id)destinationFilePathForBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2;
- (id)cachedInfoFromDir:(id)arg1 forBackgroundSessionId:(id)arg2 sessionTaskId:(unsigned long long)arg3 error:(id *)arg4;
- (id)completedCachedInfoForUserId:(id)arg1 associateId:(id)arg2 error:(id *)arg3;
- (id)completedDirForSessionTaskOfUserId:(id)arg1 associateId:(id)arg2;
- (_Bool)isSessionTaskCompletedForUserId:(id)arg1 associateId:(id)arg2;
- (_Bool)completeOnGoingSessionTasksForBackgroundSessionId:(id)arg1 excludingSessionTaskIds:(id)arg2 error:(id *)arg3;
- (id)onGoingSessionTasksForBackgroundSessionId:(id)arg1 error:(id *)arg2;
- (_Bool)completeSessionTaskForBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)cacheBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 taskError:(id)arg3 error:(id *)arg4;
- (_Bool)cacheBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 response:(id)arg3 error:(id *)arg4;
- (_Bool)cacheBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 resumeData:(id)arg3 error:(id *)arg4;
- (_Bool)cacheBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 responseData:(id)arg3 error:(id *)arg4;
- (_Bool)cacheBackgroundSessionId:(id)arg1 sessionTaskId:(unsigned long long)arg2 destinationFilePath:(id)arg3 error:(id *)arg4;
- (id)createFileCoordinator;
- (_Bool)cacheUserId:(id)arg1 associateId:(id)arg2 backgroundSessionId:(id)arg3 sessionTaskId:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithCacheRootDir:(id)arg1;

@end

