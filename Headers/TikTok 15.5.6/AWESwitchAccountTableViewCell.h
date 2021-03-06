//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEUserNameLabel, UIImageView, UILabel;

@interface AWESwitchAccountTableViewCell : UITableViewCell
{
    UIImageView *_avatartImageView;
    UIImageView *_checkImageView;
    AWEUserNameLabel *_nickNameLabel;
    AWEUserNameLabel *_userNameLabel;
    UIImageView *_redDotView;
    UILabel *_unreadCountLabel;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *unreadCountLabel; // @synthesize unreadCountLabel=_unreadCountLabel;
@property(retain, nonatomic) UIImageView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) AWEUserNameLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) AWEUserNameLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) UIImageView *avatartImageView; // @synthesize avatartImageView=_avatartImageView;
- (void).cxx_destruct;
- (id)_readableStringForUnreadCount:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configWithUser:(id)arg1 isCurrentUser:(_Bool)arg2 unreadCount:(unsigned long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

