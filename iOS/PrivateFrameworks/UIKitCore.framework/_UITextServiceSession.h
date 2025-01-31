//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIPopoverController, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate>
{
    long long _type;
    UIViewController *_modalViewController;
    UIPopoverController *_popoverController;
    UIView *_contextView;
    _Bool _isTextEffectsWindow;
    _Bool _dismissed;
    CDUnknownBlockType _dismissedHandler;
}

+ (id)textServiceSessionForType:(long long)arg1;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;
+ (_Bool)shouldPresentAsPopoverForServiceOfType:(long long)arg1 inView:(id)arg2;
+ (_Bool)canShowTextServices;
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
- (void).cxx_destruct;
- (void)_endSession;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissTextServiceAnimated:(_Bool)arg1;
- (long long)type;
- (_Bool)isDisplaying;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)sessionDidDismiss;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

