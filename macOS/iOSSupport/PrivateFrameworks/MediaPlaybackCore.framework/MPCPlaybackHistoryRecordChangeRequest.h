//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class MPModelGenericObject, MPModelPlayEvent;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying>
{
    BOOL _allowsStoreContainerImport;
    MPModelPlayEvent *_playEvent;
    MPModelGenericObject *_itemGenericObject;
    long long _repeatType;
}

@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(retain, nonatomic) MPModelGenericObject *itemGenericObject; // @synthesize itemGenericObject=_itemGenericObject;
@property(retain, nonatomic) MPModelPlayEvent *playEvent; // @synthesize playEvent=_playEvent;
@property(nonatomic) BOOL allowsStoreContainerImport; // @synthesize allowsStoreContainerImport=_allowsStoreContainerImport;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

