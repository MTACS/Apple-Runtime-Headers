//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/CLLocationManager.h>

@interface CLLocationManager (Workflow)
+ (int)wf_authorizationStatusForShortcutsApp;
+ (int)wf_authorizationStatusForWorkflowEnvironment:(int)arg1;
- (id)wf_initMasqueradingAsShortcutsAppWithDelegate:(id)arg1 onQueue:(id)arg2;
- (id)wf_initWithWorkflowEnvironment:(int)arg1 delegate:(id)arg2 onQueue:(id)arg3;
@end

