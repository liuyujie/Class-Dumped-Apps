//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@interface DCDMediaPlayerManager : RCTEventEmitter
{
}

+ (const struct RCTMethodInfo *)__rct_export__541;
+ (const struct RCTMethodInfo *)__rct_export__480;
+ (void)load;
+ (id)moduleName;
- (void)changeProgress:(id)arg1 value:(id)arg2;
- (void)toggle:(id)arg1 play:(id)arg2;
- (void)mediaPlayerPause:(id)arg1;
- (void)mediaPlayerUpdateProgress:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;

@end

