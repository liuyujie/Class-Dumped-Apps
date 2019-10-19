//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPreCurationTestManager-Protocol.h"

@class NSString;

@interface SPTFreeTierPreCurationTestManagerImplementation : NSObject <SPTFreeTierPreCurationTestManager>
{
    _Bool preCurationSkipDialogEnabled;
    _Bool _quickActionsEnabled;
    _Bool _quickActionsActiveEnabled;
    _Bool _quickActionsActiveAndAlbumArtEnabled;
}

@property(nonatomic, getter=isQuickActionsActiveAndAlbumArtEnabled) _Bool quickActionsActiveAndAlbumArtEnabled; // @synthesize quickActionsActiveAndAlbumArtEnabled=_quickActionsActiveAndAlbumArtEnabled;
@property(nonatomic, getter=isQuickActionsActiveEnabled) _Bool quickActionsActiveEnabled; // @synthesize quickActionsActiveEnabled=_quickActionsActiveEnabled;
@property(nonatomic, getter=isQuickActionsEnabled) _Bool quickActionsEnabled; // @synthesize quickActionsEnabled=_quickActionsEnabled;
@property(readonly, nonatomic, getter=isPreCurationSkipDialogEnabled) _Bool preCurationSkipDialogEnabled; // @synthesize preCurationSkipDialogEnabled;
@property(readonly, nonatomic, getter=isCompanionArtWorkForQuickActionEnabled) _Bool companionArtWorkForQuickActionEnabled;
@property(readonly, nonatomic, getter=isActiveQuickActionsOnlyEnabled) _Bool activeQuickActionsOnlyEnabled;
@property(readonly, nonatomic, getter=isPreCurationAllSongsEnabled) _Bool preCurationAllSongsEnabled;
@property(readonly, nonatomic, getter=isSimplifiedQuickActionsEnabled) _Bool simplifiedQuickActionsEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
