//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class KTLoggableData, NSArray, NSData, NSDictionary, NSError, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_xpc_object;

@protocol transparencyd_protocol
- (void)removeMultiSamplerForName:(NSString *)arg1;
- (void)addMultiSamplerForName:(NSString *)arg1 withTimeInterval:(double)arg2 block:(NSDictionary * (^)(void))arg3;
- (void)logMetric:(NSNumber *)arg1 withName:(NSString *)arg2;
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(_Bool)arg2 result:(NSError *)arg3 withAttributes:(NSDictionary *)arg4;
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(_Bool)arg2 result:(NSError *)arg3;
- (void)noteEventNamed:(NSString *)arg1;
- (void)logSoftFailureForEventNamed:(NSString *)arg1 withAttributes:(NSDictionary *)arg2;
- (void)logHardFailureForEventNamed:(NSString *)arg1 withAttributes:(NSDictionary *)arg2;
- (void)logSuccessForEventNamed:(NSString *)arg1;
- (void)clearApplicationState:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)runDutyCycleForActivity:(NSObject<OS_xpc_object> *)arg1;
- (void)copyApplicationState:(NSString *)arg1 block:(void (^)(NSDictionary *, NSError *))arg2;
- (void)forceApplicationKeysFetch:(NSString *)arg1 block:(void (^)(NSData *, NSError *))arg2;
- (void)forceApplicationKeysDownload:(NSString *)arg1 block:(void (^)(NSData *, unsigned long long, NSError *))arg2;
- (void)forceConfigUpdate:(void (^)(NSError *))arg1;
- (void)forceValidateUUID:(NSUUID *)arg1 uri:(NSString *)arg2 block:(void (^)(unsigned long long, NSError *))arg3;
- (void)convertToSelfRequest:(NSUUID *)arg1 serverDatas:(NSArray *)arg2 syncedDatas:(NSArray *)arg3 queryResponse:(NSData *)arg4 updateCompletionBlock:(void (^)(NSUUID *, NSError *))arg5;
- (void)validateEnrollmentUriResult:(NSString *)arg1 uuid:(NSUUID *)arg2 completionBlock:(void (^)(NSString *, unsigned long long, KTTransparentData *, NSError *))arg3;
- (void)validateEnrollmentUri:(NSString *)arg1 application:(NSString *)arg2 accountID:(NSData *)arg3 loggableData:(KTLoggableData *)arg4 queryResponse:(NSData *)arg5 promiseCompletionBlock:(void (^)(NSString *, NSUUID *, NSError *))arg6;
- (void)validateSelfUriResult:(NSString *)arg1 uuid:(NSUUID *)arg2 syncedDatas:(NSArray *)arg3 completionBlock:(void (^)(NSString *, unsigned long long, KTTransparentData *, NSError *))arg4;
- (void)validatePeerUriResult:(NSString *)arg1 uuid:(NSUUID *)arg2 completionBlock:(void (^)(NSString *, unsigned long long, KTTransparentData *, NSError *))arg3;
- (void)validatePeerUri:(NSString *)arg1 application:(NSString *)arg2 accountID:(NSData *)arg3 loggableDatas:(NSArray *)arg4 queryResponse:(NSData *)arg5 promiseCompletionBlock:(void (^)(NSString *, NSUUID *, NSError *))arg6;
@end

