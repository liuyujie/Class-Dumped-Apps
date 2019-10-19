//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "HTHorizontalSelectionListCell-Protocol.h"

@class M13BadgeView, NSMutableDictionary, NSString, UILabel;

@interface HTHorizontalSelectionListLabelCell : UICollectionViewCell <HTHorizontalSelectionListCell>
{
    unsigned long long _state;
    NSString *_badgeValue;
    NSString *_title;
    UILabel *_titleLabel;
    M13BadgeView *_badgeView;
    NSMutableDictionary *_titleColorsByState;
    NSMutableDictionary *_titleFontsByState;
}

+ (struct CGSize)sizeForTitle:(id)arg1 withFont:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *titleFontsByState; // @synthesize titleFontsByState=_titleFontsByState;
@property(retain, nonatomic) NSMutableDictionary *titleColorsByState; // @synthesize titleColorsByState=_titleColorsByState;
@property(retain, nonatomic) M13BadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)updateTitleFont;
- (void)updateTitleColor;
- (void)setTitleFont:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
