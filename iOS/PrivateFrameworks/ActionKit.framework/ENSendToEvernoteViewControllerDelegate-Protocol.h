//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class ENNote, ENSaveToEvernoteViewController, NSError, NSString;

@protocol ENSendToEvernoteViewControllerDelegate <NSObject>
- (void)viewController:(ENSaveToEvernoteViewController *)arg1 didFinishWithSuccess:(_Bool)arg2 uploadError:(NSError *)arg3;
- (NSString *)defaultNoteTitleForViewController:(ENSaveToEvernoteViewController *)arg1;
- (ENNote *)noteForViewController:(ENSaveToEvernoteViewController *)arg1;
@end

