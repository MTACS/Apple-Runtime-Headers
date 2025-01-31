//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCoding-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPModelKind : NSObject <NSCoding, NSSecureCoding>
{
    Class _modelClass;
}

+ (BOOL)supportsSecureCoding;
+ (id)kindWithModelClass:(Class)arg1;
+ (id)identityKind;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *humanDescription;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_init;
@property(readonly, nonatomic) MPModelKind *identityKind;

@end

