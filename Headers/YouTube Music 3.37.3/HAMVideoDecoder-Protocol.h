//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HAMFormatDescription, HAMSampleBuffer;
@protocol HAMVideoDecoderDelegate;

@protocol HAMVideoDecoder <NSObject>
@property(readonly, nonatomic) int maxSampleCount;
@property(readonly, nonatomic) int samplesPendingDecode;
@property(nonatomic) __weak id <HAMVideoDecoderDelegate> delegate;
- (void)decodeSampleBuffer:(HAMSampleBuffer *)arg1 completionHandler:(void (^)(HAMPixelBuffer *))arg2;
- (_Bool)canAcceptFormatWithDescription:(HAMFormatDescription *)arg1;
- (void)terminate;
- (void)discardPendingFrames;
- (void)prepare;
@end
