//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

@class GDKAvatarView, GDKMultiSelectViewOverlay, UIImageView, UILabel, UIStackView, UIView;

@interface GDKRoleSelectorCV : GOOBaseContentView
{
    GDKAvatarView *_avatarView;
    GDKMultiSelectViewOverlay *_selectionOverlay;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIStackView *_labelStackView;
    UIImageView *_imageView;
    UIView *_topDivider;
    UIView *_bottomDivider;
}

+ (id)defaultLabelWithFont:(id)arg1;
+ (id)detailTextLabel;
+ (id)textLabel;
+ (id)labelStackView;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(readonly, nonatomic) UIView *bottomDivider; // @synthesize bottomDivider=_bottomDivider;
@property(readonly, nonatomic) UIView *topDivider; // @synthesize topDivider=_topDivider;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) GDKMultiSelectViewOverlay *selectionOverlay; // @synthesize selectionOverlay=_selectionOverlay;
@property(retain, nonatomic) GDKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (struct CGPoint)selectionCenter;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)updateChangingConstraints;
- (void)makeInitialConstraints;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

