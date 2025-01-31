//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    NSString *_property;
    id _value;
    long long _comparisonType;
}

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long comparisonType;
@property(copy, nonatomic) id value;
@property(copy, nonatomic) NSString *property;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

