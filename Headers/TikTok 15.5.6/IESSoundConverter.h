//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESSoundConverter-Protocol.h"

@class IESSoundEventQueue, IESSoundPacketsProvider, NSError, NSString;
@protocol IESSoundConverter;

@interface IESSoundConverter : NSObject <IESSoundConverter>
{
    IESSoundEventQueue *_context;
    id <IESSoundConverter> _converterIMP;
}

+ (Class)converterClassForContext:(id)arg1;
@property(retain, nonatomic) id <IESSoundConverter> converterIMP; // @synthesize converterIMP=_converterIMP;
@property(nonatomic) __weak IESSoundEventQueue *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (unsigned long long)convert:(void **)arg1 length:(unsigned int *)arg2;
- (double)timeOffsetForAudioPacketOffset:(long long)arg1;
- (long long)audioPacketOffsetForTimeOffset:(double)arg1;
- (long long)audioByteOffsetForTimeOffset:(double)arg1;
- (void)reset;
- (void)stop;
- (_Bool)setup;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool isWaiting;
@property(readonly, nonatomic) _Bool enableSeek;
@property(readonly, nonatomic) IESSoundPacketsProvider *packetsProvider;
@property(readonly, nonatomic) struct AudioStreamBasicDescription dstFormat;
@property(readonly, nonatomic) struct AudioStreamBasicDescription srcFormat;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

