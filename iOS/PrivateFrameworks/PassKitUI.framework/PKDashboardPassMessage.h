//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface PKDashboardPassMessage : NSObject
{
    _Bool _isDestructiveAction;
    _Bool _showDisclosure;
    _Bool _showSpinner;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_message;
    CDUnknownBlockType _actionOnMessagePress;
    NSString *_buttonTitle;
    CDUnknownBlockType _actionOnButtonPress;
    CDUnknownBlockType _actionOnDismiss;
    UIImage *_image;
}

@property(nonatomic) _Bool showSpinner; // @synthesize showSpinner=_showSpinner;
@property(nonatomic) _Bool showDisclosure; // @synthesize showDisclosure=_showDisclosure;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType actionOnDismiss; // @synthesize actionOnDismiss=_actionOnDismiss;
@property(nonatomic) _Bool isDestructiveAction; // @synthesize isDestructiveAction=_isDestructiveAction;
@property(copy, nonatomic) CDUnknownBlockType actionOnButtonPress; // @synthesize actionOnButtonPress=_actionOnButtonPress;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) CDUnknownBlockType actionOnMessagePress; // @synthesize actionOnMessagePress=_actionOnMessagePress;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

