//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVChatBan : NSObject
{
    NSString *_room;
    double _banDuration;
    unsigned long long _banType;
}

+ (id)banFromDict:(id)arg1;
@property(readonly, nonatomic) unsigned long long banType; // @synthesize banType=_banType;
@property(readonly, nonatomic) double banDuration; // @synthesize banDuration=_banDuration;
@property(readonly, nonatomic) NSString *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (id)initWithRoom:(id)arg1 banDuration:(double)arg2 banType:(unsigned long long)arg3;

@end
