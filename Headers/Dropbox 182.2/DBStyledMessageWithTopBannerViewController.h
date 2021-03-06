//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBBannerTransitionDelegate-Protocol.h"
#import "DBBannerViewAnimationSupporting-Protocol.h"
#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBBannerDisplayControllerImpl, DBUserState, NSString, UIView;

@interface DBStyledMessageWithTopBannerViewController : UIViewController <DBLinkableStateObserverProtocol, DBBannerTransitionDelegate, DBBannerViewAnimationSupporting>
{
    DBUserState *_userState;
    DBBannerDisplayControllerImpl *_bannerDisplayHelper;
    UIView *_contentView;
}

- (void).cxx_destruct;
- (_Bool)shouldAnimateBannerView;
- (id)scrollViewForBannerTransition:(id)arg1;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithView:(id)arg1 title:(id)arg2 userState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

