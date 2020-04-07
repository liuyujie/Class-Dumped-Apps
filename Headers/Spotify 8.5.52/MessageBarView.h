//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MessageBarItem, UILabel;

@interface MessageBarView : UIView
{
    UILabel *_messageLabel;
    UIView *_backgroundView;
    MessageBarItem *_messageBarItem;
}

@property(retain, nonatomic) MessageBarItem *messageBarItem; // @synthesize messageBarItem=_messageBarItem;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)setAttributedMessage:(id)arg1 orMessage:(id)arg2;
- (void)setMessageBarItem:(id)arg1 animationDirection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
