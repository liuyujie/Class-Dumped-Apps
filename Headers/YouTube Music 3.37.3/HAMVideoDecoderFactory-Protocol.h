//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HAMFormatDescription, NSArray, NSDictionary, NSObject;
@protocol HAMVideoDecoder, HAMVideoDecoderDelegate, OS_dispatch_queue;

@protocol HAMVideoDecoderFactory <NSObject>
- (id <HAMVideoDecoder>)videoDecoderWithDelegate:(id <HAMVideoDecoderDelegate>)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2 formatDescription:(HAMFormatDescription *)arg3 pixelBufferAttributes:(NSDictionary *)arg4 supportedPixelFormats:(NSArray *)arg5 error:(id *)arg6;
@end
