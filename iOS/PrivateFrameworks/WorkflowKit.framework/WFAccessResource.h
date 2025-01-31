//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFResource.h>

#import <WorkflowKit/WFWorkflowReferencingResource-Protocol.h>

@class NSError, NSString, UIImage, WFDatabase, WFWorkflow;
@protocol NSObject, WFAccessResourcePermissionState;

@interface WFAccessResource : WFResource <WFWorkflowReferencingResource>
{
    WFWorkflow *_workflow;
    id <WFAccessResourcePermissionState> _currentPermissionState;
    NSString *_persistentIdentifier;
    id <NSObject> _resourceAvailabilityChangedNotificationObserver;
}

+ (Class)permissionStateClass;
+ (_Bool)isSystemResource;
+ (id)accessResourceFromDatabaseState:(id)arg1;
@property(readonly, nonatomic) id <NSObject> resourceAvailabilityChangedNotificationObserver; // @synthesize resourceAvailabilityChangedNotificationObserver=_resourceAvailabilityChangedNotificationObserver;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(retain, nonatomic) id <WFAccessResourcePermissionState> currentPermissionState; // @synthesize currentPermissionState=_currentPermissionState;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
- (id)localizedAttemptRecoveryFromErrorMessage;
@property(readonly, nonatomic) NSString *attemptRecoveryFromGlobalLevelErrorMessage;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *workflowLevelDeniedStatusMessage;
@property(readonly, nonatomic) NSString *workflowLevelNotDeterminedStatusMessage;
@property(readonly, nonatomic) NSString *workflowLevelMessageTemplate;
@property(readonly, nonatomic) NSString *workflowLevelPromptTemplate;
@property(readonly, nonatomic) NSError *computedAvailabilityError;
@property(readonly, nonatomic) NSError *globalLevelAvailabilityError;
@property(readonly, nonatomic) NSError *workflowLevelAvailabilityError;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelDeniedStatusMessage;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelNotDeterminedStatusMessage;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelMessageTemplate;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelPromptTemplate;
- (id)updatedPermissionStateForPermissionGranted:(_Bool)arg1 overridingPreviouslyDeterminedAuthorizations:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long workflowLevelStatus;
@property(readonly, nonatomic) unsigned long long globalLevelStatus;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAuthorizedAtWorkflowLevel:(_Bool)arg1 forReference:(id)arg2 inDatabase:(id)arg3 overridingPreviouslyDeterminedAuthorizations:(_Bool)arg4;
- (void)persistPermissionState:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3;
- (void)refreshCurrentPermissionStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)refreshCurrentPermissionState;
- (id)loadPersistedPermissionStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)attemptRecoveryFromWorkflowLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)persistPermissionState:(id)arg1;
- (id)loadPersistedPermissionState;
@property(readonly, nonatomic) WFDatabase *database;
- (_Bool)isEquivalentToAccessResource:(id)arg1;
- (void)setAuthorizedAtWorkflowLevel:(_Bool)arg1 overridingPreviouslyDeterminedAuthorizations:(_Bool)arg2;
- (void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)availabilityErrorForLevel:(unsigned long long)arg1;
- (unsigned long long)statusAtLevel:(unsigned long long)arg1;
- (void)makeAvailableAtWorkflowLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshAvailability;
- (void)refreshAvailabilityWithNotification:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) NSString *protectedResourceDescription;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *associatedAppIdentifier;
- (void)dealloc;
- (id)initWithPersistentIdentifier:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2;
- (void)logOut;
@property(readonly, nonatomic) _Bool logOutAffectsOtherApps;
@property(readonly, nonatomic) _Bool canLogOut;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *resourceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

