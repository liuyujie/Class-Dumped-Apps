//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/IGListWorkingRangeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaHiddenListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaUnhiddenListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTVLongPressHideHandlingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVSeenStateStoreListener-Protocol.h>

@class IGUserSession, NSString;
@protocol IGTVGridItemSectionControllerDelegate, IGTVPreviewSectionControllerLoggingContextType;

@interface IGTVGridItemSectionController : IGListGenericSectionController <IGListWorkingRangeDelegate, IGTVSeenStateStoreListener, IGTVLongPressHideHandlingDelegate, IGMediaUnhiddenListener, IGMediaHiddenListener>
{
    IGUserSession *_userSession;
    struct IGGridLayoutConfiguration _layoutConfiguration;
    _Bool _exposeSeriesTagEnabled;
    _Bool _shouldShowUsername;
    id <IGTVPreviewSectionControllerLoggingContextType> _loggingContext;
    id <IGTVGridItemSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVGridItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_visibleCell;
- (void)didBeginLongPress:(id)arg1;
- (_Bool)longPressShouldBegin:(id)arg1;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3;
- (void)mediaUnhiddenFeedItem:(id)arg1;
- (void)igtvSeenStateStoreDidUpdateMediaId:(id)arg1;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 exposeSeriesTagEnabled:(_Bool)arg2 shouldShowUsername:(_Bool)arg3 loggingContext:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

