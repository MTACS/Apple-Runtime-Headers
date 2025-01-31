//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SwiftUI/UIAccessibilityIdentification-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI17AccessibilityNode : NSObject <UIAccessibilityIdentification>
{
    // Error parsing type: , name: children
    // Error parsing type: , name: parent
    // Error parsing type: , name: displayLinkHost
    // Error parsing type: , name: oldAttachmentForNotification
    // Error parsing type: , name: skipNotifyForAttachmentChanged
    // Error parsing type: , name: attachmentsStorage
    // Error parsing type: , name: cachedCombinedAttachment
    // Error parsing type: , name: focusableAncestor
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (_Bool)_accessibilityScrollToVisible;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityActivate;
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
@property(nonatomic, retain) UIBezierPath *accessibilityPath;
@property(nonatomic) _Bool shouldGroupAccessibilityChildren;
@property(nonatomic) _Bool accessibilityElementsHidden;
@property(nonatomic) _Bool accessibilityViewIsModal;
@property(nonatomic) struct CGPoint accessibilityActivationPoint;
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic) struct CGRect accessibilityFrame;
@property(nonatomic, copy) NSString *accessibilityLanguage;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSString *accessibilityIdentifier;
- (_Bool)_internal_handleCustomActionWithUiAction:(id)arg1;
- (unsigned long long)_accessibilityAutomationType;

@end

