//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/MutablePlaygraph.h>

#import <Nbp/NFVideoComposition-Protocol.h>

@class NSString;

@interface VideoComposition : MutablePlaygraph <NFVideoComposition>
{
}

+ (id)createVideoCompositionForViewableId:(id)arg1 initialName:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (void)observeRange:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (void)defineRange:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *playgraphId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *transitionType;
@property(readonly, nonatomic) NSString *type;

@end

