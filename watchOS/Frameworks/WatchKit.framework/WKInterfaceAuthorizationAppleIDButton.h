//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

#import <WatchKit/WKInterfaceObjectDynamicCreatable-Protocol.h>

@class NSString;

@interface WKInterfaceAuthorizationAppleIDButton : WKInterfaceObject <WKInterfaceObjectDynamicCreatable>
{
    SEL _actionSelector;
    id _actionTarget;
}

@property(nonatomic) __weak id actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) SEL actionSelector; // @synthesize actionSelector=_actionSelector;
- (void).cxx_destruct;
- (id)interfaceDescriptionForDynamicCreation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

