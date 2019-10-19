//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCFriendsFeedAnimationHandler, UIColor, UIView;
@protocol SCFeedComponentViewDelegate, SCFeedComponentViewModel, SCImageDownloading;

@protocol SCFeedComponentBaseView
@property(retain, nonatomic) SCFriendsFeedAnimationHandler *animationHandler;
@property(nonatomic) __weak id <SCFeedComponentViewDelegate> delegate;
@property(retain, nonatomic) id <SCFeedComponentViewModel> viewModel;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader;
- (UIView *)dismissFeedIconView;
- (UIView *)leftIconView;
- (UIView *)operaBaseView;
- (UIView *)feedIconView;
- (void)updateFriendMojiView;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2 delayed:(_Bool)arg3;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)prepareForReuse;
@end
