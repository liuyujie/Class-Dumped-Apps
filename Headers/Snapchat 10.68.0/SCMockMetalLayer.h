//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol MTLDevice;

@interface SCMockMetalLayer : CALayer
{
    _Bool _framebufferOnly;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    struct CGSize _drawableSize;
}

@property struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property _Bool framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)sc_secretFeature;
- (id)nextDrawable;

@end
