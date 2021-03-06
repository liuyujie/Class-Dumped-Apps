//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAGradientLayer.h>

@class UIBezierPath;

@interface JBGradientLineLayer : CAGradientLayer
{
    _Bool _filled;
    unsigned long long _tag;
    UIBezierPath *_currentPath;
}

@property(retain, nonatomic) UIBezierPath *currentPath; // @synthesize currentPath=_currentPath;
@property(readonly, nonatomic) _Bool filled; // @synthesize filled=_filled;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
@property(readonly, nonatomic) double alpha;
- (id)initWithGradientLayer:(id)arg1 tag:(unsigned long long)arg2 filled:(_Bool)arg3 currentPath:(id)arg4;

@end

