//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDateScheduler-Protocol.h>
#import <FBSharedFramework/IGGroupScheduler-Protocol.h>
#import <FBSharedFramework/IGScheduler-Protocol.h>
#import <FBSharedFramework/IGSynchronousScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _IGQueueScheduler : NSObject <IGDateScheduler, IGScheduler, IGSynchronousScheduler, IGGroupScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)createGroup;
- (double)currentMediaTime;
- (double)currentAbsoluteTime;
- (id)after:(unsigned long long)arg1 schedule:(CDUnknownBlockType)arg2;
- (void)scheduleSynchronously:(CDUnknownBlockType)arg1;
- (id)schedule:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

