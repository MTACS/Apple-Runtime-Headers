//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSUUID;

@interface PUPhotoPickerRemoteViewControllerRequestOptions : NSObject <NSSecureCoding>
{
    NSUUID *_requestedIdentifier;
    NSString *_requestedClassName;
    NSDictionary *_photoPickerProperties;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *photoPickerProperties; // @synthesize photoPickerProperties=_photoPickerProperties;
@property(copy, nonatomic) NSString *requestedClassName; // @synthesize requestedClassName=_requestedClassName;
@property(retain, nonatomic) NSUUID *requestedIdentifier; // @synthesize requestedIdentifier=_requestedIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) long long modalPresentationStyle;
@property(readonly, nonatomic) struct CGSize preferredViewSize;
@property(readonly, nonatomic) _Bool convertAutoloopsToGIF;
@property(readonly, nonatomic) _Bool showsPrompt;
@property(readonly, nonatomic) _Bool showsFileSizePicker;
@property(readonly, nonatomic) _Bool requiresPickingConfirmation;
@property(readonly, nonatomic) unsigned long long multipleSelectionLimit;
@property(readonly, nonatomic) _Bool allowsMultipleSelection;
@property(readonly, nonatomic) NSArray *mediaTypes;
@property(readonly, nonatomic) unsigned long long savingOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithRequestedIdentifier:(id)arg1 photoPickerProperties:(id)arg2;
- (id)initWithRequestedClassName:(id)arg1 photoPickerProperties:(id)arg2;

@end

