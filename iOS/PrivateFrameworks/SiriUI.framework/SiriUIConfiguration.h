//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/NSCopying-Protocol.h>

@interface SiriUIConfiguration : NSObject <NSCopying>
{
    _Bool _isSystemHostedPresentation;
    long long _flamesViewFidelity;
}

@property(readonly, nonatomic) _Bool isSystemHostedPresentation; // @synthesize isSystemHostedPresentation=_isSystemHostedPresentation;
@property(readonly, nonatomic) long long flamesViewFidelity; // @synthesize flamesViewFidelity=_flamesViewFidelity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(_Bool)arg2;
- (id)init;

@end

