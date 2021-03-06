//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeDetailTableViewControllerDelegate-Protocol.h"
#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEGeneralSearchDoubleColumnModel, IGListAdapter, IGListAdapterUpdater, IGListCollectionView, NSMutableArray, NSString;
@protocol AWEModernFeedCellContext;

@interface AWESearchDoubleColumnCellController : UIViewController <UICollectionViewDelegate, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEModernFeedCellControllerProtocol>
{
    id <AWEModernFeedCellContext> _context;
    IGListAdapterUpdater *_listAdapterUpdater;
    NSMutableArray *_dataSource;
    IGListAdapter *_listAdapter;
    IGListCollectionView *_collectionView;
    AWEGeneralSearchDoubleColumnModel *_doubleColumnModel;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_72;
@property(retain, nonatomic) AWEGeneralSearchDoubleColumnModel *doubleColumnModel; // @synthesize doubleColumnModel=_doubleColumnModel;
@property(retain, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) IGListAdapterUpdater *listAdapterUpdater; // @synthesize listAdapterUpdater=_listAdapterUpdater;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)dataController;
- (_Bool)detailTableViewControllerShouldUseFeedImageCache:(id)arg1;
- (void)detailTableViewController:(id)arg1 scrollDidEndAtIndexPath:(id)arg2 model:(id)arg3;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didEndShowing;
- (void)updateWithModel:(id)arg1;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

