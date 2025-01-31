//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying>
{
    int _type;
    int _state;
}

+ (_Bool)supportsSecureCoding;
+ (id)paymentSetupFeatureWithProtobuf:(id)arg1;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int type; // @synthesize type=_type;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end

