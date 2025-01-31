//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <MessageUI/MFPreferredHeightProviding-Protocol.h>
#import <MessageUI/UICollectionViewDataSource-Protocol.h>
#import <MessageUI/UICollectionViewDelegate-Protocol.h>
#import <MessageUI/UIImagePickerControllerDelegate-Protocol.h>
#import <MessageUI/UINavigationControllerDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, PHAssetCollection, PHCachingImageManager, PHFetchResult, UIImagePickerController;
@protocol MFPhotoPickerControllerDelegate;

@interface MFPhotoPickerController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, MFPreferredHeightProviding>
{
    NSMutableSet *_selectedAssetIdentifiers;
    struct {
        unsigned int delegateRespondsToPickerDidCancel:1;
        unsigned int delegateRespondsToDidSelectAssetWithIdentifier:1;
        unsigned int delegateRespondsToDidDeselectAssetWithIdentifier:1;
    } _flags;
    id <MFPhotoPickerControllerDelegate> _pickerDelegate;
    PHFetchResult *_photosFetchResult;
    PHAssetCollection *_photosCollection;
    PHCachingImageManager *_imageManager;
    double _availableWidth;
    UIImagePickerController *_systemImagePicker;
    struct CGSize _thumbnailSize;
}

@property(retain, nonatomic) UIImagePickerController *systemImagePicker; // @synthesize systemImagePicker=_systemImagePicker;
@property(nonatomic) double availableWidth; // @synthesize availableWidth=_availableWidth;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) PHAssetCollection *photosCollection; // @synthesize photosCollection=_photosCollection;
@property(retain, nonatomic) PHFetchResult *photosFetchResult; // @synthesize photosFetchResult=_photosFetchResult;
@property(nonatomic) __weak id <MFPhotoPickerControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void).cxx_destruct;
- (_Bool)_isPresentingInASheet;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)removeAllSelectedAssetIdentifiers;
- (void)removeSelectedAssetIdentifier:(id)arg1;
- (void)addSelectedAssetIdentifiers:(id)arg1;
- (void)addSelectedAssetIdentifier:(id)arg1;
- (void)showSystemImagePicker:(id)arg1;
- (void)close:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSSet *selectedAssetIdentifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

