//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESLiveInsignificantLaunchTask.h"

@protocol IESLiveEnvironment, IESLiveSettings;

@interface IESLiveLaunchTaskPrefetchEffect : IESLiveInsignificantLaunchTask
{
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveSettings> _liveSettings;
}

@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
- (void).cxx_destruct;
- (void)excute;

@end
