//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCConciergeAction_SetUserPreference, GHCConciergeAnimationPage, GHCConciergeListPage;

@interface GHCGetSoundSensingSetupRenderingDetailsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCConciergeAction_SetUserPreference *completeAction; // @dynamic completeAction;
@property(retain, nonatomic) GHCConciergeListPage *deviceSelection; // @dynamic deviceSelection;
@property(nonatomic) _Bool hasCompleteAction; // @dynamic hasCompleteAction;
@property(nonatomic) _Bool hasDeviceSelection; // @dynamic hasDeviceSelection;
@property(nonatomic) _Bool hasIntroScreen; // @dynamic hasIntroScreen;
@property(nonatomic) _Bool hasSoundTypeOptIn; // @dynamic hasSoundTypeOptIn;
@property(retain, nonatomic) GHCConciergeAnimationPage *introScreen; // @dynamic introScreen;
@property(retain, nonatomic) GHCConciergeListPage *soundTypeOptIn; // @dynamic soundTypeOptIn;

@end

