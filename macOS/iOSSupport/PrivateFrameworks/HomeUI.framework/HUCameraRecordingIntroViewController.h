//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUCameraRecordingIntroViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    unsigned long long _variant;
    OBTrayButton *_setupButton;
    OBLinkTrayButton *_notNowButton;
}

@property(retain, nonatomic) OBLinkTrayButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(retain, nonatomic) OBTrayButton *setupButton; // @synthesize setupButton=_setupButton;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (void)_buttonTwo:(id)arg1;
- (void)_buttonOne:(id)arg1;
- (id)initWithIntroVariant:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL isFinalStep;
@property(readonly) Class superclass;

@end

