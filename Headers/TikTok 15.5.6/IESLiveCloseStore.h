//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveScreenLockActions-Protocol.h"

@class NSString, RACDisposable;
@protocol IESActionDispatcher;

@interface IESLiveCloseStore : NSObject <IESLiveScreenLockActions>
{
    _Bool _screenLock;
    id <IESActionDispatcher> _actionDispatcher;
    RACDisposable *_disposable;
}

@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESActionDispatcher> actionDispatcher; // @synthesize actionDispatcher=_actionDispatcher;
@property(nonatomic) _Bool screenLock; // @synthesize screenLock=_screenLock;
- (void).cxx_destruct;
- (void)unlockScreen;
- (void)lockScreen;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

