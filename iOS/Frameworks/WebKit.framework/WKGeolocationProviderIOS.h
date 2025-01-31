//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKGeolocationProviderIOS : NSObject
{
    struct RefPtr<WebKit::WebGeolocationManagerProxy, WTF::DumbPtrTraits<WebKit::WebGeolocationManagerProxy>> _geolocationManager;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;
    _Bool _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition, WTF::DumbPtrTraits<WebKit::WebGeolocationPosition>> _lastActivePosition;
    struct Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16> _requestsWaitingForCoreLocationAuthorization;
}

- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v48@0:8^{SecurityOrigin={atomic<unsigned int>=AI}{SecurityOriginData={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{Optional<unsigned short>=B(constexpr_storage_t<unsigned short>=CS)}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BBBBiBBBB}16^{WebFrameProxy=^^?@{WeakPtr<WebKit::WebPageProxy>={RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >=^{WeakPtrImpl}}}{FrameLoadState=i{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BB{RefPtr<WebKit::WebCertificateInfo, WTF::DumbPtrTraits<WebKit::WebCertificateInfo> >=^{WebCertificateInfo}}{RefPtr<WebKit::WebFramePolicyListenerProxy, WTF::DumbPtrTraits<WebKit::WebFramePolicyListenerProxy> >=^{WebFramePolicyListenerProxy}}Q{ContentFilterUnblockHandler={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{function<void (std::__1::function<void (bool)>)>={__value_func<void (std::__1::function<void (bool)>)>={type=[32C]}^{__base<void (std::__1::function<void (bool)>)>}}}{RetainPtr<WebFilterEvaluator>=^v}}}24^{Function<void (bool)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >=^{CallableWrapperBase<void, bool>}}}}32@40, name: decidePolicyForGeolocationRequestFromOrigin:frame:completionHandler:view:
- (id)initWithProcessPool:(struct WebProcessPool *)arg1;
- (id)init;
- (void)_setEnableHighAccuracy:(_Bool)arg1;
- (void)_stopUpdating;
- (void)_startUpdating;
- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;

@end

