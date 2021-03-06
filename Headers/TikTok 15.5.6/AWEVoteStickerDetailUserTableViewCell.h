//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEUserModel, UIImageView, UILabel;

@interface AWEVoteStickerDetailUserTableViewCell : UITableViewCell
{
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    AWEUserModel *_user;
}

+ (id)identifier;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithUser:(id)arg1 darkMode:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

