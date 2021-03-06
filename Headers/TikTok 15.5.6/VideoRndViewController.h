//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, EAGLContext;

@interface VideoRndViewController : NSObject
{
    CADisplayLink *_displayLink;
    struct vector<id<VideoRndViewControllerDelegate>, std::__1::allocator<id<VideoRndViewControllerDelegate>>> _delegates;
    EAGLContext *_glContext;
    _Bool _requestOpengl;
    long long _state;
    unsigned int _inactiveCounter;
    _Bool _isPaused;
}

@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)topWindow;
- (void)willTerminate;
- (void)didLowMemory;
- (void)dispatchEnterBackground;
- (void)dispatchEnterForeground;
- (void)didEnterBackground;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willEnterForeground;
- (id)getContext;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)displayLinkDidFire:(id)arg1;
- (void)uninit;
- (id)init:(_Bool)arg1;

@end

