//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDSettingRootGroupModel, HMSettingValue, NSArray, NSDictionary, NSNumber, NSString, NSUUID;
@protocol HMDSettingGroupModelProtocol, HMDSettingModelProtocol, HMDSettingTransactionReceiverProtocol, HMDSettingsBackingStoreController, HMDSettingsMessageHandlerProtocol, HMDSettingsMetadataParserProtocol;

@protocol HMDSettingsControllerDependency <NSObject>
@property(readonly) NSString *codingKey;
@property __weak id <HMDSettingTransactionReceiverProtocol> transactionReceiver;
- (NSUUID *)parentIdentifier;
- (NSDictionary *)loadMetadata;
- (HMSettingValue *)settingValueForValue:(id)arg1 type:(NSNumber *)arg2 constraintModels:(NSArray *)arg3 error:(id *)arg4;
- (id <HMDSettingModelProtocol>)settingModelForUpdateWithIdentifier:(NSUUID *)arg1 parentIdentifier:(NSUUID *)arg2 value:(HMSettingValue *)arg3;
- (id <HMDSettingsMessageHandlerProtocol>)messageHandler;
- (id <HMDSettingModelProtocol>)createSettingModelWithName:(NSString *)arg1 parent:(NSUUID *)arg2 type:(NSNumber *)arg3 properties:(NSNumber *)arg4;
- (id <HMDSettingGroupModelProtocol>)createSettingGroupModelWithName:(NSString *)arg1 parent:(NSUUID *)arg2;
- (HMDSettingRootGroupModel *)createSettingRootGroupModelWithParentModelID:(NSUUID *)arg1;
- (id <HMDSettingsBackingStoreController>)backingStoreController;
- (id <HMDSettingsMetadataParserProtocol>)metadataParser;
@end

