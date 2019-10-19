//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesSnapDeleteStateDataRequest : NSObject <NSCopying>
{
    NSString *_snapUniqueConsistentId;
    NSString *_serverId;
    long long _deleteState;
}

@property(readonly, nonatomic) long long deleteState; // @synthesize deleteState=_deleteState;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(readonly, copy, nonatomic) NSString *snapUniqueConsistentId; // @synthesize snapUniqueConsistentId=_snapUniqueConsistentId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapUniqueConsistentId:(id)arg1 serverId:(id)arg2 deleteState:(long long)arg3;

@end
