//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

#import <HomeUI/HUQuickControlColorInteractionCoordinatorDelegate-Protocol.h>

@class HFColorControlItem, HUQuickControlColorViewProfile, NSIndexPath, NSString;

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate>
{
    unsigned long long _mode;
    NSIndexPath *_selectedColorIndexPath;
    HUQuickControlColorViewController *_colorViewController;
}

+ (Class)controlItemClass;
@property(retain, nonatomic) HUQuickControlColorViewController *colorViewController; // @synthesize colorViewController=_colorViewController;
@property(retain, nonatomic) NSIndexPath *selectedColorIndexPath; // @synthesize selectedColorIndexPath=_selectedColorIndexPath;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)doneButtonTapped;
- (void)cancelButtonTapped;
- (void)presentFullColorViewForInteractionCoordinator:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2;
- (id)overrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;
- (unsigned long long)_paletteType;

// Remaining properties
@property(readonly, nonatomic) HFColorControlItem *controlItem; // @dynamic controlItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HUQuickControlColorViewProfile *viewProfile; // @dynamic viewProfile;

@end

