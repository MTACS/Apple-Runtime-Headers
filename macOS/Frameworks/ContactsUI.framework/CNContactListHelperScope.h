//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore;

@interface CNContactListHelperScope : NSObject
{
    CNContact *_contact;
    CNContactStore *_contactStore;
    long long _row;
}

@property(readonly) long long row; // @synthesize row=_row;
@property(readonly) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2 row:(long long)arg3;

@end

