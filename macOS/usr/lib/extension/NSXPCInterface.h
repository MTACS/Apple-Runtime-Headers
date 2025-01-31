//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;

@interface NSXPCInterface : NSObject
{
    Protocol *_protocol;
    void *_reserved2;
    id _reserved1;
}

+ (id)signatureForBlock:(id)arg1;
+ (id)interfaceWithProtocol:(id)arg1;
- (void)_methodSignature:(id *)arg1 allowedClasses:(id *)arg2 forSelector:(SEL)arg3 isReply:(BOOL)arg4;
- (Class)_returnClassForSelector:(SEL)arg1;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(BOOL)arg3;
- (id)_allowedClassesForSelector:(SEL)arg1 reply:(BOOL)arg2;
- (BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1;
- (BOOL)_hasProxiesInArgumentsOfSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1;
- (unsigned long long)_respondsToRemoteSelector:(SEL)arg1;
- (void)set_remoteVersion:(unsigned long long)arg1;
- (unsigned long long)_remoteVersion;
- (unsigned long long)version;
- (unsigned long long)versionForSelector:(SEL)arg1;
- (void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
- (const struct _xpc_type_s *)XPCTypeForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (void)setXPCType:(struct _xpc_type_s *)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
@property Protocol *protocol;
- (Class)_customSubclass;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end

