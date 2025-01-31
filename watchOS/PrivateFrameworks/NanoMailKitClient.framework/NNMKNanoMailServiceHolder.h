//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitClient/NNMKNanoMailServiceDelegate-Protocol.h>

@class NNMKNanoMailService, NSHashTable, NSString, NSXPCInterface;

@interface NNMKNanoMailServiceHolder : NSObject <NNMKNanoMailServiceDelegate>
{
    NNMKNanoMailService *_nanomailService;
    NSHashTable *_delegates;
    NSString *_serviceName;
    NSXPCInterface *_interface;
}

+ (id)sharedUpdatesBasedServiceHolderInstance;
@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NNMKNanoMailService *nanomailService; // @synthesize nanomailService=_nanomailService;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)_setupOrTeardownNanoMailServiceInstance;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (id)initWithServiceName:(id)arg1 interface:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

