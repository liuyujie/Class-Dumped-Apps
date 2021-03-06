//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol UICoordinateSpace;

@interface GADWindowScene : NSObject
{
    long long _activationState;
    id <UICoordinateSpace> _coordinateSpace;
    NSArray *_windows;
    long long _interfaceOrientation;
}

@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) NSArray *windows; // @synthesize windows=_windows;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic) long long activationState; // @synthesize activationState=_activationState;
- (void).cxx_destruct;

@end

