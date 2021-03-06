//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBToolbarActionHandlerToken-Protocol.h"

@class NSString;

@interface DBToolbarActionHandlerTokenImpl : NSObject <DBToolbarActionHandlerToken>
{
    NSString *_toolbarActionId;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSString *toolbarActionId; // @synthesize toolbarActionId=_toolbarActionId;
- (void).cxx_destruct;
- (void)stopHandling;
- (id)initWithActionId:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

