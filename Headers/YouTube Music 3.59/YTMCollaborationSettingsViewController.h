//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMBaseInnerTubeViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSMutableArray, NSString, UIScrollView, UIView, UIViewController, YTCommandResponderEvent, YTICommand, YTMCollaborationSettingsResponseViewController;
@protocol YTResponder, YTResponseViewController;

@interface YTMCollaborationSettingsViewController : YTMBaseInnerTubeViewController <UIScrollViewDelegate, YTGraftingViewController, YTTopController>
{
    YTICommand *_navEndpoint;
    UIScrollView *_contentScrollView;
    YTMCollaborationSettingsResponseViewController *_collabSettingsResponseViewController;
    UIViewController<YTResponseViewController> *_contentViewController;
    UIView *_contentView;
    NSMutableArray *_thumbnailControllers;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)attachHeader;
- (void)setContentViewController:(id)arg1;
- (void)loadContentWithResponse:(id)arg1;
- (void)createCollabSettingsResponseViewController;
- (id)navEndpoint;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)flexibleHeaderDidChangeLayout:(id)arg1;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)scrollViewDidScroll;
- (id)responseViewController;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (long long)navigationBarAppearance;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

