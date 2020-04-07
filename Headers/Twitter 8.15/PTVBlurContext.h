//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext;
@protocol MTLDevice;

@interface PTVBlurContext : NSObject
{
    CIContext *_coreImageContext;
    id <MTLDevice> _metalDevice;
}

+ (_Bool)isAppActiveInTheForeground;
+ (void)willEnterForeground;
+ (void)didEnterBackground;
+ (void)willResignActive;
+ (void)didBecomeActive;
@property(readonly, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
@property(readonly, nonatomic) CIContext *coreImageContext; // @synthesize coreImageContext=_coreImageContext;
- (void).cxx_destruct;
- (id)init;

@end
