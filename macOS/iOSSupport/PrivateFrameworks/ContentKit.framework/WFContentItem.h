//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/UIActivityItemSource-Protocol.h>
#import <ContentKit/WFContentItemClass-Protocol.h>
#import <ContentKit/WFCopying-Protocol.h>

@class NSExtensionItem, NSItemProvider, NSMutableDictionary, NSString, UIImage, WFRepresentation, WFType;

@interface WFContentItem : NSObject <UIActivityItemSource, WFContentItemClass, WFCopying, NSSecureCoding>
{
    NSMutableDictionary *_representationsByType;
    NSMutableDictionary *_subItemsByClass;
    WFType *_internalRepresentationType;
}

+ (id)populateBadCoercionError:(id)arg1 withResponsibleComponent:(id)arg2;
+ (id)badCoercionErrorDefaultResponsibleComponent;
+ (id)filterRepresentationsForAllowedContent:(id)arg1;
+ (id)contentCategories;
+ (id)allSupportedItemClasses;
+ (id)supportedItemClasses;
+ (id)allSupportedTypes;
+ (id)supportedItemClassesExcludingInstanceSpecificTypes;
+ (id)supportedTypesExcludingInstanceSpecificTypes;
+ (BOOL)supportedTypesMustBeDeterminedByInstance;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (BOOL)supportedItemClassMustBeDeterminedByInstance:(Class)arg1;
+ (id)supportedTypes;
+ (BOOL)contentItems:(id)arg1 haveContentProperties:(id)arg2;
+ (CDUnknownBlockType)contentPropertySubstitutor;
+ (id)supportedPropertyForProperty:(id)arg1;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)hasLibrary;
+ (id)propertyForName:(id)arg1;
+ (id)allProperties;
+ (id)properties;
+ (id)propertyBuilders;
+ (BOOL)canLowercaseTypeDescription;
+ (id)countDescription;
+ (id)localizedPluralFilterDescription;
+ (id)pluralFilterDescription;
+ (id)localizedFilterDescription;
+ (id)filterDescription;
+ (id)localizedPluralTypeDescription;
+ (id)pluralTypeDescription;
+ (id)localizedTypeDescription;
+ (id)typeDescription;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (BOOL)isAvailableOnPlatform:(long long)arg1;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (id)itemFromSerializedItem:(id)arg1 withItemClass:(Class)arg2 forType:(id)arg3 nameIfKnown:(id)arg4 sourceName:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)getContentItemFromSerializedItem:(id)arg1 sourceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)supportsSecureCoding;
+ (BOOL)hasFileOutput;
+ (BOOL)hasStringOutput;
+ (BOOL)isContentItemSubclass;
+ (id)itemWithFile:(id)arg1;
+ (id)itemWithRepresentation:(id)arg1;
+ (id)itemWithRepresentation:(id)arg1 forType:(id)arg2;
+ (id)itemWithObject:(id)arg1 named:(id)arg2;
+ (id)itemWithObject:(id)arg1;
+ (id)badCoercionErrorForObjectClass:(Class)arg1;
+ (id)badCoercionErrorForType:(id)arg1;
+ (id)badCoercionErrorForItemClass:(Class)arg1;
+ (id)badCoercionErrorForItemClasses:(id)arg1;
+ (id)badCoercionErrorForTypeDescription:(id)arg1 toTypeDescription:(id)arg2;
+ (id)badCoercionErrorWithReasonString:(id)arg1;
+ (BOOL)errorIsBadCoercionError:(id)arg1;
+ (id)pasteboardValueClasses;
+ (id)activityItemClasses;
@property(readonly, nonatomic) WFType *internalRepresentationType; // @synthesize internalRepresentationType=_internalRepresentationType;
@property(retain, nonatomic) NSMutableDictionary *subItemsByClass; // @synthesize subItemsByClass=_subItemsByClass;
@property(retain, nonatomic) NSMutableDictionary *representationsByType; // @synthesize representationsByType=_representationsByType;
- (void).cxx_destruct;
- (id)subItemForClass:(Class)arg1;
- (id)subItemsForClass:(Class)arg1;
- (void)setSubItems:(id)arg1 forClass:(Class)arg2;
- (id)objectForClass:(Class)arg1;
- (id)objectsForClass:(Class)arg1;
- (void)setObjectRepresentations:(id)arg1 forClass:(Class)arg2;
- (id)objectRepresentationForClass:(Class)arg1;
- (id)objectRepresentationsForClass:(Class)arg1;
- (void)setFileRepresentations:(id)arg1 forType:(id)arg2;
- (id)fileRepresentationForType:(id)arg1;
- (id)fileRepresentationsForType:(id)arg1;
- (void)setRepresentations:(id)arg1 forType:(id)arg2;
- (id)representationForType:(id)arg1;
- (id)representationsForType:(id)arg1;
- (id)initWithRepresentation:(id)arg1 forType:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)allSupportedItemClasses;
- (id)supportedItemClasses;
- (id)allSupportedTypes;
- (BOOL)canGenerateIntermediaryRepresentationForItemClass:(Class)arg1;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (BOOL)cachesSupportedTypes;
- (id)supportedTypes;
- (id)outputTypes;
- (id)ownedTypes;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIImage *icon;
- (id)preferredFileType;
- (id)preferredObjectType;
- (id)preferredTypeOfClass:(Class)arg1;
- (BOOL)includesFileRepresentationInSerializedItem;
- (id)additionalRepresentationsForSerialization;
- (id)metadataForSerialization;
- (id)nativePasteboardTypeForObjectRepresentationOfClass:(Class)arg1;
- (void)getFileRepresentationsForSerialization:(CDUnknownBlockType)arg1;
- (void)getSerializedItem:(CDUnknownBlockType)arg1;
- (id)itemsByCoercingToItemClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)forceCoerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)coercionOptions:(id)arg1 allowCoercionsToItemClass:(Class)arg2;
- (BOOL)coercionOptions:(id)arg1 allowCoercionsToType:(id)arg2;
- (BOOL)canPerformCoercion:(id)arg1;
- (void)performCoercion:(id)arg1;
- (id)typeForCoercionRequest:(id)arg1;
- (id)generateSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateSubItemsForItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)canEncodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithName:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)internalRepresentationForCopying;
- (BOOL)hasStringOutput;
- (id)internalName;
- (void)getTitle:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) WFRepresentation *internalRepresentation;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getRepresentationsForType:(id)arg1 error:(id *)arg2;
- (id)getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)getRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
@property(readonly, nonatomic) NSExtensionItem *minimalExtensionItem;
@property(readonly, nonatomic) NSItemProvider *minimalItemProvider;
@property(readonly, nonatomic) NSExtensionItem *extensionItem;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
- (id)extensionItemWithItemProvider:(id)arg1;
- (id)itemProviderForTypes:(id)arg1;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *richListTitle;
- (void)coerceToItemClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)coerceToItemClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isCoercibleToItemClasses:(id)arg1;
- (BOOL)isCoercibleToItemClass:(Class)arg1;
- (void)getObjectRepresentations:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)getFileRepresentations:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)getFileRepresentation:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)getObjectRepresentation:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)prepareForActivityItemPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldUseObjectRepresentation;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

