//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, YTLabel;
@protocol YTAdFeedbackViewDelegate;

@interface YTAdFeedbackView : UIView
{
    YTLabel *_titleLabel;
    NSMutableArray *_optionViews;
    id <YTAdFeedbackViewDelegate> _delegate;
    long long _selectedOptionIndex;
}

@property(readonly, nonatomic) long long selectedOptionIndex; // @synthesize selectedOptionIndex=_selectedOptionIndex;
@property(nonatomic) __weak id <YTAdFeedbackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)selectOption:(id)arg1;
- (id)initWithRenderer:(id)arg1;

@end

