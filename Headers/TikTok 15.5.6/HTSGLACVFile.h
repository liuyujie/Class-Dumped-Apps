//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HTSGLACVFile : NSObject
{
    short _version;
    short _totalCurves;
    NSArray *_rgbCompositeCurvePoints;
    NSArray *_redCurvePoints;
    NSArray *_greenCurvePoints;
    NSArray *_blueCurvePoints;
    NSArray *rgbCompositeCurvePoints;
    NSArray *redCurvePoints;
    NSArray *greenCurvePoints;
    NSArray *blueCurvePoints;
}

@property(retain, nonatomic) NSArray *blueCurvePoints; // @synthesize blueCurvePoints;
@property(retain, nonatomic) NSArray *greenCurvePoints; // @synthesize greenCurvePoints;
@property(retain, nonatomic) NSArray *redCurvePoints; // @synthesize redCurvePoints;
@property(retain, nonatomic) NSArray *rgbCompositeCurvePoints; // @synthesize rgbCompositeCurvePoints;
- (void).cxx_destruct;
- (id)initWithACVFileData:(id)arg1;

@end

