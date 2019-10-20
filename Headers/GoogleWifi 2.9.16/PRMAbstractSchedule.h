//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRMSchedule-Protocol.h"

@class NSMutableArray, NSString;

@interface PRMAbstractSchedule : NSObject <PRMSchedule>
{
    _Bool _isActive;
    NSMutableArray *_callbacks;
}

@property(readonly, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (void)registerCallback:(CDUnknownBlockType)arg1;
- (void)deactivate;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

