//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIButton.h>

#import <VideosUI/VUIUpNextButtonProtocol-Protocol.h>

@class NSString, VUIUpNextButtonProperties;

__attribute__((visibility("hidden")))
@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol>
{
    VUIUpNextButtonProperties *_properties;
}

@property(retain, nonatomic) VUIUpNextButtonProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)_selectButtonAction:(id)arg1 eventType:(id)arg2;
- (void)upNextStateChangedToRemoved;
- (void)upNextStateChangedToAdded;
- (void)updateWithElement:(id)arg1;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

