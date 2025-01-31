//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/ABCardViewDelegate-Protocol.h>
#import <ContactsUI/AKCardViewDataSourceSupport-Protocol.h>
#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>
#import <ContactsUI/CNContactDetailsViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactNameViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactSharingEnabledWarningViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNEditAutorizationViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIShareKitTransitionProvider-Protocol.h>

@class ABAddressBook, ABCardViewSaveHelper, ABCardViewStyleProvider, ABCardViewUndoableDataSource, ABCommandExecutor, ABPerson, AKCardViewDataSource, AKCardViewDataSourceFactory, CNContact, CNContactCardViewControlContext, CNContactCardViewControllerABPersonViewMediator, CNContactCardViewControllerDataSourceDelegate, CNContactCardViewControllerWidgetProviderDelegate, CNContactCardWidgetProvider, CNContactPersistenceHelper, CNContainer, CNUIEnvironment, CNUIMeContactMonitor, CNUIUserActionListDataSource, NSArray, NSColor, NSMutableDictionary, NSSet, NSStackView, NSString, NSTextField, NSUndoManager;
@protocol CNCancelable, CNContactCardViewControllerDelegate, CNContactCardViewControllerLogger, CNContactCardViewRefreshStrategy, CNInhibitor, CNSchedulerProvider;

@interface CNContactCardViewController : NSViewController <CNContactDetailsViewControllerDelegate, CNContactNameViewControllerDelegate, AKCardViewDataSourceSupport, ABCardViewDelegate, CNAvatarViewDelegate, CNEditAutorizationViewControllerDelegate, CNContactSharingEnabledWarningViewControllerDelegate, CNUIShareKitTransitionProvider>
{
    BOOL _editable;
    BOOL _selectable;
    BOOL _shouldSave;
    BOOL _shouldShowLinkedContacts;
    BOOL _shouldShowSuggestedFields;
    BOOL _shouldShowInMapsButtons;
    BOOL _shouldWaitUntilLaunchForRefresh;
    BOOL _shouldDisableRefetching;
    BOOL _shouldRefetchIfRefetchingNotDisabled;
    BOOL _fetchAsynchronously;
    BOOL _isMakingChangesOutsideOfEditMode;
    AKCardViewDataSource *_dataSource;
    CNContact *_contact;
    CNUIUserActionListDataSource *_userActionListDataSource;
    ABPerson *_legacySaveTarget;
    ABAddressBook *_legacySaveTargetAddressBook;
    id <CNCancelable> _fetchContactToken;
    AKCardViewDataSourceFactory *_dataSourceFactory;
    ABCardViewUndoableDataSource *_undoableDataSource;
    CNContactCardViewControllerABPersonViewMediator *_abPersonViewMediator;
    CNContactCardViewControllerDataSourceDelegate *_dataSourceDelegate;
    ABCardViewSaveHelper *_saveHelper;
    id <CNInhibitor> _editModeSuddenTerminationInhibitor;
    ABCommandExecutor *_commandExecutor;
    ABCommandExecutor *_dataSourceCommandExecutor;
    CNUIEnvironment *_environment;
    CNContainer *_containerOfContact;
    CNContactCardWidgetProvider *_widgetProvider;
    CNContactCardViewControllerWidgetProviderDelegate *_widgetProviderDelegate;
    CNContactCardViewControlContext *_controlContext;
    NSArray *_widgetsDisplayed;
    id <CNContactCardViewControllerLogger> _logger;
    CNUIMeContactMonitor *_meMonitor;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNContactCardViewRefreshStrategy> _refreshStrategy;
    NSUndoManager *_undoManager;
    NSMutableDictionary *_displayAtttibutes;
    NSStackView *_stackView;
    NSTextField *_noContactLabel;
    CNContactPersistenceHelper *_persistenceHelper;
    id <CNCancelable> _recentLikenessesToken;
    ABCardViewStyleProvider *_styleProvider;
    long long _backgroundStyle;
    id <CNContactCardViewControllerDelegate> _contactCardControllerDelegate;
    unsigned long long _mode;
    unsigned long long _displayStyle;
    NSString *_containerIdentifier;
    NSColor *_backgroundColor;
}

@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <CNContactCardViewControllerDelegate> contactCardControllerDelegate; // @synthesize contactCardControllerDelegate=_contactCardControllerDelegate;
@property(readonly, nonatomic) BOOL isMakingChangesOutsideOfEditMode; // @synthesize isMakingChangesOutsideOfEditMode=_isMakingChangesOutsideOfEditMode;
@property(nonatomic) BOOL fetchAsynchronously; // @synthesize fetchAsynchronously=_fetchAsynchronously;
@property(nonatomic) BOOL shouldRefetchIfRefetchingNotDisabled; // @synthesize shouldRefetchIfRefetchingNotDisabled=_shouldRefetchIfRefetchingNotDisabled;
@property(nonatomic) BOOL shouldDisableRefetching; // @synthesize shouldDisableRefetching=_shouldDisableRefetching;
@property(nonatomic) BOOL shouldWaitUntilLaunchForRefresh; // @synthesize shouldWaitUntilLaunchForRefresh=_shouldWaitUntilLaunchForRefresh;
@property(nonatomic) BOOL shouldShowInMapsButtons; // @synthesize shouldShowInMapsButtons=_shouldShowInMapsButtons;
@property(nonatomic) BOOL shouldShowSuggestedFields; // @synthesize shouldShowSuggestedFields=_shouldShowSuggestedFields;
@property(nonatomic) BOOL shouldShowLinkedContacts; // @synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts;
@property(nonatomic) BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) id <CNCancelable> recentLikenessesToken; // @synthesize recentLikenessesToken=_recentLikenessesToken;
@property(retain, nonatomic) CNContactPersistenceHelper *persistenceHelper; // @synthesize persistenceHelper=_persistenceHelper;
@property(retain, nonatomic) NSTextField *noContactLabel; // @synthesize noContactLabel=_noContactLabel;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSMutableDictionary *displayAtttibutes; // @synthesize displayAtttibutes=_displayAtttibutes;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) id <CNContactCardViewRefreshStrategy> refreshStrategy; // @synthesize refreshStrategy=_refreshStrategy;
@property(retain, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) id <CNContactCardViewControllerLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSArray *widgetsDisplayed; // @synthesize widgetsDisplayed=_widgetsDisplayed;
@property(retain, nonatomic) CNContactCardViewControlContext *controlContext; // @synthesize controlContext=_controlContext;
@property(retain, nonatomic) CNContactCardViewControllerWidgetProviderDelegate *widgetProviderDelegate; // @synthesize widgetProviderDelegate=_widgetProviderDelegate;
@property(retain, nonatomic) CNContactCardWidgetProvider *widgetProvider; // @synthesize widgetProvider=_widgetProvider;
@property(retain, nonatomic) CNContainer *containerOfContact; // @synthesize containerOfContact=_containerOfContact;
@property(retain, nonatomic) CNUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) ABCommandExecutor *dataSourceCommandExecutor; // @synthesize dataSourceCommandExecutor=_dataSourceCommandExecutor;
@property(retain, nonatomic) ABCommandExecutor *commandExecutor; // @synthesize commandExecutor=_commandExecutor;
@property(retain, nonatomic) id <CNInhibitor> editModeSuddenTerminationInhibitor; // @synthesize editModeSuddenTerminationInhibitor=_editModeSuddenTerminationInhibitor;
@property(retain, nonatomic) ABCardViewSaveHelper *saveHelper; // @synthesize saveHelper=_saveHelper;
@property(retain, nonatomic) CNContactCardViewControllerDataSourceDelegate *dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(retain, nonatomic) CNContactCardViewControllerABPersonViewMediator *abPersonViewMediator; // @synthesize abPersonViewMediator=_abPersonViewMediator;
@property(retain, nonatomic) ABCardViewUndoableDataSource *undoableDataSource; // @synthesize undoableDataSource=_undoableDataSource;
@property(retain, nonatomic) AKCardViewDataSourceFactory *dataSourceFactory; // @synthesize dataSourceFactory=_dataSourceFactory;
@property(retain, nonatomic) id <CNCancelable> fetchContactToken; // @synthesize fetchContactToken=_fetchContactToken;
@property(retain, nonatomic) ABAddressBook *legacySaveTargetAddressBook; // @synthesize legacySaveTargetAddressBook=_legacySaveTargetAddressBook;
@property(retain, nonatomic) ABPerson *legacySaveTarget; // @synthesize legacySaveTarget=_legacySaveTarget;
@property(retain, nonatomic) CNUIUserActionListDataSource *userActionListDataSource; // @synthesize userActionListDataSource=_userActionListDataSource;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (void)setPropertyKeysToDisplay:(id)arg1;
- (void)setContactDataIsTransient:(BOOL)arg1;
- (id)displayAttributesForProperty:(id)arg1 identifier:(id)arg2;
- (void)setDisplayAttributes:(id)arg1 forProperty:(id)arg2 identifier:(id)arg3;
- (id)_displayAttributeKeyForProperty:(id)arg1 identifier:(id)arg2;
- (BOOL)isUnified;
- (id)delegate;
- (void)valueAlignmentViewDidChange:(id)arg1;
- (id)colorForProperty:(id)arg1 identifier:(id)arg2;
- (id)colorForProperty:(id)arg1;
@property(readonly, nonatomic) NSSet *uniqueIdentifiers;
- (BOOL)isKeyDisplayedByNameViewController:(id)arg1;
- (void)showDetailsViewControllerInEditModeIfNecessary;
- (void)editKey:(id)arg1 label:(id)arg2 identifier:(id)arg3 yOffset:(double)arg4;
- (void)editKey:(id)arg1 label:(id)arg2;
- (void)editKey:(id)arg1;
- (void)beginEditingContactKey:(id)arg1 label:(id)arg2;
- (void)beginEditingContactKey:(id)arg1;
- (BOOL)isAvailableKey:(id)arg1;
- (void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
- (BOOL)canEditContactKey:(id)arg1;
- (BOOL)canEditContact;
- (void)addTemplateItemForKey:(id)arg1;
- (void)contactDetailsViewControllerKeyViewLoopNeedsUpdate:(id)arg1;
- (void)contactNameViewController:(id)arg1 willLoseFocusInDirection:(unsigned long long)arg2;
- (void)avatarViewControllerDidFinishEditing:(id)arg1 cancelled:(BOOL)arg2;
- (void)cardViewNoteDidChange;
- (BOOL)avatarViewControllerCanDisplayEditOverlay:(id)arg1;
- (BOOL)isPictureEditable;
- (void)avatarViewControllerWantsEdit:(id)arg1;
- (void)beginEditingContactImage;
- (void)clearContactImage;
- (BOOL)canEditContactImage;
- (void)highlightSearchTerms:(id)arg1;
- (id)hostWindowForShareSheet;
- (id)profilePhotoImage;
- (struct CGRect)profilePhotoScreenRect;
- (void)reloadNameDataForKey:(id)arg1;
- (void)reloadCollectionData;
- (id)addressBookForActionExecution;
- (void)toggleEditing;
- (BOOL)canSelectContact;
- (BOOL)isDirectoryResult;
- (void)selectFirstKeyViewIfNecessary;
@property(readonly, nonatomic) BOOL isMe;
@property(readonly, nonatomic) BOOL isEmpty;
- (struct CGSize)preferredMinimumSize;
- (void)tabSwitcherDidChange:(id)arg1;
- (void)didClickHeader:(id)arg1;
- (void)setPersonToCompanyIfNameIsEmpty;
- (void)commitEditing;
- (void)setNoCardLabel:(id)arg1;
- (void)enableUndoWithManager:(id)arg1;
- (void)setPerson:(id)arg1 shouldShowLinkedPeople:(BOOL)arg2 shouldShowSuggestedFields:(BOOL)arg3;
- (void)setPerson:(id)arg1 withSuggestedContact:(id)arg2;
- (void)setPerson:(id)arg1 shouldShowLinkedPeople:(BOOL)arg2;
- (void)setContact:(id)arg1 shouldShowLinkedContacts:(BOOL)arg2;
- (void)setContact:(id)arg1 withSuggestedContact:(id)arg2;
- (void)setContact:(id)arg1 shouldShowLinkedContacts:(BOOL)arg2 shouldShowSuggestedFields:(BOOL)arg3;
- (void)setPerson:(id)arg1;
@property(readonly, nonatomic) ABPerson *person;
@property(readonly, nonatomic) double desiredHeight;
- (void)informDelegateOfDeisredHeightChange;
- (void)forceEndOfEditingSession:(id)arg1;
- (void)reloadData;
- (void)reloadPreservingNoteInsertionPoint;
- (void)updateWidgets;
- (void)setupKeyViewLoop;
- (void)dispayAndLayoutNewWidgets:(id)arg1;
- (void)displayWidgets;
- (BOOL)isShouldSaveFlagEnabledAndCanSaveInCurrentMode;
- (void)saveContactIfNecessaryWithRefreshData:(BOOL)arg1;
- (void)saveContactIfNecessary;
@property(readonly, nonatomic) BOOL isSaving;
- (void)updateDataSourceWithContact:(id)arg1;
- (void)handeNewContact:(id)arg1;
- (void)handleNilContact;
- (void)updateToContact:(id)arg1 containerOfContact:(id)arg2;
- (void)didReceveContactFetchResult:(id)arg1;
- (BOOL)shouldRefetchContact:(id)arg1;
- (id)generateFetchDescriptionForContact:(id)arg1;
- (void)fetchContact;
- (void)refreshData;
@property(readonly, nonatomic) CNContact *editedContact;
- (void)finishSwichingToDefaultModeFromMode:(unsigned long long)arg1;
- (void)finishSwichingToEditModeAndRefocusOnNameView:(BOOL)arg1;
- (void)authorizedSwitchModeFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2 refocusOnNameView:(BOOL)arg3;
- (void)editAuthorizationViewController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (void)presentEditAutorizationUI;
- (BOOL)shouldPresentEditAutorizationUIWhenSwitchingFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2;
- (void)switchModeFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2 refocusOnNameView:(BOOL)arg3;
@property(readonly, nonatomic) BOOL hasChanges;
- (BOOL)editLikenessMode;
- (BOOL)editMode;
@property(retain, nonatomic) AKCardViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)createViewHierarchy;
- (void)ensureUserEnteredDataIsPersistedBeforeViewWillDisappear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)commonInitWithEnvironment:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

