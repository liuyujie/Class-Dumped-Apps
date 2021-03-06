//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEDoubleColumnFeedImageCollectionViewCell.h"

#import "AWETiktokDiscoverV4ModelRenderable-Protocol.h"

@class AWETiktokDiscoverV4CellModel, AWEUICellMaskView, NSString, UILabel;

@interface AWETiktokDiscoverV4ImageCollectionViewCell : AWEDoubleColumnFeedImageCollectionViewCell <AWETiktokDiscoverV4ModelRenderable>
{
    UILabel *_recommendLabel;
    AWETiktokDiscoverV4CellModel *_model;
    AWEUICellMaskView *_reportMaskView;
}

@property(retain, nonatomic) AWEUICellMaskView *reportMaskView; // @synthesize reportMaskView=_reportMaskView;
@property(retain, nonatomic) AWETiktokDiscoverV4CellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
- (void).cxx_destruct;
- (void)renderWithDiscoverModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

