//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, GADNObserverCollection;
@protocol GADNEventContextSource;

@interface GADNAVPlayerItemLogger : NSObject
{
    AVPlayerItem *_playerItem;
    id <GADNEventContextSource> _contextSource;
    GADNObserverCollection *_observers;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)startMonitoringOnMainThread;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1 eventContextSource:(id)arg2;

@end
