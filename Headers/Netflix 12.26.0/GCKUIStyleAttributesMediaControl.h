//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/GCKUIStyleAttributes.h>

@class GCKUIStyleAttributesExpandedController, GCKUIStyleAttributesMiniController, GCKUIStyleAttributesTrackSelector;

@interface GCKUIStyleAttributesMediaControl : GCKUIStyleAttributes
{
    GCKUIStyleAttributesExpandedController *_expandedController;
    GCKUIStyleAttributesMiniController *_miniController;
    GCKUIStyleAttributesTrackSelector *_trackSelector;
}

@property(readonly, nonatomic) GCKUIStyleAttributesTrackSelector *trackSelector; // @synthesize trackSelector=_trackSelector;
@property(readonly, nonatomic) GCKUIStyleAttributesMiniController *miniController; // @synthesize miniController=_miniController;
@property(readonly, nonatomic) GCKUIStyleAttributesExpandedController *expandedController; // @synthesize expandedController=_expandedController;
- (void).cxx_destruct;

@end

