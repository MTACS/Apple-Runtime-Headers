//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/ICAppInstallStatusObserver-Protocol.h>

@class NSArray, NSOrderedSet;

@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver>
{
    NSArray *_possibleStates;
    NSOrderedSet *_supportedAppIdentifiers;
}

@property(readonly, nonatomic) NSOrderedSet *supportedAppIdentifiers; // @synthesize supportedAppIdentifiers=_supportedAppIdentifiers;
- (id)possibleStates;
- (void).cxx_destruct;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (void)removeObservers;
- (void)addObservers;
- (void)refreshInstalledApps;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)dealloc;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (id)initWithDefinition:(id)arg1;

@end

