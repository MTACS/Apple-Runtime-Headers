//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IOBluetoothDevice, NSMenuItem;

@interface AudioOptionsViewController : NSViewController
{
    IOBluetoothDevice *_device;
    NSMenuItem *_mAutoMI;
    NSMenuItem *_mAlwaysLeftMI;
    NSMenuItem *_mAlwaysRightMI;
}

+ (id)viewsForDevice:(id)arg1;
+ (_Bool)deviceHasViews:(id)arg1;
+ (_Bool)isListeningModePanelShownForDevice:(id)arg1;
@property NSMenuItem *mAlwaysRightMI; // @synthesize mAlwaysRightMI=_mAlwaysRightMI;
@property NSMenuItem *mAlwaysLeftMI; // @synthesize mAlwaysLeftMI=_mAlwaysLeftMI;
@property NSMenuItem *mAutoMI; // @synthesize mAutoMI=_mAutoMI;
@property IOBluetoothDevice *device; // @synthesize device=_device;
- (id)viewsToAlign;
- (void)handleClose;
- (void)loadPrefs;
- (void)viewDidLoad;

@end

