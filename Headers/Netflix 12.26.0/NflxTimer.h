//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface NflxTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMapTable *_dispatchSourcesMapping;
    unsigned long long _timeoutCounter;
    unsigned long long _tolerance;
}

@property(nonatomic) unsigned long long tolerance; // @synthesize tolerance=_tolerance;
@property(nonatomic) unsigned long long timeoutCounter; // @synthesize timeoutCounter=_timeoutCounter;
@property(retain, nonatomic) NSMapTable *dispatchSourcesMapping; // @synthesize dispatchSourcesMapping=_dispatchSourcesMapping;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)intervalWithCallback:(CDUnknownBlockType)arg1 timeout:(id)arg2 isInterval:(_Bool)arg3;
- (void)cancelAllSources;
- (void)cancelSource:(id)arg1;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;

@end

