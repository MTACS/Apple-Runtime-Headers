//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeAI/MLFeatureProvider-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMIInputFeatureProvider : NSObject <MLFeatureProvider>
{
    struct __CVBuffer *_pixelBuffer;
    NSString *_inputName;
}

@property(readonly) NSString *inputName; // @synthesize inputName=_inputName;
@property(readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 inputName:(id)arg2;

@end

