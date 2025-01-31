//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class MKThemeMultiPartLabel, NSArray, NSDate, NSLayoutConstraint, NSMapTable, NSMutableDictionary, NSString, NSTimeZone, UIButton, UIImageView, UIStackView, _MKUILabel;
@protocol MKTransitDeparturesCellDelegate;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell
{
    unsigned int _cellStyle;
    NSMutableDictionary *_constraintsByCellStyle;
    NSArray *_currentCellStyleConstraints;
    UIImageView *_lineImageView;
    UIImageView *_incidentIconImageView;
    _MKUILabel *_primaryLabel;
    MKThemeMultiPartLabel *_secondaryLabel;
    _MKUILabel *_tertiaryLabel;
    UIButton *_incidentButton;
    _MKUILabel *_departureLabel;
    _MKUILabel *_departureDetailLabel;
    UIStackView *_departureStackView;
    UIStackView *_secondaryTextStackView;
    NSLayoutConstraint *_labelLeadingMarginConstraint;
    _Bool _enforceMinimumDepartureLabelWidth;
    NSLayoutConstraint *_minimumDepartureLabelWidthConstraint;
    NSMapTable *_departureDependentConstraintsByView;
    float _lineImageCenteringValue;
    NSLayoutConstraint *_lineImageToContainerTrailingConstraint;
    NSLayoutConstraint *_lineImageViewTopConstraint;
    NSLayoutConstraint *_lineImageViewToBottomConstraint;
    NSLayoutConstraint *_primaryToTopConstraint;
    NSLayoutConstraint *_departureStackViewToBottomConstraint;
    NSLayoutConstraint *_departureLabelToTopConstraint;
    NSLayoutConstraint *_departureLabelToPrimaryBaselineConstraint;
    NSLayoutConstraint *_lineImageViewCenteringConstraint;
    NSLayoutConstraint *_lineImageViewCenteringVerticalPaddingConstraint;
    NSLayoutConstraint *_incidentIconHorizontalConstraint;
    NSLayoutConstraint *_primaryToBottomConstraint;
    NSLayoutConstraint *_secondaryStackToPrimaryConstraint;
    NSLayoutConstraint *_secondaryStackToBottomConstraint;
    NSLayoutConstraint *_lineImageToTextGutterConstraint;
    NSLayoutConstraint *_lineImageLeadingConstraint;
    NSLayoutConstraint *_lineImageCompressedLeadingConstraint;
    _Bool _showNoConnectionEmDash;
    _Bool _showIncidentIcon;
    _Bool _inactive;
    _Bool _useCompressedGutter;
    _Bool _useCompressedLeading;
    float _lineImageViewSize;
    NSArray *_departures;
    unsigned int _departureStyle;
    NSDate *_countdownReferenceDate;
    NSTimeZone *_departureTimeZone;
    NSString *_incidentTitle;
    id <MKTransitDeparturesCellDelegate> _delegate;
    NSDate *_departureCutoffDate;
}

+ (id)_primaryFont;
+ (id)_departureDetailLabelFont;
+ (id)_departureLabelFont;
+ (id)defaultSecondaryFont;
+ (id)strongSecondaryFont;
+ (void)useCompressedGutter:(out _Bool *)arg1 compressedLeading:(out _Bool *)arg2 forImageWidth:(float)arg3 inWidth:(float)arg4 compressed:(_Bool)arg5;
+ (float)_minTextWidth:(_Bool)arg1;
+ (float)_maxExpectedDepartureLabelWidth;
+ (void)_calculateMaxLabelWidths;
+ (_Bool)_needsUpdateMaxLabelWidths;
+ (float)labelMarginWithLineImageViewWidth:(float)arg1;
+ (float)maxLineImageWidthforWidth:(float)arg1 compressed:(_Bool)arg2;
+ (void)_addEmDashAttributes:(id)arg1;
+ (void)_enumerateMinutesUntilDepartureDates:(id)arg1 withReferenceDate:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)_nowString;
+ (id)displayableCountdowDepartureDatesFromDates:(id)arg1 withReferenceDate:(id)arg2;
+ (id)_attributedStringForCountdownDepartures:(id)arg1 referenceDate:(id)arg2 isShowingNoConnectionEmDash:(_Bool)arg3;
+ (id)_stringFromTimestampDate:(id)arg1 departureTimeZone:(id)arg2;
@property(retain, nonatomic) NSDate *departureCutoffDate; // @synthesize departureCutoffDate=_departureCutoffDate;
@property(nonatomic) _Bool useCompressedLeading; // @synthesize useCompressedLeading=_useCompressedLeading;
@property(nonatomic) _Bool useCompressedGutter; // @synthesize useCompressedGutter=_useCompressedGutter;
@property(nonatomic, getter=isInactive) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) __weak id <MKTransitDeparturesCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *incidentTitle; // @synthesize incidentTitle=_incidentTitle;
@property(nonatomic, getter=isShowingIncidentIcon) _Bool showIncidentIcon; // @synthesize showIncidentIcon=_showIncidentIcon;
@property(nonatomic, getter=isShowingNoConnectionEmDash) _Bool showNoConnectionEmDash; // @synthesize showNoConnectionEmDash=_showNoConnectionEmDash;
@property(retain, nonatomic) NSTimeZone *departureTimeZone; // @synthesize departureTimeZone=_departureTimeZone;
@property(retain, nonatomic) NSDate *countdownReferenceDate; // @synthesize countdownReferenceDate=_countdownReferenceDate;
@property(nonatomic) unsigned int departureStyle; // @synthesize departureStyle=_departureStyle;
@property(retain, nonatomic) NSArray *departures; // @synthesize departures=_departures;
@property(nonatomic) float lineImageViewSize; // @synthesize lineImageViewSize=_lineImageViewSize;
- (void).cxx_destruct;
- (void)setSeparatorHidden:(_Bool)arg1;
@property(readonly, nonatomic) float labelMargin;
- (void)setIncidentButtonHidden:(_Bool)arg1;
- (void)_incidentButtonPressed;
- (void)_removeIncidentIcon;
- (void)_addIncidentIcon;
- (id)_incidentIcon;
- (unsigned int)_displayableDeparturesCount;
- (id)_departureDates;
- (void)setShowNoConnectionEnDash:(_Bool)arg1;
- (void)setAccessibilityOrder;
- (void)refreshDeparturesDisplay;
- (void)setTertiaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setLineImage:(id)arg1;
- (float)_separatorHeight;
- (void)_updateLabelFonts;
- (void)infoCardThemeChanged;
- (void)_updateDepartureDependentConstraintsForCurrentState;
- (void)_getDepartureDependentConstraintsToActivate:(id *)arg1 toDeactivate:(id *)arg2;
- (_Bool)_shouldPinSecondaryStackViewToBottom;
- (_Bool)_isDisplayingDepartureInfo;
- (_Bool)_shouldEnforceMinimumDepartureLabelWidth;
- (_Bool)_shouldEnforceDepartureDependentConstraints;
- (void)_updateLineImageViewConstraintConstants;
- (id)_fontForView:(id)arg1;
- (float)_baselineSpacingAboveView:(id)arg1;
- (void)_updateConstraintValues;
- (id)_constraintsForCellStyle:(unsigned int)arg1;
- (void)_setCellStyle:(unsigned int)arg1;
- (unsigned int)_bestCellStyleForCurrentState;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_contentSizeCategoryDidChange;
- (_Bool)isOpaque;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)configureCellForRowIndex:(int)arg1 withMapItem:(id)arg2 sectionController:(id)arg3 outNextLineIsSame:(_Bool *)arg4;
- (id)_operatingHoursDescriptionForSequence:(id)arg1 mapItem:(id)arg2;
- (id)_startEndDatesForSequence:(id)arg1 date:(id)arg2 mapItem:(id)arg3;
- (void)configureLeadingWithTableViewContentMargin:(float)arg1 width:(float)arg2 compressed:(_Bool)arg3;
- (id)multipartStringSeparator;

@end

