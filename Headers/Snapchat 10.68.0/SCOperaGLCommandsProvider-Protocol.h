//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVAudioMix, NSArray, NSData, NSString;

@protocol SCOperaGLCommandsProvider
- (NSData *)glReverseAudioDataForKey:(NSString *)arg1;
- (AVAudioMix *)glAudioProcessorMixForKey:(NSString *)arg1;
- (NSArray *)glCommandsForKey:(NSString *)arg1;
@end
