//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/CNContactPickerDelegate-Protocol.h>
#import <SafariServices/SFContactAutoFillViewControllerFiller-Protocol.h>
#import <SafariServices/WBSOneTimeCodeMonitorObserver-Protocol.h>
#import <SafariServices/_ASCredentialListViewControllerDelegate-Protocol.h>
#import <SafariServices/_ASPasswordCredentialAuthenticationViewControllerDelegate-Protocol.h>
#import <SafariServices/_SFCreditCardCaptureViewControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, SFFormAutoFillFrameHandle, UIView, WBSFormAutoFillMetadataCorrector, WBSFormControlMetadata, WBSFormMetadata, WBSMultiRoundAutoFillManager, _ASPasswordCredentialAuthenticationViewController, _SFFormAutoFillController, _SFFormAutoFillInputSession, _SFFormDataController;

__attribute__((visibility("hidden")))
@interface SFFormAutocompleteState : NSObject <CNContactPickerDelegate, SFContactAutoFillViewControllerFiller, _SFCreditCardCaptureViewControllerDelegate, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate, WBSOneTimeCodeMonitorObserver>
{
    long long _action;
    _SFFormAutoFillController *_autoFillController;
    _SFFormDataController *_dataController;
    UIView *_emptyInputView;
    WBSFormMetadata *_formMetadata;
    unsigned long long _formType;
    NSDictionary *_formValues;
    SFFormAutoFillFrameHandle *_frame;
    _Bool _gatheringFormValues;
    _Bool _hasNotedThatTextDidChangeInPasswordField;
    _SFFormAutoFillInputSession *_inputSession;
    WBSMultiRoundAutoFillManager *_multiRoundAutoFillManager;
    NSString *_prefixForSuggestions;
    WBSFormControlMetadata *_textFieldMetadata;
    NSArray *_cachedCredentialMatches;
    NSArray *_cachedRelatedCredentialMatches;
    CDUnknownBlockType _credentialMatchesCompletionHandler;
    _Bool _fetchingLoginCredentialSuggestions;
    _Bool _invalidated;
    _Bool _hasDeterminedIfURLIsAllowedByWhiteList;
    _Bool _URLIsAllowedByWhiteList;
    CDUnknownBlockType _displayOtherContactsCompletionHandler;
    CDUnknownBlockType _customAutoFillContactCompletionHandler;
    CDUnknownBlockType _creditCardCaptureCompletionHandler;
    WBSFormAutoFillMetadataCorrector *_metadataCorrector;
    NSArray *_cachedExternalCredentialIdentities;
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    CDUnknownBlockType _externalCredentialListCompletionHandler;
    _Bool _submitExternalCredential;
}

+ (_Bool)_shouldSaveCredentialsInProtectionSpace:(id)arg1;
+ (void)_getMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 withFormURL:(id)arg3 credentialMatches:(id)arg4 lastGeneratedPassword:(id)arg5 currentUser:(id)arg6 currentPassword:(id)arg7 forUserNamesOnly:(_Bool)arg8;
@property(readonly, nonatomic) _SFFormAutoFillInputSession *inputSession; // @synthesize inputSession=_inputSession;
- (void).cxx_destruct;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentCredentialListForExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fillASPasswordCredential:(id)arg1 needsAuthentication:(_Bool)arg2 setAutoFilled:(_Bool)arg3 submitForm:(_Bool)arg4;
- (void)_fillPasswordCredentialIdentity:(id)arg1 submitForm:(_Bool)arg2;
- (_Bool)_shouldAllowExternalPasswordAutoFillOnURL:(id)arg1;
- (id)_textSuggestionForExternalCredentialIdentity:(id)arg1 submitForm:(_Bool)arg2;
- (id)externalCredentialIdentities;
- (void)codesUpdatedForOneTimeCodeMonitor:(id)arg1;
- (void)getTextSuggestionForStreamlinedAutoFillWithCredentialIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (id)_correctedFormMetadata:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)performAutoFillWithMatchSelections:(id)arg1 doNotFill:(id)arg2 contact:(id)arg3;
- (void)dismissCustomAutoFill;
- (void)_showOtherContactOptions;
- (void)_switchToCustomInputViewWithMatches:(id)arg1 contact:(id)arg2;
- (void)_autoFillDisplayData:(id)arg1 setAutoFilled:(_Bool)arg2;
- (void)_offerToAutoFillContact;
- (void)_autoFillWithSet:(id)arg1;
- (id)_suggestionsForAutoFillDisplayData:(id)arg1;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (void)_autoFillCreditCardData;
- (void)_updateCreditCardSuggestionsWithHandler:(CDUnknownBlockType)arg1;
- (void)_autoFillSingleCreditCardData:(long long)arg1;
- (void)_captureCreditCardDataWithCameraAndFill;
- (void)_fillCreditCardData:(id)arg1;
- (void)_updateCreditCardAutoFillAction;
- (void)_updateAutoFillActionToCaptureCreditCardAndFill;
- (_Bool)_canAutoFillCreditCardData;
- (void)_fillSingleCreditCardDataValue:(id)arg1 creditCardDataType:(long long)arg2;
- (void)_fillCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
- (id)_sortedSingleCreditCardDataArray:(id)arg1;
- (_Bool)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:(id)arg1;
- (_Bool)_textFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField:(id)arg1;
- (id)_displayTextForCreditCardNumber:(id)arg1;
@property(readonly, nonatomic) _Bool shouldOfferToAutoFillCreditCardData;
- (_Bool)_shouldAllowGeneratedPassword;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_passwordGenerationAssistanceAction;
- (_Bool)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (_Bool)_shouldUsePasswordGenerationAssistanceForTextField;
- (void)_setUserAndPasswordFieldsAutoFilled:(_Bool)arg1 clearPasswordField:(_Bool)arg2;
- (void)_getShouldOfferForgetPassword:(_Bool *)arg1 savePassword:(_Bool *)arg2;
- (_Bool)_hasMatchWithUser:(id)arg1 password:(id)arg2;
- (void)showAllPasswordsButtonTapped;
- (id)_textSuggestionForCredentialDisplayData:(id)arg1 submitForm:(_Bool)arg2;
- (void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_suggestLoginCredentialsShowingQuickTypeKey:(_Bool)arg1;
- (void)_fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(_Bool)arg2 submitForm:(_Bool)arg3;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_fillCredential:(id)arg1 setAutoFilled:(_Bool)arg2 setAsDefaultCredential:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 submitForm:(_Bool)arg5;
- (id)_cachedPotentialCredentialMatches;
- (void)_fetchPotentialCredentialMatchesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getLoginFormUser:(id *)arg1 password:(id *)arg2 userIsAutoFilled:(_Bool *)arg3 passwordIsAutoFilled:(_Bool *)arg4;
- (void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldShowPasswordOptions;
- (void)_presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_viewControllerToPresentFrom;
- (void)_gatherFormValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (void)_setShowingKeyboardInputView:(_Bool)arg1;
- (_Bool)_suggestUsernamesForRegistrationIfPossible:(unsigned long long)arg1;
- (_Bool)_textFieldIsEmptyPasswordField;
@property(readonly, nonatomic) NSString *titleOfAutoFillButton;
- (void)_updateAutoFillButton;
- (void)updateCachedFormMetadataAfterFilling:(id)arg1;
- (void)_textDidChangeInForm:(id)arg1 textField:(id)arg2;
- (long long)_actionForLoginForm;
@property(readonly, nonatomic) long long action;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (void)_performAutoFill;
- (void)autoFill;
- (void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
- (void)_updateSuggestions:(unsigned long long)arg1;
- (void)updateSuggestions;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

