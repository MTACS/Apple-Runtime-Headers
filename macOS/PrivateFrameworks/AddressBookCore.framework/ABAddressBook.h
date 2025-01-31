//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABDistributedNotificationListenerDelegate-Protocol.h>
#import <AddressBookCore/CNCDPersistenceBackend-Protocol.h>
#import <AddressBookCore/CalendarAgentClient-Protocol.h>

@class ABAddressBookImpl, ABDistributedNotificationListener, ABPersistentStoreCoordinatorCache, NSMutableDictionary, NSString, NSTimer;

@interface ABAddressBook : NSObject <ABDistributedNotificationListenerDelegate, CalendarAgentClient, CNCDPersistenceBackend>
{
    id _reserved8;
    void *_reserved2;
    void *_reserved3;
    id _reserved4;
    NSMutableDictionary *_tableSchemas;
    NSMutableDictionary *_reserved5;
    void *_converterPort;
    NSTimer *_inactivityTimer;
    id _reserved;
    id _reserved1;
    void *_reserved6;
    void *_reserved7;
    struct __ABBookflags {
        unsigned int hasUnsavedChanges:1;
        unsigned int readOnly:1;
        unsigned int importMe:1;
        unsigned int needConversion:1;
        unsigned int cleanedUp:1;
        unsigned int importTips:1;
        unsigned int restoreFromMetaData:1;
        unsigned int prefsNeedSync:1;
        unsigned int waitingForReset:1;
        unsigned int enforcesConstraints:1;
        unsigned int tracksAllSources:1;
        unsigned int _reserved:21;
    } _flags;
    ABDistributedNotificationListener *_distributedListener;
}

+ (id)resultWithGlobalAPILockOnly:(CDUnknownBlockType)arg1;
+ (void)runWithGlobalAPILockOnly:(CDUnknownBlockType)arg1;
+ (void)abGlobalAPIUnlockInFile:(const char *)arg1 line:(unsigned long long)arg2 contextBlock:(CDUnknownBlockType)arg3 togglingSuddenTermination:(BOOL)arg4;
+ (void)abGlobalAPIUnlockInFile:(const char *)arg1 line:(unsigned long long)arg2 contextBlock:(CDUnknownBlockType)arg3;
+ (void)abGlobalAPILockInFile:(const char *)arg1 line:(unsigned long long)arg2 contextBlock:(CDUnknownBlockType)arg3 togglingSuddenTermination:(BOOL)arg4;
+ (void)abGlobalAPILockInFile:(const char *)arg1 line:(unsigned long long)arg2 contextBlock:(CDUnknownBlockType)arg3;
+ (BOOL)shouldDisableDistributedChangeNotifications;
+ (void)setShouldDisableDistributedChangeNotifications:(BOOL)arg1;
+ (BOOL)shouldDisableSync;
+ (void)setShouldDisableSync:(BOOL)arg1;
+ (BOOL)shouldCreateEmptyDatabase;
+ (void)setShouldCreateEmptyDatabase:(BOOL)arg1;
+ (BOOL)isInert;
+ (void)setIsInert:(BOOL)arg1;
+ (long long)defaultNameOrdering;
+ (void)_userDefaultsChanged:(id)arg1;
+ (id)defaultCountryCode;
+ (void)setDefaultCountryCode:(id)arg1;
+ (id)localizedDefaults;
+ (id)fileLock;
+ (id)addressFormats;
+ (id)addressBookMetadataDirectory;
+ (id)addressBookTempImagesDirectory;
+ (id)addressBookSaveFile;
+ (id)addressBookCoreDataDatabaseFile;
+ (id)makeAccountCollectionForAlternateURL:(id)arg1;
+ (id)makeCoordinatorCacheForAlternateLocation:(id)arg1;
+ (id)addressBookDirectory;
+ (id)defaultAddressBookDirectory;
+ (id)addressBookCoreDataDatabaseFileName;
+ (BOOL)isUsingDefaultAddressBookDirectory;
+ (void)setAddressBookDirectory:(id)arg1;
+ (id)nts_persistentStoreForUrls:(id)arg1 inCoordinator:(id)arg2;
+ (id)persistentUrlsForAccounts:(id)arg1;
+ (void)addStoreUrlsForAccount:(id)arg1 to:(id)arg2;
+ (id)temporaryTimeMachineStoreUrlForAccount:(id)arg1;
+ (id)persistentUrlsForAccount:(id)arg1;
+ (id)recordClassFromUniqueId:(id)arg1;
+ (void)postDistributedNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(BOOL)arg4;
+ (BOOL)isPredicateSearchingEnabled;
+ (BOOL)nts_hasSharedInstance;
+ (id)nts_AddressBookWithOptions:(id)arg1;
+ (id)addressBookWithOptions:(id)arg1;
+ (id)addressBookWithDatabaseDirectory:(id)arg1 doInitialImports:(BOOL)arg2;
+ (id)addressBookWithDatabaseDirectory:(id)arg1;
+ (id)nts_AddressBook;
+ (id)sharedLocalAddressBook;
+ (id)localAddressBook;
+ (id)addressBook;
+ (void)configureOptionsForTestEnvironment:(id)arg1;
+ (id)sharedAddressBook;
+ (id)nts_CreateSharedAddressBook;
+ (BOOL)_remotelySyncSourcesWithIdentifiers:(id)arg1 usingService:(struct __CFString *)arg2;
+ (void)_remotelySyncSourcesWithIdentifiers:(id)arg1;
+ (void)runAddressBookManager;
+ (id)nts_SharedAddressBook;
+ (void)initialize;
+ (id)os_log_activation;
+ (id)os_log_locking;
+ (id)os_log;
+ (id)emptyDirectoryResultsAddressBook;
+ (id)provisionalAddressBook;
+ (id)emptyMemoryBackedAddressBook;
+ (id)emptyMemoryBackedAddressBookWithOptions:(id)arg1;
+ (id)optionsForCloningAddressBook:(id)arg1;
@property(readonly, nonatomic) ABDistributedNotificationListener *distributedListener; // @synthesize distributedListener=_distributedListener;
@property(retain, nonatomic) ABAddressBookImpl *impl; // @synthesize impl=_reserved8;
- (void)agentUpdatedCache:(id)arg1;
- (void)calMeCardChanged;
- (void)calPersistanceNotification:(id)arg1 userInfo:(id)arg2;
- (id)_notificationsMap;
- (void)calDavSharedUIDChanged:(id)arg1;
- (id)remoteObjectCache;
- (id)cachedClearedDate;
- (id)makePersistenceContextWithNotificationSource:(id)arg1;
- (id)makeManagedObjectContextWithConcurrencyType:(unsigned long long)arg1;
- (void)_linkRecordsWithFactory:(id)arg1;
- (void)_performImplicitLinking;
- (void)applyDiff:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (id)defaultContainer;
- (id)allContainers;
- (id)defaultAccount;
- (id)accountRepository;
- (BOOL)hasUnfilteredAccess;
- (BOOL)overridesReadOnly;
- (BOOL)isDirectoryResults;
- (BOOL)tracksAllSources;
- (void)enableUndoRegistration;
- (void)disableUndoRegistration;
- (void)runWithDisabledUndoRegistration:(CDUnknownBlockType)arg1;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;
- (void)setAssistantSyncAnchor:(long long)arg1;
- (long long)assistantSyncAnchor;
- (void)setAssistantValidity:(id)arg1;
- (id)assistantValidity;
- (BOOL)isSyncAnchorUnsynced;
- (void)setSyncAnchorsFromString:(id)arg1;
- (id)syncAnchors;
- (id)nts_GroupsThatUseGroup:(id)arg1;
- (id)groupsThatUseGroup:(id)arg1;
- (void)prefetchDataForRecords:(id)arg1;
@property(retain) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache;
- (void)setWriteChangesToServer:(BOOL)arg1;
- (BOOL)writeChangesToServer;
- (id)combinePeople:(id)arg1 error:(id *)arg2;
- (id)formattedAddressFromDictionary:(id)arg1;
- (long long)defaultNameOrdering;
- (id)defaultCountryCode;
- (void)setDefaultCountryCode:(id)arg1;
- (id)localizedDefaults;
- (long long)version;
- (BOOL)_isReadOnlyIgnoresInert:(BOOL)arg1;
- (BOOL)_isReadOnly;
- (void)validateMetaData;
- (void)nts_syncGroupSmartGroupPropertiesWithLock:(BOOL)arg1;
- (void)resetDatabaseAtPath:(id)arg1;
- (void)refreshRecordsWithUserInfo:(id)arg1;
- (void)commonDatabaseChangedExternally:(id)arg1;
- (void)listener:(id)arg1 didReceiveNotification:(id)arg2;
- (void)localDatabaseChangedExternally:(id)arg1;
- (void)rebroadcastDatabaseChangedExternally:(id)arg1;
- (id)notificationNameForRebroadcast:(id)arg1;
- (BOOL)notificationIsAccountRemoved:(id)arg1;
- (BOOL)shouldResetDatabase:(id)arg1;
- (BOOL)anyRecordChanged:(id)arg1;
- (BOOL)shouldRebroadcast:(id)arg1;
- (void)willRestoreFromMetadata:(id)arg1;
- (void)refreshRecordsWithUniqueIds:(id)arg1;
- (id)searchIndexForRecordsMatching:(id)arg1 selectedGroup:(id)arg2;
- (BOOL)nts_DoesPropertyExist:(id)arg1 forClass:(Class)arg2;
- (BOOL)doesPropertyExist:(id)arg1 forClass:(Class)arg2;
- (BOOL)nts_OpenContactManagerWithMode:(long long)arg1 cacheSchema:(BOOL)arg2;
- (BOOL)registeredForChangeNotifications;
- (void)unregisterForAllDatabaseChangeNotifications;
- (void)registerForDistributedDatabaseChangeNotifications;
- (void)registerForLocalDatabaseChangeNotifications;
- (id)nts_InitDefaultContactManager;
- (id)nts_InitializeDatabase;
- (id)databaseDirectoryWithOptions:(id)arg1;
- (id)nts_InitWithOptions:(id)arg1;
- (id)nts_InitAddressBookWithDatabaseDirectory:(id)arg1 options:(id)arg2;
- (void)nts_ImportMacBuddyMeCard;
- (void)nts_ImportTipCards;
- (BOOL)isABCoreDataImportCompleted;
- (void)markABCoreDataImportCompleted;
- (void)setManagedObjectContext:(id)arg1 forDatabaseType:(int)arg2;
- (id)managedObjectContextForDataType:(int)arg1;
- (void)nts_assignDatabaseImpl:(id)arg1 toStoreAtUrl:(id)arg2;
- (id)nts_persistentStoreForUrl:(id)arg1;
- (id)persistentStoreAtDefaultPath;
- (id)persistentStoreForScopedAddressBook;
- (id)primaryPersistentStore;
- (id)notificationIDWithObject:(id)arg1;
- (id)notificationID;
- (id)addressBookImagesDirectory;
- (id)addressBookMetaDataDirectory;
- (id)addressBookSaveFile;
- (id)addressBookCoreDataDatabaseFile;
- (id)addressBookDatabaseFile;
- (id)addressBookDirectoryURL;
- (id)addressBookDirectory;
- (BOOL)isUsingDefaultAddressBookDirectory;
- (id)_unscopedVersion;
- (id)_unscopedVersionOrSelf;
- (id)nts_contactsWithMOCState:(id)arg1;
- (id)nts_linkIDsOfPeopleWithMOCState:(id)arg1;
- (id)nts_peopleUIDsWithMOCState:(id)arg1;
- (id)nts_peopleWithMOCState:(id)arg1;
- (id)nts_deletedPeople;
- (id)nts_updatedPeople;
- (id)nts_insertedPeople;
- (void)setPersonWithPreferredPhoto:(id)arg1 forLinkedPeople:(id)arg2;
- (void)setPersonWithPreferredPhoto:(id)arg1 forLinkWithIdentifier:(id)arg2;
- (id)personWithPreferredPhotoForLink:(id)arg1;
- (void)setPersonWithPreferredName:(id)arg1 forLinkedPeople:(id)arg2;
- (void)setPersonWithPreferredName:(id)arg1 forLinkWithIdentifier:(id)arg2;
- (id)personWithPreferredNameForLink:(id)arg1;
- (void)unlinkPerson:(id)arg1;
- (void)linkPerson:(id)arg1 toPerson:(id)arg2;
- (unsigned long long)countOfPeopleWithLinkIdentifier:(id)arg1;
- (id)nts_peopleWithLinkIdentifier:(id)arg1 sortDescriptors:(id)arg2;
- (id)peopleWithLinkIdentifier:(id)arg1 sortDescriptors:(id)arg2;
- (id)peopleWithLinkIdentifier:(id)arg1;
- (id)peopleIdsLinkedToPerson:(id)arg1;
- (id)peopleLinkedToPerson:(id)arg1 sortDescriptors:(id)arg2;
- (id)mergeAndLinkPeople:(id)arg1;
- (BOOL)hasUserDataInAccount:(id)arg1;
- (void)rebroadcastUserPictureDidChange;
- (void)dealloc;
- (id)allocationBacktrace;
- (void)deactivate;
- (void)nts_superMergeChangesFromContextDidSaveNotification:(id)arg1;
- (void)superMergeChangesFromContextDidSaveNotification:(id)arg1;
- (BOOL)nts_isRelatedManagedObjectContext:(id)arg1;
- (BOOL)isRelatedManagedObjectContext:(id)arg1;
- (BOOL)isAffectedByContextDidSaveNotification:(id)arg1;
- (id)nts_AllRecordsForClass:(Class)arg1 forAccounts:(id)arg2 prefetchingKeyPaths:(id)arg3;
- (void)_setCachedRemotePeople:(id)arg1;
- (void)_clearCachedRemotePeople;
- (id)_cachedRemotePeople;
- (void)_setCachedPropertyTypes:(id)arg1 forClass:(Class)arg2;
- (void)_clearCachedPropertyTypes;
- (id)_cachedPropertyTypesForClass:(Class)arg1;
- (id)_xpcDictionary;
- (id)nts_AllRecordsForClass:(Class)arg1;
- (id)nts_AllRecordsForClass:(Class)arg1 forAccounts:(id)arg2;
- (unsigned long long)nts_CountOfRecordsForClass:(Class)arg1 forAccounts:(id)arg2;
- (id)persistentStoreForAccount:(id)arg1;
- (id)persistentStoresForAccount:(id)arg1;
- (id)groupsAtRemoteLocation:(id)arg1;
- (void)lockManagedObjectContextUntilDealloc;
- (void)markContactsAsImported:(id)arg1;
- (void)applyChangesToAccount:(id)arg1 addedPeople:(id)arg2 deletedPeople:(id)arg3 updatedPeople:(id)arg4 group:(id)arg5 mergedIntoGroup:(id)arg6 shouldSave:(BOOL)arg7;
- (id)importPeople:(id)arg1 intoAccount:(id)arg2 createNewUIDs:(BOOL)arg3;
- (void)fetchToManysWithPeople:(id)arg1;
- (id)peopleForWritableAccounts;
- (id)relationshipKeypathsToFetchOnEntity:(id)arg1;
- (void)preheatPeople:(id)arg1 inAccount:(id)arg2;
- (unsigned long long)_groupsOnlyCountForAccount:(id)arg1;
- (id)_groupsOnly;
- (id)nts_SmartGroups;
- (id)smartGroups;
- (id)groupsForAccount:(id)arg1;
- (id)_allGroupsPrefetchingParentGroupsAndCustomProperties;
- (id)_allGroups;
- (id)_allGroupsForAccount:(id)arg1 prefetchingKeyPaths:(id)arg2 includeSmartGroups:(BOOL)arg3;
- (id)_allGroupsForAccount:(id)arg1 prefetchingKeyPaths:(id)arg2;
- (id)groups;
- (id)logs;
- (id)mailRecents;
- (id)peopleAtRemoteLocation:(id)arg1;
- (id)subscribedGroups;
- (unsigned long long)subscribedPeopleCount;
- (id)nts_SubscribedPeople;
- (id)subscribedPeople;
- (unsigned long long)peopleCount;
- (id)nts_People;
- (unsigned long long)peopleCountForAccount:(id)arg1;
- (id)peopleForAccount:(id)arg1 prefetchingKeyPaths:(id)arg2;
- (id)peoplePrefetchingParentGroupsAndCustomProperties;
- (id)peopleForAccount:(id)arg1;
- (id)people;
- (void)_purgeAddressBookUsingPredicate:(id)arg1;
- (void)_purgeAddressBook;
- (void)_vacuum;
- (id)nts_RemoveRecords:(id)arg1;
- (id)nts_RemoveGroups:(id)arg1;
- (id)orderGroupsForRemoval:(id)arg1;
- (id)nts_RemovePeople:(id)arg1;
- (BOOL)removeRecord:(id)arg1 error:(id *)arg2;
- (BOOL)removeRecords:(id)arg1 error:(id *)arg2;
- (BOOL)nts_RemoveRecord:(id)arg1;
- (BOOL)recordDeniesRemove:(id)arg1;
- (BOOL)canRemoveRecord:(id)arg1;
- (BOOL)removeRecord:(id)arg1;
- (BOOL)nts_AddRecord:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (BOOL)nts_AddRecord:(id)arg1;
- (BOOL)addRecords:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)nts_addRecords:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (BOOL)addRecords:(id)arg1 error:(id *)arg2;
- (BOOL)addRecord:(id)arg1 account:(id)arg2;
- (BOOL)addRecord:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (BOOL)addRecord:(id)arg1 error:(id *)arg2;
- (BOOL)addRecord:(id)arg1;
- (id)groupForUniqueId:(id)arg1;
- (id)peopleForUniqueIDs:(id)arg1;
- (id)personForUniqueId:(id)arg1;
- (id)nts_RecordForUniqueId:(id)arg1 inAccount:(id)arg2;
- (id)nts_RecordForUniqueId:(id)arg1;
- (id)recordForUniqueId:(id)arg1 inAccount:(id)arg2;
- (id)recordForUniqueId:(id)arg1;
- (id)nts_RecordsForUniqueIds:(id)arg1 inAccount:(id)arg2;
- (id)recordsForUniqueIDs:(id)arg1 inAccount:(id)arg2;
- (id)recordsForUniqueIDs:(id)arg1;
- (unsigned long long)countOfRecords;
- (BOOL)_propertyRepresentsCustomProperty:(id)arg1 recordType:(id)arg2;
- (void)_clearRemoteCustomProperties;
- (id)_remoteCustomProperties;
- (id)affectedStoreForAccount:(id)arg1;
- (void)nts_SetCachedRecord:(id)arg1 forUniqueId:(id)arg2;
- (id)nts_CachedRecordForUniqueId:(id)arg1;
- (BOOL)nts_record:(id)arg1 isInAccount:(id)arg2;
- (id)nts_CachedRecordForUniqueId:(id)arg1 inAccount:(id)arg2;
- (void)nts_ClearCachedRecordsForUniqueIds:(id)arg1;
- (void)nts_ClearCachedRecordForUniqueId:(id)arg1;
- (void)nts_ClearCachedRecordsByUniqueId;
- (id)recordClassFromUniqueId:(id)arg1;
- (long long)nts_TypeOfProperty:(id)arg1 forTable:(id)arg2;
- (long long)typeOfProperty:(id)arg1 forTable:(id)arg2;
- (id)nts_PropertyTypesForRecordOfClass:(Class)arg1;
- (id)propertyTypesForRecordOfClass:(Class)arg1;
- (void)nts_SetMe:(id)arg1 account:(id)arg2;
- (void)nts_SetMe:(id)arg1;
- (id)meUniqueId;
- (id)allMeUniqueIds;
- (id)nts_firstExistingPersonForUniqueIds:(id)arg1;
- (id)nts_infosForAllAccounts;
- (id)nts_infosForDefaultAccount;
- (id)nts_meUniqueIdsFromInfos:(id)arg1;
- (id)nts_meUnqiueIdsInAllAccounts;
- (id)nts_meUnqiueIdsInDefaultAccount;
- (id)nts_meInAllAccounts;
- (id)nts_meInDefaultAccount;
- (id)nts_Me;
- (void)setMe:(id)arg1;
- (id)me;
- (BOOL)nts_hasUnsavedChanges;
- (BOOL)hasUnsavedChanges;
- (BOOL)nts_SaveWithFileLock:(BOOL)arg1 triggerSync:(BOOL)arg2;
- (BOOL)nts_SaveWithFileLock:(BOOL)arg1;
- (BOOL)saveAndTriggerSync:(BOOL)arg1;
- (BOOL)save;
- (BOOL)saveAndReturnError:(id *)arg1;
- (void)pruneEmptyRelationships;
- (id)makeCommonNotificationUserInfoDictionary;
- (void)updateNotificationInfo:(id)arg1 withRecords:(id)arg2 userInfoKey:(id)arg3 ignoreRecordsForKey:(id)arg4;
- (id)nts_UniqueIdsForRecordsInSet:(id)arg1;
- (void)nts_Cleanup;
- (id)recordsMatchingSearchElement:(id)arg1;
- (id)recordsMatchingSearchElement:(id)arg1 takeLock:(BOOL)arg2;
- (id)fetchRecordsFromAgentForClass:(Class)arg1 withPredicate:(id)arg2;
- (id)recordsMatchingSearchElementNoHinting:(id)arg1;
- (id)nts_groupsMatchingSearchElement:(id)arg1;
- (id)nts_peopleMatchingSearchElement:(id)arg1;
- (id)recordsMatchingSearchElementNoHinting:(id)arg1 takeLock:(BOOL)arg2;
- (id)recordsForClass:(Class)arg1 matchingPredicate:(id)arg2 prefetchingKeyPaths:(id)arg3 sortDescriptors:(id)arg4 takeLock:(BOOL)arg5;
- (void)performFetchWithType:(id)arg1 recordClass:(Class)arg2 predicate:(id)arg3 takeLock:(BOOL)arg4 block:(CDUnknownBlockType)arg5;
- (long long)syncCount;
- (long long)nts_SyncCount;
- (void)setSyncCount:(long long)arg1;
- (BOOL)isSharedInstanceOrClone;
- (BOOL)isSharedInstance;
@property(readonly, copy) NSString *description;
- (id)init;
- (BOOL)isProvisional;
- (void)nts_DoInitialImports;
- (BOOL)nts_RestoreFromMetaDataIfNeededAndTriggerSync:(BOOL)arg1;
- (BOOL)nts_RestoreFromMetaDataIfNeeded;
- (void)nts_SetNeedsToRestoreAddressBookFromMetaData:(BOOL)arg1;
- (BOOL)nts_RestoreFromMetaDataAndTriggerSync:(BOOL)arg1;
- (id)allGroup;
- (id)uncachedImageReferences;
- (id)photoFutureForPersonWithUniqueId:(id)arg1;
- (id)_peopleMatchingPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (id)nts_GroupsMatchingNormalizedName:(id)arg1 inSubscribedContent:(BOOL)arg2 context:(id)arg3;
- (id)nts_ContactsMatchingNormalizedEmailAddress:(id)arg1 inSubscribedContent:(BOOL)arg2 context:(id)arg3;
- (id)recordsMatchingMailAddressWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 inSubscribedContent:(BOOL)arg5;
- (id)nonRetainedCachedRecordForKey:(id)arg1;
- (void)setNonRetainedCachedRecord:(id)arg1 forKey:(id)arg2;
- (void)abManagedObjectContextDidSave:(id)arg1;
- (BOOL)set:(id)arg1 containsEntity:(id)arg2;
- (void)resetManagedObjectContext;
- (id)customPropertyDescriptionWithName:(id)arg1 recordType:(id)arg2 persistentStore:(id)arg3;
- (id)customPropertyWithName:(id)arg1 recordType:(id)arg2 persistentStore:(id)arg3;
- (id)customPropertiesAndTypesWithRecordType:(id)arg1 persistentStore:(id)arg2;
- (id)customPropertyDescriptionsWithRecordType:(id)arg1 persistentStore:(id)arg2;
- (void)clearCustomPropertyCaches;
- (id)fetchAllRecordsForClass:(Class)arg1;
- (void)abGlobalAPIUnlockInFile:(const char *)arg1 line:(unsigned long long)arg2 togglingSuddenTermination:(BOOL)arg3;
- (void)abGlobalAPIUnlockInFile:(const char *)arg1 line:(unsigned long long)arg2;
- (BOOL)abGlobalAPITryLockInFile:(const char *)arg1 line:(unsigned long long)arg2 togglingSuddenTermination:(BOOL)arg3;
- (BOOL)abGlobalAPITryLockInFile:(const char *)arg1 line:(unsigned long long)arg2;
- (void)abGlobalAPILockInFile:(const char *)arg1 line:(unsigned long long)arg2 togglingSuddenTermination:(BOOL)arg3;
- (void)abGlobalAPILockInFile:(const char *)arg1 line:(unsigned long long)arg2;
- (void)abRunWithGlobalAPILockInFile:(const char *)arg1 line:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)abResultWithGlobalAPILockInFile:(const char *)arg1 line:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)managedObjectContext;
- (id)persistentStoreForSourceIdentifier:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)storeKeyForDatabaseDataType:(int)arg1;
- (void)abDidRevertFromBackupCompleteResetContextAndUnlock:(id)arg1;
- (BOOL)isMemoryBacked;
- (id)persistentStoreURLs;
- (unsigned long long)countOfPersistentStores;
- (id)nts_managedObjectContextWithStoreDescription:(id)arg1 databasePath:(id)arg2 loadFailure:(char *)arg3;
- (id)makeManagedObjectContext;
- (id)subscriptionsWithAddressBook:(id)arg1;
- (id)subscriptions;
- (void)nts_SubscriptionListChanged;
- (id)nts_dbCache;
- (id)dbCache;
- (BOOL)isAggregate;
- (void)setManagedObjectContext:(id)arg1;
- (id)parallelUniverseAddressBook;
- (id)massageOptionsForClone:(id)arg1;
- (id)clonedAddressBookWithOptions:(id)arg1;
- (id)clonedAddressBook;
- (id)deltasSinceAddressBook:(id)arg1;
- (id)snapshotDate;
- (id)allUniqueIdsWithModificationDates;
- (id)allUniqueIds;
- (id)activeLabelsForProperty:(id)arg1 contact:(id)arg2 delegate:(id)arg3;
- (id)activeLabelsForProperty:(id)arg1 person:(id)arg2 delegate:(id)arg3;
- (id)activeLabelsForProperty:(id)arg1 person:(id)arg2;
- (id)_availableLabelsForProperty:(id)arg1 contact:(id)arg2 delegate:(id)arg3 constraints:(id)arg4;
- (id)availableLabelsForProperty:(id)arg1 contact:(id)arg2 delegate:(id)arg3;
- (id)availableLabelsForProperty:(id)arg1 person:(id)arg2 delegate:(id)arg3;
- (id)availableLabelsForProperty:(id)arg1 person:(id)arg2;
- (id)validLabelsForProperty:(id)arg1 record:(id)arg2 source:(id)arg3;
- (id)_availablePropertiesForContact:(id)arg1 delegate:(id)arg2 constraints:(id)arg3;
- (id)availablePropertiesForContact:(id)arg1 delegate:(id)arg2;
- (id)availablePropertiesForPerson:(id)arg1 delegate:(id)arg2;
- (id)availablePropertiesForPerson:(id)arg1;
- (id)validPropertiesForRecord:(id)arg1;
- (id)genericRepresentationOfLabel:(id)arg1 forProperty:(id)arg2 record:(id)arg3;
- (BOOL)isReadOnlyRecord:(id)arg1;
- (id)_constraintsForRecord:(id)arg1;
- (id)_constraintsForRecordClass:(Class)arg1 account:(id)arg2;
- (void)setEnforcesConstraints:(BOOL)arg1;
- (BOOL)enforcesConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

