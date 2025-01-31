//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface NTKSiderealWaypointsView : UIView
{
    NSArray *_waypoints;
    double _orbitDiameter;
    UIView *_orbitContainerView;
    double _waypointDiameter;
    UIView *_waypointContainerView;
    double _dialDiameter;
    UIView *_separatorLinesContainer;
    NSMutableArray *_separatorLines;
}

- (void).cxx_destruct;
- (double)_distanceBetweenAngleA:(double)arg1 angleB:(double)arg2;
- (id)_newSeparatorLineForWaypoint:(id)arg1;
- (id)_newWaypointView;
- (void)_updateSeparatorLines;
- (id)waypointBetweenPreviousOffset:(double)arg1 currentOffset:(double)arg2;
- (id)closestWaypointForSolarDayProgress:(double)arg1 range:(double)arg2;
- (void)setWaypoints:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 orbitDiameter:(double)arg2 dialDiameter:(double)arg3;

@end

