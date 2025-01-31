//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPageViewAnnotationControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageViewAnnotationController : NSObject
{
    PDFPageViewAnnotationControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_propagateNotesForIndexSet:(id)arg1;
- (id)_markupAnnotationsForExactIndexSet:(id)arg1;
- (_Bool)_indexSet:(id)arg1 touchesIndexSet:(id)arg2;
- (id)_getIndexSetIntersectionBetween:(id)arg1 and:(id)arg2;
- (void)_addPopupForAnnotation:(id)arg1;
- (id)markupAnnotationsForIndexSet:(id)arg1;
- (void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2;
- (void)_rotateActiveAnnotation;
- (void)_didRotatePageNotification:(id)arg1;
- (void)_setPageLayerEffectForID:(id)arg1 hidden:(_Bool)arg2;
- (void)removeControlForAnnotation:(id)arg1;
- (void)addControlForAnnotation:(id)arg1;
- (id)activeAnnotation;
- (void)dealloc;
- (id)initWithPDFPageView:(id)arg1;

@end

