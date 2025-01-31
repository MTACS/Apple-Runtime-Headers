//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifierEvent.h>

@class NSString, SBAppLayout, SBApplicationSceneEntityDestructionIntent;

@interface SBMainTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent
{
    _Bool _fromAppLayoutWantsExclusiveForeground;
    _Bool _toAppLayoutWantsExclusiveForeground;
    _Bool _fromFloatingSwitcherVisible;
    _Bool _toFloatingSwitcherVisible;
    _Bool _gestureInitiated;
    _Bool _dragAndDropTransition;
    _Bool _breadcrumbTransition;
    _Bool _inlineAppExposeTransition;
    _Bool _morphToPiPTransition;
    long long _fromInterfaceOrientation;
    long long _toInterfaceOrientation;
    SBAppLayout *_fromFloatingAppLayout;
    long long _fromFloatingConfiguration;
    SBAppLayout *_toFloatingAppLayout;
    long long _toFloatingConfiguration;
    NSString *_fromAppExposeBundleID;
    NSString *_toAppExposeBundleID;
    SBApplicationSceneEntityDestructionIntent *_intentForEntityRemoval;
    unsigned long long _fromInlineAppExposeRoles;
    unsigned long long _toInlineAppExposeRoles;
}

@property(nonatomic, getter=isMorphToPiPTransition) _Bool morphToPiPTransition; // @synthesize morphToPiPTransition=_morphToPiPTransition;
@property(nonatomic, getter=isInlineAppExposeTransition) _Bool inlineAppExposeTransition; // @synthesize inlineAppExposeTransition=_inlineAppExposeTransition;
@property(nonatomic, getter=isBreadcrumbTransition) _Bool breadcrumbTransition; // @synthesize breadcrumbTransition=_breadcrumbTransition;
@property(nonatomic, getter=isDragAndDropTransition) _Bool dragAndDropTransition; // @synthesize dragAndDropTransition=_dragAndDropTransition;
@property(nonatomic, getter=isGestureInitiated) _Bool gestureInitiated; // @synthesize gestureInitiated=_gestureInitiated;
@property(nonatomic) unsigned long long toInlineAppExposeRoles; // @synthesize toInlineAppExposeRoles=_toInlineAppExposeRoles;
@property(nonatomic) unsigned long long fromInlineAppExposeRoles; // @synthesize fromInlineAppExposeRoles=_fromInlineAppExposeRoles;
@property(retain, nonatomic) SBApplicationSceneEntityDestructionIntent *intentForEntityRemoval; // @synthesize intentForEntityRemoval=_intentForEntityRemoval;
@property(copy, nonatomic) NSString *toAppExposeBundleID; // @synthesize toAppExposeBundleID=_toAppExposeBundleID;
@property(copy, nonatomic) NSString *fromAppExposeBundleID; // @synthesize fromAppExposeBundleID=_fromAppExposeBundleID;
@property(nonatomic) _Bool toFloatingSwitcherVisible; // @synthesize toFloatingSwitcherVisible=_toFloatingSwitcherVisible;
@property(nonatomic) long long toFloatingConfiguration; // @synthesize toFloatingConfiguration=_toFloatingConfiguration;
@property(retain, nonatomic) SBAppLayout *toFloatingAppLayout; // @synthesize toFloatingAppLayout=_toFloatingAppLayout;
@property(nonatomic) _Bool fromFloatingSwitcherVisible; // @synthesize fromFloatingSwitcherVisible=_fromFloatingSwitcherVisible;
@property(nonatomic) long long fromFloatingConfiguration; // @synthesize fromFloatingConfiguration=_fromFloatingConfiguration;
@property(retain, nonatomic) SBAppLayout *fromFloatingAppLayout; // @synthesize fromFloatingAppLayout=_fromFloatingAppLayout;
@property(nonatomic) _Bool toAppLayoutWantsExclusiveForeground; // @synthesize toAppLayoutWantsExclusiveForeground=_toAppLayoutWantsExclusiveForeground;
@property(nonatomic) _Bool fromAppLayoutWantsExclusiveForeground; // @synthesize fromAppLayoutWantsExclusiveForeground=_fromAppLayoutWantsExclusiveForeground;
@property(nonatomic) long long toInterfaceOrientation; // @synthesize toInterfaceOrientation=_toInterfaceOrientation;
@property(nonatomic) long long fromInterfaceOrientation; // @synthesize fromInterfaceOrientation=_fromInterfaceOrientation;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)type;

@end

