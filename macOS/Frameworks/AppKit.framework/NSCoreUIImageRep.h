//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@interface NSCoreUIImageRep : NSImageRep
{
    struct __CFDictionary *_coreUIImageOptions;
    struct __CFString *_cocoaName;
    BOOL _template;
}

+ (id)imageRepWithCocoaName:(id)arg1;
- (BOOL)draw;
- (struct __CFDictionary *)coreUIDrawOptions;
- (id)description;
- (BOOL)_incorporatesContentStyling;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (BOOL)_wantsToBeCachedForFlippedness:(BOOL)arg1;
- (void)setTemplate:(BOOL)arg1;
- (BOOL)isTemplate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCocoaName:(id)arg1;
- (id)initWithCoreUIDrawOptions:(struct __CFDictionary *)arg1 size:(struct CGSize)arg2;

@end

