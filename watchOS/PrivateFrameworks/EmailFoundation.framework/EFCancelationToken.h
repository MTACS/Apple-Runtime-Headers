//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailFoundation/EFInvocationToken.h>

#import <EmailFoundation/EFCancelable-Protocol.h>

@class NSString;

@interface EFCancelationToken : EFInvocationToken <EFCancelable>
{
}

+ (id)_descriptionString;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
- (void)removeAllCancelationBlocks;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isCanceled) _Bool canceled;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

