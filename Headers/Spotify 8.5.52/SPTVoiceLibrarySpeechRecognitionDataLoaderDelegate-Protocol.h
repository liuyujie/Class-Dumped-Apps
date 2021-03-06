//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTVoiceLibraryFinalResponse, SPTVoiceLibraryIntermediateResponse, SPTVoiceLibrarySpeechRecognitionDataLoader;

@protocol SPTVoiceLibrarySpeechRecognitionDataLoaderDelegate <NSObject>
- (void)speechRecognitionDataLoader:(SPTVoiceLibrarySpeechRecognitionDataLoader *)arg1 didReceiveFinalResponse:(SPTVoiceLibraryFinalResponse *)arg2;
- (void)speechRecognitionDataLoader:(SPTVoiceLibrarySpeechRecognitionDataLoader *)arg1 didUpdateIntermediateResponse:(SPTVoiceLibraryIntermediateResponse *)arg2;
- (void)speechRecognitionDataLoader:(SPTVoiceLibrarySpeechRecognitionDataLoader *)arg1 didFailWithError:(NSError *)arg2;
- (NSString *)provideUtteranceIdentifier;
@end

