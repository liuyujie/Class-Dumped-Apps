//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGReel, IGStoryAdPool, NSString;

@protocol IGStoryAdPoolDelegate <NSObject>
- (void)storyAdPool:(IGStoryAdPool *)arg1 didMarkAdReelAsInvalid:(IGReel *)arg2 invalidItemId:(NSString *)arg3 invalidReasons:(unsigned long long)arg4;
- (void)storyAdPool:(IGStoryAdPool *)arg1 didMarkNetegoReelAsInvalid:(IGReel *)arg2 invalidReasons:(unsigned long long)arg3;
- (void)storyAdPool:(IGStoryAdPool *)arg1 didMarkAdReelAsValid:(IGReel *)arg2;
- (void)storyAdPool:(IGStoryAdPool *)arg1 didMarkNetegoReelAsValid:(IGReel *)arg2;
- (void)storyAdPool:(IGStoryAdPool *)arg1 didBeginValidatingAdReel:(IGReel *)arg2;
- (void)storyAdPool:(IGStoryAdPool *)arg1 didBeginValidatingNetegoReel:(IGReel *)arg2;
@end

