//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAccessibilityContentInfo-Protocol.h>
#import <PhotosUICore/PXGMutableAccessibilityContentInfo-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXScrollViewController;
@protocol PXAccessibilityView, PXDisplayAsset, PXGAccessibilityContentInfoDelegate;

@interface PXGReusableAccessibilityContentInfo : NSObject <PXGMutableAccessibilityContentInfo, PXGAccessibilityContentInfo, PXReusableObject>
{
    _Bool _selected;
    _Bool _visible;
    _Bool _isPerformingChanges;
    _Bool _alternateUIVisible;
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

+ (void)_assetSelectedInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2 outAsset:(out id *)arg3 outSelected:(out _Bool *)arg4;
+ (id)_imageNameInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_titleSubtitleInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_textInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property(nonatomic) _Bool alternateUIVisible; // @synthesize alternateUIVisible=_alternateUIVisible;
@property(nonatomic) _Bool isPerformingChanges; // @synthesize isPerformingChanges=_isPerformingChanges;
@property(nonatomic) __weak id <PXGAccessibilityContentInfoDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(retain, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(copy, nonatomic) NSArray *selectedContent; // @synthesize selectedContent=_selectedContent;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSObject<PXAccessibilityView> *view; // @synthesize view=_view;
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long contentKind; // @synthesize contentKind=_contentKind;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)px_accessibilityAddChildElement:(id)arg1;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, copy) NSString *description;
- (_Bool)performChangesToContentKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned int)arg3 spriteGeometry:(CDStruct_ac168a83)arg4;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (_Bool)_fillForKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned int)arg3;
- (void)_performClassSwizzlingForContentKind:(long long)arg1;
@property(readonly, nonatomic) NSArray *px_accessibilityChildren;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

