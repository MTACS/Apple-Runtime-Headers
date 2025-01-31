//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class ECSecureMIMETrustEvaluation, NSString;
@protocol ECEmailAddressConvertible;

@interface EMCertificateTrustInformation : NSObject <NSSecureCoding, EFLoggable>
{
    _Bool __forceNetworkAccessAllowed;
    struct __SecTrust *_trust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    NSString *_sender;
    unsigned long long _certificateType;
}

+ (_Bool)supportsSecureCoding;
+ (id)log;
@property(nonatomic) _Bool _forceNetworkAccessAllowed; // @synthesize _forceNetworkAccessAllowed=__forceNetworkAccessAllowed;
@property(nonatomic) unsigned long long certificateType; // @synthesize certificateType=_certificateType;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation; // @synthesize trustEvaluation=_trustEvaluation;
@property(nonatomic) struct __SecTrust *trust; // @synthesize trust=_trust;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canSaveCertificateToKeychain;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)evaluateTrustWithOptions:(unsigned long long)arg1 signerEmailAddress:(id)arg2;
@property(readonly, copy, nonatomic) id <ECEmailAddressConvertible> emailAddress;
@property(readonly, copy, nonatomic) NSString *commonName;
@property(readonly, nonatomic) struct __SecCertificate *certificate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1 certificateType:(unsigned long long)arg2 sender:(id)arg3 commonName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

