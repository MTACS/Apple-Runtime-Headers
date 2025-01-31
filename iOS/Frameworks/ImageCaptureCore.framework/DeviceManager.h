//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ImageCaptureCore/ICDeviceManagerProtocol-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface DeviceManager : NSObject <ICDeviceManagerProtocol>
{
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
    NSOperationQueue *_deviceOperationQueue;
}

@property(retain) NSOperationQueue *deviceOperations; // @synthesize deviceOperations=_deviceOperationQueue;
- (void)addInteractiveOperation:(id)arg1;
- (void)addInitiatedOperation:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)enumerateContent;
- (void)aptpRetrieveDataForFilesImp:(id)arg1;
- (void)aptpRequestDataForFilesImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)getMetadataOfFileImp:(id)arg1;
- (void)getThumbnailOfFileImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)closeSessionImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (long long)eject:(id)arg1;
- (long long)downloadFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)deleteFile:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)syncClock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)closeSession:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)openSession:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)closeDevice:(id)arg1 contextInfo:(void *)arg2;
- (long long)openDevice:(id)arg1 contextInfo:(void *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

