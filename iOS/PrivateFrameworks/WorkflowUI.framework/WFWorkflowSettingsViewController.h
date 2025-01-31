//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UIViewControllerTransitioningDelegate-Protocol.h>
#import <WorkflowUI/WFAddToHomeScreenActivityDelegate-Protocol.h>
#import <WorkflowUI/WFContentClassesViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFGalleryImportViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFTableViewFooterLinkViewDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowSettingsViewDataSourceDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowWizardNameCellDelegate-Protocol.h>

@class NSString, UINavigationController, WFAddToHomeScreenActivity, WFDatabase, WFWorkflow, WFWorkflowSettingsLayoutMetrics, WFWorkflowSettingsViewDataSource;
@protocol WFWorkflowSettingsViewControllerDelegate;

@interface WFWorkflowSettingsViewController : UITableViewController <WFAddToHomeScreenActivityDelegate, UIViewControllerTransitioningDelegate, WFContentClassesViewControllerDelegate, WFGalleryImportViewControllerDelegate, WFWorkflowWizardNameCellDelegate, WFWorkflowSettingsViewDataSourceDelegate, WFTableViewFooterLinkViewDelegate>
{
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    id <WFWorkflowSettingsViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFDatabase *_database;
    NSString *_stagedWorkflowNameForUpdate;
    WFAddToHomeScreenActivity *_homeScreenActivity;
    UINavigationController *_cardPresentationNavigationController;
    WFWorkflowSettingsViewDataSource *_dataSource;
}

@property(retain, nonatomic) WFWorkflowSettingsViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UINavigationController *cardPresentationNavigationController; // @synthesize cardPresentationNavigationController=_cardPresentationNavigationController;
@property(retain, nonatomic) WFAddToHomeScreenActivity *homeScreenActivity; // @synthesize homeScreenActivity=_homeScreenActivity;
@property(retain, nonatomic) NSString *stagedWorkflowNameForUpdate; // @synthesize stagedWorkflowNameForUpdate=_stagedWorkflowNameForUpdate;
@property(retain, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) __weak id <WFWorkflowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)arg1;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)galleryImportViewControllerDidCancel:(id)arg1;
- (void)galleryImportViewController:(id)arg1 didFinishWithWorkflow:(id)arg2;
- (void)homeScreenActivityDidFinish:(id)arg1 success:(_Bool)arg2;
- (void)dismissIconViewController;
- (void)didSelectSettingsSectionImportQuestionsAtRow:(long long)arg1;
- (void)didSelectSettingsSectionHomeScreenAtRow:(long long)arg1;
- (void)didSelectSettingsSectionShowInAtRow:(long long)arg1;
- (void)didSelectSettingsSectionHelpAtRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)footerLinkView:(id)arg1 didTapURL:(id)arg2;
- (void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2;
- (void)toggledActionExtensionSwitch:(id)arg1;
- (void)toggledWidgetSwitch:(id)arg1;
- (void)toggleWorkflowType:(id)arg1 sender:(id)arg2;
- (_Bool)showInputTypeSelection;
- (void)invalidateLayoutMetrics;
- (void)contentSizeCategoryDidChange;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
- (void)done;
- (_Bool)accessibilityPerformEscape;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

