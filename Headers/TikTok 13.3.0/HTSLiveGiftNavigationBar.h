//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol IESLiveEnvironment;

@interface HTSLiveGiftNavigationBar : UIView
{
    UIView *_leftItem;
    UIView *_rightItem;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(readonly, nonatomic) UIView *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UIView *leftItem; // @synthesize leftItem=_leftItem;
- (void).cxx_destruct;
- (void)pushRightItem:(id)arg1 trailingOffset:(double)arg2 itemSize:(struct CGSize)arg3;

@end
