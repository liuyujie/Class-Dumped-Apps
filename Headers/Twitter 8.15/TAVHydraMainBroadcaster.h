//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVHydraParticipant-Protocol.h>

@class NSMutableDictionary, NSNumber;

@interface TAVHydraMainBroadcaster : NSObject <TAVHydraParticipant>
{
    _Bool _isLive;
    NSMutableDictionary *_userInfo;
    NSNumber *_audioLevel;
}

@property(copy, nonatomic) NSNumber *audioLevel; // @synthesize audioLevel=_audioLevel;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isActive;
- (id)initWithIsLive:(_Bool)arg1;

@end

