//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import <VideoSubscriberAccountUI/VSCredentialEntryViewController-Protocol.h>
#import <VideoSubscriberAccountUI/VSPSPickerTableViewCellDelegate-Protocol.h>

@class NSArray, NSString, PSSpecifier, UIButton, UIView, VSCredentialEntryPicker, VSCredentialEntryViewModel, VSIdentityProviderLogoView, VSViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryViewController_iOS : ACUIViewController <VSCredentialEntryViewController, VSPSPickerTableViewCellDelegate>
{
    _Bool _cancellationAllowed;
    VSCredentialEntryViewModel *_viewModel;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSIdentityProviderLogoView *_logoView;
    UIButton *_linkButton;
    NSArray *_buttons;
    UIView *_buttonView;
    NSArray *_fieldSpecifiers;
    double _keyboardHeight;
    id _textFieldTextDidChangeObserver;
    id _keyboardWillShowObserver;
    id _keyboardWillHideObserver;
    id _weakTarget;
    PSSpecifier *_pickerButtonSpecifier;
    PSSpecifier *_pickerSpecifier;
    VSCredentialEntryPicker *_picker;
}

@property(retain, nonatomic) VSCredentialEntryPicker *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) PSSpecifier *pickerSpecifier; // @synthesize pickerSpecifier=_pickerSpecifier;
@property(retain, nonatomic) PSSpecifier *pickerButtonSpecifier; // @synthesize pickerButtonSpecifier=_pickerButtonSpecifier;
@property(retain, nonatomic) id weakTarget; // @synthesize weakTarget=_weakTarget;
@property(nonatomic) __weak id keyboardWillHideObserver; // @synthesize keyboardWillHideObserver=_keyboardWillHideObserver;
@property(nonatomic) __weak id keyboardWillShowObserver; // @synthesize keyboardWillShowObserver=_keyboardWillShowObserver;
@property(nonatomic) __weak id textFieldTextDidChangeObserver; // @synthesize textFieldTextDidChangeObserver=_textFieldTextDidChangeObserver;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSArray *fieldSpecifiers; // @synthesize fieldSpecifiers=_fieldSpecifiers;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) VSIdentityProviderLogoView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateLinkButtonLayout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)pickerViewCell:(id)arg1 didSelectRow:(long long)arg2;
- (long long)pickerViewCellNumberOfRows:(id)arg1;
- (long long)pickerViewCellInitialSelectedRow:(id)arg1;
- (id)pickerViewCell:(id)arg1 titleForRow:(long long)arg2;
- (void)pickerButtonSelected;
- (void)setViewModel:(id)arg1;
- (id)_createSpecifierForField:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_startValidation;
- (void)_jsButtonTapped:(id)arg1;
- (void)_linkButtonTapped:(id)arg1;
- (id)_linkURL;
- (void)_setText:(id)arg1 forSpecifier:(id)arg2;
- (id)_textForSpecifier:(id)arg1;
- (id)_credentialEntryFieldForSpecifier:(id)arg1;
- (id)_textFieldForSpecifier:(id)arg1;
- (id)_specifierForTextField:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

