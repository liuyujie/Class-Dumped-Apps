//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DBBezierCurve : NSObject
{
    NSArray *_controlPoints;
}

@property(copy, nonatomic) NSArray *controlPoints; // @synthesize controlPoints=_controlPoints;
- (void).cxx_destruct;
- (id)description;
- (id)path;
- (id)dictForObject;
- (id)initWithControlPoint0:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3 controlPoint3:(struct CGPoint)arg4;
- (id)initWithControlPoint0:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (id)initWithControlPoint0:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithControlPoints:(id)arg1;

@end

