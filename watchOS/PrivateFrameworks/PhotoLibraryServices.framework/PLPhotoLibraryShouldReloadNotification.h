//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification
{
    PLPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (id)userInfo;
- (id)object;
- (id)name;
- (id)initNotificationWithPhotoLibrary:(id)arg1;

@end

