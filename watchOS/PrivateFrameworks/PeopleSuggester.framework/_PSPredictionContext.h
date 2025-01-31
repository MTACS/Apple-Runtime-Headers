//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, NSUUID;

@interface _PSPredictionContext : NSObject <NSSecureCoding>
{
    NSDate *_suggestionDate;
    NSUUID *_locationUUID;
    int _locationType;
    NSString *_bundleID;
    NSString *_accountIdentifier;
    NSArray *_seedRecipients;
    NSArray *_candidateShareExtensionBundleIds;
    NSDictionary *_appBundleIdsToShareExtensionBundleIdsMapping;
    NSArray *_attachments;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSDictionary *appBundleIdsToShareExtensionBundleIdsMapping; // @synthesize appBundleIdsToShareExtensionBundleIdsMapping=_appBundleIdsToShareExtensionBundleIdsMapping;
@property(copy, nonatomic) NSArray *candidateShareExtensionBundleIds; // @synthesize candidateShareExtensionBundleIds=_candidateShareExtensionBundleIds;
@property(copy, nonatomic) NSArray *seedRecipients; // @synthesize seedRecipients=_seedRecipients;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(copy, nonatomic) NSUUID *locationUUID; // @synthesize locationUUID=_locationUUID;
@property(copy, nonatomic) NSDate *suggestionDate; // @synthesize suggestionDate=_suggestionDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

