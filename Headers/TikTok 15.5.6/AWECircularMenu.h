//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton;

@interface AWECircularMenu : UIView
{
    _Bool _isOpened;
    _Bool _isAnimating;
    _Bool _enableRoundCorner;
    double _itemSize;
    double _radius;
    double _spanStart;
    double _spanEnd;
    double _springDamping;
    double _springVeloctiy;
    double _duration;
    double _delay;
    CDUnknownBlockType _onClickedBlock;
    NSMutableArray *_items;
    UIButton *_mainMenuButton;
    struct CGPoint _centerPoint;
}

+ (id)menuWithMainCoverImage:(id)arg1 bgColor:(id)arg2 enableRoundCorner:(_Bool)arg3;
@property(retain, nonatomic) UIButton *mainMenuButton; // @synthesize mainMenuButton=_mainMenuButton;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(nonatomic) _Bool enableRoundCorner; // @synthesize enableRoundCorner=_enableRoundCorner;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(copy, nonatomic) CDUnknownBlockType onClickedBlock; // @synthesize onClickedBlock=_onClickedBlock;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double springVeloctiy; // @synthesize springVeloctiy=_springVeloctiy;
@property(nonatomic) double springDamping; // @synthesize springDamping=_springDamping;
@property(nonatomic) double spanEnd; // @synthesize spanEnd=_spanEnd;
@property(nonatomic) double spanStart; // @synthesize spanStart=_spanStart;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (double)calculateAlphaForIndex:(long long)arg1 total:(long long)arg2 start:(double)arg3 end:(double)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleButtonClick:(id)arg1;
- (void)reset;
- (void)openMenu;
- (void)toggleMenuStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isConfigured;
- (void)configureWithItemsInfo:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithMainCoverImage:(id)arg1 bgColor:(id)arg2 enableRoundCorner:(_Bool)arg3;
- (id)init;

@end

