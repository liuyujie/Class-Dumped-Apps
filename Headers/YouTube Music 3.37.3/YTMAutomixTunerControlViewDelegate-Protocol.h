//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTIAutomixTunerSettingRenderer, YTMAutomixTunerControlView;

@protocol YTMAutomixTunerControlViewDelegate <NSObject>
- (void)automixTunerControlViewDidDismiss:(YTMAutomixTunerControlView *)arg1;
- (void)automixTunerControlView:(YTMAutomixTunerControlView *)arg1 didHoverOverSetting:(YTIAutomixTunerSettingRenderer *)arg2;
- (void)automixTunerControlView:(YTMAutomixTunerControlView *)arg1 didChangeSetting:(YTIAutomixTunerSettingRenderer *)arg2;
@end
