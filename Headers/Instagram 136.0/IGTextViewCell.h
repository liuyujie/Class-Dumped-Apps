//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCoreTextView, UIView;
@protocol IGCoreTextLinkHandler;

@interface IGTextViewCell : UICollectionViewCell
{
    UIView *_topSeparator;
    id <IGCoreTextLinkHandler> _linkHandler;
    IGCoreTextView *_textView;
    UIView *_bottomSeparator;
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) IGCoreTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

