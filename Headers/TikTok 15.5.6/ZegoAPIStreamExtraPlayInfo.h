//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ZegoAPIStreamExtraPlayInfo : NSObject
{
    _Bool _shouldSwitchServer;
    NSString *_params;
    NSArray *_rtmpUrls;
    NSArray *_flvUrls;
}

@property _Bool shouldSwitchServer; // @synthesize shouldSwitchServer=_shouldSwitchServer;
@property(retain) NSArray *flvUrls; // @synthesize flvUrls=_flvUrls;
@property(retain) NSArray *rtmpUrls; // @synthesize rtmpUrls=_rtmpUrls;
@property(copy) NSString *params; // @synthesize params=_params;
- (void).cxx_destruct;

@end

