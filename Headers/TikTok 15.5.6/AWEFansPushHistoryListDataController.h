//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

#import "AWEFansPushListDataControllerProtocol-Protocol.h"

@class NSNumber, NSString;

@interface AWEFansPushHistoryListDataController : AWEListDataController <AWEFansPushListDataControllerProtocol>
{
    _Bool _hasMore;
    NSNumber *_total;
    NSNumber *_cursor;
}

@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (id)getParams;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

