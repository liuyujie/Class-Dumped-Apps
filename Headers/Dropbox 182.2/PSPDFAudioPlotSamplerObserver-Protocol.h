//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSError, NSURL, PSPDFAudioPlotSampler, UIBezierPath;

@protocol PSPDFAudioPlotSamplerObserver <NSObject>
- (void)audioPlotSampler:(PSPDFAudioPlotSampler *)arg1 didFailForSamplingURL:(NSURL *)arg2 withError:(NSError *)arg3;
- (void)audioPlotSampler:(PSPDFAudioPlotSampler *)arg1 didFinishPath:(UIBezierPath *)arg2 forSamplingURL:(NSURL *)arg3;
- (void)audioPlotSampler:(PSPDFAudioPlotSampler *)arg1 didUpdatePath:(UIBezierPath *)arg2 forSamplingURL:(NSURL *)arg3 progress:(double)arg4;

@optional
- (void)audioPlotSampler:(PSPDFAudioPlotSampler *)arg1 didBeginForSamplingURL:(NSURL *)arg2;
@end

