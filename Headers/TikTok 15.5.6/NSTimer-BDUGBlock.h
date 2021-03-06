//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (BDUGBlock)
+ (id)bdug_timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)bdug_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)btd_timerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)btd_scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (void)btd_execBlock:(id)arg1;
+ (void)live_blockInvoke:(id)arg1;
+ (id)live_scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)bds_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (void)tt_blockInvoke:(id)arg1;
+ (id)tt_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)tt_timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)scheduledNoRetainTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (void)blockInvoke:(id)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)mus_timerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)mus_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)ttvideoengine_scheduledNoRetainTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (void)excuteBlock:(id)arg1;
+ (id)ttvideoengine_scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3 repeats:(_Bool)arg4;
+ (void)tvl_blockInvoke:(id)arg1;
+ (id)tvl_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)tvl_timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)tvl_scheduledNoRetainTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)tvl_timerNoRetainWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)awe_timerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)awe_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (void)awe_video_timerAction:(id)arg1;
+ (id)awe_video_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)awe_video_wrapper_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)acc_timerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)acc_scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (void)acc_execBlock:(id)arg1;
- (void)setTtNextFireDate:(id)arg1;
- (id)ttNextFireDate;
- (void)setTtPausedDate:(id)arg1;
- (id)ttPausedDate;
- (void)tt_resume;
- (void)tt_pause;
- (void)setAwe_nextFireDate:(id)arg1;
- (id)awe_nextFireDate;
- (void)setAwe_pausedDate:(id)arg1;
- (id)awe_pausedDate;
- (void)awe_resume;
- (void)awe_pause;
@end

