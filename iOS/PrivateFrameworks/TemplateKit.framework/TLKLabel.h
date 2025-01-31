//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class TLKFormattedText, TLKMultilineText, TLKRichText, UIFont;

@interface TLKLabel : UILabel
{
    _Bool _supportsColorGlyphs;
    _Bool _hasCustomTextColor;
    _Bool _attributedTextExplicitelySet;
    _Bool _attributedTextUpdateDisabled;
    _Bool _attributedTextUpdateSkipped;
    unsigned long long _prominence;
    TLKRichText *_richText;
    UILabel *_overlayLabelForNonColoredGlyphs;
    UIFont *_originalFont;
}

+ (id)genericLabel;
+ (id)tertiaryLabel;
+ (id)secondaryLabel;
+ (id)primaryLabel;
@property _Bool attributedTextUpdateSkipped; // @synthesize attributedTextUpdateSkipped=_attributedTextUpdateSkipped;
@property _Bool attributedTextUpdateDisabled; // @synthesize attributedTextUpdateDisabled=_attributedTextUpdateDisabled;
@property _Bool attributedTextExplicitelySet; // @synthesize attributedTextExplicitelySet=_attributedTextExplicitelySet;
@property _Bool hasCustomTextColor; // @synthesize hasCustomTextColor=_hasCustomTextColor;
@property(retain) UIFont *originalFont; // @synthesize originalFont=_originalFont;
@property(retain, nonatomic) UILabel *overlayLabelForNonColoredGlyphs; // @synthesize overlayLabelForNonColoredGlyphs=_overlayLabelForNonColoredGlyphs;
@property(nonatomic) _Bool supportsColorGlyphs; // @synthesize supportsColorGlyphs=_supportsColorGlyphs;
@property(retain, nonatomic) TLKRichText *richText; // @synthesize richText=_richText;
@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
- (void).cxx_destruct;
- (void)updateWithString:(id)arg1;
- (void)updateWithAttributedString:(id)arg1;
- (void)updateAttributedText;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)setTextColor:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)setAttributedText:(id)arg1;
@property(retain, nonatomic) TLKFormattedText *formattedText;
@property(retain, nonatomic) TLKMultilineText *multilineText;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1 keepOriginal:(_Bool)arg2;
- (void)setFont:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (id)initWithProminence:(unsigned long long)arg1;
- (id)init;

@end

