//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewConfiguration : NSObject
{
    _Bool _darkKeyboard;
    _Bool _shouldAlwaysShowSortControl;
    _Bool _shouldUsePredictionViewSecureRenderTraits;
}

+ (id)configuration;
@property(readonly, nonatomic) _Bool shouldUsePredictionViewSecureRenderTraits; // @synthesize shouldUsePredictionViewSecureRenderTraits=_shouldUsePredictionViewSecureRenderTraits;
@property(readonly, nonatomic) _Bool shouldAlwaysShowSortControl; // @synthesize shouldAlwaysShowSortControl=_shouldAlwaysShowSortControl;
@property(nonatomic) _Bool darkKeyboard; // @synthesize darkKeyboard=_darkKeyboard;
@property(readonly, nonatomic) struct CGSize preferredInlineFloatingViewSize;
@property(readonly, nonatomic) _Bool allowsPullDownGesture;
@property(readonly, nonatomic) _Bool willCoverKeyboardLayout;
- (_Bool)usesReducedFontSize;
- (double)candidateDefaultFontSize;
- (id)candidateFontWithSize:(double)arg1;
@property(readonly, nonatomic) _Bool shouldResizeKeyboardBackdrop;
@property(readonly, nonatomic) unsigned long long maxNumberOfProactiveCandidates;
@property(readonly, nonatomic) unsigned long long rowsToExtend;
- (id)extendedScrolledState;
- (id)extendedState;
- (id)initialState;

@end

