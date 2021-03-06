//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTCore.h"

@interface WCTChainCall : WCTCore
{
    struct Error _error;
    struct shared_ptr<WCDB::Ticker> _ticker;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)bindWithValue:(struct NSObject *)arg1 toStatementHandle:(struct RecyclableStatement *)arg2 atIndex:(int)arg3 withError:(struct Error *)arg4;
- (_Bool)bindProperty:(const struct WCTProperty *)arg1 ofObject:(struct NSObject *)arg2 toStatementHandle:(struct RecyclableStatement *)arg3 atIndex:(int)arg4 withError:(struct Error *)arg5;
- (id)error;
- (double)cost;
- (void)setStatisticsEnabled:(_Bool)arg1;

@end

