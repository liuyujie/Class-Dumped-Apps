//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PDLQueryProceesorDelivererPreparedResultsData : NSObject
{
    NSArray *_results;
    unsigned long long _rejectedDuplicatesCount;
}

@property(readonly, nonatomic) unsigned long long rejectedDuplicatesCount; // @synthesize rejectedDuplicatesCount=_rejectedDuplicatesCount;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)initWithResults:(id)arg1 rejectedDuplicatesCount:(unsigned long long)arg2;

@end
