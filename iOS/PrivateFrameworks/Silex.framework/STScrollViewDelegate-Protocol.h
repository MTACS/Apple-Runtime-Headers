//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class STScrollView;

@protocol STScrollViewDelegate <NSObject>
- (_Bool)shouldPreventDraggingForScrollView:(STScrollView *)arg1;

@optional
- (_Bool)accessibilityShouldScrollForScrollView:(STScrollView *)arg1;
- (_Bool)accessibilityShouldScrollForScrollView:(STScrollView *)arg1 defaultValue:(_Bool)arg2;
- (_Bool)scrollView:(STScrollView *)arg1 shouldOccludeAccessibilityElement:(id)arg2;
@end

