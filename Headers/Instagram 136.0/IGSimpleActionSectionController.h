//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGListDisplayDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSimpleActionPresentableViewerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSimpleActionViewDelegate-Protocol.h>

@class IGListAdapterScrollingContext, IGMainFeedNetegoImpressionStrategy, IGSimpleAction, IGSimpleActionLogger, IGSimpleActionView, IGUserSession, NSString;

@interface IGSimpleActionSectionController : IGListSectionController <IGListDisplayDelegate, IGSimpleActionPresentableViewerDelegate, IGSimpleActionViewDelegate>
{
    IGSimpleAction *_simpleAction;
    IGSimpleActionView *_simpleActionView;
    IGUserSession *_userSession;
    unsigned long long _cellState;
    IGListAdapterScrollingContext *_scrollingContext;
    IGSimpleActionLogger *_logger;
    _Bool _viewControllerDidFinish;
    IGMainFeedNetegoImpressionStrategy *_netegoStrategy;
}

+ (id)_simpleActionCellTypeClassMap;
- (void).cxx_destruct;
- (void)_updatePendingEndScreen;
- (void)simpleActionPresentableViewerDidFinish:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)simpleActionViewDidTapDismissButton:(id)arg1;
- (void)simpleActionViewDidTapStartButton:(id)arg1 withSimpleAction:(id)arg2;
- (id)initWithSimpleAction:(id)arg1 withUserSession:(id)arg2 withScrollingContext:(id)arg3 netegoImpressionStrategy:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

