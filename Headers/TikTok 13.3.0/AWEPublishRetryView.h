//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAnimatedButton, NSString, UIImageView, UILabel;

@interface AWEPublishRetryView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_coverImageView;
    UILabel *_infoLabel;
    AWEAnimatedButton *_retryButton;
    AWEAnimatedButton *_closeButton;
    CDUnknownBlockType _retryBlock;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _didDismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(retain, nonatomic) AWEAnimatedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) AWEAnimatedButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)closeButtonClicked:(id)arg1;
- (void)retryButtonClicked:(id)arg1;
- (void)updateViewFrame:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showAnimation;
- (void)setupUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
