//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIScrollView.h>

#import <UIKitCore/UIContentSizeCategoryAdjusting-Protocol.h>
#import <UIKitCore/UIKeyboardInput-Protocol.h>
#import <UIKitCore/UITextAutoscrolling-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputControllerDelegate-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>
#import <UIKitCore/UIViewGhostedRangeSupporting-Protocol.h>
#import <UIKitCore/_UILayoutBaselineUpdating-Protocol.h>
#import <UIKitCore/_UIMultilineTextContentSizing-Protocol.h>
#import <UIKitCore/_UITextContainerViewDelegate-Protocol.h>
#import <UIKitCore/_UITextContent-Protocol.h>
#import <UIKitCore/_UITextItemDiscoverable-Protocol.h>
#import <UIKitCore/_UITextItemInteracting-Protocol.h>
#import <UIKitCore/_UITextViewContentPaddingDelegate-Protocol.h>
#import <UIKitCore/_UIViewBaselineSpacing-Protocol.h>

@class CUICatalog, NSAttributedString, NSDictionary, NSIndexSet, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIAutoscroll, UIColor, UIFont, UIImage, UIInputContextHistory, UILabel, UITextInputController, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UICharacterStreamingManager, _UITextContainerView, _UITextItemDiscoverer, _UITextSizeCache, _UITextViewContentPadding, _UITextViewRestorableScrollPosition, _UITextViewVisualStyle;
@protocol UICoordinateSpace, UITextInputDelegate, UITextInputTokenizer, UITextViewDelegate;

@interface UITextView : UIScrollView <_UIViewBaselineSpacing, _UITextContainerViewDelegate, _UITextViewContentPaddingDelegate, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UIViewGhostedRangeSupporting, _UITextItemInteracting, _UITextContent, _UITextItemDiscoverable, UITextInput, UIContentSizeCategoryAdjusting>
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    _UITextContainerView *_containerView;
    id _inputDelegate;
    id <UITextInputTokenizer> _tokenizer;
    UITextInputController *_inputController;
    UITextInteractionAssistant *_interactionAssistant;
    UITextInputTraits *_textInputTraits;
    UIAutoscroll *_autoscroll;
    struct {
        unsigned int needsScrollToSelectionAfterLayout:1;
        unsigned int editable:1;
        unsigned int reentrancyGuard:1;
        unsigned int usesExplicitPreferredMaxLayoutWidth:1;
        unsigned int interactiveSelectionDisabled:1;
        unsigned int selectable:1;
        unsigned int shouldPresentSheetsInAWindowLayeredAboveTheKeyboard:1;
        unsigned int shouldAutoscrollAboveBottom:1;
        unsigned int containerViewSizeInvalid:1;
        unsigned int isAnimatingPaste:1;
        unsigned int textSizeCacheEnabled:1;
    } _tvFlags;
    int _contentSizeUpdateSeqNo;
    _UITextViewRestorableScrollPosition *_scrollTarget;
    unsigned int _scrollPositionDontRecordCount;
    _UITextViewRestorableScrollPosition *_scrollPosition;
    float _offsetFromScrollPosition;
    unsigned int _dataDetectorTypes;
    float _preferredMaxLayoutWidth;
    UILabel *_placeholderLabel;
    UIView *_inputAccessoryView;
    NSDictionary *_linkTextAttributes;
    _UICharacterStreamingManager *_characterStreamingManager;
    NSDictionary *_siriParameters;
    float _firstBaselineOffsetFromTop;
    float _lastBaselineOffsetFromBottom;
    _UITextSizeCache *_intrinsicSizeCache;
    CUICatalog *_cuiCatalog;
    struct UIEdgeInsets _beforeFreezingTextContainerInset;
    struct UIEdgeInsets _duringFreezingTextContainerInset;
    struct CGSize _beforeFreezingFrameSize;
    _Bool _unfreezingTextContainerSize;
    struct CGRect _frameOfTrailingWhitespace;
    _UITextItemDiscoverer *_textItemDiscoverer;
    _UITextViewContentPadding *_topContentPadding;
    _UITextViewContentPadding *_bottomContentPadding;
    struct CGPoint _scrollEndDraggingVelocity;
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _clearsOnInsertion;
    float _multilineContextWidth;
    UIView *_inputView;
    _UITextViewVisualStyle *_visualStyle;
}

+ (id)_defaultTextColor;
+ (_Bool)_isCompatibilityTextView;
@property(retain, nonatomic) _UITextViewVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(readonly, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain) UIView *inputView; // @synthesize inputView=_inputView;
- (void)_setMultilineContextWidth:(float)arg1;
- (float)_multilineContextWidth;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (id)_getDelegateZoomView;
- (_Bool)isTextDropActive;
- (_Bool)isTextDragActive;
- (_Bool)_allowHighlightForTextInteractableItem:(id)arg1;
- (id)_textInteractableItemAtPoint:(struct CGPoint)arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)_presentActionsForTextInteractableItem:(id)arg1;
- (_Bool)_mightHaveInteractableItems;
- (_Bool)_allowInteraction:(int)arg1 forTextInteractableItem:(id)arg2;
- (void)_updateSelectionGestures;
- (void)_resetDataDetectorsResults;
- (void)_startDataDetectors;
- (void)_startDataDetectorsIfNeeded;
- (void)_cancelDataDetectors;
- (_Bool)_shouldStartDataDetectors;
- (unsigned int)_effectiveDataDetectorTypes;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)_textInputTraits;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
- (_Bool)_shouldObscureInput;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
- (id)metadataDictionariesForDictationResults;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)textInputDidAnimatePaste:(id)arg1;
- (void)textInputWillAnimatePaste:(id)arg1;
- (_Bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)automaticallySelectedOverlay;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)validateCommand:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)updateTextAttributesWithConversionHandler:(CDUnknownBlockType)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (id)_attributedStringForInsertionOfAttributedString:(id)arg1;
- (void)_pasteAttributedString:(id)arg1 pasteAsRichText:(_Bool)arg2;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)_isDisplayingShortcutViewController;
- (void)_addShortcut:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_selectionMayChange:(id)arg1;
- (_Bool)_isDisplayingLookupViewController;
- (_Bool)_isDisplayingShareViewController;
- (void)_share:(id)arg1;
- (_Bool)_isDisplayingReferenceLibraryViewController;
- (void)_define:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_adjustFontForAccessibilityTraits:(_Bool)arg1;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (id)textContainerView:(id)arg1 cuiCatalogForTextEffectName:(id)arg2;
- (void)updateSelectionForTextContainerView:(id)arg1;
- (struct _NSRange)selectedRangeForTextContainerView:(id)arg1;
- (_Bool)isEditableForTextContainerView:(id)arg1;
- (id)textContainerView:(id)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned int)arg3;
- (id)linkTextAttributesForTextContainerView:(id)arg1;
- (_Bool)_allowAnimatedUpdateSelectionRectViews;
- (void)_unconstrainTiledRendering;
- (void)_constrainTiledRenderingToRect:(struct CGRect)arg1;
- (void)_setFreezeTextContainerSize:(_Bool)arg1;
- (_Bool)_freezeTextContainerSize;
- (id)_cuiStyleEffectConfiguration;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (id)_cuiCatalog;
- (void)_setCuiCatalog:(id)arg1;
- (void)setShouldPreserveVisualFontSizeFidelity:(_Bool)arg1;
- (_Bool)shouldPreserveVisualFontSizeFidelity;
@property(nonatomic) _Bool usesStandardTextScaling;
- (id)_whitelistedTypingAttributes;
- (void)_setWhitelistedTypingAttributes:(id)arg1;
- (void)setContentMode:(int)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_linkTextAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned int)arg2;
@property(copy, nonatomic) NSDictionary *linkTextAttributes;
- (float)lineHeight;
- (void)setLineHeight:(float)arg1;
- (struct CGRect)visibleTextRect;
- (struct CGRect)visibleRect;
- (struct CGRect)visibleRectIgnoringKeyboard;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
- (void)setMarginTop:(unsigned int)arg1;
- (unsigned int)marginTop;
- (void)updateAutoscrollAboveBottom;
- (void)setShouldAutoscrollAboveBottom:(_Bool)arg1;
- (_Bool)shouldAutoscrollAboveBottom;
- (void)setContentToHTMLString:(id)arg1;
- (id)webView;
@property(nonatomic) unsigned int dataDetectorTypes;
- (void)disableClearsOnInsertion;
@property(nonatomic) _Bool clearsOnInsertion; // @synthesize clearsOnInsertion=_clearsOnInsertion;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;
- (_Bool)becomesEditableWithGestures;
@property(nonatomic) struct _NSRange selectedRange;
@property(nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor *textColor;
- (void)_setTextColor:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (id)_currentDefaultAttributes;
- (_Bool)allowsAttachments;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (void)textInputDidChangeSelection:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(_Bool)arg1;
- (void)_setTypingAttributesTextColor:(id)arg1;
@property(copy, nonatomic) NSDictionary *typingAttributes;
- (void)_syncTypingAttributesToTextContainerAttributesForExtraLineFragment;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (void)removeTextPlaceholder:(id)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (_Bool)_shouldSuppressSelectionCommands;
- (void)_updateSelectableInteractions;
@property(nonatomic, getter=isSelectable) _Bool selectable;
@property(nonatomic, getter=isEditable) _Bool editable;
- (_Bool)_mightHaveSelection;
- (_Bool)isEditing;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (id)undoManager;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)_textInputViewForAddingGestureRecognizers;
@property(readonly, nonatomic) UIView *textInputView;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(nonatomic) int selectionAffinity;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)attributedTextInRange:(id)arg1;
- (void)insertAttributedText:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)selectedText;
- (struct CGPoint)_contentOffsetForScrollingToRect:(struct CGRect)arg1;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2;
- (id)_restorableScrollPositionForStateRestoration;
- (id)_restorableScrollPosition;
- (void)_restoreScrollPosition:(id)arg1 animated:(_Bool)arg2;
- (struct CGPoint)_lastGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_firstGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (void)_ensureCleanedUp;
- (void)_didFinishSpeechRecognition;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (void)_setSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_enableSiriAnimationDictationStyle;
- (_Bool)hasTextItemsOfType:(int)arg1 inTextRange:(id)arg2;
- (id)textItemsOfType:(int)arg1 inTextRange:(id)arg2;
- (id)visibleTextRange;
@property(readonly, nonatomic) id <UICoordinateSpace> textItemCoordinateSpace;
- (id)_textItemDiscoverer;
- (struct _NSRange)_visibleRangeWithLayout:(_Bool)arg1;
- (struct CGPoint)_contentOffsetForScrollToVisible:(struct _NSRange)arg1;
- (struct CGRect)_rectForScrollToVisible:(struct _NSRange)arg1;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (_Bool)canBecomeFocused;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (_Bool)_restoreFirstResponder;
- (id)interactionAssistant;
- (id)selectionView;
- (void)updateSelectionImmediately;
- (void)updateSelection;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1 style:(int)arg2 alternatives:(id)arg3;
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(int)arg3;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)_updatePlaceholderVisibility;
- (void)_layoutPlaceholder;
- (_Bool)_isTextSizeCacheEnabled;
- (void)_setTextSizeCacheEnabled:(_Bool)arg1;
- (id)attributedPlaceholder;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(_Bool)arg1;
- (_Bool)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
- (_Bool)_isInteractiveTextSelectionDisabled;
- (void)_setInteractiveTextSelectionDisabled:(_Bool)arg1;
- (void)_updateContainerTileAndSizingFlags;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)removeInvisibleRange:(id)arg1;
- (void)addInvisibleRange:(id)arg1;
- (void)removeAllGhostedRanges;
- (void)addGhostedRange:(id)arg1;
- (void)setTiledViewsDrawAsynchronously:(_Bool)arg1;
- (_Bool)tiledViewsDrawAsynchronously;
- (void)setMaxTileHeight:(float)arg1;
- (float)maxTileHeight;
- (void)_disableTiledViews;
- (void)setUsesTiledViews:(_Bool)arg1;
- (_Bool)usesTiledViews;
@property(nonatomic) _Bool allowsEditingTextAttributes;
- (void)_notifyDidEndEditing;
- (void)_notifyDidBeginEditing;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (void)tintColorDidChange;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_shouldScrollEnclosingScrollView;
- (void)_keyboardDidShow:(id)arg1;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (void)_scrollSelectionToVisibleInContainingScrollView:(_Bool)arg1;
- (void)_scrollRect:(struct CGRect)arg1 toVisibleInContainingScrollView:(_Bool)arg2;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)invalidateIntrinsicContentSize;
- (_Bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (float)_currentPreferredMaxLayoutWidth;
- (id)_layoutDebuggingTitle;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (struct CGSize)_containerSizeForBoundsSize:(struct CGSize)arg1 allowingOverflow:(_Bool)arg2;
- (void)_performLayoutCalculation:(CDUnknownBlockType)arg1 inSize:(struct CGSize)arg2;
- (void)_baselineOffsetDidChange;
- (_Bool)_hasBaseline;
- (float)_baselineOffsetFromBottom;
- (float)_firstBaselineOffsetFromTop;
- (float)_preferredMaxLayoutWidth;
- (void)_setPreferredMaxLayoutWidth:(float)arg1;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (struct CGRect)_frameOfTrailingWhitespace;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setFrameOrBounds:(struct CGRect)arg1 fromOldRect:(struct CGRect)arg2 settingAction:(CDUnknownBlockType)arg3;
- (void)_updateContentSize;
- (void)_textContainerSizeDidChange:(id)arg1;
- (void)_scrollToSelectionIfNeeded;
- (void)_scrollToCaretIfNeeded;
- (void)_invalidateContainerViewSize;
- (void)layoutSubviews;
- (void)adjustedContentInsetDidChange;
- (void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(_Bool)arg1;
- (void)_resyncContainerFrameForNonAutolayout;
- (void)_updateTextContainerSizeAndSizeToFit;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)_textViewContentPaddingDidChange:(id)arg1;
- (id)bottomContentPadding;
- (id)topContentPadding;
- (void)_setContentOffsetWithoutRecordingScrollPosition:(struct CGPoint)arg1;
- (void)_observedTextViewDidChange:(id)arg1;
- (unsigned int)_totalNumberOfTextViewsInLayoutManager;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (id)_canvasView;
- (id)_containerView;
@property(copy) NSAttributedString *attributedText;
- (void)addTextAlternativesDisplayStyle:(int)arg1 toRange:(struct _NSRange)arg2;
- (_Bool)_ownsInputAccessoryView;
@property(retain) UIView *inputAccessoryView;
- (id)_inputController;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(_Bool)arg2 isEditable:(_Bool)arg3 isSelectable:(_Bool)arg4 isDraggable:(_Bool)arg5;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (_Bool)isAccessibilityElementByDefault;
- (void)drawRect:(struct CGRect)arg1 forViewPrintFormatter:(id)arg2;
- (Class)_printFormatterClass;
- (void)endSnapshotSeparation;
- (void)addSnapshotSeparation:(float)arg1 withAffinity:(int)arg2;
- (float)beginSnapshotSeparationOfHeight:(float)arg1 atYOffset:(float)arg2;
- (struct CGRect)rectInTextContainerForRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *uiss_snapshotView;
@property(nonatomic, setter=_setDrawsDebugBaselines:) _Bool _drawsDebugBaselines;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (float)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(int)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(int)arg5 multiplier:(float)arg6;
- (float)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(int)arg2 inContainer:(id)arg3 isGuide:(_Bool)arg4;
- (_Bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(int *)arg1;
- (id)_fontInfoForBaselineSpacing;
- (_Bool)_hasFontInfoForVerticalBaselineSpacing;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(nonatomic) __weak id <UITextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) int forceDictationKeyboardType;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned int hash;
@property(nonatomic) _Bool hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(readonly, nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) int smartDashesType; // @dynamic smartDashesType;
@property(nonatomic) int smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property(nonatomic) int smartQuotesType; // @dynamic smartQuotesType;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

