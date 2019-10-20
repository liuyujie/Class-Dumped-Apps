//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSString;

@interface AWEAwemeTrackManager : NSObject
{
    NSDictionary *_awemeParams;
    NSDictionary *_awemeLogPb;
    NSString *_lastPlayingAwemeID;
    NSString *_stickers;
    NSMutableSet *_viewAwemeIds;
}

+ (id)lastPlayingAwemeID;
+ (long long)viewAwemeCount;
+ (id)stickers;
+ (id)currentAwemeLogPb;
+ (id)currentAwemeTrackParams;
+ (void)trackLastPlayingAwemeID:(id)arg1;
+ (void)trackCurrentAweme:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *viewAwemeIds; // @synthesize viewAwemeIds=_viewAwemeIds;
@property(copy, nonatomic) NSString *stickers; // @synthesize stickers=_stickers;
@property(copy, nonatomic) NSString *lastPlayingAwemeID; // @synthesize lastPlayingAwemeID=_lastPlayingAwemeID;
@property(copy, nonatomic) NSDictionary *awemeLogPb; // @synthesize awemeLogPb=_awemeLogPb;
@property(copy, nonatomic) NSDictionary *awemeParams; // @synthesize awemeParams=_awemeParams;
- (void).cxx_destruct;

@end
