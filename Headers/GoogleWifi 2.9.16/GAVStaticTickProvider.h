//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVTickProvider-Protocol.h"

@class NSArray, NSString;

@interface GAVStaticTickProvider : NSObject <GAVTickProvider>
{
    NSArray *_tickValues;
}

@property(readonly, nonatomic) NSArray *tickValues; // @synthesize tickValues=_tickValues;
- (void).cxx_destruct;
- (id)tickValuesFromDomainValues:(id)arg1 extent:(id)arg2 axisLength:(long long)arg3 tickCollider:(id)arg4;
- (id)initWithTickValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
