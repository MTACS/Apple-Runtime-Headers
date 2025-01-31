//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ARPresentationDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _colorPixelFormat;
    unsigned long long _depthPixelFormat;
    // Error parsing type: , name: _depthRange
    long long _HUDOption;
    long long _layout;
    long long _multisampleCount;
    long long _presentationWarp;
    unsigned long long _drawablePixelFormat;
    unsigned long long _drawableCount;
    NSArray *_supportedMultisampleCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *supportedMultisampleCount; // @synthesize supportedMultisampleCount=_supportedMultisampleCount;
@property(nonatomic) unsigned long long drawableCount; // @synthesize drawableCount=_drawableCount;
@property(nonatomic) unsigned long long drawablePixelFormat; // @synthesize drawablePixelFormat=_drawablePixelFormat;
@property(nonatomic) long long presentationWarp; // @synthesize presentationWarp=_presentationWarp;
@property(nonatomic) long long multisampleCount; // @synthesize multisampleCount=_multisampleCount;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(nonatomic) long long HUDOption; // @synthesize HUDOption=_HUDOption;
// Error parsing type for property depthRange:
// Property attributes: T,N,V_depthRange

@property(nonatomic) unsigned long long depthPixelFormat; // @synthesize depthPixelFormat=_depthPixelFormat;
@property(nonatomic) unsigned long long colorPixelFormat; // @synthesize colorPixelFormat=_colorPixelFormat;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToDescriptor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isReverseZ;
// Error parsing type for property viewportDepthRangeNDC:
// Property attributes: T,R,N

// Error parsing type for property viewportDepthRange:
// Property attributes: T,R,N

- (id)init;

@end

