//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol INCodableCoding <NSObject>
- (NSDictionary *)dictionaryRepresentationForLanguage:(NSString *)arg1;
- (NSDictionary *)dictionaryRepresentation;
- (void)updateWithDictionary:(NSDictionary *)arg1;
- (NSString *)dictionaryKeyForKeyPath:(NSString *)arg1;
- (NSString *)keyPrefix;
@end

