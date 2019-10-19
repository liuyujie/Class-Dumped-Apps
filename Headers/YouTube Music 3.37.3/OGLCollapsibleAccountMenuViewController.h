//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OGLAccountMenuViewControllerBase.h"

@interface OGLCollapsibleAccountMenuViewController : OGLAccountMenuViewControllerBase
{
    _Bool _accountMenuExpanded;
}

@property(nonatomic) _Bool accountMenuExpanded; // @synthesize accountMenuExpanded=_accountMenuExpanded;
- (unsigned long long)componentAppearance;
- (unsigned long long)componentType;
- (void)updateVoiceOverFocusAfterAccountMenuExpansion;
- (void)reloadDataWithAccountMenuExpanded:(_Bool)arg1;
- (void)collapsibleAccountMenuDidTap;
- (void)setAccountMenuExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct NSArray *)viewModelWithConfiguration:(id)arg1 sectionedAccounts:(id)arg2 signedInAccount:(id)arg3;

@end
