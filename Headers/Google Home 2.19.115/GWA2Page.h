//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWA2PageContext, ORCH2Page, ORCH2PartialPage;

@interface GWA2Page : NSObject
{
    ORCH2Page *_proto;
    ORCH2PartialPage *_partialPage;
    GWA2PageContext *_context;
}

@property(readonly, nonatomic) GWA2PageContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)isLoggingEnabledForEventType:(int)arg1;
- (void)logEvent:(int)arg1;
- (void)updatePage:(id)arg1;
- (id)initWithPage:(id)arg1;
- (id)initWithPage:(id)arg1 flowController:(id)arg2 logger:(id)arg3;

@end

