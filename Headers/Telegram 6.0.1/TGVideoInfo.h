//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/NSCoding-Protocol.h>

@interface TGVideoInfo : NSObject <NSCoding>
{
    struct vector<TGVideoQualityRecord, std::__1::allocator<TGVideoQualityRecord>> _qualitySet;
}

+ (id)deserialize:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)serialize:(id)arg1;
- (id)urlWithQuality:(int)arg1 actualQuality:(int *)arg2 actualSize:(int *)arg3;
- (void)addVideoWithQuality:(int)arg1 url:(id)arg2 size:(int)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

