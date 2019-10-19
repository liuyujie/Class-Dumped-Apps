//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedProfileIdentitySectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCGroupUnifiedProfileDataSource, SCGroupUnifiedProfileStoriesDataSource, SCUnifiedProfileIdentityCellViewModel, SCUserSession;
@protocol SCImageDownloading, SCPerforming, SCUnifiedProfileIdentitySectionDataProvidingDelegate;

@interface SCGroupUnifiedProfileIdentitySectionDataProvider : NSObject <SCUpdateListener, SCUnifiedProfileIdentitySectionDataProviding>
{
    SCGroupUnifiedProfileDataSource *_dataSource;
    SCGroupUnifiedProfileStoriesDataSource *_storiesDataSource;
    id <SCImageDownloading> _imageDownloader;
    SCUserSession *_userSession;
    long long _dataLoadingStatus;
    id <SCUnifiedProfileIdentitySectionDataProvidingDelegate> _dataProviderDelegate;
    SCUnifiedProfileIdentityCellViewModel *_identityViewModel;
    id <SCPerforming> _updateQueuePerformer;
}

@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) SCUnifiedProfileIdentityCellViewModel *identityViewModel; // @synthesize identityViewModel=_identityViewModel;
@property(nonatomic) __weak id <SCUnifiedProfileIdentitySectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_configureStoryAvatarCellConfigurationBlock:(id)arg1;
- (void)_reloadSectionWithIdentityCellViewModel:(id)arg1;
- (void)_reloadSection;
- (id)_storyWithBitmojiCollectionViewItemViewModel;
- (id)_storyCollectionViewItemViewModel;
- (id)_bitmojiAvatarCollectionViewItemViewModel;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)setUp;
- (long long)dataLoadingStatus;
- (id)itemCellConfigurationBlocksByReuseIdentifier;
- (id)itemCellClassesByReuseIdentifier;
- (id)initWithDataSource:(id)arg1 groupStoriesDataSource:(id)arg2 imageDownloader:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
