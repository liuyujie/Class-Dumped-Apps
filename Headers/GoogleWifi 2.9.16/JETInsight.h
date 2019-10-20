//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTLRAccesspoints_InsightCard, JETAccessPointGroup;
@protocol JETUserStateProtocol;

@interface JETInsight : NSObject
{
    GTLRAccesspoints_InsightCard *_card;
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
}

@property(nonatomic) __weak JETAccessPointGroup *group; // @synthesize group=_group;
@property(nonatomic) __weak id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
@property(readonly, nonatomic) GTLRAccesspoints_InsightCard *card; // @synthesize card=_card;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithCard:(id)arg1 userState:(id)arg2 group:(id)arg3;

@end
