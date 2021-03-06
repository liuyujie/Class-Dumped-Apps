//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTWorkflowTaskSettingUIAdapter.h"

#import "ASTMenuSliderDelegate-Protocol.h"

@class ASTUIVolumeTaskSettingUi, NSString;

@interface ASTWorkflowVolumeTaskSettingUIAdapter : ASTWorkflowTaskSettingUIAdapter <ASTMenuSliderDelegate>
{
    ASTUIVolumeTaskSettingUi *_taskSettingUI;
}

+ (id)volumeTypeStringWithVolumeTyoe:(int)arg1;
- (void).cxx_destruct;
- (void)didTapBackButton;
- (void)slider:(id)arg1 didChangeValue:(double)arg2;
- (id)pageCustomizations;
- (id)settingsFilter;
- (id)menuSectionsForSettings:(id)arg1;
- (id)initWithSettingsService:(id)arg1 workflow:(id)arg2 taskIndex:(unsigned long long)arg3 isFinalTask:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

