//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface FDLayoutSpacer : UIView
{
    _Bool _horizontal;
    NSMutableArray *_systemConstraints;
}

+ (Class)layerClass;
@property(nonatomic, getter=isHorizontal) _Bool horizontal; // @synthesize horizontal=_horizontal;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *owningView;
@property(readonly, nonatomic) NSMutableArray *systemConstraints; // @synthesize systemConstraints=_systemConstraints;

@end
