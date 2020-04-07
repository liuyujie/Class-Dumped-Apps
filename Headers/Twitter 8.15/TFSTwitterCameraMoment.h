//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/NSCopying-Protocol.h>
#import <TFSTwitterCore/TFSEncodable-Protocol.h>

@class NSDate, TFSTwitterNewsCameraColorPalette;

@interface TFSTwitterCameraMoment : NSObject <NSCopying, NSCoding, TFSEncodable>
{
    NSDate *_originalPostTime;
    TFSTwitterNewsCameraColorPalette *_colorPalette;
}

+ (id)encodableName;
@property(readonly, copy, nonatomic) TFSTwitterNewsCameraColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(readonly, nonatomic) NSDate *originalPostTime; // @synthesize originalPostTime=_originalPostTime;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithEncoder:(id)arg1;
- (id)initWithDecoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithOriginalPostTime:(id)arg1 colorPalette:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 fromGraphQL:(_Bool)arg2;

@end
