//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/TFNMenuActionAdapterDelegate-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount, UIViewController;
@protocol TFNTwitterUserContext, TFSTwitterCanonicalUser;

@interface T1ProfileMenuSheetViewController : TFNItemsDataViewController <TFNMenuActionAdapterDelegate>
{
    NSArray *_actionItems;
    TFNTwitterAccount *_account;
    id <TFSTwitterCanonicalUser> _user;
    id <TFNTwitterUserContext> _context;
    UIViewController *_profileViewController;
    _Bool _dismissBeforeAction;
}

- (void).cxx_destruct;
- (void)private_willPresentViewControllerWithNotification:(id)arg1;
- (void)menuActionAdapter:(id)arg1 didSelectActionItem:(id)arg2 atIndexPath:(id)arg3;
- (id)private_actionItems;
- (void)update:(_Bool)arg1;
- (double)heightExpanded:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 user:(id)arg2 context:(id)arg3 profileViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
