//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface IESMMCanvasSource : NSObject <NSCopying>
{
    _Bool _isAutoFitScale;
    _Bool _flipX;
    _Bool _flipY;
    double _scale;
    double _rotateAngle;
    unsigned long long _rotateMode;
    double _alpha;
    struct CGPoint _centerPos;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool flipY; // @synthesize flipY=_flipY;
@property(nonatomic) _Bool flipX; // @synthesize flipX=_flipX;
@property(nonatomic) unsigned long long rotateMode; // @synthesize rotateMode=_rotateMode;
@property(nonatomic) _Bool isAutoFitScale; // @synthesize isAutoFitScale=_isAutoFitScale;
@property(nonatomic) double rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGPoint centerPos; // @synthesize centerPos=_centerPos;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

