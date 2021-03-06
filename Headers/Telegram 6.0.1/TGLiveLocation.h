//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TGMessage;

@interface TGLiveLocation : NSObject
{
    _Bool _hasOwnSession;
    _Bool _isOwnLocation;
    _Bool _isExpired;
    TGMessage *_message;
    id _peer;
}

@property(readonly, nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(readonly, nonatomic) _Bool isOwnLocation; // @synthesize isOwnLocation=_isOwnLocation;
@property(readonly, nonatomic) _Bool hasOwnSession; // @synthesize hasOwnSession=_hasOwnSession;
@property(readonly, nonatomic) id peer; // @synthesize peer=_peer;
@property(readonly, nonatomic) TGMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)location;
- (long long)peerId;
- (id)initWithMessage:(id)arg1 peer:(id)arg2;
- (id)initWithMessage:(id)arg1 peer:(id)arg2 hasOwnSession:(_Bool)arg3 isOwnLocation:(_Bool)arg4 isExpired:(_Bool)arg5;

@end

