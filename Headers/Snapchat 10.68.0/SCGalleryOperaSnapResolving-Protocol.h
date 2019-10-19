//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSObject, SCGalleryOperaSnap;
@protocol SCGalleryOperaMagicMomentCaching, SCGallerySnap;

@protocol SCGalleryOperaSnapResolving <NSObject>
@property(readonly, nonatomic) NSObject<SCGalleryOperaMagicMomentCaching> *magicMomentCache;
- (NSArray *)magicMomentUpdatedSnaps;
- (void)updateMagicMomentFrameTime:(NSNumber *)arg1 forPage:(NSDictionary *)arg2;
- (SCGalleryOperaSnap *)resolveGalleryOperaSnapAtPage:(NSDictionary *)arg1;
- (id <SCGallerySnap>)resolveGallerySnapAtPage:(NSDictionary *)arg1;

@optional
- (NSArray *)resolveAllGallerySnaps;
@end
