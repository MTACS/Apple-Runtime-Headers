//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationCornerBaseTextView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerStackedTextView : NTKRichComplicationCornerBaseTextView
{
    NTKCurvedColoringLabel *_outerLabel;
}

+ (_Bool)supportsComplicationFamily:(int)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(float)arg1;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTemplate:(id)arg1 reason:(int)arg2;
- (void)layoutSubviews;
- (id)init;

@end

