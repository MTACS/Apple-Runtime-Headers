//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInputViewSetPlacement_FloatingApplicator.h>

@class UIKeyboardPopoverContainer;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator
{
    UIKeyboardPopoverContainer *_popover;
}

@property(retain, nonatomic) UIKeyboardPopoverContainer *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (struct CGRect)popoverFrame;
- (void)invalidate;
- (void)prepare;
- (void)applyChanges:(id)arg1;
- (struct UIEdgeInsets)contentInsets;
- (_Bool)isGesture:(id)arg1 inDraggableView:(struct CGPoint)arg2;
- (_Bool)preBeginGesture:(id)arg1 shouldBegin:(_Bool *)arg2;
- (id)twoFingerDraggableView;
- (id)draggableView;

@end

