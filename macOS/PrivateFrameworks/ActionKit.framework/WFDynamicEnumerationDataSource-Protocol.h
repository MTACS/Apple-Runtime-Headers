//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSArray, NSColor, NSString, WFEnumerationParameter, WFVariableSubstitutableParameterState;

@protocol WFDynamicEnumerationDataSource <NSObject>
- (NSString *)enumeration:(WFEnumerationParameter *)arg1 localizedLabelForPossibleState:(WFVariableSubstitutableParameterState *)arg2;

@optional
- (NSColor *)enumeration:(WFEnumerationParameter *)arg1 accessoryColorForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (BOOL)enumerationAllowsMultipleValues:(WFEnumerationParameter *)arg1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (id)defaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1;
- (void)loadPossibleStatesForEnumeration:(WFEnumerationParameter *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)possibleStatesForEnumeration:(WFEnumerationParameter *)arg1;
@end

