//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUILolomoEntity.h"

@class NSDictionary, NSString;

@interface NFUILolomoCharacterEntity : NFUILolomoEntity
{
    NSString *_characterHeadShotUrl;
    NSString *_motionUrl;
    NSDictionary *_motionTrackingInfo;
}

+ (id)falcorKeyPathMap;
@property(readonly, copy, nonatomic) NSDictionary *motionTrackingInfo; // @synthesize motionTrackingInfo=_motionTrackingInfo;
@property(readonly, copy, nonatomic) NSString *motionUrl; // @synthesize motionUrl=_motionUrl;
@property(readonly, copy, nonatomic) NSString *characterHeadShotUrl; // @synthesize characterHeadShotUrl=_characterHeadShotUrl;
- (void).cxx_destruct;

@end

