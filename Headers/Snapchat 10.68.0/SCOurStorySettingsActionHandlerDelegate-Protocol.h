//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCOurStorySettingsDataModel, UIView;

@protocol SCOurStorySettingsActionHandlerDelegate
- (void)saveStory:(SCOurStorySettingsDataModel *)arg1;
- (void)showStory:(SCOurStorySettingsDataModel *)arg1 from:(UIView *)arg2;
- (void)didFailToDeleteStory:(SCOurStorySettingsDataModel *)arg1;
- (void)didDeleteStory:(SCOurStorySettingsDataModel *)arg1;
- (void)willDeleteStory:(SCOurStorySettingsDataModel *)arg1;
@end
