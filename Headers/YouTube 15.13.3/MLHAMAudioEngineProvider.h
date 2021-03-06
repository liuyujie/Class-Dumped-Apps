//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTHotConfigObserver-Protocol.h>

@class GIMMe, HAMAudioEngine, NSString, YTHotConfig;

@interface MLHAMAudioEngineProvider : NSObject <YTHotConfigObserver>
{
    YTHotConfig *_hotConfig;
    HAMAudioEngine *_audioEngine;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (void)prepareAudioEngine;
@property(readonly, nonatomic) HAMAudioEngine *nullableAudioEngine;
@property(readonly, nonatomic) HAMAudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

