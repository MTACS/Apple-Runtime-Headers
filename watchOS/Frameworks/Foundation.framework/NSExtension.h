//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/_NSExtensionContextHosting-Protocol.h>

@class NSArray, NSBundle, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol PKPlugIn;

@interface NSExtension : NSObject <_NSExtensionContextHosting>
{
    struct os_unfair_lock_s _unfairLock;
    _Bool _observingHostAppStateChanges;
    NSString *_identifier;
    NSString *_version;
    NSDictionary *_attributes;
    NSDictionary *_infoDictionary;
    NSString *_extensionPointIdentifier;
    CDUnknownBlockType _requestCompletionBlock;
    CDUnknownBlockType _requestCancellationBlock;
    CDUnknownBlockType _requestInterruptionBlock;
    id __stashedPlugInConnection;
    id <PKPlugIn> __plugIn;
    NSBundle *__extensionBundle;
    NSString *__localizedName;
    NSString *__localizedShortName;
    CDUnknownBlockType __requestPostCompletionBlock;
    CDUnknownBlockType __requestPostCompletionBlockWithItems;
    NSMutableDictionary *__extensionExpirationIdentifiers;
    NSMutableDictionary *__extensionServiceConnections;
    NSMutableDictionary *__extensionContexts;
    NSSet *__allowedErrorClasses;
    NSUUID *_connectionUUID;
}

+ (void)endMatchingExtensions:(id)arg1;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)extensionWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)extensionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(_Bool)arg2 error:(id *)arg3;
+ (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;
+ (void)extensionsWithMatchingAttributes:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id *)arg2;
+ (_Bool)_shouldLogExtensionDiscovery;
+ (void)initialize;
+ (id)predicateForActivationRule:(id)arg1;
+ (_Bool)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (_Bool)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (void)initializeFiltering;
+ (_Bool)_evaluateActivationRule:(id)arg1 withDictionaryIfItMatchesActiveWebPageAlternative:(id)arg2 matchResult:(out int *)arg3;
+ (_Bool)_evaluateActivationRule:(id)arg1 withInputItemsIfTheyMatchActiveWebPageAlternative:(id)arg2 matchResult:(out int *)arg3;
+ (id)_dictionaryIncludingOnlyItemsWithRegisteredTypeIdentifier:(id)arg1 fromMatchingDictionary:(id)arg2;
+ (_Bool)_genericValuesMatchActiveWebPageAlternativeWithExtensionItems:(id)arg1 attachmentsLens:(CDUnknownBlockType)arg2 registeredTypeIdentifiersLens:(CDUnknownBlockType)arg3 isActiveWebPageAttachmentCheck:(CDUnknownBlockType)arg4;
+ (_Bool)_inputItemsMatchActiveWebPageAlternative:(id)arg1;
+ (_Bool)_matchingDictionaryMatchesActiveWebPageAlternative:(id)arg1;
+ (id)_inputItemsByApplyingActiveWebPageAlternative:(id)arg1 ifNeededByActivationRule:(id)arg2;
@property(copy, nonatomic) NSUUID *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(nonatomic, getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:) _Bool observingHostAppStateChanges; // @synthesize observingHostAppStateChanges=_observingHostAppStateChanges;
@property(copy, nonatomic, setter=_setAllowedErrorClasses:) NSSet *_allowedErrorClasses; // @synthesize _allowedErrorClasses=__allowedErrorClasses;
@property(retain, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts; // @synthesize _extensionContexts=__extensionContexts;
@property(retain, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections; // @synthesize _extensionServiceConnections=__extensionServiceConnections;
@property(retain, nonatomic, setter=_setExtensionExpirationsIdentifiers:) NSMutableDictionary *_extensionExpirationIdentifiers; // @synthesize _extensionExpirationIdentifiers=__extensionExpirationIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlockWithItems; // @synthesize _requestPostCompletionBlockWithItems=__requestPostCompletionBlockWithItems;
@property(copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlock; // @synthesize _requestPostCompletionBlock=__requestPostCompletionBlock;
@property(copy, nonatomic) NSString *_localizedShortName; // @synthesize _localizedShortName=__localizedShortName;
@property(copy, nonatomic) NSString *_localizedName; // @synthesize _localizedName=__localizedName;
@property(retain, nonatomic, setter=_setExtensionBundle:) NSBundle *_extensionBundle; // @synthesize _extensionBundle=__extensionBundle;
@property(retain, nonatomic, setter=_setPlugIn:) id <PKPlugIn> _plugIn; // @synthesize _plugIn=__plugIn;
@property(retain) id _stashedPlugInConnection; // @synthesize _stashedPlugInConnection=__stashedPlugInConnection;
@property(copy, nonatomic) CDUnknownBlockType requestInterruptionBlock; // @synthesize requestInterruptionBlock=_requestInterruptionBlock;
@property(copy, nonatomic) CDUnknownBlockType requestCancellationBlock; // @synthesize requestCancellationBlock=_requestCancellationBlock;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(copy, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_dropAssertion;
- (id)extensionContexts;
- (void)_kill:(int)arg1;
- (void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (void)_safelyEndUsing:(CDUnknownBlockType)arg1;
- (id)newAssertionToBeginUsingPluginWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (void)_safelyBeginUsingWithOptions:(unsigned int)arg1 withAssertion_onSafeQueue:(CDUnknownBlockType)arg2;
- (void)_safelyBeginUsingSynchronously:(_Bool)arg1 options:(unsigned int)arg2 withAssertion_onSafeQueue:(CDUnknownBlockType)arg3;
- (void)_safelyBeginUsing:(CDUnknownBlockType)arg1;
- (int)_plugInProcessIdentifier;
- (_Bool)_wantsProcessPerRequest;
- (_Bool)_isSystemExtension;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isPhotoServiceAccessGranted;
- (id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2;
- (id)_extensionContextForUUID:(id)arg1;
@property(copy, nonatomic) NSArray *icons; // @dynamic icons;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (void)_didCreateExtensionContext:(id)arg1;
- (int)pidForRequestIdentifier:(id)arg1;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (id)beginExtensionRequestWithInputItems:(id)arg1 error:(id *)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 error:(id *)arg3;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)beginExtensionRequestWithOptions:(unsigned int)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 error:(id *)arg4;
- (void)beginExtensionRequestWithOptions:(unsigned int)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)beginExtensionRequestWithOptions:(unsigned int)arg1 inputItems:(id)arg2 error:(id *)arg3;
- (void)beginExtensionRequestWithOptions:(unsigned int)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_reallyBeginExtensionRequestWithContext:(id)arg1 extensionServiceConnection:(id)arg2 listenerEndpoint:(id)arg3 synchronously:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_newExtensionContextAndGetConnection:(id *)arg1 assertion:(id)arg2 inputItems:(id)arg3;
- (void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 processAssertion:(id)arg2 listenerEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_bareExtensionServiceConnection;
- (_Bool)attemptOptOut:(id *)arg1;
- (_Bool)attemptOptIn:(id *)arg1;
@property(readonly, nonatomic) _Bool optedIn;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (void)dealloc;
- (id)init;
- (id)_initWithPKPlugin:(id)arg1;
- (void)_resetExtensionState;
- (void)_didShowNewExtensionIndicator;
- (void)_didShowExtensionManagementInterface;
@property(readonly, nonatomic, getter=_isMarkedNew) _Bool _markedNew;
@property(copy, nonatomic, getter=_extensionState, setter=_setExtensionState:) NSDictionary *_extensionState; // @dynamic _extensionState;
- (id)_inputItemsByApplyingActiveWebPageAlternativeIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

