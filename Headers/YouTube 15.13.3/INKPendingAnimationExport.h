//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCPromise;

@interface INKPendingAnimationExport : NSObject
{
    GPCPromise *_promise;
    CDUnknownBlockType _onFrame;
}

@property(readonly, nonatomic) CDUnknownBlockType onFrame; // @synthesize onFrame=_onFrame;
@property(readonly, nonatomic) GPCPromise *promise; // @synthesize promise=_promise;
- (void).cxx_destruct;
- (id)initWithPromise:(id)arg1 onFrame:(CDUnknownBlockType)arg2;

@end

