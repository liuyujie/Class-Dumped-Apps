//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CAShapeLayer, UIColor;

@protocol BorderedViewProtocol <NSObject>
@property(retain, nonatomic) UIColor *borderColor;
@property(nonatomic) double borderWidth;
@property(nonatomic) double cornerRadius;
@property(nonatomic) struct CGRect previousBounds;
@property(retain, nonatomic) CAShapeLayer *border;
@end

