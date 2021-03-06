//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFundraiserNonprofitNullstateDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFundraiserNonprofitSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGLabelItemViewModel, IGListAdapter, IGSpinnerLabelViewModel, IGStoryFundraiserNonprofitNullstateDataSource, IGUserSession, NSMutableArray, NSString, UICollectionView, UILabel;
@protocol IGStoryFundraiserNonprofitNullstateListViewControllerDelegate;

@interface IGStoryFundraiserNonprofitNullstateListViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGStoryFundraiserNonprofitSectionControllerDelegate, IGStoryFundraiserNonprofitNullstateDataSourceDelegate>
{
    IGUserSession *_userSession;
    IGStoryFundraiserNonprofitNullstateDataSource *_dataSource;
    NSMutableArray *_nonprofitItems;
    NSMutableArray *_popularItems;
    IGListAdapter *_listAdapter;
    IGSpinnerLabelViewModel *_spinnerModel;
    IGLabelItemViewModel *_bannerModel;
    UICollectionView *_collectionView;
    UILabel *_errorLabel;
    id <IGStoryFundraiserNonprofitNullstateListViewControllerDelegate> _delegate;
    double _bottomInset;
}

@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <IGStoryFundraiserNonprofitNullstateListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nonprofitNullstateDataSourceDidFail:(id)arg1;
- (void)nonprofitNullstateDataSource:(id)arg1 didUpdateWithResults:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)fundraiserNonprofitSectionController:(id)arg1 didTapOnMoreButtonForNonprofit:(id)arg2;
- (void)fundraiserNonprofitSectionController:(id)arg1 didTapOnNonprofit:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

