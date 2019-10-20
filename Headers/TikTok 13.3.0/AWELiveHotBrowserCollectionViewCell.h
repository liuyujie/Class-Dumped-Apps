//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWELiveHotBrowserCollectionViewCellProtocol-Protocol.h"

@class AWEFeedLiveMarkView, AWELiveHotRoomCountResponseModel, AWELiveStoryBrowserTagView, NSString, UIImageView, UILabel;

@interface AWELiveHotBrowserCollectionViewCell : UICollectionViewCell <AWELiveHotBrowserCollectionViewCellProtocol>
{
    _Bool _didStoryViewOpened;
    _Bool _enableAnimation;
    UIImageView *_avatarView;
    unsigned long long _style;
    AWEFeedLiveMarkView *_markViewForFeed;
    AWEFeedLiveMarkView *_markViewForConcern;
    AWELiveStoryBrowserTagView *_tagView;
    UILabel *_nameLabel;
    AWELiveHotRoomCountResponseModel *_model;
    long long _index;
}

+ (Class)getImplementationClass;
+ (id)reuseIdentifier;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(retain, nonatomic) AWELiveHotRoomCountResponseModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AWELiveStoryBrowserTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) AWEFeedLiveMarkView *markViewForConcern; // @synthesize markViewForConcern=_markViewForConcern;
@property(retain, nonatomic) AWEFeedLiveMarkView *markViewForFeed; // @synthesize markViewForFeed=_markViewForFeed;
@property(nonatomic) _Bool didStoryViewOpened; // @synthesize didStoryViewOpened=_didStoryViewOpened;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)stopAvatarAnimation;
- (void)startAvatarAnimation;
- (void)setBubbleColor:(id)arg1;
- (void)setData:(id)arg1;
- (_Bool)_isLargeStyleOfAvatar;
- (void)updateAvatarImage;
- (void)_startAvatarAnimation;
- (void)remakeConstrains;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
