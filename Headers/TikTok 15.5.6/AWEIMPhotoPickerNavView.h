//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface AWEIMPhotoPickerNavView : UIView
{
    _Bool _collectionOn;
    CDUnknownBlockType _backBlock;
    UIImageView *_arrowImageView;
    CDUnknownBlockType _switchImageCollectionBlock;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIView *_touchView;
}

@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) CDUnknownBlockType switchImageCollectionBlock; // @synthesize switchImageCollectionBlock=_switchImageCollectionBlock;
@property(nonatomic) _Bool collectionOn; // @synthesize collectionOn=_collectionOn;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (void)switchButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)setNavTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

