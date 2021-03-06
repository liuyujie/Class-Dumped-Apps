//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@class NSNumber;
@protocol IESLiveMonitor;

@interface HTSLiveMyAssetsApi : HTSLiveApi
{
    NSNumber *_roomID;
    NSNumber *_lastServerTime;
    id <IESLiveMonitor> _monitor;
}

@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSNumber *lastServerTime; // @synthesize lastServerTime=_lastServerTime;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (void)send:(id)arg1 amount:(unsigned long long)arg2 toUser:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchAssetInRoomCompletion:(CDUnknownBlockType)arg1;

@end

