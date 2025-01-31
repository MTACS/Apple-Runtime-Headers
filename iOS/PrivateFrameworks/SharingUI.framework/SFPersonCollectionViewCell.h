//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSLayoutConstraint, NSObject, NSProgress, NSString, SFAirDropNode, SFCircleProgressView, SFPersonImageView, UIColor, UIImpactFeedbackGenerator, UILabel, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIView;
@protocol SFPersonCollectionViewCellDelegate;

@interface SFPersonCollectionViewCell : UICollectionViewCell
{
    _Bool _darkStyleOnLegacyApp;
    _Bool _stateBeingRestored;
    SFAirDropNode *_person;
    NSProgress *_progress;
    long long _cellState;
    NSString *_sessionID;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
    double _activitySheetWidth;
    SFPersonImageView *_imageView;
    UIView *_badgedContactView;
    SFCircleProgressView *_circleProgressView;
    id _progressToken;
    NSArray *_progressKeyPaths;
    UILabel *_secondLabel;
    NSArray *_secondLabelVisibleConstraintsArray;
    UIColor *_fadedSecondLabelColor;
    UILabel *_labelForPositioning;
    UINotificationFeedbackGenerator *_notificationHaptic;
    UISelectionFeedbackGenerator *_selectionHaptic;
    UIImpactFeedbackGenerator *_impactHaptic;
    NSLayoutConstraint *_secondLabelFBConstraint;
    NSLayoutConstraint *_cellWidthConstraint;
    NSLayoutConstraint *_chickletToTitleSpacingConstraint;
    NSLayoutConstraint *_nameFirstBaselineConstraint;
    NSLayoutConstraint *_largeTextNameCenterYConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    UILabel *_nameLabel;
}

+ (struct CGSize)_cachedPreferredItemSizeForString:(id)arg1 viewWidth:(double)arg2 sizeCategory:(id)arg3;
+ (struct CGSize)_cachedPreferredItemSizeForViewWidth:(double)arg1 sizeCategory:(id)arg2;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSArray *largeTextConstraints; // @synthesize largeTextConstraints=_largeTextConstraints;
@property(retain, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) NSLayoutConstraint *largeTextNameCenterYConstraint; // @synthesize largeTextNameCenterYConstraint=_largeTextNameCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nameFirstBaselineConstraint; // @synthesize nameFirstBaselineConstraint=_nameFirstBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *chickletToTitleSpacingConstraint; // @synthesize chickletToTitleSpacingConstraint=_chickletToTitleSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cellWidthConstraint; // @synthesize cellWidthConstraint=_cellWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondLabelFBConstraint; // @synthesize secondLabelFBConstraint=_secondLabelFBConstraint;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactHaptic; // @synthesize impactHaptic=_impactHaptic;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionHaptic; // @synthesize selectionHaptic=_selectionHaptic;
@property(retain, nonatomic) UINotificationFeedbackGenerator *notificationHaptic; // @synthesize notificationHaptic=_notificationHaptic;
@property(retain, nonatomic) UILabel *labelForPositioning; // @synthesize labelForPositioning=_labelForPositioning;
@property(retain, nonatomic) UIColor *fadedSecondLabelColor; // @synthesize fadedSecondLabelColor=_fadedSecondLabelColor;
@property(retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray; // @synthesize secondLabelVisibleConstraintsArray=_secondLabelVisibleConstraintsArray;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) NSArray *progressKeyPaths; // @synthesize progressKeyPaths=_progressKeyPaths;
@property(retain, nonatomic) id progressToken; // @synthesize progressToken=_progressToken;
@property(retain, nonatomic) SFCircleProgressView *circleProgressView; // @synthesize circleProgressView=_circleProgressView;
@property(retain, nonatomic) UIView *badgedContactView; // @synthesize badgedContactView=_badgedContactView;
@property(retain, nonatomic) SFPersonImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double activitySheetWidth; // @synthesize activitySheetWidth=_activitySheetWidth;
@property(nonatomic) __weak NSObject<SFPersonCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool stateBeingRestored; // @synthesize stateBeingRestored=_stateBeingRestored;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) SFAirDropNode *person; // @synthesize person=_person;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
- (void).cxx_destruct;
- (struct CGSize)calculatedContentSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)arg1;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)userDidCancel;
- (void)userDidSelect;
- (void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateNameLabel;
- (void)updatePersonIconView;
- (void)fireHapticsForState:(long long)arg1;
- (void)deactivateHaptics;
- (void)prepareHapticsPreWarm:(_Bool)arg1;
- (void)prepareHaptics;
- (void)restoreCellStateFromFinalTransferState:(long long)arg1;
- (void)setCellState:(long long)arg1 animated:(_Bool)arg2 silent:(_Bool)arg3;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupConstraintsYukon;
- (void)setupConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

