//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATDriver.h"

@interface SCATDwellDriver : SCATDriver
{
    _Bool _isReadyForSelect;
}

@property(nonatomic) _Bool isReadyForSelect; // @synthesize isReadyForSelect=_isReadyForSelect;
- (double)dwellDelay;
- (void)_cancelDwellRelatedTimers;
- (void)_scanAbortTimerFired;
- (void)_dwellTimerFired;
- (void)_startScanAbortTimer;
- (void)_startDwellTimer;
- (void)_resetDwellTimer;
- (void)_didTransitionToPhase:(int)arg1;
- (void)_idleTimerDidFire;
- (_Bool)_shouldUseScanAbortTimer;
- (_Bool)_shouldUseDwellSelection;
- (_Bool)_handleStepPreviousAction;
- (_Bool)_handleStepNextAction;
- (_Bool)_handleStepAction:(long long)arg1;
- (_Bool)_handleSelectAction;
- (_Bool)_actuallyHandleSelectAction;
- (_Bool)handleInputAction:(long long)arg1;
- (int)driverType;

@end
