//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface AWEDiscoverSecondFloorCollectionView : UICollectionView
{
    _Bool _isInLimitDraggingTime;
    struct CGPoint _startingOffset;
}

@property(nonatomic) _Bool isInLimitDraggingTime; // @synthesize isInLimitDraggingTime=_isInLimitDraggingTime;
@property(nonatomic) struct CGPoint startingOffset; // @synthesize startingOffset=_startingOffset;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isFirstVideo;

@end

