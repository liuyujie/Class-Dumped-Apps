//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDImageMonitorManager : NSObject
{
}

+ (void)endSDWebImageReqAndReport:(id)arg1 monitor:(id)arg2;
+ (void)trackService:(id)arg1 status:(long long)arg2 extra:(id)arg3;
+ (void)trackData:(id)arg1 logTypeStr:(id)arg2;
+ (id)monitorForModule:(id)arg1 action:(id)arg2;
+ (id)monitors;

@end

