//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HMEBaseRadialSliderDataSource, HMEBaseRadialSliderPointViewDelegate;

@protocol HMEBaseRadialSliderPointView <NSObject>
@property(nonatomic, getter=isContinuous) _Bool continuous;
@property(nonatomic) double value;
@property(nonatomic) __weak id <HMEBaseRadialSliderDataSource> dataSource;
@property(nonatomic) __weak id <HMEBaseRadialSliderPointViewDelegate> delegate;
@end

