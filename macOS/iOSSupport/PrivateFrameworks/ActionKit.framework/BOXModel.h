//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BOXModel : NSObject
{
    NSString *_modelID;
    NSString *_type;
    NSDictionary *_JSONData;
}

@property(retain, nonatomic) NSDictionary *JSONData; // @synthesize JSONData=_JSONData;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end

