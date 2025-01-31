//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKProductPageExtensionServiceInterface-Protocol.h>

@class NSString;

@interface SKProductPageExtension : UIViewController <SKProductPageExtensionServiceInterface>
{
    _Bool _showsStoreButton;
    _Bool _showsRightBarButton;
    _Bool _askToBuy;
    NSString *_cancelButtonTitle;
    NSString *_rightBarButtonTitle;
    NSString *_promptString;
}

+ (id)serviceInterface;
+ (id)clientInterface;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(nonatomic) _Bool askToBuy; // @synthesize askToBuy=_askToBuy;
@property(copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property(nonatomic) _Bool showsRightBarButton; // @synthesize showsRightBarButton=_showsRightBarButton;
@property(copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(nonatomic) _Bool showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;
- (void).cxx_destruct;
- (id)_createNavigationItem;
- (void)rightBarButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)clientLookupItemDidLoad:(id)arg1 parameters:(id)arg2;
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
- (void)setupWithClientBundleID:(id)arg1;
- (void)setVisibleInClientWindow:(id)arg1;
- (void)storeButtonPressed:(id)arg1;
- (void)setupWithCustomNavigationItem:(id)arg1 promptString:(id)arg2 askToBuy:(_Bool)arg3;
- (_Bool)productPageItemDidLoad:(id)arg1 parameters:(id)arg2;
- (_Bool)lookupItemDidLoad:(id)arg1 parameters:(id)arg2;
- (void)loadDidFinish;
- (void)finishWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

