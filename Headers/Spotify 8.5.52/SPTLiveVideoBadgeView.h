//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SPTLiveVideoBadgeView : UIView
{
    UIView *_dotView;
    UILabel *_liveLabel;
}

@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupLabel;
- (void)setupDot;
- (id)initWithFrame:(struct CGRect)arg1;

@end
