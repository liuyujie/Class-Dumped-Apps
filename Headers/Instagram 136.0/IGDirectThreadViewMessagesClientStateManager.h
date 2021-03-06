//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol IGDirectThreadViewMessagesClientStateListenerAnnouncer, OS_dispatch_queue;

@interface IGDirectThreadViewMessagesClientStateManager : NSObject
{
    NSMutableSet *_expandedActionLogChunkIdentifiers;
    id <IGDirectThreadViewMessagesClientStateListenerAnnouncer> _annoucer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)clientState;
- (_Bool)isActionLogSectionExpandedWithIdentifier:(id)arg1;
- (void)updateExpandableActionLogSectionWithIdentifier:(id)arg1 isExpanded:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

