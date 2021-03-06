//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBImageStorageToken : NSObject
{
    NSString *_signature;
    long long _imageOrientation;
    double _scale;
    struct CGSize _imageSize;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(readonly, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (id)initWithSignature:(id)arg1 imageOrientation:(long long)arg2 scale:(double)arg3 imageSize:(struct CGSize)arg4;

@end

