//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton;
@protocol SPTFreeTierPlaylistTrackCellConfigurator;

@protocol SPTFreeTierPlaylistTrackCellConfiguratorDelegate <NSObject>
- (void)cellConfigurator:(id <SPTFreeTierPlaylistTrackCellConfigurator>)arg1 likeIconButtonTapped:(UIButton *)arg2;
- (void)cellConfigurator:(id <SPTFreeTierPlaylistTrackCellConfigurator>)arg1 banIconButtonTapped:(UIButton *)arg2;
- (void)cellConfigurator:(id <SPTFreeTierPlaylistTrackCellConfigurator>)arg1 contextMenuIconButtonTapped:(UIButton *)arg2;
@end
