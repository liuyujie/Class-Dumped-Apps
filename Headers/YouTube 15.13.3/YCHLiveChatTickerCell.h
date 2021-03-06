//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class MDCInkTouchController, NSString, NSTimer, UIView, YCHLiveChatLabel, YTIAddLiveChatTickerItemAction, YTILiveChatPaidMessageRenderer, YTILiveChatTickerPaidMessageItemRenderer, YTImageView;
@protocol YTResponder;

@interface YCHLiveChatTickerCell : UICollectionViewCell <YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    id <YTResponder> _parentResponder;
    YTIAddLiveChatTickerItemAction *_tickerItemAction;
    YTImageView *_authorImageView;
    YCHLiveChatLabel *_textLabel;
    UIView *_backgroundPillView;
    UIView *_foregroundPillView;
    YTILiveChatTickerPaidMessageItemRenderer *_paidMessageItemRenderer;
    YTILiveChatPaidMessageRenderer *_paidMessageRenderer;
    UIView *_darkMask;
    NSTimer *_timer;
    MDCInkTouchController *_inkTouchController;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) MDCInkTouchController *inkTouchController; // @synthesize inkTouchController=_inkTouchController;
@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) UIView *darkMask; // @synthesize darkMask=_darkMask;
@property(readonly, nonatomic) YTILiveChatPaidMessageRenderer *paidMessageRenderer; // @synthesize paidMessageRenderer=_paidMessageRenderer;
@property(readonly, nonatomic) YTILiveChatTickerPaidMessageItemRenderer *paidMessageItemRenderer; // @synthesize paidMessageItemRenderer=_paidMessageItemRenderer;
@property(readonly, nonatomic) UIView *foregroundPillView; // @synthesize foregroundPillView=_foregroundPillView;
@property(readonly, nonatomic) UIView *backgroundPillView; // @synthesize backgroundPillView=_backgroundPillView;
@property(readonly, nonatomic) YCHLiveChatLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) YTImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
@property(readonly, nonatomic) YTIAddLiveChatTickerItemAction *tickerItemAction; // @synthesize tickerItemAction=_tickerItemAction;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)createTimer;
- (void)updateMask;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

