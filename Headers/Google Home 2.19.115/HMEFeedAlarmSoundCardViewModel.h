//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEFeedAlarmCardViewModel-Protocol.h"

@class GHCFeedAlarmModule_AlarmClip, NSString;
@protocol GHCMediaClipCatalogService, HMEFeedAction, HMEFeedEventViewModel;

@interface HMEFeedAlarmSoundCardViewModel : NSObject <HMEFeedAlarmCardViewModel>
{
    id <HMEFeedEventViewModel> _alarmEventViewModel;
    NSString *_deviceName;
    NSString *_roomName;
    NSString *_dropInActionText;
    GHCFeedAlarmModule_AlarmClip *_alarmClip;
    id <HMEFeedAction> _actionHandler;
    id <GHCMediaClipCatalogService> _mediaClipCatalogService;
}

@property(readonly, nonatomic) id <GHCMediaClipCatalogService> mediaClipCatalogService; // @synthesize mediaClipCatalogService=_mediaClipCatalogService;
@property(readonly, nonatomic) id <HMEFeedAction> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) GHCFeedAlarmModule_AlarmClip *alarmClip; // @synthesize alarmClip=_alarmClip;
@property(readonly, copy, nonatomic) NSString *dropInActionText; // @synthesize dropInActionText=_dropInActionText;
@property(readonly, copy, nonatomic) NSString *eventSubtitle; // @synthesize eventSubtitle=_roomName;
@property(readonly, copy, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_deviceName;
@property(readonly, nonatomic) id <HMEFeedEventViewModel> alarmEventViewModel; // @synthesize alarmEventViewModel=_alarmEventViewModel;
- (void).cxx_destruct;
- (id)dropInActionDataDictionary;
- (void)performDropInAction;
- (id)initWithAlarmClip:(id)arg1 deviceName:(id)arg2 roomName:(id)arg3 actionHandler:(id)arg4 mediaClipCatalogService:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

