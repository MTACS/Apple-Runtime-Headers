//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXRequest.h>

@class NSString;

@interface BOXFileVersionPromoteRequest : BOXRequest
{
    NSString *_fileID;
    NSString *_versionID;
}

@property(retain, nonatomic) NSString *versionID; // @synthesize versionID=_versionID;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1 targetVersionID:(id)arg2;

@end

