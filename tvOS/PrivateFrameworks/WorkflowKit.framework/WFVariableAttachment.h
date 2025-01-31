//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/WFVariableDelegate-Protocol.h>

@class UIColor, UIFont, WFVariable, WFVariableAttachmentCell;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>
{
    _Bool _enabled;
    _Bool _selected;
    _Bool _highlighted;
    UIFont *_font;
    UIColor *_tintColor;
    WFVariable *_variable;
    WFVariableAttachmentCell *_wf_attachmentCell;
}

@property(retain, nonatomic) WFVariableAttachmentCell *wf_attachmentCell; // @synthesize wf_attachmentCell=_wf_attachmentCell;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)attachmentCell;
- (id)accessibilityLabel;
- (void)variableDidChange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithVariable:(id)arg1;

@end

