//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

@class HTSGLFramebuffer, UIImage;

@interface IESImageWaterMarkFilter : HTSGLFilter
{
    HTSGLFramebuffer *secondInputFramebuffer;
    UIImage *_waterMarkImage;
}

@property(retain, nonatomic) UIImage *waterMarkImage; // @synthesize waterMarkImage=_waterMarkImage;
- (void).cxx_destruct;
- (_Bool)renderUIImage:(id)arg1 toFramebuffer:(id)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)generateWatermarkFramebuffer;
- (id)initWithwaterMarkImage:(id)arg1;
- (id)init;

@end
