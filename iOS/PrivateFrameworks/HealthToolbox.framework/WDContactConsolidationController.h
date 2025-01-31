//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, SOSContactsManager, UIAlertController, UIViewController, WDNotificationManager, _HKMedicalIDData;

__attribute__((visibility("hidden")))
@interface WDContactConsolidationController : NSObject
{
    HKHealthStore *_healthStore;
    _HKMedicalIDData *_medicalIDData;
    SOSContactsManager *_sosContactsManager;
    WDNotificationManager *_notificationManager;
    UIViewController *_presentingViewController;
    UIAlertController *_consolidationAlertController;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak UIAlertController *consolidationAlertController; // @synthesize consolidationAlertController=_consolidationAlertController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) WDNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) SOSContactsManager *sosContactsManager; // @synthesize sosContactsManager=_sosContactsManager;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (void)_showLearnMoreViewController;
- (void)presentContactsConsolidationAlert;
- (void)checkAlertNecessity;
- (void)presentContactConsolidationAlertWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isPresentingConsolidationAlert;
- (id)initWithProfile:(id)arg1 presentingViewController:(id)arg2;

@end

