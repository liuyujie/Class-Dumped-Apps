//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIImage;

@protocol SPTStorylinesAttributionViewModelDelegate <NSObject>
- (void)updateFollowText:(NSString *)arg1 forEntity:(NSURL *)arg2;
- (void)didLoadArtistAvatarImage:(UIImage *)arg1 forArtist:(NSURL *)arg2;
@end
