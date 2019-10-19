//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCVideoEncoderOutputSettings <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) struct CGAffineTransform videoInputTransform;
@property(readonly, nonatomic) _Bool isStreamingEnabled;
@property(readonly, nonatomic) unsigned long long keyFrameInterval;
@property(readonly, nonatomic) unsigned long long maxFrameRate;
@property(readonly, copy, nonatomic) NSDate *videoCreateTimeUtc;
@property(readonly, nonatomic) long long videoOrientation;
@property(readonly, copy, nonatomic) NSString *videoCodecType;
@property(readonly, nonatomic) double audioBitrate;
@property(readonly, nonatomic) double videoBitrate;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
@end
