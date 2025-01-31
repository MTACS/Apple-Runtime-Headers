//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSAccessibilityButton-Protocol.h>
#import <AppKit/NSUserInterfaceCompression-Protocol.h>
#import <AppKit/NSUserInterfaceValidations-Protocol.h>
#import <AppKit/_NSAlertSensitiveView-Protocol.h>

@class NSAttributedString, NSColor, NSImage, NSSound, NSString, NSUserInterfaceCompressionOptions, NSView;

@interface NSButton : NSControl <_NSAlertSensitiveView, NSUserInterfaceValidations, NSAccessibilityButton, NSUserInterfaceCompression>
{
    NSView *_contentView;
}

+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (id)radioButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)checkboxWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)buttonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)_buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (void)initialize;
- (void)setTitleWithMnemonic:(id)arg1;
- (BOOL)performMnemonic:(id)arg1;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)_preferredAppearance;
@property(readonly, copy) NSUserInterfaceCompressionOptions *activeCompressionOptions;
- (struct CGSize)minimumSizeWithPrioritizedCompressionOptions:(id)arg1;
- (void)compressWithPrioritizedCompressionOptions:(id)arg1;
- (id)_supportedOptionsFromPrioritizedOptions:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (void)springLoadingHighlightChanged:(id)arg1;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (struct NSEdgeInsets)touchBarHitTestInsets;
- (id)_insetMitigationTreatment;
- (void)setMinimumPressDuration:(double)arg1;
- (double)minimumPressDuration;
- (void)setGuarded:(BOOL)arg1;
- (BOOL)isGuarded;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (struct CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
- (void)altModifySelection:(id)arg1;
- (void)shiftModifySelection:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_setWindow:(id)arg1;
- (id)_recursiveFindDefaultButtonCell;
- (BOOL)_canBecomeDefaultButton;
- (void)viewDidMoveToWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (struct NSEdgeInsets)_contentViewInsets;
- (void)_ensureContentViewIsSubview;
- (BOOL)isFlipped;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (BOOL)_inToolbar;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)declaredLayoutConstraints;
- (void)updateConstraints;
- (double)baselineOffsetFromBottom;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)_updateContentViewState;
- (void)updateCell:(id)arg1;
- (BOOL)alwaysEnablesRadioButtonExclusivity;
- (void)setAlwaysEnablesRadioButtonExclusivity:(BOOL)arg1;
- (void)setShowsDisclosureChevron:(BOOL)arg1;
- (BOOL)showsDisclosureChevron;
@property unsigned long long keyEquivalentModifierMask;
@property(copy) NSString *keyEquivalent;
- (void)highlight:(BOOL)arg1;
- (void)setNextState;
@property BOOL allowsMixedState;
@property long long state;
@property(copy) NSColor *contentTintColor;
@property(copy) NSColor *bezelColor;
@property BOOL imageHugsTitle;
@property unsigned long long imageScaling;
@property unsigned long long imagePosition;
@property(retain) NSImage *alternateImage;
@property(retain) NSImage *image;
@property BOOL showsBorderOnlyWhileMouseInside;
@property(getter=isTransparent) BOOL transparent;
@property(getter=isBordered) BOOL bordered;
@property unsigned long long bezelStyle;
- (void)setPeriodicInterval:(double)arg1;
- (double)periodicInterval;
- (void)setPeriodicDelay:(double)arg1;
- (double)periodicDelay;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (void)setPeriodicDelay:(float)arg1 interval:(float)arg2;
@property long long maxAcceleratorLevel;
@property(getter=isSpringLoaded) BOOL springLoaded;
- (void)_setSound:(id)arg1;
- (id)_sound;
@property(retain) NSSound *sound;
@property(copy) NSAttributedString *attributedAlternateTitle;
@property(copy) NSString *alternateTitle;
@property(copy) NSAttributedString *attributedTitle;
@property(copy) NSString *title;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setCell:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)_popupToSubstituteInInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain) NSView *contentView;
@property(readonly) BOOL wantsAlertStylePadding;
- (id)_descriptionForTouchBarLogging;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

