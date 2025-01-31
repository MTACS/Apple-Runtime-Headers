//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;
@protocol NSContentStyle;

__attribute__((visibility("hidden")))
@interface _NSSimpleImageView : NSView
{
}

@property(readonly, copy, nonatomic) id <NSContentStyle> imageContentStyle;
- (void)updateLayer;
- (void)performBlockWithLayerContents:(CDUnknownBlockType)arg1;
- (BOOL)wantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSImage *image; // @dynamic image;

@end

