//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSData, NSString;

@interface HFAlbumIconDescriptor : NSObject <HFIconDescriptor>
{
    _Bool _shouldForceLTR;
    NSString *_imageIdentifier;
    NSData *_imageData;
}

@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) _Bool shouldForceLTR; // @synthesize shouldForceLTR=_shouldForceLTR;
- (void).cxx_destruct;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithImageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

