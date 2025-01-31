//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSURL, QLPreviewController, UIImage, UIView;
@protocol QLPreviewItem;

@protocol QLPreviewControllerDelegate <NSObject>

@optional
- (void)previewController:(QLPreviewController *)arg1 didSaveEditedCopyOfPreviewItem:(id <QLPreviewItem>)arg2 atURL:(NSURL *)arg3;
- (void)previewController:(QLPreviewController *)arg1 didUpdateContentsOfPreviewItem:(id <QLPreviewItem>)arg2;
- (long long)previewController:(QLPreviewController *)arg1 editingModeForPreviewItem:(id <QLPreviewItem>)arg2;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2;
- (UIImage *)previewController:(QLPreviewController *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(QLPreviewController *)arg1 frameForPreviewItem:(id <QLPreviewItem>)arg2 inSourceView:(id *)arg3;
- (_Bool)previewController:(QLPreviewController *)arg1 shouldOpenURL:(NSURL *)arg2 forPreviewItem:(id <QLPreviewItem>)arg3;
- (void)previewControllerDidDismiss:(QLPreviewController *)arg1;
- (void)previewControllerWillDismiss:(QLPreviewController *)arg1;
@end

