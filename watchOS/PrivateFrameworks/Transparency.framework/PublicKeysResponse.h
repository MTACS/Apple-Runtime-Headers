//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSMutableArray, Signature;

@interface PublicKeysResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appLeafsArray; // @dynamic appLeafsArray;
@property(readonly, nonatomic) unsigned int appLeafsArray_Count; // @dynamic appLeafsArray_Count;
@property(nonatomic) _Bool hasVrfSignature; // @dynamic hasVrfSignature;
@property(retain, nonatomic) NSMutableArray *intermediatesArray; // @dynamic intermediatesArray;
@property(readonly, nonatomic) unsigned int intermediatesArray_Count; // @dynamic intermediatesArray_Count;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *tltLeafsArray; // @dynamic tltLeafsArray;
@property(readonly, nonatomic) unsigned int tltLeafsArray_Count; // @dynamic tltLeafsArray_Count;
@property(copy, nonatomic) NSData *vrfKey; // @dynamic vrfKey;
@property(copy, nonatomic) NSData *vrfPublicKey; // @dynamic vrfPublicKey;
@property(retain, nonatomic) Signature *vrfSignature; // @dynamic vrfSignature;

@end

