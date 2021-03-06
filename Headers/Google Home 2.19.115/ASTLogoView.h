//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASTLogoDot;

@interface ASTLogoView : UIView
{
    ASTLogoDot *_red;
    ASTLogoDot *_blue;
    ASTLogoDot *_green;
    ASTLogoDot *_yellow;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) ASTLogoDot *yellow; // @synthesize yellow=_yellow;
@property(retain, nonatomic) ASTLogoDot *green; // @synthesize green=_green;
@property(retain, nonatomic) ASTLogoDot *blue; // @synthesize blue=_blue;
@property(retain, nonatomic) ASTLogoDot *red; // @synthesize red=_red;
- (void).cxx_destruct;
- (void)startTTSAnimation;
- (void)stopAnimation;
- (id)driftingAnimation;
- (void)startThinkingAnimation;
- (void)morphToMolecule;
- (id)initWithScale:(double)arg1;

@end

