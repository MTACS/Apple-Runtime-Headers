//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailCore/MCConnectionLogging-Protocol.h>

@class ECSASLClient, MCSocket, NSArray, NSData, NSDate, NSFileHandle, NSString;
@protocol MCAccount;

@interface MCConnection : NSObject <MCConnectionLogging>
{
    id _accountLock;
    id <MCAccount> _account;
    BOOL _isBackground;
    MCSocket *_socket;
    double _connectTimeout;
    double _readWriteTimeout;
    unsigned long long _totalBytesRead;
    NSDate *_readTimestamp;
    void *_buffer;
    long long _bufferRemainingBytes;
    unsigned long long _bufferStart;
    unsigned long long _bufferLength;
    NSData *_logHeader;
    ECSASLClient *_saslClient;
    NSFileHandle *_logFile;
}

+ (BOOL)shouldLogActivityForHost:(id)arg1 port:(long long)arg2;
+ (void)setLogActivityToFile:(BOOL)arg1;
+ (BOOL)logActivityToFile;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogAllSocketActivity:(BOOL)arg1;
+ (BOOL)logAllSocketActivity;
+ (void)setLoggingDelegate:(id)arg1;
+ (id)loggingDelegate;
+ (BOOL)_defaultsToBackground;
+ (void)initialize;
@property(retain) NSFileHandle *logFile; // @synthesize logFile=_logFile;
@property(retain, nonatomic) ECSASLClient *saslClient; // @synthesize saslClient=_saslClient;
@property(retain, nonatomic) NSData *logHeader; // @synthesize logHeader=_logHeader;
@property(nonatomic) unsigned long long bufferLength; // @synthesize bufferLength=_bufferLength;
@property(nonatomic) unsigned long long bufferStart; // @synthesize bufferStart=_bufferStart;
@property(nonatomic) long long bufferRemainingBytes; // @synthesize bufferRemainingBytes=_bufferRemainingBytes;
@property(nonatomic) void *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSDate *readTimestamp; // @synthesize readTimestamp=_readTimestamp;
@property(nonatomic) unsigned long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property BOOL isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) double readWriteTimeout; // @synthesize readWriteTimeout=_readWriteTimeout;
@property(nonatomic) double connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(retain, nonatomic) MCSocket *socket; // @synthesize socket=_socket;
- (void).cxx_destruct;
- (void)_resetLogHeaderWithPort:(long long)arg1;
- (void)_logToFileDidChange:(id)arg1;
- (void)_loggingDidChange:(id)arg1;
- (void)_logEventWithPrefix:(const char *)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3 maskStartIndex:(unsigned long long)arg4 maskLength:(unsigned long long)arg5;
- (void)flushLog;
- (void)logBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)logData:(id)arg1 range:(struct _NSRange)arg2;
- (void)logData:(id)arg1;
- (void)logString:(id)arg1;
- (BOOL)_isSSLError:(id)arg1;
- (void)_setupWriteErrorForMonitor;
- (void)_setupReadErrorForMonitor;
- (id)_adjustedSSLErrorWithHostname:(id)arg1 serverTrust:(struct __SecTrust *)arg2;
- (void)_setupConnectionErrorForMonitorWithPort:(long long)arg1 usingSSL:(BOOL)arg2 serverTrust:(struct __SecTrust *)arg3;
- (BOOL)_writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange)arg2 error:(id *)arg3;
- (long long)_readBytesFromSocketIntoBuffer:(void *)arg1 amount:(unsigned long long)arg2 requireAllBytes:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_fillBuffer:(id *)arg1;
- (BOOL)_readBytesIntoData:(id)arg1 desiredLength:(long long)arg2 error:(id *)arg3;
- (BOOL)_readLineIntoData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL hasBytesAvailable;
- (void)disconnect;
- (void)quit;
- (BOOL)isValidAllowNetworking:(BOOL)arg1;
- (void)discoverAccountSettings;
@property(readonly, nonatomic) BOOL supportsPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (id)_authenticateWithNonPlainTextSchemes;
- (BOOL)_authenticateWithSASLClient:(id)arg1;
- (BOOL)_authenticateWithAuthenticationMechanisms:(id)arg1 allowPlainText:(BOOL)arg2;
- (BOOL)_shouldKeepTryingAfterProcessingAuthenticationFailureAllowingReconnect:(BOOL)arg1 bestError:(id *)arg2;
- (BOOL)authenticate;
- (BOOL)_completeConnectionWithResult:(BOOL)arg1;
- (void)_setupConnection;
- (BOOL)_startTLS;
- (void)_setupSocketWithSecurityLayer:(long long)arg1 disableEphemeralDiffieHellmanCiphers:(BOOL)arg2 connectTimeout:(double)arg3;
- (id)_newConnectionAttemptsConfigureDynamically:(BOOL)arg1;
- (BOOL)connectDiscoveringBestSettings:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isExpensive;
@property(readonly, copy, nonatomic) NSArray *authenticationMechanisms;
@property(readonly, nonatomic) unsigned int cipherKeyLength;
@property __weak id <MCAccount> account;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

