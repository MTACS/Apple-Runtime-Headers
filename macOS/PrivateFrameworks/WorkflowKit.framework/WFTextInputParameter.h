//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFTextInputParameter : WFParameter
{
    BOOL _secureTextEntry;
    BOOL _smartQuotesDisabled;
    BOOL _smartDashesDisabled;
    BOOL _multiline;
    BOOL _processesIntoContentItems;
    NSString *_prefix;
    long long _keyboardType;
    NSString *_textContentType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _textAlignment;
    unsigned long long _hintDisplayMode;
    unsigned long long _syntaxHighlightingType;
}

@property(readonly, nonatomic) BOOL processesIntoContentItems; // @synthesize processesIntoContentItems=_processesIntoContentItems;
@property(readonly, nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;
@property(readonly, nonatomic) unsigned long long hintDisplayMode; // @synthesize hintDisplayMode=_hintDisplayMode;
@property(readonly, nonatomic, getter=isMultiline) BOOL multiline; // @synthesize multiline=_multiline;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) BOOL smartDashesDisabled; // @synthesize smartDashesDisabled=_smartDashesDisabled;
@property(readonly, nonatomic) BOOL smartQuotesDisabled; // @synthesize smartQuotesDisabled=_smartQuotesDisabled;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedPlaceholder;
- (id)defaultSupportedVariableTypes;
- (id)hintForState:(id)arg1;
- (BOOL)shouldAlignLabels;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

