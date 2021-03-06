//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTVSSController-Protocol.h"

@class GIMMe, NSString, YTVSS3Controller;
@protocol YTVSSController;

@interface YTVSSDoubleLoggingController : NSObject <YTVSSController>
{
    id <YTVSSController> _VSS2Controller;
    YTVSS3Controller *_VSS3Controller;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)suspend;
- (id)stateCopy;
- (void)shutDown;
- (void)playerStatusDidChange:(id)arg1;
- (void)flush;
- (void)activateWithPlaybackData:(id)arg1 singleVideoObservable:(id)arg2 playerStatus:(id)arg3 playlistID:(id)arg4 autoplay:(_Bool)arg5;
@property(readonly, nonatomic) long long lifecycleState;
- (id)initWithVSS2Controller:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

