//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowKit/APUILongLookViewControllerDataSource-Protocol.h>
#import <WorkflowKit/APUILongLookViewControllerDelegate-Protocol.h>
#import <WorkflowKit/CRKCardPresentationDelegate-Protocol.h>
#import <WorkflowKit/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <WorkflowKit/PLClickPresentationInteractionPresenting-Protocol.h>

@class APUILongLookViewController, CRKCardPresentation, CRKCardPresentationConfiguration, INInteraction, NSString, PLClickPresentationInteractionManager, UIView;
@protocol CRKCardViewControllerDelegate, CRKCardViewControlling, WFIntentPlatterViewControllerDelegate;

@interface WFIntentPlatterViewController : UIViewController <PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDelegate, APUILongLookViewControllerDataSource, CRKCardPresentationDelegate>
{
    _Bool _requiresConfirmation;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    id <WFIntentPlatterViewControllerDelegate> _delegate;
    INInteraction *_interaction;
    APUILongLookViewController *_longLookViewController;
    CRKCardPresentationConfiguration *_configuration;
    CRKCardPresentation *_cardPresentation;
    UIView *_sourceView;
}

+ (void)initialize;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(readonly, nonatomic) CRKCardPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) APUILongLookViewController *longLookViewController; // @synthesize longLookViewController=_longLookViewController;
@property(readonly, nonatomic) _Bool requiresConfirmation; // @synthesize requiresConfirmation=_requiresConfirmation;
@property(readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(nonatomic) __weak id <WFIntentPlatterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
- (void).cxx_destruct;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (_Bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) UIView *viewForPreview;
- (void)dismissPlatterWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentPlatterFromSourceView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePlatterSize;
@property(readonly, nonatomic) UIViewController<CRKCardViewControlling> *cardViewController;
- (void)updateProgressIndicator:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)confirmButtonTapped;
- (void)updateWithInteraction:(id)arg1;
- (id)initWithInteraction:(id)arg1 requiresConfirmation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly) Class superclass;

@end

