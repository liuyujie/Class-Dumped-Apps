//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBBannerViewDisplayUtil : NSObject
{
}

+ (_Bool)shouldAnimateViewController:(id)arg1;
+ (id)db_locationFromPlacement:(long long)arg1 inViewController:(id)arg2;
+ (long long)db_animationFromAnimated:(_Bool)arg1 forViewController:(id)arg2;
+ (void)notifyBannerViewDidAppear:(id)arg1 inViewController:(id)arg2;
+ (void)removeBannerView:(id)arg1 fromViewController:(id)arg2 withContentScrollView:(id)arg3 placement:(long long)arg4;
+ (void)showBannerView:(id)arg1 inViewController:(id)arg2 withContentScrollView:(id)arg3 placement:(long long)arg4;
+ (Class)placerClass;
+ (Class)internal_overridePlacerClass;
+ (void)setInternal_overridePlacerClass:(Class)arg1;

@end

