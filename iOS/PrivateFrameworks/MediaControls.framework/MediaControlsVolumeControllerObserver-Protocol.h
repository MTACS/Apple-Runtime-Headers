//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsVolumeController;

@protocol MediaControlsVolumeControllerObserver <NSObject>
- (void)mediaControlsVolumeController:(MediaControlsVolumeController *)arg1 didUpdateSplitRoute:(_Bool)arg2;

@optional
- (void)mediaControlsVolumeController:(MediaControlsVolumeController *)arg1 didChangeVolumeAvailable:(_Bool)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4;
@end

