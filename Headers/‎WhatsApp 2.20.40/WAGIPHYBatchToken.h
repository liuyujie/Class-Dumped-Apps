//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAGIFBatchToken.h"

@interface WAGIPHYBatchToken : WAGIFBatchToken
{
    long long _value;
    unsigned long long _batchSize;
}

+ (id)firstBatch;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isFirstBatch;
- (id)stringValue;
- (id)initWithInteger:(long long)arg1 batchSize:(unsigned long long)arg2;

@end

