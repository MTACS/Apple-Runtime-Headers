//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWifiTrigger : WFTrigger
{
    NSArray *_selectedNetworks;
    unsigned int _selection;
}

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
@property(nonatomic) unsigned int selection; // @synthesize selection=_selection;
@property(retain, nonatomic) NSArray *selectedNetworks; // @synthesize selectedNetworks=_selectedNetworks;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedTitleWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end

