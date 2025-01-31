//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXIndexPathSet, PXSwipeSelectionManager;

@protocol PXSwipeSelectionManagerDelegate <NSObject>
- (struct PXSimpleIndexPath)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (_Bool)swipeSelectionManagerIsInMultiSelectMode:(PXSwipeSelectionManager *)arg1;

@optional
- (PXIndexPathSet *)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath)arg2 toIndexPath:(struct PXSimpleIndexPath)arg3;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(PXSwipeSelectionManager *)arg1;
- (_Bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;
- (_Bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldBeginSelectionAtLocation:(struct CGPoint)arg2;
- (_Bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;
@end

