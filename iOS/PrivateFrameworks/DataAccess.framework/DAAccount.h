//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, DAStatusReport, DATaskManager, DATrustHandler, NSArray, NSData, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DAAccount : NSObject
{
    ACAccount *_backingAccountInfo;
    _Bool _hasInitted;
    _Bool _shouldUseOpportunisticSockets;
    _Bool _wasUserInitiated;
    DAStatusReport *_statusReport;
    NSMapTable *_consumers;
    struct __CFURLStorageSession *_storageSession;
    NSString *_clientToken;
    DATaskManager *_taskManager;
    NSObject<OS_xpc_object> *_xpcActivity;
    int _continueCount;
    _Bool _isFetchingAutomatically;
    _Bool _shouldFailAllTasks;
    _Bool _isValidating;
    DATrustHandler *_trustHandler;
    NSArray *_appIdsForPasswordPrompt;
    NSString *_sourceApplicationBundleIdentifier;
    NSMutableDictionary *_dataclassPropertyURLsByDataclass;
    NSMutableArray *_pendingQueries;
    NSObject<OS_dispatch_queue> *_pendingQueryQueue;
    NSDate *_lastQueryStartedTime;
}

+ (id)_leafAccountTypesToCheckForEquality;
+ (id)daAccountSubclassWithBackingAccountInfo:(id)arg1;
+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (id)_leafAccountTypes;
@property(retain, nonatomic) NSDate *lastQueryStartedTime; // @synthesize lastQueryStartedTime=_lastQueryStartedTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingQueryQueue; // @synthesize pendingQueryQueue=_pendingQueryQueue;
@property(retain, nonatomic) NSMutableArray *pendingQueries; // @synthesize pendingQueries=_pendingQueries;
@property(retain, nonatomic) NSMutableDictionary *dataclassPropertyURLsByDataclass; // @synthesize dataclassPropertyURLsByDataclass=_dataclassPropertyURLsByDataclass;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) _Bool isValidating; // @synthesize isValidating=_isValidating;
@property(readonly, nonatomic) NSArray *appIdsForPasswordPrompt; // @synthesize appIdsForPasswordPrompt=_appIdsForPasswordPrompt;
@property(retain, nonatomic) DATrustHandler *trustHandler; // @synthesize trustHandler=_trustHandler;
@property(readonly, nonatomic) DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(nonatomic) _Bool wasUserInitiated; // @synthesize wasUserInitiated=_wasUserInitiated;
@property(nonatomic) _Bool shouldUseOpportunisticSockets; // @synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets;
@property(retain, nonatomic) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property(readonly, nonatomic) ACAccount *backingAccountInfo; // @synthesize backingAccountInfo=_backingAccountInfo;
- (void).cxx_destruct;
- (_Bool)getFetchingAutomaticallyState;
- (void)saveFetchingAutomaticallyState:(_Bool)arg1;
- (void)removeXpcActivity;
- (void)decrementXpcActivityContinueCount;
- (void)incrementXpcActivityContinueCount;
- (_Bool)hasXpcActivity;
- (void)saveXpcActivity:(id)arg1;
- (_Bool)shouldCancelTaskDueToOnPowerFetchMode;
- (id)accountTypeIdentifier;
- (id)protocolVersion;
- (void)reload;
- (void)shutdown;
- (id)description;
- (struct __CFURLStorageSession *)copyStorageSession;
- (_Bool)isSubscribedCalendarAccount;
- (_Bool)isGoogleAccount;
- (_Bool)isHotmailAccount;
- (_Bool)isCalDAVChildAccount;
- (_Bool)isDelegateAccount;
- (_Bool)isCardDAVAccount;
- (_Bool)isCalDAVAccount;
- (_Bool)isLDAPAccount;
- (_Bool)isActiveSyncAccount;
- (_Bool)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
@property(readonly, nonatomic) _Bool shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
- (void)resetStatusReport;
- (_Bool)resetCertWarnings;
@property(readonly, nonatomic) _Bool isChildAccount;
- (void)cleanupAccountFiles;
- (void)setExceptions:(struct __CFData *)arg1 forDigest:(id)arg2;
- (struct __CFData *)exceptionsForDigest:(id)arg1;
- (id)exceptionsDict;
- (_Bool)_isIdentityManagedByProfile;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSData *identityPersist;
- (_Bool)canSaveWithAccountProvider:(CDUnknownBlockType)arg1;
- (_Bool)preflightSaveWithAccountProvider:(CDUnknownBlockType)arg1;
- (id)addUsernameToURL:(id)arg1;
@property(readonly, nonatomic) int keychainAccessibilityType;
- (void)updateExistingAccountProperties;
- (void)saveAccountProperties;
- (void)saveAccountPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeClientCertificateData;
- (id)defaultContainerIdentifierForDADataclass:(long long)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (_Bool)monitorFolderWithID:(id)arg1;
- (_Bool)monitorFoldersWithIDs:(id)arg1;
- (void)tearDown;
- (id)oauthInfoProvider;
- (id)oauth2Token;
- (id)customConnectionProperties;
- (id)additionalHeaderValues;
- (_Bool)handleCertificateError:(id)arg1;
@property(readonly, nonatomic) NSSet *serverComplianceClasses;
@property(readonly, nonatomic) NSString *serverRoot;
@property(readonly, nonatomic) NSString *userAgentHeader;
- (void)accountDidChangeFromOldAccountInfo:(id)arg1;
- (void)removeDBSyncData;
- (_Bool)shouldRemoveDBSyncDataOnAccountChange;
- (id)onBehalfOfBundleIdentifier;
@property(readonly, nonatomic) _Bool shouldAutodiscoverAccountProperties;
@property(nonatomic) _Bool shouldDoInitialAutodiscovery;
- (_Bool)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (_Bool)saveModifiedPropertiesOnBackingAccount;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2 inQueue:(id)arg3;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2;
@property(copy, nonatomic) NSURL *principalURL;
@property(readonly, copy, nonatomic) NSString *scheme;
@property(copy, nonatomic) NSString *principalPath;
@property(nonatomic) long long port;
@property(retain, nonatomic) NSData *encryptionIdentityPersistentReference;
@property(retain, nonatomic) NSData *signingIdentityPersistentReference;
- (_Bool)accountContainsEmailAddress:(id)arg1;
@property(copy, nonatomic) NSArray *emailAddresses;
@property(copy, nonatomic) NSString *emailAddress;
@property(nonatomic) _Bool useSSL;
@property(copy, nonatomic) NSString *host;
- (id)domainOnly;
- (id)usernameWithoutDomain;
- (long long)portFromDataclassPropertiesForDataclass:(id)arg1;
- (_Bool)useSSLFromDataclassPropertiesForDataclass:(id)arg1;
- (id)hostFromDataclassPropertiesForDataclass:(id)arg1;
- (id)urlFromDataclassPropertiesForDataclass:(id)arg1;
- (void)performUsingAccountPersona:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *password;
- (id)passwordWithExpected:(_Bool)arg1;
- (void)clientTokenRequestedByServer;
@property(readonly, copy, nonatomic) NSString *clientToken;
- (void)removeConsumerForTask:(id)arg1;
- (id)consumerForTask:(id)arg1;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (id)stateString;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (int)accountIntPropertyForKey:(id)arg1;
- (void)setAccountBoolProperty:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)accountBoolPropertyForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
- (id)spinnerIdentifiers;
- (id)dataclassProperties;
@property(readonly, nonatomic) long long enabledDataclassesBitmask;
- (void)setEnabled:(_Bool)arg1 forDADataclass:(long long)arg2;
- (_Bool)enabledForDADataclass:(long long)arg1;
- (_Bool)enabledForAnyDADataclasses:(long long)arg1;
- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (_Bool)isDisabled;
@property(copy, nonatomic) NSString *user;
@property(copy, nonatomic) NSString *username;
- (id)displayName;
@property(copy, nonatomic) NSString *accountDescription;
@property(readonly, nonatomic) NSString *publicDescription;
@property(readonly, nonatomic) NSString *changeTrackingID;
- (void)_setPersistentUUID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *persistentUUID;
@property(readonly, nonatomic) NSString *scheduleIdentifier;
- (id)syncStoreIdentifier;
@property(readonly, nonatomic) NSString *accountID;
- (void)resetAccountID;
- (_Bool)upgradeAccount;
@property(nonatomic, setter=setDAAccountVersion:) int daAccountVersion;
- (id)containerProviderWithDBHelper:(id)arg1;
- (id)accountsProviderWithDBHelper:(id)arg1;
- (void)ingestBackingAccountInfoProperties;
- (void)_refreshCredential;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)dealloc;
- (_Bool)handleTrustChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)handleTrustChallenge:(id)arg1;
- (id)getAppleIDSession;
- (void)removeFromCoreDAVLoggingDelegates;
- (void)addToCoreDAVLoggingDelegates;
- (void)handleValidationError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dropAssertionsAndRenewCredentialsInQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (id)reportShareRequestAsJunkForCalendar:(id)arg1 consumer:(id)arg2;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(long long)arg2 consumer:(id)arg3;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4;
- (void)cancelUpdateGrantedDelegatePermissionRequestWithID:(id)arg1;
- (id)updateGrantedDelegatePermission:(id)arg1 consumer:(id)arg2;
- (void)cancelGrantedDelegatesListRequestWithID:(id)arg1;
- (id)requestGrantedDelegatesListWithConsumer:(id)arg1;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (_Bool)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(_Bool)arg5 isResyncAfterConnectionFailed:(_Bool)arg6 moreLocalChangesAvailable:(_Bool)arg7 consumer:(id)arg8;
- (id)eventsFolders;
- (id)defaultEventsFolder;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(_Bool)arg6 isResyncAfterConnectionFailed:(_Bool)arg7 previousTagIsSuspect:(_Bool)arg8 moreLocalChangesAvailable:(_Bool)arg9 consumer:(id)arg10;
- (id)contactsFolders;
- (id)defaultContactsFolder;
- (id)draftsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (_Bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (_Bool)isOofSupported;
- (void)retrieveOofSettingsForConsumer:(id)arg1;
- (void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (_Bool)searchQueriesRunning;
- (void)cancelAllSearchQueries;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (void)_dequeueQuery;
- (id)getPendingQueryQueue;
- (_Bool)_reallySearchQueriesRunning;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelPendingSearchQuery:(id)arg1;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (int)toDosNumberOfPastDaysToSync;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(_Bool)arg5 isResyncAfterConnectionFailed:(_Bool)arg6 moreLocalChangesAvailable:(_Bool)arg7 consumer:(id)arg8;
- (id)toDosFolders;
- (id)defaultToDosFolder;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(_Bool)arg7 isResyncAfterConnectionFailed:(_Bool)arg8 moreLocalChangesAvailable:(_Bool)arg9 consumer:(id)arg10;
- (id)notesFolders;
- (id)defaultNotesFolder;

@end

