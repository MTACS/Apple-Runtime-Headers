//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import <PhotosUICore/PXGAccessibilityContentInfo-Protocol.h>
#import <PhotosUICore/PXGMutableAccessibilityContentInfo-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString, PXScrollViewController;
@protocol PXAccessibilityView, PXDisplayAsset, PXGAccessibilityContentInfoDelegate;

@interface PXGReusableAccessibilityContentInfo : NSAccessibilityElement <PXGMutableAccessibilityContentInfo, PXGAccessibilityContentInfo, PXReusableObject>
{
    BOOL _selected;
    BOOL _visible;
    BOOL _isPerformingChanges;
    BOOL _alternateUIVisible;
    long long _contentKind;
    NSString *_text;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageName;
    id <PXDisplayAsset> _asset;
    NSObject<PXAccessibilityView> *_view;
    NSArray *_selectedContent;
    PXScrollViewController *_scrollViewController;
    id <PXGAccessibilityContentInfoDelegate> _accessibilityDelegate;
    NSMutableArray *_mutableChildren;
    struct CGRect _frame;
}

+ (void)_assetSelectedInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2 outAsset:(out id *)arg3 outSelected:(out char *)arg4;
+ (id)_imageNameInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_titleSubtitleInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_textInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property(nonatomic) BOOL alternateUIVisible; // @synthesize alternateUIVisible=_alternateUIVisible;
@property(nonatomic) BOOL isPerformingChanges; // @synthesize isPerformingChanges=_isPerformingChanges;
@property(nonatomic) __weak id <PXGAccessibilityContentInfoDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(retain, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(copy, nonatomic) NSArray *selectedContent; // @synthesize selectedContent=_selectedContent;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSObject<PXAccessibilityView> *view; // @synthesize view=_view;
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long contentKind; // @synthesize contentKind=_contentKind;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)_siblingInDirection:(unsigned long long)arg1;
- (id)siblingBelow;
- (id)siblingAbove;
- (id)previousSibling;
- (id)nextSibling;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformScrollToVisible;
- (BOOL)isAccessibilityAlternateUIVisible;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (id)accessibilityChildren;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHelp;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void)resetAccessibilityInformation;
- (void)px_accessibilityRemoveAllChildren;
- (void)px_accessibilityAddChildElement:(id)arg1;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, copy) NSString *description;
- (BOOL)performChangesToContentKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned int)arg3 spriteGeometry:(CDStruct_ac168a83)arg4;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (BOOL)_fillForKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned int)arg3;
- (void)_performClassSwizzlingForContentKind:(long long)arg1;
@property(readonly, nonatomic) NSArray *px_accessibilityChildren;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

