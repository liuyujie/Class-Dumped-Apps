//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSerengetiHookWithSession.h"

#import "SCImpalaOperaPresenterDelegate-Protocol.h"

@class NSString, SCImpalaOperaPresenter;

@interface SCSerengetiPlaySnapsHook : SCSerengetiHookWithSession <SCImpalaOperaPresenterDelegate>
{
    SCImpalaOperaPresenter *_impalaOperaPresenter;
    CDUnknownBlockType _pendingCompletion;
}

- (void).cxx_destruct;
- (void)impalaOperaPresenterWillBeginDismissing:(id)arg1;
- (void)impalaOperaPresenter:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_startPlaybackWithPlaylistFetcher:(id)arg1 presentingViewController:(id)arg2 useCircleTransition:(_Bool)arg3 playUnviewedOnly:(_Bool)arg4 baseView:(id)arg5;
- (void)viewController:(id)arg1 performHookWithParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)javascriptFunctionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
