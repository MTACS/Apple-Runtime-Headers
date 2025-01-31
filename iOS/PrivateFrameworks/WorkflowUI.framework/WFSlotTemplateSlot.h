//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/NSCopying-Protocol.h>
#import <WorkflowUI/WFSlotTemplateContent-Protocol.h>

@class NSAttributedString, NSMutableDictionary, NSString, WFSlotIdentifier;

@interface WFSlotTemplateSlot : NSObject <WFSlotTemplateContent, NSCopying>
{
    _Bool _enabled;
    _Bool _prefersNoWrapping;
    _Bool _standaloneTextAttachment;
    WFSlotIdentifier *_identifier;
    NSString *_placeholder;
    NSAttributedString *_contentAttributedString;
    long long _userInputInsertionIndex;
    NSMutableDictionary *_titleColorsByState;
    NSMutableDictionary *_backgroundColorsByState;
}

+ (id)slotWithPlaceholder:(id)arg1 key:(id)arg2;
+ (id)addingSlotWithKey:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *backgroundColorsByState; // @synthesize backgroundColorsByState=_backgroundColorsByState;
@property(readonly, nonatomic) NSMutableDictionary *titleColorsByState; // @synthesize titleColorsByState=_titleColorsByState;
@property(nonatomic) long long userInputInsertionIndex; // @synthesize userInputInsertionIndex=_userInputInsertionIndex;
@property(nonatomic) _Bool standaloneTextAttachment; // @synthesize standaloneTextAttachment=_standaloneTextAttachment;
@property(nonatomic) _Bool prefersNoWrapping; // @synthesize prefersNoWrapping=_prefersNoWrapping;
@property(copy, nonatomic) NSAttributedString *contentAttributedString; // @synthesize contentAttributedString=_contentAttributedString;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) WFSlotIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)backgroundColorForControlState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (id)titleColorForControlState:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isPopulated) _Bool populated;
- (id)initWithPlaceholder:(id)arg1 identifier:(id)arg2;
- (void)applyErrorColors;
- (void)populateWithVariableString:(id)arg1;
- (void)populateWithVariable:(id)arg1;
- (void)populateWithIcon:(id)arg1 string:(id)arg2;
- (void)populateWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

