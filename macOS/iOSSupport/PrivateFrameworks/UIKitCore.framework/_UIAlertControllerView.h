//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKitCore/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>
#import <UIKitCore/UIScrollViewDelegate-Protocol.h>
#import <UIKitCore/UISpringLoadedInteractionSupporting-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UILabel, UIVisualEffectView, _UIAlertControllerActionViewMetrics, _UIAlertControllerInterfaceActionGroupView, _UIFlexibleConstantConstraintSet, _UIKeyboardLayoutAlignmentView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerView : UIView <UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UISpringLoadedInteractionSupporting, UIGestureRecognizerDelegatePrivate>
{
    UIAlertController *_alertController;
    UIAlertControllerVisualStyle *_visualStyle;
    struct {
        unsigned int hasAppliedTitleAndMessageLabelVibrantContainerViewConstraints:1;
        unsigned int hasAppliedTitleConstraints:1;
        unsigned int hasAppliedMessageConstraints:1;
        unsigned int hasAppliedDetailConstraints:1;
        unsigned int presentedAsPopover:1;
        unsigned int hasDimmingView:1;
        unsigned int cancelActionIsDiscrete:1;
        unsigned int shouldHaveBackdropView:1;
        unsigned int alignsToKeyboard:1;
        unsigned int hasCachedLargestActionDimension:1;
        unsigned int needsActionsChangedHandling:1;
        unsigned int needsUpdateForPropertyChange:1;
    } _alertControllerViewFlags;
    UIView *_contentView;
    UIView *_contentViewTopItemsView;
    _UIAlertControllerInterfaceActionGroupView *_mainInterfaceActionsGroupView;
    _UIAlertControllerInterfaceActionGroupView *_discreteCancelActionGroupView;
    UIVisualEffectView *_titleAndMessageLabelVibrantContainerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_detailMessageLabel;
    UIView *_separatedHeaderContentViewControllerContainerView;
    UIView *_headerContentViewControllerContainerView;
    UIView *_contentViewControllerContainerView;
    UIView *_textFieldViewControllerContainerView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    UIView *_dimmingView;
    NSMutableArray *_actionViews;
    struct CGPoint _actionSelectionInitialLocation;
    long long _layoutRequiresPositionUpdateCount;
    NSArray *_dimmingViewConstraints;
    NSArray *_dimmingViewForegroundViewTopConstraints;
    NSArray *_dimmingViewForegroundViewBottomConstraints;
    NSArray *_dimmingViewConstraintsForAlertStyle;
    NSArray *_dimmingViewConstraintsForActionSheetStyle;
    NSArray *_noDimmingViewConstraints;
    NSLayoutConstraint *_headerContentViewControllerPreferredWidthConstraint;
    NSLayoutConstraint *_headerContentViewControllerPreferredHeightConstraint;
    struct CGSize _largestActionDimension;
    UIAlertAction *_effectivePreferredAction;
    long long _batchActionChangesInProgressCount;
    BOOL _springLoaded;
    BOOL _actionsReversed;
    BOOL _presentationContextPrefersCancelActionShown;
    _UIAlertControllerActionViewMetrics *_actionViewMetrics;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewMaxHeightConstraint;
    NSLayoutConstraint *_headerContentViewControllerContainerViewTopAlignmentConstraint;
    NSArray *_titleAndMessageLabelVibrantContainerViewVerticalConstraints;
    _UIFlexibleConstantConstraintSet *_titleLabelTopAlignmentConstraints;
    _UIFlexibleConstantConstraintSet *_messageLabelTopAlignmentConstraints;
    NSLayoutConstraint *_detailMessageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewLeftConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewRightConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewTopConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewMaximumWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_separatedHeaderContentViewControllerContainerViewBottomConstraint;
    NSLayoutConstraint *_separatedHeaderContentViewControllerContainerViewWidthConstraint;
    _UIFlexibleConstantConstraintSet *_textFieldViewControllerContainerViewTopAlignmentConstraints;
    NSLayoutConstraint *_textFieldViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewWidthConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHeightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
    NSLayoutConstraint *_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
    NSLayoutConstraint *_actionGroupEqualsContentViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    struct CGSize _layoutSize;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (void)initialize;
@property(retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // @synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // @synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // @synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // @synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint;
@property(retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint; // @synthesize actionGroupEqualsContentViewWidthConstraint=_actionGroupEqualsContentViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint; // @synthesize discreteActionGroupViewHorizontalLayoutTrailingConstraint=_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint; // @synthesize mainActionButtonSequenceViewHorizontalAlignmentConstraint=_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint; // @synthesize mainActionButtonSequenceViewHeightConstraint=_mainActionButtonSequenceViewHeightConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint; // @synthesize mainActionButtonSequenceViewWidthConstraint=_mainActionButtonSequenceViewWidthConstraint;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint; // @synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint; // @synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint;
@property(retain) _UIFlexibleConstantConstraintSet *textFieldViewControllerContainerViewTopAlignmentConstraints; // @synthesize textFieldViewControllerContainerViewTopAlignmentConstraints=_textFieldViewControllerContainerViewTopAlignmentConstraints;
@property(retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewWidthConstraint; // @synthesize separatedHeaderContentViewControllerContainerViewWidthConstraint=_separatedHeaderContentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewBottomConstraint; // @synthesize separatedHeaderContentViewControllerContainerViewBottomConstraint=_separatedHeaderContentViewControllerContainerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // @synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // @synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // @synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint; // @synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewBottomConstraint; // @synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint; // @synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint; // @synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint; // @synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint; // @synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // @synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewTopConstraint; // @synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewRightConstraint; // @synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // @synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint; // @synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint;
@property(retain) _UIFlexibleConstantConstraintSet *messageLabelTopAlignmentConstraints; // @synthesize messageLabelTopAlignmentConstraints=_messageLabelTopAlignmentConstraints;
@property(retain) _UIFlexibleConstantConstraintSet *titleLabelTopAlignmentConstraints; // @synthesize titleLabelTopAlignmentConstraints=_titleLabelTopAlignmentConstraints;
@property(retain) NSArray *titleAndMessageLabelVibrantContainerViewVerticalConstraints; // @synthesize titleAndMessageLabelVibrantContainerViewVerticalConstraints=_titleAndMessageLabelVibrantContainerViewVerticalConstraints;
@property(retain) NSLayoutConstraint *headerContentViewControllerContainerViewTopAlignmentConstraint; // @synthesize headerContentViewControllerContainerViewTopAlignmentConstraint=_headerContentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewMaxHeightConstraint; // @synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(retain) NSLayoutConstraint *foregroundViewWidthConstraint; // @synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint;
@property(nonatomic) BOOL presentationContextPrefersCancelActionShown; // @synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown;
@property(nonatomic, getter=_layoutSize, setter=_setLayoutSize:) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic, getter=_actionsReversed, setter=_setActionsReversed:) BOOL actionsReversed; // @synthesize actionsReversed=_actionsReversed;
@property(retain, nonatomic) _UIAlertControllerActionViewMetrics *actionViewMetrics; // @synthesize actionViewMetrics=_actionViewMetrics;
@property(nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
@property(readonly) UIView *_contentView; // @synthesize _contentView;
- (void).cxx_destruct;
- (BOOL)_forceLayoutEngineSolutionInRationalEdges;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusedView;
- (long long)tintAdjustmentMode;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (void)_disableAllowGroupOpacitiyIfNecessaryAlongsideTransitionCoordinator:(id)arg1;
@property(nonatomic) double effectAlpha;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_ensureActionViewRepresentationsHaveMetrics;
- (void)_recomputeActionMetrics;
- (void)_sizeOfTextFieldViewControllerChanged;
- (void)_applyISEngineLayoutValuesToBoundsOnly:(BOOL)arg1;
- (void)_layoutAndPositionInParentIfNeeded;
- (void)_sizeOfContentViewControllerChanged;
- (void)_sizeOfHeaderContentViewControllerChanged;
- (void)_removeSeparatedHeaderContentViewControllerFromHierarchy;
- (void)_removeContentViewControllerViewFromHierarchy;
- (void)_removeHeaderContentViewControllerViewFromHierarchy;
- (void)_addSeparatedHeaderContentViewControllerToViewHierarchy;
- (void)_addContentViewControllerToViewHierarchy;
- (void)_addHeaderContentViewControllerToViewHierarchy;
@property BOOL alignsToKeyboard;
@property BOOL shouldHaveBackdropView;
@property BOOL cancelActionIsDiscrete;
- (void)_updateCancelActionBeingDiscrete;
- (id)__cancelActionView;
- (BOOL)showsCancelAction;
@property BOOL hasDimmingView;
@property BOOL presentedAsPopover;
- (id)textFields;
- (double)_spaceRequiredForActionSectionsSpacing;
- (id)_indexesOfActionSectionSeparators;
- (id)_preferredActionView;
- (id)_focusedAction;
- (id)cancelAction;
- (id)actions;
- (id)separatedHeaderContentViewController;
- (id)contentViewController;
- (id)headerContentViewController;
- (id)_textFieldViewController;
- (BOOL)_hasTextFields;
- (BOOL)_hasDetailMessage;
- (BOOL)_hasAttributedMessage;
- (BOOL)_hasMessage;
- (BOOL)_hasAttributedTitle;
- (BOOL)_hasTitle;
- (BOOL)_titleAndMessageLabelUseVibrancy;
- (id)_vibrancyEffectForTitleAndMessageLabel;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (id)message;
- (id)title;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_accessibilityColorsChanged;
- (void)_contentSizeChanged;
- (void)_updateTintColor;
- (void)_updateConstraintConstants;
- (void)_updateActionViewHeight;
- (void)_updateActionViewVisualStyle:(id)arg1;
- (void)_updateContentView;
- (void)_updateInsets;
- (void)safeAreaInsetsDidChange;
- (void)_updateLabelProperties;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (void)_updateMessageLabelFontSize;
- (void)_updateDetailLabelFontSize;
- (void)_updateTitleLabelFontSize;
- (void)_updateMessageLabelContents;
- (void)_updateDetailLabelContents;
- (void)_updateTitleLabelContents;
- (void)_updateStyleForIdiomChange:(BOOL)arg1;
@property(retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (struct CGSize)_minimumSizeForAllActions;
- (double)_labelHorizontalInsets;
- (struct CGSize)_contentViewControllerSize;
- (double)_marginBetweenInterfaceActionGroups;
- (BOOL)hasDiscreteHorizontalCancelAction;
- (BOOL)_actionLayoutIsVertical;
- (void)_updatePreferredAction;
- (id)_effectivePreferredAction;
- (long long)_numberOfActionsForMainActionButtonSequenceView;
- (id)_presentableAlertActions;
- (id)_unlocalizedOrderedPresentableAlertActions;
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
- (BOOL)_shouldHaveCancelActionInMainActionButtonSequenceView;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_scrollInitialActionToVisibleForPresentation;
- (void)_reloadInterfaceActionsGroupViewPreferredAction;
- (void)_reloadInterfaceActionViewRepresentations;
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;
- (id)_interfaceActionRepresentationForAlertAlertAction:(id)arg1;
- (void)_textFieldsChanged;
- (void)_associateActionsWithActionViews;
- (void)_actionsChanged;
- (void)_performBatchActionChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateForPropertyChangeIfNeeded;
- (void)_propertiesChanged;
- (void)_updateMainScrollableHeaderViewHasRealContent;
- (void)_actionLayoutDirectionChanged;
- (void)_configureActionGroupViewToAllowHorizontalLayout:(BOOL)arg1;
- (void)_recomputeAlertControllerWidth;
- (BOOL)_hasDiscreteCancelAction;
- (id)_discreteCancelActionView;
- (BOOL)_canLayOutActionsHorizontally;
- (struct CGSize)_mainActionButtonSequenceViewSizeForHorizontalLayout:(BOOL)arg1 itemSize:(struct CGSize)arg2;
- (struct CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1;
- (struct CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(char *)arg2;
- (double)_idealLayoutWidth;
- (double)_layoutWidthForHorizontalLayout:(BOOL)arg1;
- (struct UIEdgeInsets)_contentInsets;
- (double)_availableWidthForHorizontalLayout:(BOOL)arg1;
- (BOOL)_horizontalLayoutCanUseFullWidth;
- (double)_verticalLayoutWidth;
- (struct CGSize)_sizeForLayoutWidthDetermination;
- (BOOL)_buttonsAreTopMost;
- (void)_applyTextFieldViewControllerContainerViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyTitleAndMessageLabelVibrantContainerViewConstraints;
- (void)_setupHorizontalConstraintsForLabelView:(id)arg1;
- (void)_applyHeaderContentViewControllerContainerViewConstraints;
- (void)_applySeparatedContentViewControllerContainerViewContraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_prepareDimmingViewConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_updateActionsGroupPresentationStyles;
- (id)_newStyledBackgroundView;
- (void)_prepareDiscreteCancelActionGroupView;
- (void)_prepareMainInterfaceActionsGroupView;
- (void)_prepareTextFieldViewControllerContainerView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareTitleAndMessageLabelVibrantContainer;
- (void)_prepareSeparateContentViewControllerContainerView;
- (void)_prepareHeaderContentViewControllerContainerView;
- (void)_prepareContentViewTopItemsView;
- (void)_prepareContentView;
- (void)updateConstraints;
- (void)_prepareViewsAndAddConstraints;
@property __weak UIAlertController *alertController;
- (void)updateObservations:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

