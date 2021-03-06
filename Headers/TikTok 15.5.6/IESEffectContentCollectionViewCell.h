//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IESEffectListViewDelegate-Protocol.h"

@class IESEffectListView, IESEffectUIConfig, NSString, UILabel;

@interface IESEffectContentCollectionViewCell : UICollectionViewCell <IESEffectListViewDelegate>
{
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _downloadBlock;
    NSString *_hasNoTips;
    IESEffectListView *_listView;
    UILabel *_showHasNoLabel;
    IESEffectUIConfig *_uiConfig;
}

@property(retain, nonatomic) IESEffectUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) UILabel *showHasNoLabel; // @synthesize showHasNoLabel=_showHasNoLabel;
@property(retain, nonatomic) IESEffectListView *listView; // @synthesize listView=_listView;
@property(copy, nonatomic) NSString *hasNoTips; // @synthesize hasNoTips=_hasNoTips;
@property(copy, nonatomic) CDUnknownBlockType downloadBlock; // @synthesize downloadBlock=_downloadBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (void)effectListView:(id)arg1 didDownloadEffectWithId:(id)arg2 withError:(id)arg3 duration:(double)arg4;
- (void)effectListView:(id)arg1 didSelectedEffectAtIndex:(long long)arg2;
- (void)showHasNo;
- (void)updateWithEffects:(id)arg1 selectedIndex:(long long)arg2 uiConfig:(id)arg3 itemPerRow:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

