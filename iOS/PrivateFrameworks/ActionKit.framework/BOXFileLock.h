//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/BOXModel.h>

@class BOXUserMini, NSDate;

@interface BOXFileLock : BOXModel
{
    BOXUserMini *_creator;
    NSDate *_createdDate;
    NSDate *_expirationDate;
    unsigned long long _isDownloadPrevented;
}

@property(nonatomic) unsigned long long isDownloadPrevented; // @synthesize isDownloadPrevented=_isDownloadPrevented;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) BOXUserMini *creator; // @synthesize creator=_creator;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end

