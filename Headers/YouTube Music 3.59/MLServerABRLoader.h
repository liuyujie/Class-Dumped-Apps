//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMDataLoadTaskDelegate-Protocol.h"
#import "MLServerABRUMPParserDelegate-Protocol.h"

@class GIMMe, HAMRangedURL, MLPlayerItemEventCenter, MLServerABRSampleBufferSource, MLStreamingData, NSString;
@protocol HAMClock, HAMDataLoadTask, HAMDataLoader, OS_dispatch_queue;

@interface MLServerABRLoader : NSObject <HAMDataLoadTaskDelegate, MLServerABRUMPParserDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <HAMDataLoader> _dataLoader;
    MLPlayerItemEventCenter *_playerItemEventCenter;
    MLStreamingData *_streamingData;
    id <HAMClock> _clock;
    HAMRangedURL *_URL;
    MLServerABRSampleBufferSource *_audioSampleBufferSource;
    MLServerABRSampleBufferSource *_videoSampleBufferSource;
    id <HAMDataLoadTask> _currentTask;
    struct unique_ptr<youtube::media::ServerABRUMPParser, std::__1::default_delete<youtube::media::ServerABRUMPParser>> _parser;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onChunkComplete:(id)arg1;
-     // Error parsing type: @24@0:8r^{MediaHeader=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}IiQqiBqq}16, name: formatForMediaHeader:
- (_Bool)dataLoadTask:(id)arg1 shouldFollowRedirectWithResponse:(id)arg2 toURL:(id)arg3;
- (void)dataLoadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)terminate;
- (void)addSampleBufferSource:(id)arg1;
- (void)continueLoading;
- (id)init;
- (id)initWithQueue:(id)arg1 dataLoader:(id)arg2 playerItemEventCenter:(id)arg3 streamingData:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

