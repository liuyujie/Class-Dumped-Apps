//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSMutableArray, UIScrollView, UIView;

@interface ICECardListScrollViewController : UIViewController
{
    NSMutableArray *_cards;
    UIScrollView *_scrollView;
    UIView *_contentView;
    NSLayoutConstraint *_lastViewLayoutConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *lastViewLayoutConstraint; // @synthesize lastViewLayoutConstraint=_lastViewLayoutConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSMutableArray *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (void)addCards:(id)arg1 animated:(_Bool)arg2;
- (void)removeAllCardsAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UIScrollView *cardListView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

