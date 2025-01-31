//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, HMFTimer, NSArray, NSDate, NSMutableArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDActionSet : HMFObject <HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol>
{
    _Bool _executionInProgress;
    NSString *_name;
    NSString *_type;
    NSUUID *_uuid;
    HMDHome *_home;
    NSDate *_lastExecutionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSMutableArray *_currentActions;
    HMFTimer *_executionTimeout;
    HMDApplicationData *_appData;
}

+ (id)logCategory;
+ (_Bool)hasMessageReceiverChildren;
+ (id)allowedActionClasses;
+ (_Bool)supportsSecureCoding;
+ (_Bool)isBuiltinActionSetType:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMFTimer *executionTimeout; // @synthesize executionTimeout=_executionTimeout;
@property(nonatomic) _Bool executionInProgress; // @synthesize executionInProgress=_executionInProgress;
@property(retain, nonatomic) NSMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)backingStoreObjects:(long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_executeMediaPlaybackActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_issueReadRequests:(id)arg1;
- (void)_issueWriteRequests:(id)arg1 readResponse:(id)arg2 message:(id)arg3;
- (id)_logExecuteAction:(id)arg1;
- (void)_execute:(id)arg1 captureCurrentState:(_Bool)arg2 writeRequestTuples:(id)arg3;
- (void)timerDidFire:(id)arg1;
- (void)handleExecutionCompleted:(id)arg1 startDate:(id)arg2 error:(id)arg3 readResponse:(id)arg4 response:(id)arg5;
- (void)_logDuetEvent:(id)arg1 endDate:(id)arg2 message:(id)arg3;
- (void)_logDuetRoomEvent;
- (id)_generateOverallError:(id)arg1 forSource:(unsigned long long)arg2;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateActionRequest:(id)arg1;
- (void)_updatePlaybackAction:(id)arg1 forMessage:(id)arg2;
- (void)_updateWriteAction:(id)arg1 forMessage:(id)arg2;
- (void)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRenameRequest:(id)arg1;
- (void)_removeDonatedIntent;
- (void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveAction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveActionRequest:(id)arg1;
- (void)_removeAction:(id)arg1 message:(id)arg2;
- (void)_handleAddShortcutActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleAddMediaPlaybackActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleAddCharactersiticWriteActionTransaction:(id)arg1 message:(id)arg2;
- (void)sendNotificationWithAction:(id)arg1 message:(id)arg2 requiresSPIEntitlement:(_Bool)arg3;
- (void)_handleAddNewAction:(id)arg1 message:(id)arg2;
- (id)_addMediaPlaybackActionModelWithUUID:(id)arg1 message:(id)arg2;
- (id)_addCharacteristicWriteActionModelWithUUID:(id)arg1 message:(id)arg2;
- (void)_handleAddActionRequest:(id)arg1;
- (void)_registerForMessages;
- (id)actionWithUUID:(id)arg1;
- (void)invalidate;
- (void)removeAccessory:(id)arg1;
@property(readonly, nonatomic) NSUUID *spiClientIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool containsMediaPlaybackActions;
- (_Bool)containsUnsecuringAction;
- (_Bool)containsSecureCharacteristic;
- (_Bool)_fixupActions;
@property(readonly, nonatomic) NSString *serializedIdentifier;
@property(readonly, nonatomic) NSArray *actions;
- (_Bool)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (id)allCharacteristicsInActionsForServices:(id)arg1;
- (void)removeActionForCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)executeWithTriggerSource:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)execute:(id)arg1;
- (id)isAccessValidForExecutionWithMessage:(id)arg1;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5;
- (id)_getActionsForActionSetObject;
- (id)assistantObject;
- (id)url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

