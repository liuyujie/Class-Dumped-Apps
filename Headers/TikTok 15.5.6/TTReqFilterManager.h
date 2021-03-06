//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TTReqFilterManager : NSObject
{
    NSMutableArray *requestFilters;
    NSMutableArray *responseFilters;
    NSMutableArray *responseChainFilters;
    struct _opaque_pthread_rwlock_t reqFilterLock;
    _Bool _enableReqFilter;
}

+ (id)shareInstance;
@property(nonatomic) _Bool enableReqFilter; // @synthesize enableReqFilter=_enableReqFilter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)runResponseFilter:(id)arg1 response:(id)arg2 data:(id)arg3 responseError:(id *)arg4;
- (void)runRequestFilter:(id)arg1;
- (void)addResponseChainFilterBlock:(CDUnknownBlockType)arg1;
- (void)addResponseFilterBlock:(CDUnknownBlockType)arg1;
- (void)addRequestFilterBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

