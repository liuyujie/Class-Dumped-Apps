//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAKAudioUnit.h"

#import "GAKAudioSink-Protocol.h"
#import "GAKAudioSourceProtocol-Protocol.h"

@class GAKAudioSource, GAKIOUnitInputSource, NSString;

@interface GAKIOUnit : GAKAudioUnit <GAKAudioSink, GAKAudioSourceProtocol>
{
    struct AudioStreamBasicDescription _audioFormat;
    GAKIOUnitInputSource *_inputSource;
    GAKAudioSource *_proxySource;
    _Bool _inputEnabled;
    unsigned int _numberOfInputChannels;
    double _inputSampleRate;
}

@property(nonatomic) _Bool inputEnabled; // @synthesize inputEnabled=_inputEnabled;
@property(nonatomic) unsigned int numberOfInputChannels; // @synthesize numberOfInputChannels=_numberOfInputChannels;
@property(nonatomic) double inputSampleRate; // @synthesize inputSampleRate=_inputSampleRate;
- (void).cxx_destruct;
- (void)handleAudio:(struct AudioBufferList *)arg1 fromSource:(id)arg2;
- (void)removeSink:(id)arg1;
- (void)addSink:(id)arg1;
@property(readonly, nonatomic) const struct AudioStreamBasicDescription *audioFormat;
- (unsigned int)outputElementCount;
- (unsigned int)inputElementCount;
- (id)leaveGraph;
- (id)joinGraph:(id)arg1;
- (_Bool)enableInput;
- (id)initWithSubtype:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

