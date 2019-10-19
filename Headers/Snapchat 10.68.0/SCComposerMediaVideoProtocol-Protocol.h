//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@protocol SCComposerMediaVideoProtocol <NSObject, SCComposerMarshallable>
- (void)dispose;
- (void)getMp4DataWithCallback:(void (^)(NSData *, NSString *))arg1;
- (void)extractSegmentWithStartTimeMs:(double)arg1 durationMs:(double)arg2 callback:(void (^)(id <SCComposerMediaVideoProtocol>, NSString *))arg3;
- (double)getDurationMs;
- (double)getHeight;
- (double)getWidth;
@end
