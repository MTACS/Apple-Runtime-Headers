//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class TLKMultilineText;

@interface TLKTextView : UITextView
{
    _Bool _automaticUrlification;
    unsigned long long _prominence;
    TLKMultilineText *_multilineText;
}

@property(nonatomic) _Bool automaticUrlification; // @synthesize automaticUrlification=_automaticUrlification;
@property(retain, nonatomic) TLKMultilineText *multilineText; // @synthesize multilineText=_multilineText;
@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_usesNonVibrantAppearance;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)urlify;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setText:(id)arg1;
- (id)init;

@end

