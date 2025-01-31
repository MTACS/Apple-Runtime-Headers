//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/QLPreviewControllerDelegate-Protocol.h>
#import <WorkflowUI/UIDropInteractionDelegate-Protocol.h>
#import <WorkflowUI/UIScrollViewDelegate-Protocol.h>
#import <WorkflowUI/WFActionParameterInputProvider-Protocol.h>
#import <WorkflowUI/WFModuleModelProvider-Protocol.h>
#import <WorkflowUI/WFModulesQuickLookViewDelegate-Protocol.h>
#import <WorkflowUI/WFModulesSupplementaryViewDataSource-Protocol.h>
#import <WorkflowUI/WFParameterInputViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFRunWorkflowFooterViewDelegate-Protocol.h>
#import <WorkflowUI/WFRunWorkflowToolbarDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowControllerDelegate-Protocol.h>

@class NSIndexPath, NSString, UIView, WFAction, WFContentCollection, WFDatabase, WFModulesQuickLookView, WFRunWorkflowFooterView, WFRunWorkflowToolbar, WFWorkflow, WFWorkflowController, WFWorkflowViewController;
@protocol WFRunWorkflowViewControllerDelegate;

@interface WFRunWorkflowViewController : UIViewController <WFModuleModelProvider, WFWorkflowControllerDelegate, WFParameterInputViewControllerDelegate, WFActionParameterInputProvider, WFModulesSupplementaryViewDataSource, WFModulesQuickLookViewDelegate, QLPreviewControllerDelegate, UIScrollViewDelegate, UIDropInteractionDelegate, WFRunWorkflowFooterViewDelegate, WFRunWorkflowToolbarDelegate>
{
    _Bool _clearsWorkflowSettings;
    _Bool _indicatesLoadingBeforeRunning;
    _Bool _runningFromOtherWorkflow;
    _Bool _droppingInputContent;
    id <WFRunWorkflowViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFDatabase *_database;
    unsigned long long _editingState;
    WFWorkflowController *_workflowController;
    WFContentCollection *_workflowInput;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _parameterInputHandler;
    WFAction *_lastRunningAction;
    WFModulesQuickLookView *_quickLookView;
    WFRunWorkflowFooterView *_footerView;
    UIView *_inputDropZoneView;
    CDUnknownBlockType _prepareToRunCompletion;
    NSIndexPath *_prepareToRunIndexPath;
    WFAction *_currentlyRunningAction;
    WFWorkflowViewController *_workflowViewController;
}

@property(readonly, nonatomic) __weak WFWorkflowViewController *workflowViewController; // @synthesize workflowViewController=_workflowViewController;
@property(retain, nonatomic) WFAction *currentlyRunningAction; // @synthesize currentlyRunningAction=_currentlyRunningAction;
@property(retain, nonatomic) NSIndexPath *prepareToRunIndexPath; // @synthesize prepareToRunIndexPath=_prepareToRunIndexPath;
@property(copy, nonatomic) CDUnknownBlockType prepareToRunCompletion; // @synthesize prepareToRunCompletion=_prepareToRunCompletion;
@property(readonly, nonatomic) __weak UIView *inputDropZoneView; // @synthesize inputDropZoneView=_inputDropZoneView;
@property(nonatomic) _Bool droppingInputContent; // @synthesize droppingInputContent=_droppingInputContent;
@property(nonatomic) __weak WFRunWorkflowFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak WFModulesQuickLookView *quickLookView; // @synthesize quickLookView=_quickLookView;
@property(nonatomic) _Bool runningFromOtherWorkflow; // @synthesize runningFromOtherWorkflow=_runningFromOtherWorkflow;
@property(retain, nonatomic) WFAction *lastRunningAction; // @synthesize lastRunningAction=_lastRunningAction;
@property(copy, nonatomic) CDUnknownBlockType parameterInputHandler; // @synthesize parameterInputHandler=_parameterInputHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFContentCollection *workflowInput; // @synthesize workflowInput=_workflowInput;
@property(retain, nonatomic) WFWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
@property(readonly, nonatomic) unsigned long long editingState; // @synthesize editingState=_editingState;
@property(nonatomic) _Bool indicatesLoadingBeforeRunning; // @synthesize indicatesLoadingBeforeRunning=_indicatesLoadingBeforeRunning;
@property(nonatomic) _Bool clearsWorkflowSettings; // @synthesize clearsWorkflowSettings=_clearsWorkflowSettings;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) __weak id <WFRunWorkflowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)runWorkflowFooterViewDidSelectAddButton:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)accessibilityPerformMagicTap;
- (void)runWorkflowFromKeyPress;
- (id)keyCommands;
- (void)previewControllerWillDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (void)quickLookView:(id)arg1 clickedShare:(id)arg2 forContentItem:(id)arg3;
- (void)quickLookViewWantsFullscreen:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)invalidateLayoutForFooterView;
- (void)scrollToQuickLook;
- (void)clearQuickLook;
- (void)updateQuickLookWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowAddButton;
- (_Bool)shouldShowQuickLookView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3;
- (void)parameterInputViewControllerDidFinish:(id)arg1 withParameterStates:(id)arg2;
- (void)parameterInputViewControllerDidCancel:(id)arg1;
- (void)checkModulePreparationScrollState;
- (void)scrollViewDidScroll:(id)arg1;
- (void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)action:(id)arg1 canProvideInputForParameter:(id)arg2;
- (_Bool)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (void)workflowController:(id)arg1 actionDidRequestWorkflowExit:(id)arg2;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)finishWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(_Bool)arg3;
- (id)errorWithRecoveryOptionsFromError:(id)arg1;
- (void)stopWorkflow;
- (void)runWorkflowFromSource:(id)arg1 withInput:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)runWorkflowFromSource:(id)arg1;
- (void)runToolbarStopTapped:(id)arg1;
- (void)runToolbarPlayTapped:(id)arg1;
@property(readonly, nonatomic) __weak WFRunWorkflowToolbar *toolbar;
- (id)createModelForAction:(id)arg1;
- (id)indexPathForAction:(id)arg1;
- (void)accessibilityAnnounce:(id)arg1;
- (void)dismissViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateContentInset;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)actionShouldHideConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 cellConfigurationFunction:(CDUnknownFunctionPointerType)arg4;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

