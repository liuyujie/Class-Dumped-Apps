//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface APMFilterResult : NSObject
{
    int _audienceID;
    NSData *_currentResults;
    NSData *_previousResults;
}

@property(readonly, nonatomic) NSData *previousResults; // @synthesize previousResults=_previousResults;
@property(readonly, nonatomic) NSData *currentResults; // @synthesize currentResults=_currentResults;
@property(readonly, nonatomic) int audienceID; // @synthesize audienceID=_audienceID;
- (void).cxx_destruct;
- (id)initWithAudienceID:(int)arg1 currentResults:(id)arg2 previousResults:(id)arg3;

@end
