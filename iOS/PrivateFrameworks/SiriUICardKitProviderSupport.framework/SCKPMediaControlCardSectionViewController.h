//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>

@class AFSecurityConnection, NSString, SCKPMediaControlCardSectionView, SFMediaRemoteControlCardSection;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling>
{
    AFSecurityConnection *_assistantSecurityConnection;
    UIViewController *_mediaPlatterViewController;
    id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
    SFMediaRemoteControlCardSection *_cardSection;
}

+ (void)initialize;
@property(readonly) SFMediaRemoteControlCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate;
- (void).cxx_destruct;
- (void)_updatePlatterForRouteUID:(id)arg1;
- (void)_updatePlatterForHashedRouteUID:(id)arg1;
- (void)loadView;
- (id)initWithMediaRemoteControlCardSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) SCKPMediaControlCardSectionView *view; // @dynamic view;

@end

