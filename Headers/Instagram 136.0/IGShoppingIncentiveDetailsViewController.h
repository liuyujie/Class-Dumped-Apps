//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>

@class IGListAdapter, IGShoppingIGFundedIncentive, NSString, UICollectionView;

@interface IGShoppingIncentiveDetailsViewController : IGViewController <IGListAdapterDataSource>
{
    IGShoppingIGFundedIncentive *_incentive;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)shouldConsiderSafeAreaForPreferredContentBottomInset;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithIncentive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

