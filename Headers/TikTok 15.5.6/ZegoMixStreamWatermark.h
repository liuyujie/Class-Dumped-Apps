//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ZegoMixStreamWatermark : NSObject
{
    int _left;
    int _top;
    int _right;
    int _bottom;
    NSString *_image;
}

@property int bottom; // @synthesize bottom=_bottom;
@property int right; // @synthesize right=_right;
@property int top; // @synthesize top=_top;
@property int left; // @synthesize left=_left;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)init;

@end

