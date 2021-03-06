//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>

@class IGCoreTextView, IGImageView, NSString, UILabel, UIView;
@protocol IGCTRLImageTextCellDelegate;

@interface IGCTRLImageTextCell : UICollectionViewCell <IGCoreTextLinkHandler>
{
    IGImageView *_imageView;
    IGCoreTextView *_titleView;
    IGCoreTextView *_subtitleView;
    UILabel *_timeLabel;
    UIView *_bottomSeparatorView;
    id <IGCTRLImageTextCellDelegate> _delegate;
}

+ (double)heightThatFitsWithViewModel:(id)arg1 width:(double)arg2;
@property(nonatomic) __weak id <IGCTRLImageTextCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)configureViewWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

