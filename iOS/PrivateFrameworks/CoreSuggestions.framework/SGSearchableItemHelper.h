//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGSearchableItemHelper : NSObject
{
}

+ (id)deserializeAttributesAndBody:(id)arg1;
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;
+ (id)deserializeAttributes:(id)arg1;
+ (id)serializeAttributesAndBody:(id)arg1;
+ (id)serializeAttributes:(id)arg1;
+ (_Bool)mailItemIsTooBig:(id)arg1;
+ (_Bool)mailItemIsInTrash:(id)arg1;
+ (_Bool)mailItemIsInSent:(id)arg1;
+ (_Bool)mailItemIsInDrafts:(id)arg1;
+ (_Bool)mailItemIsSPAM:(id)arg1;
+ (_Bool)mailItemIsValid:(id)arg1;
+ (_Bool)mailItemIsRecent:(id)arg1;
+ (_Bool)mailItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (_Bool)searchableItemIsEmpty:(id)arg1;
+ (_Bool)mailItemIsFromSupportedAccount:(id)arg1;
+ (_Bool)mailItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)mailItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)mailItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)mailItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (id)mailItemMessageIdHeaderValues:(id)arg1;
+ (_Bool)mailItemIsRecent:(id)arg1 emailHeaders:(id)arg2;

@end

