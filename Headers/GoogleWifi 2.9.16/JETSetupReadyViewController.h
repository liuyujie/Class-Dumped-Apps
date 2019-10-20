//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBEViewController.h"

#import "JETSetupReadyViewDelegate-Protocol.h"

@class JETOOBEAPState, JETSetupReadyView, NSDate, NSString, NSTimer;

@interface JETSetupReadyViewController : JETOOBEViewController <JETSetupReadyViewDelegate>
{
    JETSetupReadyView *_readyView;
    NSTimer *_rebootTimer;
    NSDate *_updateStartTime;
    NSString *_currentFirmware;
    NSTimer *_pollVersionTimer;
}

@property(retain, nonatomic) NSTimer *pollVersionTimer; // @synthesize pollVersionTimer=_pollVersionTimer;
@property(copy, nonatomic) NSString *currentFirmware; // @synthesize currentFirmware=_currentFirmware;
@property(retain, nonatomic) NSDate *updateStartTime; // @synthesize updateStartTime=_updateStartTime;
@property(retain, nonatomic) NSTimer *rebootTimer; // @synthesize rebootTimer=_rebootTimer;
@property(retain, nonatomic) JETSetupReadyView *readyView; // @synthesize readyView=_readyView;
- (void).cxx_destruct;
- (void)machineStateChangedTo:(long long)arg1;
- (void)checkForBlockingUpdate;
- (void)showMenuButton:(_Bool)arg1;
- (void)didConfigureSSID:(id)arg1 withPassword:(id)arg2;
- (void)configureViewForMachineState:(long long)arg1;
- (void)didPlayIntro;
- (id)subCaptionForDownloadProgress:(double)arg1;
- (void)updateDidFinish;
- (void)didPollAccessPointStatus;
- (void)updateSoftwareInformation;
@property(readonly, nonatomic) NSString *originalFirmware;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)analyticsScreenName;
- (void)loadView;

// Remaining properties
@property(readonly, nonatomic) JETOOBEAPState *APState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

