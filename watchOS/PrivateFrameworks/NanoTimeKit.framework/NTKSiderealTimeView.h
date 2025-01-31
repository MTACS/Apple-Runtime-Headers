//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKDualTimeView.h>

@interface NTKSiderealTimeView : NTKDualTimeView
{
}

- (id)_secondTickInactiveColorForColor:(unsigned int)arg1;
- (id)_secondTickActiveColorForColor:(unsigned int)arg1;
- (id)_digitalTimeLabelColorForColor:(unsigned int)arg1;
- (float)_digitalTimeLabelFontSize;
- (struct CGSize)_secondTickSize;
- (id)_hourMinuteHandStrokeColorForColor:(unsigned int)arg1;
- (id)_hourMinuteHandFillColorForColor:(unsigned int)arg1;
- (id)_minuteTickColorForColor:(unsigned int)arg1;
- (id)_hourTickColorForColor:(unsigned int)arg1;
- (unsigned int)_minuteTickCount;
- (unsigned int)_hourTickCount;
- (struct CGSize)_minuteTickSize;
- (struct CGSize)_hourTickSize;
- (float)_analogTickInset;
- (id)_customDialBackgroundView;
- (_Bool)shouldUseCustomDialBackground;
- (void)_didFinishTimeViewSetup;
- (void)_setupDigitalTimeViews;
- (void)_setupAnalogHandsView;

@end

