//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TCLTachyonCallManagerBuilder : NSObject
{
    struct Handle<std::__1::shared_ptr<tacl::TachyonCallManagerBuilder>, std::__1::shared_ptr<tacl::TachyonCallManagerBuilder>> _cppRefHandle;
}

+ (id)builder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)setEnableInternalAdm:(_Bool)arg1;
- (id)setDuocoreExperimentConfig:(id)arg1;
- (id)setAsyncMode:(_Bool)arg1;
- (id)setViewportResolution:(int)arg1 height:(int)arg2;
- (id)setContactManager:(id)arg1;
- (id)setPersistenceFilePath:(id)arg1;
- (id)setAudioProcessingOptions:(id)arg1;
- (id)setDeviceType:(long long)arg1;
- (id)setDeviceHasCamera:(_Bool)arg1;
- (id)setLibVersion:(int)arg1 libVersionMinor:(int)arg2 libVersionPoint:(int)arg3;
- (id)addHardwareVideoDecoder:(id)arg1;
- (id)addHardwareVideoEncoder:(id)arg1;
- (id)setCallInfoCallback:(id)arg1;
- (id)setMessageSender:(id)arg1;
- (id)setLocalEndpoints:(id)arg1;
- (id)setIgnoreCallsFromEmail:(_Bool)arg1;
- (id)setIceConfigFetcher:(id)arg1;
- (id)setEventLogger:(id)arg1;
- (id)setClient:(id)arg1;
- (id)build;
- (id)initWithCpp:(const shared_ptr_2ba276e8 *)arg1;

@end

