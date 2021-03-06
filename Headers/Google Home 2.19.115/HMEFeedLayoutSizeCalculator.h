//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMEFeedRecapModuleViewController, NSMutableDictionary;

@interface HMEFeedLayoutSizeCalculator : NSObject
{
    HMEFeedRecapModuleViewController *_recapModuleViewController;
    NSMutableDictionary *_cellCache;
}

@property(readonly, nonatomic) NSMutableDictionary *cellCache; // @synthesize cellCache=_cellCache;
@property(readonly, nonatomic) HMEFeedRecapModuleViewController *recapModuleViewController; // @synthesize recapModuleViewController=_recapModuleViewController;
- (void).cxx_destruct;
- (id)cellForIdentifier:(id)arg1;
- (double)horizontalMarginForSection:(id)arg1 collectionViewWidth:(double)arg2;
- (long long)numberOfColumnForSection:(id)arg1 collectionViewWidth:(double)arg2;
- (double)itemWidthForSection:(id)arg1 collectionViewWidth:(double)arg2;
- (struct CGSize)itemSizeForSection:(id)arg1 row:(long long)arg2 collectionViewWidth:(double)arg3;
- (id)initWithRecapModuleViewController:(id)arg1;

@end

