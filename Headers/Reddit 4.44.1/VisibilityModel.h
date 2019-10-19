//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIView, UIViewController, VisibilityOptions;

@interface VisibilityModel : NSObject
{
    _Bool _isVisible;
    NSString *_identifier;
    UIView *_associatedView;
    VisibilityOptions *_visibilityOptions;
    double _percentageVisible;
    NSMutableDictionary *_visibilityTargetActions;
    UIViewController *_closestViewController;
}

@property(nonatomic) __weak UIViewController *closestViewController; // @synthesize closestViewController=_closestViewController;
@property(retain, nonatomic) NSMutableDictionary *visibilityTargetActions; // @synthesize visibilityTargetActions=_visibilityTargetActions;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) double percentageVisible; // @synthesize percentageVisible=_percentageVisible;
@property(retain, nonatomic) VisibilityOptions *visibilityOptions; // @synthesize visibilityOptions=_visibilityOptions;
@property(nonatomic) __weak UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (double)computePercentageVisibile;
- (void)computeVisibility;
- (void)_handleVisibility;
- (void)handleVisibility;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(unsigned long long)arg3 withVisibleThreshold:(double)arg4 atMinimumDuration:(double)arg5;
- (id)initWithAssociatedView:(id)arg1 options:(id)arg2 forIdentifier:(id)arg3;

@end
