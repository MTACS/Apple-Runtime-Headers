//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarPlaySupport/CPBaseTemplateProviding-Protocol.h>

@class CPImageSet, CPNavigationAlert, CPTravelEstimates, CPTrip, CPTripPreviewTextConfiguration, NSArray, NSUUID, UIColor, UIImage;

@protocol CPMapTemplateProviding <CPBaseTemplateProviding>
- (void)updateNavigationAlert:(CPNavigationAlert *)arg1;
- (void)dismissNavigationAlertAnimated:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)showNavigationAlert:(CPNavigationAlert *)arg1 animated:(_Bool)arg2;
- (void)hostPanInterfaceVisible:(void (^)(_Bool))arg1;
- (void)hostSetPanInterfaceVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hostStartNavigationSessionForTrip:(CPTrip *)arg1 reply:(void (^)(id <CPNavigationSessionProviding>))arg2;
- (void)hostUpdateTravelEstimates:(CPTravelEstimates *)arg1 forTripIdentifier:(NSUUID *)arg2;
- (void)setHostTripPreviews:(NSArray *)arg1 textConfiguration:(CPTripPreviewTextConfiguration *)arg2 previewOnlyRouteChoices:(_Bool)arg3;
- (void)hostSetMapButtons:(NSArray *)arg1;
- (void)hostSetMapButton:(NSUUID *)arg1 imageSet:(CPImageSet *)arg2;
- (void)setMapButton:(NSUUID *)arg1 focusedImage:(UIImage *)arg2;
- (void)setMapButton:(NSUUID *)arg1 hidden:(_Bool)arg2;
- (void)setHostHidesButtonsWithNavigationBar:(_Bool)arg1;
- (void)setHostAutoHidesNavigationBar:(_Bool)arg1;
- (void)setHostTripEstimateStyle:(unsigned long long)arg1;
- (void)setHostGuidanceBackgroundColor:(UIColor *)arg1;
@end

