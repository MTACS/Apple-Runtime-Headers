//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFViewController : NSObject
{
    PDFViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (id)_getPagePoint:(struct CGPoint *)arg1 forGestureLocation:(struct CGPoint)arg2;
- (id)_annotationsForSelection:(id)arg1;
- (id)_annotationAtGestureLocation:(struct CGPoint)arg1;
- (void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(struct CGPoint)arg3;
- (id)markupMenuPDFView:(id)arg1;
- (void)markupMenuControllerDidHide:(id)arg1;
- (void)markupMenuControllerShowTextSelectionMenu:(id)arg1;
- (void)markupMenuControllerDeleteAnnotation:(id)arg1;
- (void)markupMenuController:(id)arg1 setMarkupStyle:(unsigned long long)arg2;
- (void)markupMenuControllerEditNote:(id)arg1;
- (void)deleteAnnotation:(id)arg1;
- (void)showMarkupMenu:(id)arg1;
- (void)highlight:(id)arg1;
- (void)showPDFMarkupMenuView;
- (void)_hidePDFMarkupMenuView;
- (id)_menuItemsForTextSelectionMenu:(unsigned long long)arg1;
- (void)updateTextSelectionMenuAndShowMenu:(_Bool)arg1;
- (void)showActiveMenus;
- (void)hideActiveMenus;
- (void)_hideTextSelectionMenu;
- (unsigned long long)textSelectionMenu;
- (void)_performDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3;
- (void)handleGesture:(id)arg1;
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)_doButtonHit:(id)arg1;
- (void)_handleButtonHit:(id)arg1;
- (void)_postAnnotationHitNotification:(id)arg1;
- (void)_postAnnotationWillHitNotification:(id)arg1;
- (id)_pageViewForAnnotation:(id)arg1;
- (void)removeNoteForAnnotation:(id)arg1;
- (void)editNoteForAnnotation:(id)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1 forAnnotation:(id)arg2;
- (void)setMarkupStyle:(unsigned long long)arg1 forSelection:(id)arg2 clearSelection:(_Bool)arg3;
- (_Bool)_shouldUpdateMarkupWithStyle:(unsigned long long)arg1 onPage:(id)arg2 forIndexSet:(id)arg3;
- (id)_annotationFollowing:(id)arg1 wrapAround:(BOOL)arg2;
- (id)_annotationPreceding:(id)arg1 wrapAround:(BOOL)arg2;
- (void)removeControlForAnnotation:(id)arg1;
- (void)_addControlForAnnotation:(id)arg1;
- (void)activateNextAnnotation:(BOOL)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)setActiveAnnotation:(id)arg1;
- (id)activeAnnotation;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPageView:(id)arg2;

@end

