//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_IVRenderLayer.h"

@protocol GMSRocketIVRenderLayerDelegate;

@interface GMSRocketIVRenderLayer : GMSx_IVRenderLayer
{
    // Error parsing type: ^{RenderOptions=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}fBffffffB}, name: _renderOptions
    id <GMSRocketIVRenderLayerDelegate> _renderLayerDelegate;
}

@property(nonatomic) __weak id <GMSRocketIVRenderLayerDelegate> renderLayerDelegate; // @synthesize renderLayerDelegate=_renderLayerDelegate;
- (void).cxx_destruct;
- (void)display;
-     // Error parsing type: @32@0:8^{Renderer=^^?}16^{RenderOptions=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}fBffffffB}24, name: initWithRenderer:renderOptions:

@end

