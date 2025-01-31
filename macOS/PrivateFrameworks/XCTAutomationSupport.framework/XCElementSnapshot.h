//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSCopying-Protocol.h>
#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSEnumerator, NSIndexPath, NSSet, NSString, NSValue, XCAccessibilityElement;
@protocol XCTElementSnapshotAttributeDataSource, XCUIElementSnapshotApplication;

@interface XCElementSnapshot : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _faultedInProperties;
    BOOL _isMainWindow;
    BOOL _enabled;
    BOOL _selected;
    BOOL _hasFocus;
    BOOL _hasKeyboardFocus;
    BOOL _isTruncatedValue;
    id <XCUIElementSnapshotApplication> _application;
    unsigned long long _generation;
    id <XCTElementSnapshotAttributeDataSource> _dataSource;
    NSString *_title;
    NSString *_label;
    id _value;
    NSString *_placeholderValue;
    unsigned long long _elementType;
    unsigned long long _traits;
    NSString *_identifier;
    long long _verticalSizeClass;
    long long _horizontalSizeClass;
    NSArray *_children;
    NSDictionary *_additionalAttributes;
    NSArray *_userTestingAttributes;
    NSSet *_disclosedChildRowAXElements;
    NSValue *_activationPoint;
    XCAccessibilityElement *_accessibilityElement;
    XCAccessibilityElement *_parentAccessibilityElement;
    XCElementSnapshot *_parent;
    struct CGRect _frame;
}

+ (unsigned long long)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_iOS:(id)arg2 useLegacyElementType:(BOOL)arg3;
+ (unsigned long long)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_macOS:(id)arg2 useLegacyElementType:(BOOL)arg3;
+ (id)axAttributesForSnapshotAttributes:(id)arg1 isMacOS:(BOOL)arg2;
+ (id)requiredAXAttributesForElementSnapshotHierarchyOnMacOS:(BOOL)arg1;
+ (id)sanitizedElementSnapshotHierarchyAttributesForAttributes:(id)arg1 isMacOS:(BOOL)arg2;
+ (id)axAttributesForElementSnapshotKeyPaths:(id)arg1 isMacOS:(BOOL)arg2;
+ (id)elementWithAccessibilityElement:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property XCElementSnapshot *parent; // @synthesize parent=_parent;
@property(retain) XCAccessibilityElement *parentAccessibilityElement; // @synthesize parentAccessibilityElement=_parentAccessibilityElement;
@property(readonly, copy, nonatomic) XCAccessibilityElement *accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;
@property BOOL isTruncatedValue; // @synthesize isTruncatedValue=_isTruncatedValue;
@property(copy) NSDictionary *additionalAttributes; // @synthesize additionalAttributes=_additionalAttributes;
- (void).cxx_destruct;
@property(readonly) BOOL isMacOS;
@property(readonly) BOOL isTopLevelTouchBarElement;
@property(readonly) BOOL isTouchBarElement;
- (BOOL)_isAncestorOfElement:(id)arg1;
- (BOOL)_isDescendantOfElement:(id)arg1;
@property(readonly) NSSet *uniqueDescendantSubframes;
@property(readonly) NSArray *suggestedHitpoints;
@property(readonly) BOOL isRemote;
@property(readonly) XCElementSnapshot *rootElement;
@property(readonly) double centerY;
@property(readonly) double centerX;
@property(readonly) struct CGPoint center;
@property(readonly) struct CGRect visibleFrame;
@property(readonly) NSArray *disclosedChildRows;
@property(readonly) XCElementSnapshot *outline;
@property(readonly) BOOL isInRootMenu;
@property(readonly) XCElementSnapshot *menuItem;
@property(readonly) XCElementSnapshot *menu;
@property(readonly) XCElementSnapshot *scrollView;
- (id)nearestSharedAncestorOfElement:(id)arg1 matchingType:(long long)arg2;
- (id)_nearestAncestorMatchingAnyOfTypes:(id)arg1;
- (id)nearestAncestorMatchingType:(long long)arg1;
- (BOOL)_frameFuzzyMatchesElement:(id)arg1;
- (BOOL)_fuzzyMatchesElement:(id)arg1;
- (BOOL)_matchesElement:(id)arg1;
- (void)replaceDescendant:(id)arg1 withElement:(id)arg2;
- (id)descendantAtIndexPath:(id)arg1;
@property(readonly, copy) NSIndexPath *indexPath;
- (id)sparseTreeWithDescendants:(id)arg1 error:(id *)arg2;
- (BOOL)matchesTreeWithRoot:(id)arg1;
@property(readonly, copy) XCElementSnapshot *pathFromRoot;
- (void)mergeTreeWithSnapshot:(id)arg1;
- (id)_childMatchingElement:(id)arg1;
- (id)_allDescendants;
@property(readonly, copy) NSEnumerator *descendantEnumerator;
@property(readonly, copy) NSEnumerator *childEnumerator;
- (BOOL)hasDescendantMatchingFilter:(CDUnknownBlockType)arg1;
- (id)descendantsByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)elementSnapshotMatchingAccessibilityElement:(id)arg1;
- (void)enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long depth;
- (id)dictionaryRepresentationWithAttributes:(id)arg1;
@property(readonly, copy) NSString *sparseTreeDescription;
@property(readonly, copy) NSString *compactDescription;
@property(readonly, copy) NSString *pathDescription;
@property(readonly) NSString *recursiveDescriptionIncludingAccessibilityElement;
@property(readonly) NSString *recursiveDescription;
- (id)recursiveDescriptionWithIndent:(id)arg1 includeAccessibilityElement:(BOOL)arg2 includingPointers:(BOOL)arg3;
- (id)debugDescription;
- (id)descriptionIncludingPointers:(BOOL)arg1;
- (id)description;
@property(copy) NSSet *disclosedChildRowAXElements; // @synthesize disclosedChildRowAXElements=_disclosedChildRowAXElements;
@property(copy) NSArray *children; // @synthesize children=_children;
@property(copy) NSArray *userTestingAttributes; // @synthesize userTestingAttributes=_userTestingAttributes;
@property long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property unsigned long long traits; // @synthesize traits=_traits;
@property BOOL isMainWindow; // @synthesize isMainWindow=_isMainWindow;
@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL hasFocus; // @synthesize hasFocus=_hasFocus;
@property BOOL hasKeyboardFocus; // @synthesize hasKeyboardFocus=_hasKeyboardFocus;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *placeholderValue; // @synthesize placeholderValue=_placeholderValue;
@property(copy) id value; // @synthesize value=_value;
@property(readonly, copy) NSString *truncatedValueString;
@property(copy) NSValue *activationPoint; // @synthesize activationPoint=_activationPoint;
@property struct CGRect frame; // @synthesize frame=_frame;
@property unsigned long long elementType; // @synthesize elementType=_elementType;
- (BOOL)_fetchBoolForKey:(id)arg1;
- (id)_fetchSimpleValueForKey:(id)arg1;
- (void)_assertForFaultsInContext:(CDUnknownBlockType)arg1;
- (int)_faultingBitForKey:(id)arg1;
- (void)markAsFaultedInPropertiesDerivedFromSnapshotAttributes:(id)arg1;
- (BOOL)_willAssertOnFault;
- (void)_recursivelySetFaultedBits:(int)arg1;
- (void)_unsetIsFaultedIn:(int)arg1;
- (void)_setIsFaultedIn:(int)arg1;
- (BOOL)_isFaultedIn:(int)arg1;
- (BOOL)_shouldAttemptFaultForBit:(int)arg1;
- (void)_compensateForInsufficientElementTypeData;
- (void)_recursivelyResetElementType;
- (void)recursivelyClearDataSource;
@property __weak id <XCTElementSnapshotAttributeDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSArray *identifiers;
@property(nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(nonatomic) __weak id <XCUIElementSnapshotApplication> application; // @synthesize application=_application;
- (id)initWithAccessibilityElement:(id)arg1;
- (void)dealloc;

@end

