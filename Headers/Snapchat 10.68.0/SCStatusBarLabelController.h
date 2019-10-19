//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController, NSSet, NSString, UILabel;

@interface SCStatusBarLabelController : NSObject
{
    FBKVOController *_kvoController;
    NSString *_currentPageName;
    NSSet *_whitelistedPageViews;
    _Bool _isAnyDownloadRunning;
    UILabel *_frameRateLabel;
}

+ (_Bool)canAddStatusBarLabels;
+ (struct CGRect)statusBarFrame;
@property(retain, nonatomic) UILabel *frameRateLabel; // @synthesize frameRateLabel=_frameRateLabel;
- (void).cxx_destruct;
- (void)_updateVisibility;
- (void)updateVisibility;
- (void)updateLabelColorWithPage:(id)arg1;
- (void)updateFrameRateLabelWithValue:(long long)arg1;
- (void)pageViewChanged:(id)arg1;
- (void)frameRateChanged:(id)arg1;
- (void)setupObservations;
- (void)addLabels;
- (id)init;

@end
