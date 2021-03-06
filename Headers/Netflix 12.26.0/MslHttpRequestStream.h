//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

#import <Nbp/NSStreamDelegate-Protocol.h>

@class NSConditionLock, NSError, NSMutableData, NSMutableDictionary, NSString;
@protocol NSStreamDelegate;

@interface MslHttpRequestStream : NSInputStream <NSStreamDelegate>
{
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    struct __CFString *_runLoopMode;
    _Bool _gotEof;
    NSError *_streamError;
    unsigned long long _streamStatus;
    id <NSStreamDelegate> _delegate;
    NSString *_logPrefix;
    NSMutableData *_dataToBeRead;
    unsigned long long _offset;
    NSConditionLock *_conditionLock;
    unsigned long long _pendingStreamEvents;
    NSMutableDictionary *_streamProperties;
}

@property(retain) NSMutableDictionary *streamProperties; // @synthesize streamProperties=_streamProperties;
@property unsigned long long pendingStreamEvents; // @synthesize pendingStreamEvents=_pendingStreamEvents;
@property(retain) NSConditionLock *conditionLock; // @synthesize conditionLock=_conditionLock;
@property _Bool gotEof; // @synthesize gotEof=_gotEof;
@property unsigned long long offset; // @synthesize offset=_offset;
@property(retain) NSMutableData *dataToBeRead; // @synthesize dataToBeRead=_dataToBeRead;
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void).cxx_destruct;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (void)_unlockWithAppropriateCondition;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (void)open;
- (void)_maybeWakeupRunLoop;
- (void)_delegateStreamEvent:(unsigned long long)arg1;
- (void)fireStreamEvents;
- (void)dealloc;
- (void)_cleanupRunLoop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

