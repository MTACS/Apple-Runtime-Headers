//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/WFVariableSerialization-Protocol.h>

@class NSArray, NSAttributedString, NSString;

@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying>
{
    NSArray *_stringsAndVariables;
}

+ (_Bool)dictionaryIsSerializedVariableString:(id)arg1;
+ (id)attributedStringWithVariable:(id)arg1;
@property(readonly, nonatomic) NSArray *stringsAndVariables; // @synthesize stringsAndVariables=_stringsAndVariables;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *variables;
@property(readonly, nonatomic) NSString *stringByReplacingVariablesWithNames;
@property(readonly, nonatomic) NSString *stringByRemovingVariables;
- (void)processIntoContentItemsWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithAttachmentCharacterString:(id)arg1 variableGetter:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStringsAndVariables:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithVariable:(id)arg1;
- (void)removeVariableDelegate:(id)arg1;
- (void)addVariableDelegate:(id)arg1;
- (_Bool)representsSingleContentVariable;
- (id)variablesOfType:(id)arg1;
- (id)attributedStringByAddingTypingAttributes:(id)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withVariableString:(id)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withVariable:(id)arg2;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)initWithAttributedString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

