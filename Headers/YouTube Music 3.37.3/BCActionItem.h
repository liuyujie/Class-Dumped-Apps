//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BCActionItem : NSObject
{
    long long _action;
    NSDictionary *_payload;
}

+ (id)actionItemForAction:(long long)arg1 withPayload:(id)arg2;
+ (id)actionItemForAction:(long long)arg1;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithAction:(long long)arg1;

@end
