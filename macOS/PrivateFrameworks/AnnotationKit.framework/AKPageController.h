//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKNoteEditorControllerDelegate-Protocol.h>

@class AKController, AKGeometryHelper, AKInkPageOverlayController, AKLayerPresentationManager, AKPageModelController, NSMutableDictionary, NSString, NSView;
@protocol AKControllerDelegateProtocol;

@interface AKPageController : NSObject <AKNoteEditorControllerDelegate>
{
    BOOL _shouldPixelate;
    BOOL _superviewDependentThingsWereSetUp;
    AKController *_controller;
    AKPageModelController *_pageModelController;
    unsigned long long _pageIndex;
    AKGeometryHelper *_geometryHelper;
    AKLayerPresentationManager *_layerPresentationManager;
    NSView *_overlayView;
    AKInkPageOverlayController *_inkPageOverlayController;
    id _inkOverlayDrawingUndoTarget;
    NSMutableDictionary *_noteEditors;
}

+ (id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2;
@property(retain) NSMutableDictionary *noteEditors; // @synthesize noteEditors=_noteEditors;
@property BOOL superviewDependentThingsWereSetUp; // @synthesize superviewDependentThingsWereSetUp=_superviewDependentThingsWereSetUp;
@property(retain, nonatomic) id inkOverlayDrawingUndoTarget; // @synthesize inkOverlayDrawingUndoTarget=_inkOverlayDrawingUndoTarget;
@property(retain, nonatomic) AKInkPageOverlayController *inkPageOverlayController; // @synthesize inkPageOverlayController=_inkPageOverlayController;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) AKLayerPresentationManager *layerPresentationManager; // @synthesize layerPresentationManager=_layerPresentationManager;
@property(retain, nonatomic) AKGeometryHelper *geometryHelper; // @synthesize geometryHelper=_geometryHelper;
@property BOOL shouldPixelate; // @synthesize shouldPixelate=_shouldPixelate;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain) AKPageModelController *pageModelController; // @synthesize pageModelController=_pageModelController;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)_popoverPresentingViewController;
- (BOOL)handleEditAnnotation:(id)arg1;
- (id)popoverPresentingViewControllerForNoteEditor:(id)arg1;
- (struct CGRect)stickyViewFrameForNoteEditor:(id)arg1;
- (id)stickyContainerForNoteEditor:(id)arg1;
- (unsigned long long)edgeForNoteEditor:(id)arg1;
- (void)noteEditorDidFinishEditing:(id)arg1;
- (void)noteEditorDidBeginEditing:(id)arg1;
- (void)openPopupAnnotation:(id)arg1;
- (void)removeNoteFromAnnotation:(id)arg1;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(BOOL)arg2;
- (struct CGRect)visibleRectOfOverlay;
- (double)modelBaseScaleFactor;
- (id)annotationsBeneathLoupe:(id)arg1;
- (id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(struct CGRect)arg2 forLoupeAnnotation:(id)arg3;
- (struct CGRect)maxPageRect;
- (struct CGRect)convertRectFromModelToOverlay:(struct CGRect)arg1;
- (struct CGRect)convertRectFromOverlayToModel:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromModelToOverlay:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromOverlayToModel:(struct CGPoint)arg1;
@property(readonly) id <AKControllerDelegateProtocol> delegate;
- (double)currentModelToScreenScaleFactor;
- (long long)currentModelToScreenExifOrientation;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (void)updateOverlayViewLayers;
- (void)overlayWasAddedToSuperview;
- (BOOL)relinquishablesAreLoaded;
- (void)releaseRelinquishables;
- (void)setupRelinquishables;
- (void)teardown;
- (id)initForTesting;
- (id)_initWithController:(id)arg1 andPageModelController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

