//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFModuleParameterStateWriter-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSError, NSString, UIImage, WFAction, WFModuleAppearance;
@protocol WFModuleIndentationProvider, WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleModel : NSObject <WFModuleParameterStateWriter>
{
    BOOL _isMissing;
    BOOL _isDiscontinued;
    BOOL _isDraggingIntoWorkflow;
    BOOL _hideHeader;
    BOOL _isDimmed;
    BOOL _showHandoffRequired;
    BOOL _showSettings;
    BOOL _isEditable;
    BOOL _isRemovable;
    BOOL _isProcessing;
    BOOL _isWorkflowRunning;
    BOOL _isSelectingParameter;
    BOOL _isPlaceholder;
    BOOL _showResourceErrors;
    NSString *_localizedTitle;
    NSString *_localizedName;
    NSString *_localizedSubtitle;
    UIImage *_icon;
    UIImage *_keyImage;
    NSString *_localizedParameterSummaryFormatString;
    NSAttributedString *_localizedFooter;
    WFModuleAppearance *_appearance;
    unsigned long long _indentationLevel;
    NSError *_resourceError;
    NSArray *_allParameters;
    NSArray *_parametersInListing;
    NSDictionary *_parameterStates;
    unsigned long long _parameterCollapsingBehavior;
    Class _customConfigurationClass;
    NSArray *_processingParameters;
    NSString *_firstResponderParameterKey;
    NSArray *_parametersExcludedFromSelection;
    id <WFModuleParameterStateWriter> _parameterStateWriter;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSArray *_workflowTypes;
    WFAction *_action;
    id <WFModuleIndentationProvider> _indentationProvider;
    CKTypedComponentAction_aa963706 _removeAction;
    CKTypedComponentAction_789af415 _processingCancelAction;
    CKTypedComponentAction_789af415 _processingDoneAction;
    CKTypedComponentAction_92b97a4d _parameterSelectionAction;
}

+ (id)modelForPlaceholder;
+ (id)modelForSelectingParameterOfAction:(id)arg1 excludingParameters:(id)arg2 selectionAction:(CKTypedComponentAction_92b97a4d)arg3 indentationProvider:(id)arg4;
+ (id)modelForProcessingAction:(id)arg1 withParameters:(id)arg2 cancelAction:(CKTypedComponentAction_789af415)arg3 doneAction:(CKTypedComponentAction_789af415)arg4;
+ (id)modelForEditingAction:(id)arg1 withWorkflowTypes:(id)arg2 draggingIntoWorkflow:(BOOL)arg3 customConfigurationClass:(Class)arg4 removeAction:(CKTypedComponentAction_aa963706)arg5 variableUIDelegate:(id)arg6 indentationProvider:(id)arg7;
+ (id)modelForViewingAction:(id)arg1 whileWorkflowRunning:(BOOL)arg2 withWorkflowTypes:(id)arg3 appearance:(id)arg4 showResourceErrors:(BOOL)arg5 dimmed:(BOOL)arg6 customConfigurationClass:(Class)arg7 indentationProvider:(id)arg8;
@property(readonly, nonatomic) __weak id <WFModuleIndentationProvider> indentationProvider; // @synthesize indentationProvider=_indentationProvider;
@property(readonly, nonatomic) __weak WFAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSArray *workflowTypes; // @synthesize workflowTypes=_workflowTypes;
@property(readonly, nonatomic) BOOL showResourceErrors; // @synthesize showResourceErrors=_showResourceErrors;
@property(readonly, nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(readonly, nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) __weak id <WFModuleParameterStateWriter> parameterStateWriter; // @synthesize parameterStateWriter=_parameterStateWriter;
@property(readonly, nonatomic) NSArray *parametersExcludedFromSelection; // @synthesize parametersExcludedFromSelection=_parametersExcludedFromSelection;
@property(readonly, nonatomic) CKTypedComponentAction_92b97a4d parameterSelectionAction; // @synthesize parameterSelectionAction=_parameterSelectionAction;
@property(readonly, nonatomic) BOOL isSelectingParameter; // @synthesize isSelectingParameter=_isSelectingParameter;
@property(readonly, nonatomic) BOOL isWorkflowRunning; // @synthesize isWorkflowRunning=_isWorkflowRunning;
@property(readonly, nonatomic) CKTypedComponentAction_789af415 processingDoneAction; // @synthesize processingDoneAction=_processingDoneAction;
@property(readonly, nonatomic) CKTypedComponentAction_789af415 processingCancelAction; // @synthesize processingCancelAction=_processingCancelAction;
@property(readonly, copy, nonatomic) NSString *firstResponderParameterKey; // @synthesize firstResponderParameterKey=_firstResponderParameterKey;
@property(readonly, nonatomic) NSArray *processingParameters; // @synthesize processingParameters=_processingParameters;
@property(readonly, nonatomic) BOOL isProcessing; // @synthesize isProcessing=_isProcessing;
@property(readonly, nonatomic) CKTypedComponentAction_aa963706 removeAction; // @synthesize removeAction=_removeAction;
@property(readonly, nonatomic) BOOL isRemovable; // @synthesize isRemovable=_isRemovable;
@property(readonly, nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, nonatomic) Class customConfigurationClass; // @synthesize customConfigurationClass=_customConfigurationClass;
@property(readonly, nonatomic) unsigned long long parameterCollapsingBehavior; // @synthesize parameterCollapsingBehavior=_parameterCollapsingBehavior;
@property(readonly, nonatomic) NSDictionary *parameterStates; // @synthesize parameterStates=_parameterStates;
@property(readonly, nonatomic) NSArray *parametersInListing; // @synthesize parametersInListing=_parametersInListing;
@property(readonly, nonatomic) NSArray *allParameters; // @synthesize allParameters=_allParameters;
@property(readonly, nonatomic) NSError *resourceError; // @synthesize resourceError=_resourceError;
@property(readonly, nonatomic) unsigned long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) BOOL showSettings; // @synthesize showSettings=_showSettings;
@property(readonly, nonatomic) BOOL showHandoffRequired; // @synthesize showHandoffRequired=_showHandoffRequired;
@property(readonly, nonatomic) BOOL isDimmed; // @synthesize isDimmed=_isDimmed;
@property(readonly, nonatomic) BOOL hideHeader; // @synthesize hideHeader=_hideHeader;
@property(readonly, nonatomic) BOOL isDraggingIntoWorkflow; // @synthesize isDraggingIntoWorkflow=_isDraggingIntoWorkflow;
@property(readonly, nonatomic) WFModuleAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) BOOL isDiscontinued; // @synthesize isDiscontinued=_isDiscontinued;
@property(readonly, nonatomic) BOOL isMissing; // @synthesize isMissing=_isMissing;
@property(readonly, copy, nonatomic) NSAttributedString *localizedFooter; // @synthesize localizedFooter=_localizedFooter;
@property(readonly, copy, nonatomic) NSString *localizedParameterSummaryFormatString; // @synthesize localizedParameterSummaryFormatString=_localizedParameterSummaryFormatString;
@property(readonly, nonatomic) UIImage *keyImage; // @synthesize keyImage=_keyImage;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)updatedModel;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)setState:(id)arg1 ofParameter:(id)arg2;
- (id)initWithAction:(id)arg1 processingParameters:(id)arg2 workflowTypes:(id)arg3 editable:(BOOL)arg4 processing:(BOOL)arg5 workflowRunning:(BOOL)arg6 appearance:(id)arg7 dimmed:(BOOL)arg8 draggingIntoWorkflow:(BOOL)arg9 customConfigurationClass:(Class)arg10 showResourceErrors:(BOOL)arg11 variableUIDelegate:(id)arg12 indentationProvider:(id)arg13 removeAction:(CKTypedComponentAction_aa963706)arg14 cancelAction:(CKTypedComponentAction_789af415)arg15 doneAction:(CKTypedComponentAction_789af415)arg16 parameterSelectionAction:(CKTypedComponentAction_92b97a4d)arg17 parameterSelectionExclusions:(id)arg18 placeholder:(BOOL)arg19;

@end

