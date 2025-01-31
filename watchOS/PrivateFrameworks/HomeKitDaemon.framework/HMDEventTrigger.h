//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTrigger.h>

#import <HomeKitDaemon/HMDEventDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDEventTriggerExecutionSession, HMDEventTriggerUserConfirmationSession, HMDPredicateUtilities, NSArray, NSMutableArray, NSPredicate, NSString;

@interface HMDEventTrigger : HMDTrigger <HMDEventDelegate, HMFLogging>
{
    _Bool _migratedEventsToRecords;
    _Bool _executeOnce;
    NSMutableArray *_events;
    NSPredicate *_evaluationCondition;
    NSArray *_recurrences;
    HMDPredicateUtilities *_predicateUtilities;
    HMDEventTriggerExecutionSession *_executionSession;
    HMDEventTriggerUserConfirmationSession *_userConfirmationSession;
    unsigned int _activationType;
    unsigned int _activationState;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (_Bool)__validateRecurrences:(id)arg1;
+ (id)logCategory;
@property(nonatomic) unsigned int activationState; // @synthesize activationState=_activationState;
@property(nonatomic) unsigned int activationType; // @synthesize activationType=_activationType;
@property(retain, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // @synthesize userConfirmationSession=_userConfirmationSession;
@property(retain, nonatomic) HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property(retain, nonatomic) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(readonly, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(retain, nonatomic) NSPredicate *evaluationCondition; // @synthesize evaluationCondition=_evaluationCondition;
@property(readonly, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) _Bool migratedEventsToRecords; // @synthesize migratedEventsToRecords=_migratedEventsToRecords;
- (void).cxx_destruct;
- (_Bool)containsRecurrences;
- (id)metric:(_Bool)arg1;
- (void)timerFired:(id)arg1;
- (id)emptyModelObject;
- (id)backingStoreObjects:(int)arg1;
- (id)modelObjectWithChangeType:(unsigned int)arg1 version:(int)arg2;
- (void)_handleEventTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)processEventRecords:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageReceiverChildren;
- (void)_handleUserPermissionRequest:(id)arg1;
- (void)_userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isTriggerFiredNotificationEntitled;
- (void)takeOverOwnershipOfTrigger;
- (void)_resetExecutionState;
- (void)resetExecutionState;
- (void)executionComplete:(id)arg1 error:(id)arg2;
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;
- (_Bool)isEventTriggerOnLocalDeviceForAccessory:(id)arg1;
- (_Bool)isEventTriggerOnRemoteGatewayForAccessory:(id)arg1;
- (void)_executeOnceUpdated:(id)arg1 message:(id)arg2;
- (void)_updateEventTriggerExecuteOnce:(id)arg1;
- (void)_handleUpdateEventTriggerExecuteOnce:(id)arg1;
- (void)_updateOwningDevice:(id)arg1;
- (void)_handleUpdateOwningDevice:(id)arg1;
- (void)_evaluationConditionUpdated:(id)arg1 message:(id)arg2;
- (void)_updateEventTriggerCondition:(id)arg1;
- (void)_handleUpdateEventTriggerCondition:(id)arg1;
- (void)_eventTriggerRecurrencesUpdated:(id)arg1 message:(id)arg2;
- (void)_updateEventTriggerRecurrences:(id)arg1;
- (void)_handleUpdateEventTriggerRecurrences:(id)arg1;
- (id)_updateEventsOnEventTrigger:(id)arg1;
- (void)_handleUpdateEventsOnEventTrigger:(id)arg1;
- (_Bool)checkSharedEventTriggerActivationResidentRequirement:(id)arg1;
- (_Bool)_checkAddEventModel:(id)arg1 message:(id)arg2;
- (_Bool)addEventsFromMessage:(id)arg1;
- (void)_handleRemoveEventModel:(id)arg1 message:(id)arg2;
- (void)_removeEventsFromEventTrigger:(id)arg1;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1 relay:(_Bool)arg2;
- (void)_handleAddEventModel:(id)arg1 message:(id)arg2;
- (id)createEventModel:(id)arg1 endEvent:(_Bool)arg2 message:(id)arg3 checkForSupport:(_Bool)arg4 error:(id *)arg5;
- (void)_addEventToEventTrigger:(id)arg1;
- (void)_handleAddEventToEventTrigger:(id)arg1;
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;
- (void)fixupForReplacementAccessory:(id)arg1;
- (void)_updateCondition:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)_removeEvents:(id)arg1;
- (void)_handleCharacteristicRemove:(id)arg1 eventsToRemove:(id)arg2;
- (void)removeCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)sendTriggerFiredNotification:(id)arg1;
- (_Bool)shouldEncodeLastFireDate:(id)arg1;
- (void)dealloc;
- (void)_registerForMessages;
- (void)_migrateEventsToRecords;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (void)_reevaluateIfRelaunchRequired;
- (void)_activateAfterResidentChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateEvents:(CDUnknownBlockType)arg1;
- (void)_computeActivation;
@property(readonly, nonatomic) _Bool computedActive;
- (_Bool)shouldActivateOnLocalDevice;
- (_Bool)compatible:(id)arg1 user:(id)arg2;
- (_Bool)requiresDataVersion4;
- (void)invalidate;
@property(readonly, nonatomic) NSArray *presenceEvents;
@property(readonly, nonatomic) NSArray *charThresholdEvents;
@property(readonly, nonatomic) NSArray *durationEvents;
@property(readonly, nonatomic) NSArray *timeEvents;
@property(readonly, nonatomic) NSArray *significantTimeEvents;
@property(readonly, nonatomic) NSArray *calendarEvents;
@property(readonly, nonatomic) NSArray *locationEvents;
@property(readonly, nonatomic) NSArray *characteristicBaseEvents;
@property(readonly, nonatomic) NSArray *characteristicEvents;
@property(readonly, nonatomic) NSArray *endEvents;
@property(readonly, nonatomic) NSArray *triggerEvents;
- (unsigned int)triggerType;
- (id)dumpState;
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

