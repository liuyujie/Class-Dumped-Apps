//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FBRadioStatusMonitor : NSObject
{
    struct unique_ptr<proxygen::battery::RadioStatusObserver, std::__1::default_delete<proxygen::battery::RadioStatusObserver>> _radioStatusObserver;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)getSharedRadioStatusMonitor;
+ (id)createSharedRadioStatusMonitor:(_Bool)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (map_5554a4ce)getRadioData;
@property(readonly, nonatomic) struct RadioStatusObserver *radioStatusObserver;
- (id)initPrivate;

@end

